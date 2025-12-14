/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186210
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 ^= ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned short)65535)))) / (((((/* implicit */int) (signed char)46)) * (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_2]))))));
                    arr_8 [15LL] [15LL] [15LL] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((signed char) var_6))) ? ((+(((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) ((var_6) >= (1210455990))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (var_8))))))) | (var_1)));
    var_13 = ((/* implicit */unsigned int) min((((int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))), (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-32)) : (var_2))) < (((((/* implicit */int) (short)0)) * (((/* implicit */int) var_3)))))))));
}
