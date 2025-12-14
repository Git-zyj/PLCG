/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150508
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
    var_14 = ((/* implicit */long long int) var_12);
    var_15 = ((/* implicit */unsigned short) (~(var_11)));
    var_16 *= ((/* implicit */_Bool) var_7);
    var_17 = ((/* implicit */int) (~(var_13)));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_18 = ((unsigned int) var_0);
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 3; i_2 < 13; i_2 += 3) 
        {
            var_19 = ((/* implicit */signed char) arr_4 [i_2 - 3]);
            arr_7 [2LL] [(signed char)7] [(signed char)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_7)))) ? ((-(var_13))) : (arr_5 [i_2 - 1] [i_2 - 3] [i_1])));
        }
        arr_8 [i_1] = ((_Bool) min((var_10), (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */long long int) var_9)))))));
    }
    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) -15)), (-3963861706848392896LL)));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                {
                    arr_20 [i_4] [i_5] = ((/* implicit */_Bool) var_3);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 13; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_25 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) ((long long int) max((((/* implicit */long long int) ((_Bool) arr_12 [i_6 - 1] [i_4]))), (((var_7) / (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                                var_20 = (~((~((-(arr_15 [i_5] [i_4] [i_3]))))));
                                var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_12)), (arr_22 [(short)0] [i_4] [(short)0] [(short)0])));
                                arr_26 [i_3] [i_3] [i_5] [i_5] [i_5] [10U] |= ((/* implicit */unsigned long long int) arr_23 [i_7] [i_7] [i_6 - 1] [i_6 - 1] [i_6]);
                            }
                        } 
                    } 
                    arr_27 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_9 [i_3])))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((unsigned short) arr_19 [i_3] [i_3] [i_3])))));
                }
            } 
        } 
        var_22 ^= ((/* implicit */long long int) ((unsigned short) (-(var_5))));
        arr_28 [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_17 [i_3] [i_3] [i_3] [(unsigned short)13]), (((/* implicit */long long int) arr_1 [(short)3])))))));
        arr_29 [i_3] = ((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [(signed char)13]);
    }
    for (long long int i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) max(((-(((arr_9 [i_8]) % (((/* implicit */unsigned long long int) var_7)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_2))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))))));
        arr_32 [i_8] = ((/* implicit */long long int) ((((/* implicit */int) min((arr_16 [i_8] [i_8] [i_8]), (arr_16 [(unsigned short)6] [(short)7] [i_8])))) | (((/* implicit */int) ((_Bool) arr_1 [i_8])))));
        arr_33 [i_8] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [(_Bool)1] [i_8] [i_8] [i_8] [i_8])))))) == (min((((/* implicit */unsigned int) (signed char)58)), (2187196504U)))));
    }
}
