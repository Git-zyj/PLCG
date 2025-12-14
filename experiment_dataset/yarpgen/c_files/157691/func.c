/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157691
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    var_17 = min(((~(((/* implicit */int) (unsigned short)29400)))), (((/* implicit */int) (unsigned short)55099)));
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (!((_Bool)0))))));
                }
                for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_14 [(signed char)11] [i_1])) ? (((/* implicit */int) arr_9 [i_1] [i_3] [i_4])) : (((/* implicit */int) max((arr_15 [i_0 - 1]), (arr_0 [(unsigned char)6] [i_4])))))), ((-(((/* implicit */int) arr_1 [i_0]))))));
                                arr_17 [i_0] [(unsigned short)7] [i_1 - 2] [i_4] [i_4] = ((/* implicit */unsigned int) arr_12 [i_0 - 1]);
                                var_20 += ((/* implicit */long long int) min((((/* implicit */int) arr_12 [i_5])), (((((/* implicit */int) (unsigned short)10437)) << (((/* implicit */int) (_Bool)1))))));
                                var_21 ^= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_14))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) max((((long long int) arr_9 [(unsigned short)5] [i_1] [i_3])), (((/* implicit */long long int) min(((unsigned short)10437), (((/* implicit */unsigned short) arr_9 [i_0] [i_1 - 3] [(unsigned short)5])))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55089)) ? (arr_11 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0 + 1]))))))));
                    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */short) var_5)), (var_12))))));
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */short) arr_1 [(_Bool)1])), (var_12)))), (((((/* implicit */_Bool) arr_18 [i_0 - 1] [(_Bool)1] [i_0 + 1])) ? (((/* implicit */int) (unsigned short)55099)) : (((/* implicit */int) arr_1 [i_0]))))))) ? (arr_4 [(signed char)1] [i_0 + 1]) : (((max((((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [(_Bool)1])), (arr_4 [i_0 + 1] [i_6]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                }
                for (short i_7 = 1; i_7 < 11; i_7 += 3) 
                {
                    var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_0 + 1])) - (((/* implicit */int) var_16))));
                    var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_21 [i_0 - 1] [i_0] [i_0 - 1] [i_0])), ((unsigned short)10437))))));
                }
                /* LoopNest 3 */
                for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 4) 
                {
                    for (int i_9 = 3; i_9 < 11; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                        {
                            {
                                arr_31 [i_9] = (~(arr_11 [i_0 - 1] [i_0 - 1] [i_8] [i_8 + 2]));
                                var_28 = (-(max((min((arr_4 [i_9] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)10436)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_9]))))))));
                                var_29 ^= ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((var_16) ? (((((/* implicit */int) var_12)) + (((/* implicit */int) var_13)))) : (((/* implicit */int) var_14))))) + (((unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (_Bool)0)))))));
    var_31 = ((/* implicit */unsigned char) max((((/* implicit */int) var_1)), (((((/* implicit */int) var_14)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
}
