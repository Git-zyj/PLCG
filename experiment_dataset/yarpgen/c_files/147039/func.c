/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147039
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((((arr_0 [i_1 - 2]) <= (arr_0 [i_1 + 2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 - 2])) && (((/* implicit */_Bool) var_4)))))) : ((-(arr_0 [i_1 - 2])))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((max((((((/* implicit */int) var_7)) % (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (arr_6 [i_1 - 2])))))), (max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) arr_2 [i_0]))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_4))));
    var_13 = ((/* implicit */short) max((((/* implicit */long long int) 1010416162U)), (max((var_1), (((/* implicit */long long int) var_9))))));
    var_14 = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_9)) | (((/* implicit */int) min((var_0), (var_0))))))));
}
