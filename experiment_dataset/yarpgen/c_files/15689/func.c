/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15689
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
    var_13 = ((/* implicit */unsigned short) ((long long int) ((unsigned short) ((unsigned short) (unsigned short)49526))));
    var_14 -= ((/* implicit */long long int) ((unsigned short) ((unsigned short) ((long long int) var_0))));
    var_15 = ((long long int) ((long long int) ((long long int) var_12)));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */unsigned short) ((long long int) ((long long int) ((long long int) var_5))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        var_16 = ((long long int) ((long long int) -8054097023308418183LL));
                        var_17 ^= ((unsigned short) ((long long int) var_11));
                        var_18 = ((long long int) ((long long int) -8054097023308418189LL));
                        arr_13 [i_0] [i_1 - 2] [i_2] [i_0] = ((unsigned short) ((long long int) 9223372036854775807LL));
                    }
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((unsigned short) ((long long int) ((long long int) var_5))))));
                        var_20 = ((/* implicit */unsigned short) ((long long int) ((unsigned short) ((long long int) arr_4 [i_1 + 1] [i_0 - 1]))));
                        var_21 |= ((long long int) ((long long int) ((unsigned short) 131941395333120LL)));
                        /* LoopSeq 4 */
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            var_22 ^= ((/* implicit */long long int) ((unsigned short) ((long long int) ((unsigned short) -8054097023308418189LL))));
                            var_23 = ((/* implicit */long long int) min((var_23), (((long long int) ((long long int) ((unsigned short) (unsigned short)8))))));
                        }
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            arr_24 [i_0] [i_0] [i_6] [i_0] [i_0 - 3] [i_0 + 1] |= ((long long int) ((long long int) ((unsigned short) arr_2 [i_1])));
                            arr_25 [i_0 - 2] [i_0] = ((/* implicit */long long int) ((unsigned short) -7623997412839507867LL));
                            arr_26 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((long long int) ((unsigned short) ((long long int) 31LL)));
                            var_24 = ((long long int) -1LL);
                            var_25 = ((/* implicit */long long int) ((unsigned short) ((unsigned short) ((long long int) -4357043356275762495LL))));
                        }
                        for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] = ((long long int) ((unsigned short) ((long long int) var_8)));
                            arr_32 [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) ((long long int) ((long long int) -6494148432904597188LL))));
                        }
                        for (long long int i_8 = 2; i_8 < 15; i_8 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((unsigned short) ((unsigned short) ((unsigned short) (unsigned short)36376))))));
                            arr_36 [i_0 - 1] [i_0 - 1] [i_2] [i_4] [i_0 - 1] [i_0] [i_4] = ((/* implicit */unsigned short) ((long long int) ((long long int) ((long long int) arr_3 [i_0]))));
                            arr_37 [i_0] = ((/* implicit */long long int) ((unsigned short) ((long long int) ((long long int) arr_2 [i_0]))));
                        }
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((unsigned short) ((unsigned short) ((long long int) arr_19 [i_0] [i_1] [i_2]))))));
                    }
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
                    {
                        arr_40 [i_1] [i_0] [i_9] = ((long long int) ((long long int) var_2));
                        var_28 = ((long long int) ((unsigned short) var_2));
                    }
                }
            } 
        } 
    } 
}
