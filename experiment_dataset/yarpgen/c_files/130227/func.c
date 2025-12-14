/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130227
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
    var_18 ^= ((/* implicit */unsigned char) var_3);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */_Bool) min((arr_3 [i_0] [4U]), (6U)));
                    var_19 = ((min((20U), (((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)217))) : (4294967271U))))) % (((/* implicit */unsigned int) ((/* implicit */int) var_14))));
                    var_20 = (unsigned short)7462;
                }
            } 
        } 
    } 
    var_21 = ((_Bool) var_3);
    var_22 *= ((/* implicit */unsigned int) var_11);
}
