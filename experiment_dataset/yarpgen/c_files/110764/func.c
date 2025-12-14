/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110764
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
    var_18 = ((/* implicit */unsigned int) var_7);
    var_19 = ((/* implicit */unsigned char) var_14);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_20 = ((/* implicit */int) ((unsigned long long int) arr_2 [i_0]));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) -4197188653317380216LL))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    for (short i_4 = 3; i_4 < 11; i_4 += 2) 
                    {
                        {
                            arr_12 [11] [(short)0] [2ULL] = ((/* implicit */signed char) var_14);
                            var_22 = ((/* implicit */long long int) 2702696318484441850ULL);
                            var_23 |= (((((-(((/* implicit */int) arr_5 [i_1] [i_2] [i_4 - 1])))) + (2147483647))) >> (((/* implicit */int) ((var_17) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                            var_24 = var_3;
                            var_25 = ((/* implicit */signed char) var_5);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_5 = 3; i_5 < 11; i_5 += 1) 
            {
                var_26 |= ((/* implicit */int) ((signed char) var_0));
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 2; i_6 < 8; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        var_27 = ((/* implicit */signed char) (+(-196484623)));
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_12))) != (((int) var_9))));
                        arr_19 [i_1] [i_1 - 1] [i_1] [i_1] [i_1 + 1] [1ULL] = ((/* implicit */unsigned short) var_13);
                    }
                    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) 1152921504606846975LL))));
                    arr_20 [i_0] [i_0] [i_1 - 2] [i_5] [6U] [i_6] = (-(var_8));
                }
            }
        }
        for (unsigned short i_8 = 2; i_8 < 9; i_8 += 2) /* same iter space */
        {
            var_30 = ((/* implicit */long long int) ((var_8) ^ (((/* implicit */unsigned long long int) 567798211378421859LL))));
            arr_25 [i_0] [i_0] [i_8] &= ((/* implicit */unsigned long long int) (short)7224);
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            arr_29 [i_0] [i_9] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_28 [i_0] [i_0]))));
            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (unsigned short)14849))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((int) -1152921504606846976LL)))));
            var_33 -= ((/* implicit */int) (unsigned short)24796);
        }
    }
    var_34 ^= ((/* implicit */long long int) (short)-7224);
}
