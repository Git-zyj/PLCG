/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118648
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((((unsigned int) 25606482)), (((/* implicit */unsigned int) (short)32767))))) ? (8261763519895830415LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-22955)))));
    var_17 = ((/* implicit */unsigned char) var_5);
    var_18 = ((/* implicit */short) var_10);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (295085371U)));
            var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [(short)0]) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [3LL] [i_0])))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) 0);
            arr_9 [i_2] = ((/* implicit */unsigned short) arr_4 [i_0]);
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */int) (unsigned short)7541)) ^ (((/* implicit */int) (unsigned char)223))))));
                            arr_19 [i_3] [(unsigned short)12] [i_4] [5] [i_6] = ((/* implicit */short) arr_15 [i_0] [i_0] [i_3] [i_5]);
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1930217936)) ? (((/* implicit */int) arr_8 [i_0] [i_3] [i_3])) : (633092714)))) ? (((((/* implicit */_Bool) (unsigned short)16204)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46450))) : (7298108271393546436LL))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                        }
                        for (int i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-920))));
                            var_25 = ((/* implicit */unsigned char) (short)30303);
                        }
                        var_26 += ((/* implicit */unsigned int) ((arr_3 [i_0] [i_0] [i_0]) / (arr_10 [i_4])));
                        var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [4LL] [i_4]))));
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (unsigned short)54136))));
                    }
                } 
            } 
            var_29 ^= ((/* implicit */unsigned char) arr_23 [i_3] [7] [i_0] [i_0] [i_0]);
        }
        var_30 = ((/* implicit */int) (~((+(arr_17 [i_0] [i_0])))));
    }
}
