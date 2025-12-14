/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152745
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
    var_13 = ((/* implicit */int) var_9);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) max((((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (short)13568)), (var_3))), (((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)(-127 - 1))), (arr_0 [i_0]))))))), (((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-1), ((signed char)-104))))))))))));
        var_15 = ((/* implicit */int) ((unsigned int) arr_0 [i_0]));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 10; i_1 += 2) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)173))) : (arr_2 [i_1 - 1] [i_1])));
        arr_5 [i_1] = ((/* implicit */long long int) var_5);
        arr_6 [i_1] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (arr_2 [i_1] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
        arr_7 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
        arr_8 [i_1] = ((/* implicit */long long int) ((unsigned char) (-(var_7))));
    }
    for (long long int i_2 = 3; i_2 < 17; i_2 += 3) 
    {
        arr_11 [(signed char)7] [i_2] = arr_9 [i_2 + 3];
        var_16 ^= var_4;
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_17 += (signed char)-108;
                                var_18 = ((/* implicit */long long int) var_1);
                            }
                        } 
                    } 
                    arr_21 [i_4] [i_2] = ((/* implicit */signed char) arr_12 [i_2 - 1] [i_2 - 1] [i_4]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_7 = 2; i_7 < 20; i_7 += 1) 
        {
            for (unsigned char i_8 = 1; i_8 < 20; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 3; i_10 < 20; i_10 += 4) 
                        {
                            {
                                arr_34 [i_7] = ((/* implicit */short) max((min((((/* implicit */long long int) min((((/* implicit */signed char) arr_13 [(unsigned char)8] [i_8 - 1] [i_10])), (var_10)))), (var_7))), (((/* implicit */long long int) max((((short) var_4)), (((/* implicit */short) ((signed char) var_11))))))));
                                arr_35 [i_2] [i_7] [i_8] [i_9] [i_7] [i_10] = ((/* implicit */short) min((((long long int) (unsigned char)209)), (arr_12 [(_Bool)1] [i_7] [i_8])));
                                var_19 = ((/* implicit */unsigned char) max((max((arr_32 [i_2] [i_7] [i_7 - 2] [i_10 - 2]), (((/* implicit */long long int) arr_18 [i_10 - 2] [i_8] [i_8 + 1] [i_7 + 1])))), (((((/* implicit */_Bool) ((long long int) 9223372036854775807LL))) ? (((((/* implicit */_Bool) arr_32 [i_2] [i_8] [i_9] [i_10])) ? (((/* implicit */long long int) arr_28 [i_7] [i_8] [i_9] [(unsigned char)3])) : (var_2))) : (((long long int) var_0))))));
                                var_20 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-103))));
                                var_21 = ((/* implicit */signed char) ((short) (signed char)-103));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_11 = 1; i_11 < 20; i_11 += 2) 
                    {
                        var_22 = ((/* implicit */long long int) ((9187343239835811840ULL) <= (13519125862370127871ULL)));
                        arr_38 [i_7] [i_8] [i_8] [i_7 - 2] [i_7] = ((/* implicit */short) ((((_Bool) ((long long int) var_2))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-21)), (201326592LL)))) ? (((/* implicit */unsigned long long int) -890446503695740140LL)) : (((4927618211339423766ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)220))))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 890446503695740140LL)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)141))))), (((/* implicit */long long int) max((((/* implicit */signed char) var_11)), (arr_16 [i_7] [i_7] [i_8 - 1] [i_11 - 1])))))))));
                        arr_39 [i_2] [i_7] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) arr_30 [i_2] [i_11])) << (((((/* implicit */int) var_10)) + (118))))))) ? (((((/* implicit */_Bool) (short)20375)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) (signed char)-97)))) : (((/* implicit */int) (((-(arr_36 [i_2 - 1] [i_7] [i_8] [i_11]))) < (((/* implicit */long long int) ((/* implicit */int) min((arr_24 [i_8 - 1]), (((/* implicit */unsigned char) var_10)))))))))));
                        /* LoopSeq 3 */
                        for (signed char i_12 = 0; i_12 < 21; i_12 += 4) 
                        {
                            arr_42 [i_2] [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1] = ((/* implicit */signed char) arr_19 [i_12] [i_11] [i_7] [i_7] [i_2]);
                            arr_43 [i_7] [i_11] [i_8 - 1] [i_7] [i_7] = (-(arr_36 [i_2 + 4] [i_2] [i_11 + 1] [i_11]));
                            var_23 = ((/* implicit */long long int) min(((unsigned char)47), (((/* implicit */unsigned char) arr_13 [i_8 - 1] [i_8 - 1] [i_12]))));
                        }
                        for (long long int i_13 = 0; i_13 < 21; i_13 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 560934087)))) ? (max(((-(-21142136))), (((/* implicit */int) max((((/* implicit */signed char) arr_30 [i_8] [i_13])), (var_10)))))) : (((/* implicit */int) ((unsigned char) var_0)))));
                            arr_46 [i_7] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3458764513820540928LL)) ? (((/* implicit */long long int) 3994892046U)) : (890446503695740121LL)));
                            arr_47 [i_7] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_45 [i_2] [i_7] [i_7] [i_11] [(unsigned char)10])), (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_11)), (var_4))))) - (min((var_3), (((/* implicit */long long int) arr_22 [i_13] [i_13] [i_13]))))))));
                            arr_48 [i_2] [i_7] [i_7] [i_11] [i_13] = ((/* implicit */unsigned long long int) ((var_12) < (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_13] [i_7 - 2] [i_7 - 2] [i_7 - 2])))));
                            arr_49 [i_7] [15U] [(short)18] [i_7] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(signed char)2] [i_8] [i_8] [i_11])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_2] [i_2]))))) : ((~(560934064)))))) && (((/* implicit */_Bool) ((long long int) max((arr_40 [i_7]), (((/* implicit */unsigned char) arr_26 [i_7]))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_14 = 0; i_14 < 21; i_14 += 2) 
                        {
                            var_25 = ((/* implicit */short) (-(((((/* implicit */int) arr_25 [i_7] [i_11] [i_8])) / (((/* implicit */int) (_Bool)1))))));
                            arr_54 [i_2] [i_2] [i_8] [i_7] [i_14] = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)96)))));
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_22 [i_2] [i_7] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_0)))))));
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) (unsigned char)247))))) : ((+(-5391097703415071346LL)))));
                        }
                    }
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned char) (+((-(min((((/* implicit */long long int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2])), (var_0)))))));
    }
}
