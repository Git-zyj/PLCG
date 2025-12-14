/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137179
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) max((var_10), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_3 [i_0] [i_1 - 2]))))) ? ((+(3300613404U))) : (((((/* implicit */_Bool) (short)0)) ? (3300613395U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))))))));
                    arr_6 [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (var_2)))) ? (((((/* implicit */unsigned long long int) arr_2 [i_0])) / (1116143271162244568ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)16590), (((/* implicit */short) var_4)))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) var_1)) + (1116143271162244568ULL))))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */signed char) var_0);
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_7 [i_3]))))))));
        arr_9 [i_3] [i_3] = ((/* implicit */unsigned int) (_Bool)1);
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_3])) << (((3483552712619036722LL) - (3483552712619036714LL)))))) ? (((/* implicit */int) ((_Bool) arr_7 [i_3]))) : (((((/* implicit */int) arr_7 [i_3])) | (((/* implicit */int) arr_7 [i_3]))))));
    }
    for (unsigned long long int i_4 = 3; i_4 < 9; i_4 += 2) 
    {
        var_14 = ((((/* implicit */long long int) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_8))))) + (((long long int) max((((/* implicit */long long int) 994353892U)), (4025392828873296722LL)))));
        var_15 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)7168)) || (((/* implicit */_Bool) (short)-8175)))))) * (max((arr_1 [i_4 - 2]), (((/* implicit */long long int) (unsigned char)0)))))) >= (((arr_0 [i_4 - 2] [(signed char)4]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237)))))));
    }
}
