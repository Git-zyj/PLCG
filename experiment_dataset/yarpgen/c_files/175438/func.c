/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175438
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
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (+(((unsigned int) ((unsigned int) var_3))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        arr_11 [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) ((short) -4764470799557512844LL))), ((+(((/* implicit */int) arr_5 [i_0] [i_0 - 1]))))));
                        arr_12 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((unsigned long long int) -4764470799557512852LL)), (((/* implicit */unsigned long long int) arr_7 [i_0 - 2])))))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max(((unsigned char)182), (arr_8 [(unsigned short)3] [i_1])))), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [(signed char)9] [(signed char)9] [i_2] [i_2]))))), (8894365311768705110ULL)))));
                        arr_17 [(_Bool)1] [(_Bool)1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) max((-1183267045), (((/* implicit */int) (signed char)48))))), (max((((/* implicit */unsigned int) (unsigned short)5)), (0U))))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) 786432))))))));
                        var_13 = ((/* implicit */int) min((var_13), (max(((~(((/* implicit */int) arr_6 [i_1] [i_0] [i_4])))), ((~(((/* implicit */int) ((unsigned short) (unsigned char)60)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 22; i_5 += 3) 
                        {
                            var_14 ^= ((_Bool) arr_3 [i_0 + 1]);
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) (unsigned char)0))))))));
                            var_16 *= ((/* implicit */int) ((_Bool) arr_19 [(signed char)12] [i_4 - 1] [i_0] [i_5 + 1]));
                            arr_21 [i_0 + 1] [i_1] [i_2] [i_1] [i_0] [i_1] = ((/* implicit */int) ((short) 4764470799557512844LL));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            var_17 ^= ((/* implicit */unsigned int) (-((-(-852008832)))));
                            var_18 = ((/* implicit */signed char) (~(((int) arr_1 [8U]))));
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 21; i_7 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (unsigned short)65530))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            arr_32 [i_1] [i_1] [i_2] [i_8] = (signed char)127;
                            arr_33 [i_0] [i_1] [i_0 - 1] [i_2] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 2]))));
                        }
                    }
                    var_20 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_16 [i_2] [i_2] [i_1] [i_0])))), (((/* implicit */int) arr_30 [i_2] [i_1] [i_2 - 1] [(signed char)18] [i_1]))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        for (int i_10 = 2; i_10 < 20; i_10 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) max((var_21), ((~(((unsigned int) arr_22 [i_0 + 1]))))));
                                arr_40 [i_2] [i_1] [i_2] [(signed char)13] [i_10] = (!(((/* implicit */_Bool) arr_15 [i_10] [i_1] [i_0 + 1] [i_9] [i_10])));
                                var_22 = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) arr_38 [(unsigned short)6] [i_2 + 1] [i_2 - 1] [i_1] [i_0 - 2] [i_0] [i_0 - 1]))), (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((max((3715588245U), (((/* implicit */unsigned int) arr_18 [i_0] [i_0] [i_0 - 1] [i_1] [i_0])))), (((/* implicit */unsigned int) max((arr_30 [i_1] [i_2] [i_2] [i_1] [i_1]), ((unsigned short)8176))))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        arr_43 [i_2] [i_2] = ((/* implicit */signed char) ((unsigned char) arr_26 [(unsigned char)5] [(unsigned short)9] [i_2 - 1] [i_11] [i_0 - 2] [i_0]));
                        var_24 = ((/* implicit */unsigned short) (signed char)0);
                    }
                }
            } 
        } 
    } 
}
