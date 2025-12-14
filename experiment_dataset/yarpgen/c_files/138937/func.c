/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138937
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
    var_13 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (unsigned char)235))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17380536355693415982ULL)) ? (((/* implicit */unsigned long long int) (~(var_6)))) : (var_7)))) || (((/* implicit */_Bool) var_1))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) ((arr_0 [i_0 + 3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 2] [(unsigned char)14] [(signed char)0])))))) : (((/* implicit */int) arr_4 [i_0 + 3] [i_0 + 1] [i_0 + 4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7))) : (min((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_2])))))));
                    arr_7 [i_0 + 3] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */long long int) min((((unsigned long long int) arr_1 [i_1 - 1])), (8496479439630884355ULL)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) var_7);
}
