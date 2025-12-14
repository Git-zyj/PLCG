/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126153
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
    for (signed char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_12 ^= ((/* implicit */short) (~((+(4813894006502643781ULL)))));
                arr_6 [(short)23] [i_0] [(short)22] = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_5 [23LL]) >= (-1605622041765175576LL)))) >= (((/* implicit */int) ((signed char) (unsigned short)8808)))));
            }
        } 
    } 
    var_13 = ((((/* implicit */_Bool) ((unsigned long long int) 9210289302653128646ULL))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((-(min((((/* implicit */long long int) var_7)), (320951419919699419LL))))));
    var_14 = ((/* implicit */unsigned long long int) (signed char)42);
}
