/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180144
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
    var_20 = ((/* implicit */long long int) var_19);
    var_21 = var_7;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */signed char) (((~((~(((/* implicit */int) arr_1 [i_1 - 3])))))) > ((+(((/* implicit */int) arr_1 [i_1 - 1]))))));
                    var_23 ^= ((((/* implicit */_Bool) 1061436784U)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)120)) != (((/* implicit */int) (unsigned char)52)))))));
                }
            } 
        } 
    } 
}
