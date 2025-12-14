/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147279
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
    var_15 = ((/* implicit */int) ((max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)238))) & (var_11))), (((/* implicit */long long int) var_2)))) ^ (((/* implicit */long long int) (~(((((/* implicit */int) (short)-12051)) ^ (((/* implicit */int) var_6)))))))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_7)))))))) || (((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) var_9)), (var_0))))))));
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (((((var_2) >= (((/* implicit */int) var_7)))) ? (((/* implicit */int) ((var_10) != (((/* implicit */unsigned int) ((/* implicit */int) (short)24322)))))) : (min((((/* implicit */int) var_9)), (1861097143)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((min((var_0), (((/* implicit */unsigned int) var_9)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) == (var_11)))))));
                var_18 += max((((((/* implicit */int) var_6)) % ((+(((/* implicit */int) (short)-24322)))))), (((((((-750020013) + (2147483647))) << (((var_10) - (2624007890U))))) & (((/* implicit */int) ((0LL) > (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((((((((/* implicit */unsigned int) -975070060)) % (216483032U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))))) - (max((var_0), (((/* implicit */unsigned int) var_9))))));
}
