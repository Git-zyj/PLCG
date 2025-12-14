/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102037
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [(unsigned short)4] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_6)) ? (var_10) : (var_6))) : (((/* implicit */int) var_3))))) ? (((((/* implicit */int) (unsigned short)56215)) & (((int) arr_3 [(signed char)1] [i_1] [i_1])))) : ((-(((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_0 [(_Bool)1])) - (25471)))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) var_9);
                arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((int) max((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [(unsigned char)6]))), (((/* implicit */long long int) ((((/* implicit */int) arr_2 [(unsigned char)7])) | (var_6)))))));
            }
        } 
    } 
    var_13 = max((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((int) (unsigned char)112))) : (2837201329U)))));
}
