/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166365
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
    var_13 = ((/* implicit */int) var_11);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 18; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (~(13510179523195317120ULL))))))), (arr_3 [i_2]))))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_1] [i_2 - 4] [i_2 + 1] [i_3] [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0]))) / (13510179523195317105ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_2] [i_3])) + (arr_7 [i_0] [i_3])))) : (918321306U))), (3376645990U)));
                        arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) arr_12 [i_2] [i_2] [i_2 + 1] [i_2 - 4] [i_2 + 1])))) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_2 - 2] [i_2 - 4] [i_3]))));
                        arr_15 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) arr_7 [i_2] [i_3]);
                    }
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */long long int) var_3);
                        var_16 ^= ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)4)) ^ (((/* implicit */int) arr_16 [i_2] [i_2 - 3] [i_2] [i_4] [i_2])))) | (((((/* implicit */int) arr_16 [i_1] [i_2 - 1] [i_2] [i_2] [i_2 - 3])) + (((/* implicit */int) arr_9 [i_4] [i_4] [i_2] [i_2 - 3] [i_2 - 1]))))));
                        var_17 = ((/* implicit */long long int) (!(((_Bool) min((((/* implicit */long long int) arr_0 [i_1] [i_0])), (arr_4 [i_0] [i_1]))))));
                    }
                    for (long long int i_5 = 1; i_5 < 16; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_2] [i_5] [i_2 - 2])) ? (((/* implicit */int) arr_17 [i_0] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_5] [i_2 - 2]))))));
                        var_19 = ((/* implicit */_Bool) ((((_Bool) (signed char)102)) ? (max((((((/* implicit */_Bool) 918321308U)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)-92)), (arr_17 [i_5] [i_2] [i_1] [i_0])))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_7))) ? ((((_Bool)1) ? (var_4) : (arr_0 [i_0] [i_1]))) : (max((((/* implicit */int) var_0)), (2147483637))))))));
                    }
                }
            } 
        } 
    } 
}
