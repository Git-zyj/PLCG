/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16249
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
    var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))), ((~((+(var_12)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 18; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (int i_4 = 3; i_4 < 21; i_4 += 2) 
                            {
                                var_18 += ((/* implicit */long long int) max(((~(((/* implicit */int) arr_16 [i_0] [i_1 + 2] [i_2 - 2] [i_0] [i_4 + 1] [i_2 - 1] [i_3 + 2])))), (((/* implicit */int) arr_15 [i_4 - 3] [i_0] [i_3 - 1] [(signed char)8] [i_1] [i_0]))));
                                arr_17 [i_4] [i_4] [i_4] [i_4] [(_Bool)1] [i_4 - 2] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) (~(var_8)))) < (arr_7 [i_3 + 2] [i_2 - 2]))) ? (var_7) : (((/* implicit */unsigned int) (~((-(((/* implicit */int) var_1)))))))));
                                var_19 = ((/* implicit */unsigned short) ((min((arr_11 [i_1 + 1] [i_3 + 1]), (arr_11 [i_1 - 1] [i_3 + 2]))) - ((+(arr_11 [i_1 + 3] [i_3 - 1])))));
                                arr_18 [i_0] [i_1] [i_4] [i_0] [i_4 + 1] = ((/* implicit */long long int) min(((~(min((arr_2 [i_3] [i_4 - 3]), (((/* implicit */unsigned int) arr_10 [i_0])))))), (((/* implicit */unsigned int) min((74791480), (((/* implicit */int) (_Bool)1)))))));
                                arr_19 [i_0] [i_1 + 1] [i_4] [i_3 - 1] [i_4 - 2] [i_4] = ((/* implicit */unsigned int) (((~(arr_9 [i_1 + 1]))) & (((/* implicit */unsigned long long int) arr_3 [i_2 + 1] [i_1 + 2] [i_1 + 2]))));
                            }
                            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                            {
                                var_20 *= ((/* implicit */signed char) (~(((((/* implicit */int) arr_13 [(signed char)13] [(signed char)13] [i_1 + 1] [i_5 - 1] [i_5 - 1])) & (((/* implicit */int) var_15))))));
                                var_21 = ((/* implicit */short) (~(((/* implicit */int) (signed char)-109))));
                                var_22 = min(((~(arr_21 [i_1] [i_1 - 1] [i_1] [i_2] [i_2 + 3] [i_2]))), ((~(((/* implicit */int) var_3)))));
                                arr_24 [i_0] [i_5] [i_2 - 2] [i_2] [i_3 + 2] [i_2] = ((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_2 - 2] [i_3] [i_3]);
                            }
                            var_23 += ((/* implicit */int) ((unsigned long long int) (~((+(((/* implicit */int) arr_14 [(short)10] [i_1] [i_1] [i_1] [i_0])))))));
                            arr_25 [i_0] [i_0] [i_3] = ((/* implicit */signed char) (~(min((((/* implicit */int) ((short) var_11))), (var_8)))));
                            var_24 = ((/* implicit */signed char) (~((+(((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned char) arr_23 [i_0]);
                var_26 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_20 [(unsigned char)16] [i_1] [i_0] [i_1 + 3] [i_0] [i_0])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) arr_20 [i_0] [i_1 + 3] [i_1 + 1] [i_1 + 2] [i_0] [i_1]))));
            }
        } 
    } 
}
