/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11789
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
    var_10 = var_2;
    var_11 = ((/* implicit */signed char) var_7);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((signed char) var_6))) : (var_5)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                    arr_7 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_4)))));
                    var_13 = ((/* implicit */signed char) var_7);
                    arr_8 [i_0] = ((/* implicit */long long int) ((((unsigned int) 2147483647)) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (var_9))))));
                    var_14 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 1017428517)) ? (2147483647) : (((/* implicit */int) (unsigned char)16)))) : (((((/* implicit */_Bool) 1017428517)) ? (2147483647) : (((/* implicit */int) (unsigned short)65515))))))));
                }
            } 
        } 
    } 
}
