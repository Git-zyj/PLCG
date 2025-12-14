/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143858
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
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_16))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */_Bool) arr_5 [(_Bool)1]);
                arr_6 [i_1] |= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)245)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)220)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)198))) / (9274026542821381847ULL))))));
}
