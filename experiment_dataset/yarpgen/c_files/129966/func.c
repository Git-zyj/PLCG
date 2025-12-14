/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129966
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_7)))))) % (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) var_5)) ? (var_4) : (var_4))) : (var_4))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) << (((((/* implicit */int) var_2)) - (31))))))))) >> (((((((/* implicit */unsigned int) var_0)) - (var_6))) - (1413302542U)))));
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-25243)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18))) : (-4010900784782059906LL))) >> (((((/* implicit */int) (unsigned short)65535)) - (65485)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 2]))) : (arr_0 [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 - 1])) || (((/* implicit */_Bool) arr_5 [i_0 + 1]))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            arr_12 [i_0] = ((/* implicit */unsigned short) (~(arr_8 [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3])));
                            var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((var_4) >> (((arr_10 [i_0 - 1] [i_0 - 1] [i_3 - 2] [i_3 - 1]) + (1199438185))))))));
                        }
                        arr_13 [i_0] [i_1] [i_2] [i_3 - 2] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)21415))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            arr_16 [i_3 - 2] [i_3] = var_9;
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 380910364)) ? (((/* implicit */unsigned long long int) arr_11 [i_0 + 2] [i_0 - 1] [i_0] [i_0 - 1] [i_3 + 2])) : (arr_5 [i_0 - 1])));
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((arr_11 [i_0 - 1] [(short)8] [i_2] [i_3 + 1] [i_5]) + (arr_11 [i_0 + 1] [i_1] [i_2] [i_1] [i_1]))))));
                            var_16 = ((/* implicit */int) (+(arr_1 [i_0 + 1])));
                        }
                        var_17 -= ((unsigned long long int) arr_1 [i_0]);
                        arr_17 [i_0 - 1] [i_3 + 1] = ((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_2] [i_2] [i_3 + 2]);
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((var_18), (var_2)));
    var_19 = ((/* implicit */unsigned char) ((short) ((((unsigned long long int) (_Bool)1)) >> (((673615442) - (673615394))))));
}
