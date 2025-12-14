/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109809
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_11 [i_1] [i_1] [i_2] = ((/* implicit */signed char) min((((unsigned int) max((arr_8 [i_1 - 1] [i_1] [i_1 - 1]), (((/* implicit */unsigned char) var_7))))), (((/* implicit */unsigned int) ((short) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_1))))))));
                    arr_12 [i_0] [i_0] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1])))));
                    arr_13 [i_0] [i_0] [i_2 + 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (var_12)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_1 - 1] [i_0] [i_1 - 1]))))) : (max((((/* implicit */unsigned int) (_Bool)0)), (2186974833U)))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        arr_16 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((int) ((1399323047U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            arr_19 [i_3] [i_3] = ((/* implicit */_Bool) ((unsigned int) ((short) ((((/* implicit */int) (signed char)-13)) / (((/* implicit */int) (_Bool)1))))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_1] [i_1] [(signed char)2] [i_4]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_18 [i_1] [i_1 - 1] [i_1] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_18 [i_1] [i_1 - 1] [i_1] [(short)6] [i_1 - 1])))) : (min((-1366096743), (((/* implicit */int) arr_15 [i_1 - 1] [(_Bool)1] [i_1 - 1] [i_3]))))));
                            arr_21 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) >= ((+(min((((/* implicit */unsigned int) arr_10 [i_1])), (var_6)))))));
                        }
                        for (signed char i_5 = 4; i_5 < 12; i_5 += 4) 
                        {
                            arr_24 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_13))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) << (((min((arr_17 [i_0] [i_0] [i_1] [i_0] [i_0]), (((/* implicit */unsigned long long int) 2895644249U)))) - (2895644247ULL)))))) : (1463061279U)));
                            arr_25 [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) var_1);
                            arr_26 [(short)14] [(short)0] [i_2 + 1] [i_1] [i_3] [i_0] = max((((/* implicit */unsigned char) (signed char)75)), ((unsigned char)244));
                        }
                        arr_27 [i_0] [i_1 - 1] [i_1] [i_3] = ((/* implicit */long long int) var_1);
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) max((((((((/* implicit */int) var_15)) / (var_5))) * ((-(((/* implicit */int) var_2)))))), (((/* implicit */int) min((max((var_1), (var_15))), (((/* implicit */short) ((signed char) var_17))))))));
    var_21 = ((/* implicit */_Bool) (-(var_5)));
}
