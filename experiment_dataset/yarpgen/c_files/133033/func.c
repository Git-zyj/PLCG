/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133033
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
    var_10 = (((~(((/* implicit */int) max((var_3), ((unsigned short)65534)))))) * (((((/* implicit */int) (unsigned short)17)) >> (((4294967290U) - (4294967277U))))));
    var_11 = ((/* implicit */signed char) (unsigned short)65518);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 576460752302374912ULL)) || (((/* implicit */_Bool) (unsigned short)65530))))) >= ((~(((/* implicit */int) var_7))))))) * (((/* implicit */int) (unsigned short)22))));
                arr_7 [(unsigned short)14] [(unsigned short)14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-83))))) ? ((-(((/* implicit */int) var_8)))) : ((+(((/* implicit */int) (unsigned short)65519))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_2))));
}
