/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131730
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
    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) max((((((unsigned long long int) var_0)) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (var_6))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 10; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 - 2] [9U])) ? (((/* implicit */int) arr_5 [i_1 - 1] [(unsigned short)10] [i_1 + 1])) : (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
                        var_12 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((unsigned long long int) arr_8 [i_0] [(_Bool)1] [i_2] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2 + 1] [i_3])))));
                        arr_11 [i_1 + 1] [(short)6] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_3 + 1] [1LL])) - (((/* implicit */int) arr_3 [i_3 + 1] [i_3 + 1]))));
                        /* LoopSeq 4 */
                        for (signed char i_4 = 3; i_4 < 13; i_4 += 2) 
                        {
                            arr_15 [i_0] [(signed char)5] [i_0] [i_3 + 3] [2U] [(signed char)5] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-32))))) - (((unsigned long long int) arr_1 [i_0]))));
                            arr_16 [i_0] [i_1 + 1] [i_0] [i_0] [i_2] [i_0] [(signed char)12] = ((/* implicit */unsigned int) (unsigned char)142);
                            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [(signed char)0] [(signed char)0] [i_3] [(signed char)0]))))) || (((/* implicit */_Bool) arr_0 [i_0]))));
                        }
                        for (unsigned int i_5 = 3; i_5 < 13; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_3 + 1] [i_2])) ? (((int) (_Bool)1)) : (var_0)));
                            arr_19 [i_0] [(_Bool)1] [i_2 - 1] [i_3] [i_5] = ((/* implicit */signed char) (!(arr_9 [i_2 - 1] [6U] [i_3 + 1] [i_3 + 1])));
                        }
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
                        {
                            var_15 = ((/* implicit */short) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
                            var_16 -= ((/* implicit */_Bool) ((((arr_3 [i_2] [i_1]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_12 [i_2 + 1] [i_2])))) | (((/* implicit */int) arr_1 [i_6]))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
                        {
                            var_17 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-22))));
                            arr_25 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((var_3) != (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [13U] [1] [i_1] [i_1 + 1] [i_2 - 1] [i_2 - 1])))));
                        }
                    }
                } 
            } 
        } 
    }
}
