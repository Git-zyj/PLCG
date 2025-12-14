/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186423
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
    var_18 = ((/* implicit */unsigned char) ((signed char) var_17));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) min((arr_0 [i_1] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_15)) >= (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) arr_3 [i_0 - 2]);
                            /* LoopSeq 3 */
                            for (long long int i_4 = 1; i_4 < 16; i_4 += 2) 
                            {
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_2]), (((/* implicit */unsigned char) arr_12 [i_0] [i_1] [i_0 - 2] [i_3] [i_4 - 1]))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_7 [i_0 - 2]))) ? (arr_10 [i_0 + 2] [i_1] [i_2] [i_3] [i_4 + 3]) : (arr_6 [i_0 - 1] [i_0 + 2] [i_0] [i_0 - 1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_4 + 1] [i_4 + 3] [i_4 + 3] [i_4] [i_4 - 1])) >> (((((/* implicit */int) arr_11 [i_0] [i_0 - 2])) - (79))))))));
                                var_22 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
                                arr_13 [i_0 - 1] [i_1] [i_2] [i_3] [i_4 - 1] = ((/* implicit */unsigned char) max((arr_2 [i_2] [i_2]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_4])))))));
                            }
                            for (long long int i_5 = 3; i_5 < 18; i_5 += 2) 
                            {
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((unsigned long long int) -314964362)))));
                                var_24 &= ((/* implicit */unsigned char) ((unsigned int) arr_1 [i_0 - 2]));
                            }
                            for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                            {
                                var_25 = ((/* implicit */int) ((unsigned char) ((unsigned int) ((1320112539) - (((/* implicit */int) (unsigned char)211))))));
                                var_26 = ((/* implicit */unsigned short) 2067839542728350804ULL);
                            }
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */int) arr_12 [i_0] [3] [i_0] [i_0 + 1] [3])) : (-407827814)));
                            var_28 = ((/* implicit */int) ((unsigned long long int) ((signed char) arr_17 [i_0 + 1] [i_1] [i_2] [(unsigned short)16] [i_2] [i_3] [(unsigned short)16])));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    for (unsigned short i_8 = 2; i_8 < 15; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 3; i_9 < 18; i_9 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) ((long long int) var_6));
                                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) var_8))));
                                var_31 = ((/* implicit */unsigned int) max((var_31), (((var_15) - (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_7])))))));
                            }
                        } 
                    } 
                } 
                var_32 = ((/* implicit */unsigned char) max((((/* implicit */int) min((arr_24 [i_0 - 2]), (arr_8 [i_0 + 2] [i_0] [(unsigned short)8] [(unsigned short)8])))), (max((arr_5 [i_0] [i_1] [i_1]), (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_1]))))));
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned int) ((_Bool) ((((((/* implicit */int) var_0)) >> (((/* implicit */int) (_Bool)1)))) << (((((/* implicit */int) var_16)) - (189))))));
}
