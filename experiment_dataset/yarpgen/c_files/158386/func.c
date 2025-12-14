/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158386
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
    var_20 = ((/* implicit */unsigned short) (+(min(((+(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) (unsigned char)156))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_13), ((_Bool)1))))))) ? ((~(((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))))) : (min(((~(var_2))), ((~(((/* implicit */int) var_4))))))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_18))))) ? (var_2) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_2 + 1]))))))) : ((-(((((/* implicit */_Bool) var_15)) ? (arr_5 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
                }
            } 
        } 
    } 
}
