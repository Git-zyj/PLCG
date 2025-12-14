/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166621
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
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 ^= ((/* implicit */_Bool) max((((int) (~(((/* implicit */int) (short)5798))))), ((-(((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) var_16)))))))));
                var_18 = ((/* implicit */_Bool) ((unsigned char) max(((-(((/* implicit */int) (unsigned short)17684)))), ((~(((/* implicit */int) (unsigned char)19)))))));
                var_19 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) (unsigned char)41))))), (((((/* implicit */long long int) ((int) var_15))) & (max((2892482657863749747LL), (((/* implicit */long long int) var_16))))))));
            }
        } 
    } 
    var_20 -= (~(((/* implicit */int) (unsigned char)197)));
    var_21 = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) -6136527135286628810LL)) ? (((/* implicit */int) (unsigned short)3804)) : (((/* implicit */int) var_3)))), (((((/* implicit */int) var_4)) & (((/* implicit */int) var_3)))))), (((/* implicit */int) var_3))));
}
