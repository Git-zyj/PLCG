/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154828
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_13 ^= ((/* implicit */long long int) (unsigned char)172);
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)11442))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((var_14), (((_Bool) ((unsigned char) var_12)))));
                var_15 = ((/* implicit */_Bool) min((arr_7 [i_2] [i_3]), (((/* implicit */long long int) (short)28349))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)11463)), (var_0)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)501)) | (((((/* implicit */_Bool) -24LL)) ? (((/* implicit */int) (short)-11463)) : (((/* implicit */int) (short)-5492))))))) : (var_9)));
}
