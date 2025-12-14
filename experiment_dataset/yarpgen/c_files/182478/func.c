/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182478
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */short) arr_3 [(_Bool)1] [i_0]);
                arr_4 [i_0] [i_0] = ((/* implicit */short) min(((~(arr_1 [i_0] [(unsigned char)7]))), ((+(min((arr_1 [i_1 + 1] [i_0]), (arr_3 [i_1] [13U])))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_2 = 3; i_2 < 9; i_2 += 1) 
    {
        var_14 ^= ((/* implicit */signed char) arr_5 [i_2 + 1] [i_2]);
        var_15 ^= ((/* implicit */short) (~(((((/* implicit */unsigned long long int) 2749178750U)) * (12082650074866206492ULL)))));
        arr_9 [(short)4] = (-(min((2749178751U), (1545788544U))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_7 [i_2 - 3] [i_2 - 1]))))) % (((3629281282U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-32747)))))));
        arr_10 [i_2] = ((/* implicit */int) arr_5 [i_2] [i_2 - 1]);
    }
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (var_7))))))) > (((/* implicit */int) var_11))));
        var_17 = ((/* implicit */unsigned char) min((min((arr_3 [i_3] [i_3]), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_12)), (var_1)))))), (min((2749178755U), (((/* implicit */unsigned int) (unsigned char)237))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_18 [(_Bool)1] |= ((/* implicit */long long int) max((((/* implicit */int) min((min((((/* implicit */short) var_11)), (var_3))), (((/* implicit */short) min((arr_15 [i_4]), (arr_15 [i_4]))))))), ((-(((/* implicit */int) (signed char)9))))));
        var_18 = ((/* implicit */signed char) min((((((/* implicit */long long int) arr_16 [i_4])) + (var_5))), (((/* implicit */long long int) max((536870911U), (((/* implicit */unsigned int) (short)29516)))))));
    }
    var_19 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) var_0)))), (((/* implicit */int) var_3))));
}
