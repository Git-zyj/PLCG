/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174210
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
    var_11 = ((/* implicit */long long int) var_0);
    var_12 = ((/* implicit */long long int) max((((((/* implicit */int) ((var_6) == (((/* implicit */int) var_2))))) * (((/* implicit */int) var_7)))), (((/* implicit */int) max((var_7), ((_Bool)1))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) arr_0 [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
                {
                    arr_15 [(short)7] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) 3989097216U);
                    var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_3] [i_2 + 1])) ? (arr_7 [i_3] [i_3] [i_2 + 1]) : (((/* implicit */unsigned long long int) var_9))));
                    arr_16 [i_0] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1])) << (((((/* implicit */int) arr_2 [i_2 + 1] [i_1])) - (28392)))));
                    var_14 &= ((/* implicit */int) arr_7 [i_3] [i_2 + 1] [i_2 + 1]);
                    var_15 = ((/* implicit */int) arr_9 [i_3] [2]);
                }
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned long long int) var_6);
                    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 450306738268533757ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_2] [11ULL] [i_1] [i_4]))) : (2717196049496242012LL))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
                    {
                        var_18 = (+(arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_1]));
                        var_19 = ((/* implicit */unsigned int) var_4);
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)20192)) ^ (((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
                    {
                        var_21 = (-(((((/* implicit */_Bool) var_6)) ? (-2717196049496242030LL) : (((/* implicit */long long int) 2224176365U)))));
                        var_22 = arr_0 [i_0];
                        var_23 = ((/* implicit */short) (_Bool)1);
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) -926524582519095300LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))) : (4193557833U))))));
                    }
                }
                var_25 = ((/* implicit */short) -5037671075410944282LL);
            }
            var_26 = ((/* implicit */_Bool) arr_6 [i_0] [i_0]);
        }
        arr_28 [i_0] = ((/* implicit */_Bool) var_0);
    }
    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) 
    {
        arr_33 [i_7] = ((/* implicit */short) 1824865153);
        arr_34 [i_7] = ((/* implicit */int) arr_30 [i_7]);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 13; i_8 += 4) 
    {
        var_27 ^= ((((((/* implicit */_Bool) 1555241557)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56))) : (arr_7 [i_8] [i_8] [(_Bool)1]))) >> (((/* implicit */int) (_Bool)1)));
        var_28 -= ((/* implicit */signed char) var_8);
        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_8])))))));
        var_30 = ((/* implicit */short) var_5);
    }
}
