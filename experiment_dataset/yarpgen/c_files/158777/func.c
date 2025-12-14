/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158777
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
    var_11 = var_7;
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) var_1);
                        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (1017757380U)))) ? (max((((/* implicit */unsigned long long int) 1017757396U)), (10621673814973685652ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_1)), ((unsigned char)175)))))));
                        var_14 &= ((/* implicit */signed char) max((((/* implicit */unsigned int) var_9)), ((((+(1017757370U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((1017757360U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)221)))))))))));
                    }
                    arr_10 [(signed char)14] &= max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_3 [i_2 - 3])), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39))) | (1017757370U)))))), (max((arr_9 [i_2 - 1] [i_2 - 2] [i_2 + 2] [i_2 + 2] [i_2 + 2]), (arr_9 [i_2 - 1] [i_2 - 2] [i_2 + 2] [i_2 + 2] [i_2 + 2]))));
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-((-(((((/* implicit */_Bool) arr_2 [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_1])))))))));
                }
            } 
        } 
    } 
}
