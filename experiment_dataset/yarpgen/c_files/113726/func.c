/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113726
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) max((arr_1 [i_1] [i_0]), (arr_1 [i_0] [i_1])))) * (((((/* implicit */int) arr_1 [i_0] [i_1])) - (((/* implicit */int) arr_1 [i_0] [i_1]))))));
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0])) | (((long long int) arr_3 [i_0] [(_Bool)1] [i_0])))), (((/* implicit */long long int) arr_4 [i_0] [16ULL] [i_1]))));
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1] [i_0] [i_0])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */int) var_4))));
    var_18 = ((/* implicit */signed char) (-(((/* implicit */int) var_1))));
}
