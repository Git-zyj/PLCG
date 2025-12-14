/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165191
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
    var_15 = ((/* implicit */unsigned int) (~(max((max((var_13), (var_13))), (((/* implicit */long long int) var_4))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] = arr_4 [i_0 + 1] [i_1] [i_1];
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_14))) - (((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_7 [i_3] [i_0] [i_0] [i_0])), (arr_2 [i_3])))) - (max((var_13), (((/* implicit */long long int) arr_7 [i_0 + 1] [i_1] [i_0] [i_0 + 1]))))))));
                        arr_11 [i_3] [i_3] [i_2] [i_2] |= ((/* implicit */short) (!(((/* implicit */_Bool) 875719784837547227ULL))));
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_7 [i_0 - 1] [12U] [i_3] [i_3]))));
                    }
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 2]), (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))) * (max((875719784837547217ULL), (875719784837547205ULL)))));
                    var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [(unsigned short)18] [(unsigned short)18] [(unsigned short)18] [i_0 + 2])) ? (((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (var_11)));
                }
            } 
        } 
    } 
    var_20 = var_2;
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / ((+(((((/* implicit */long long int) ((/* implicit */int) var_14))) ^ (var_13)))))));
    var_22 &= ((/* implicit */unsigned char) var_8);
}
