/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137306
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
    var_15 -= ((/* implicit */short) (~(((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) arr_4 [(signed char)17] [i_1] [i_2] [(_Bool)1]);
                    arr_6 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [(signed char)16] [i_1]))))))))));
                    arr_7 [i_1] [i_1] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_17 ^= var_13;
    var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (1211644671965158116LL)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((var_4) ? (((/* implicit */unsigned long long int) var_8)) : (var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    var_19 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))));
}
