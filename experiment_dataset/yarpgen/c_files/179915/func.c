/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179915
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
    var_14 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32256)) ? (((/* implicit */int) ((min((var_3), (((/* implicit */int) var_4)))) != (((var_8) & (((/* implicit */int) (unsigned char)124))))))) : ((~(((/* implicit */int) var_6))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) (unsigned char)203);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_3] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1 + 1] [i_1 - 1] [i_1 - 1] [(signed char)18])) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) -1205834056)), (4294934528U))))))) >= (max((((/* implicit */int) max((((/* implicit */signed char) arr_6 [i_3] [i_0] [17] [i_0])), (var_4)))), ((~(((/* implicit */int) arr_2 [i_1]))))))));
                        var_16 = min((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_3] [i_2] [(_Bool)1] [i_0])) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))), (var_8));
                    }
                } 
            } 
            var_17 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)21)), (arr_5 [i_0] [i_1 + 1] [i_1] [11])));
        }
    }
    for (long long int i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_5 = 1; i_5 < 18; i_5 += 3) 
        {
            for (unsigned char i_6 = 2; i_6 < 16; i_6 += 2) 
            {
                for (int i_7 = 1; i_7 < 17; i_7 += 3) 
                {
                    {
                        var_18 -= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)115)) : (-1205834056)));
                        arr_21 [i_5] [i_5] = ((/* implicit */unsigned int) var_3);
                        arr_22 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */unsigned char) max((2147483647), (((((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_4] [i_4])) ? (arr_5 [i_4] [i_5 - 1] [i_6 + 3] [i_7]) : (-1205834043)))));
                        var_19 -= ((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) 1205834033)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 1264802091U)))))));
                    }
                } 
            } 
        } 
        arr_23 [i_4] &= ((/* implicit */long long int) (_Bool)0);
    }
    for (long long int i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
    {
        arr_28 [i_8] = ((/* implicit */unsigned char) var_13);
        var_20 = ((/* implicit */unsigned char) var_0);
    }
    var_21 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) / (((long long int) var_11))));
    var_22 &= ((/* implicit */unsigned char) var_1);
}
