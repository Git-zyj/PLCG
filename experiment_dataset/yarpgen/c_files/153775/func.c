/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153775
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
    var_16 = ((/* implicit */_Bool) ((unsigned long long int) var_11));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (signed char)-112)))) - (var_15)))) ? (((/* implicit */int) ((var_8) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((_Bool) var_1))) : (((/* implicit */int) (signed char)112))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_18 -= ((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_0]);
                    var_19 = ((/* implicit */unsigned int) max((var_19), (max((min((1233859444U), (((/* implicit */unsigned int) (signed char)124)))), (((/* implicit */unsigned int) (signed char)-125))))));
                }
                for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) ^ (((/* implicit */int) (signed char)113))));
                    var_20 = ((_Bool) max((arr_4 [i_3 - 1]), (arr_4 [i_3 + 2])));
                    var_21 += ((/* implicit */short) ((int) max((arr_9 [i_0 + 2] [i_0 + 1]), (arr_9 [i_0 - 1] [i_0 + 1]))));
                }
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    var_22 = ((/* implicit */long long int) ((((((/* implicit */int) arr_9 [i_0 + 2] [i_0 - 1])) >> (((/* implicit */int) arr_9 [i_1] [i_0 + 2])))) * (((arr_9 [i_0] [i_0 + 1]) ? (((/* implicit */int) (unsigned short)14447)) : (((/* implicit */int) arr_9 [i_4] [i_0 - 1]))))));
                    var_23 += ((/* implicit */int) arr_10 [i_4] [i_4] [i_1] [i_0 - 1]);
                }
                for (short i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    arr_17 [i_0 + 2] [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */unsigned long long int) ((signed char) ((signed char) ((unsigned long long int) (signed char)-113))));
                    var_24 = ((/* implicit */long long int) var_1);
                }
                var_25 &= ((/* implicit */unsigned int) arr_7 [i_1] [i_0 + 1] [i_0 + 1]);
            }
        } 
    } 
    var_26 *= var_7;
    /* LoopNest 3 */
    for (short i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            for (int i_8 = 1; i_8 < 23; i_8 += 2) 
            {
                {
                    arr_24 [i_6] [i_7] [i_8] = ((/* implicit */int) ((unsigned int) ((signed char) arr_19 [i_8 - 1])));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_9 = 2; i_9 < 20; i_9 += 4) 
                    {
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (~(((/* implicit */int) ((unsigned char) (unsigned char)62))))))));
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) var_1))));
                        /* LoopSeq 1 */
                        for (int i_10 = 1; i_10 < 23; i_10 += 1) 
                        {
                            var_29 *= ((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)70));
                            var_30 = ((/* implicit */int) max((var_30), ((-(var_15)))));
                            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((_Bool) arr_20 [i_9] [i_7] [i_8])))));
                        }
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        arr_33 [i_6] [i_7] [i_7] = ((/* implicit */signed char) ((((unsigned int) arr_30 [i_11] [i_6])) - (((/* implicit */unsigned int) arr_29 [i_8 - 1] [i_8 + 1] [i_7] [i_8 - 1]))));
                        var_32 = ((/* implicit */signed char) arr_25 [i_7] [i_8 - 1] [i_8]);
                        arr_34 [i_7] [i_7] = ((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) (unsigned char)185)))));
                        var_33 ^= ((/* implicit */short) ((arr_21 [i_6] [i_8 - 1] [i_8 + 1]) <= (arr_21 [i_11] [i_8 + 1] [i_8 + 1])));
                        arr_35 [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_19 [i_11]);
                    }
                }
            } 
        } 
    } 
}
