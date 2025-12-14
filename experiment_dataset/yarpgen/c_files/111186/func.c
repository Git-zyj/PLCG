/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111186
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
    var_19 = (unsigned char)25;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) (~(((/* implicit */int) var_8))));
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_1), (var_10)))) ? (max((7768978755304417137LL), (((/* implicit */long long int) ((((/* implicit */int) (short)-4204)) | (((/* implicit */int) var_18))))))) : (((/* implicit */long long int) ((((/* implicit */int) var_9)) | (((((/* implicit */_Bool) (short)-26531)) ? (var_2) : (arr_1 [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
}
