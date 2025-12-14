/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153583
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
    for (int i_0 = 4; i_0 < 7; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned char)205)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned short)4] [i_1]))) : (var_4)));
                arr_4 [i_0 - 2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) max((((/* implicit */unsigned short) arr_3 [i_0 - 1] [i_0])), ((unsigned short)56883)))))));
                var_16 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [(unsigned short)9])), (arr_0 [i_0]))))))), (max((max((((/* implicit */unsigned int) var_5)), (var_2))), (((unsigned int) arr_3 [i_1] [i_0 - 2]))))));
                var_17 = max((((((/* implicit */int) min((arr_3 [i_0 + 2] [i_0 + 2]), (arr_3 [i_0] [i_0])))) / ((-(((/* implicit */int) arr_1 [i_0 + 3])))))), ((~((~(((/* implicit */int) arr_0 [i_1])))))));
            }
        } 
    } 
    var_18 = var_7;
}
