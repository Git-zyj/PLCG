/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182126
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
    var_13 = ((/* implicit */_Bool) 4068539507U);
    var_14 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
    var_15 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_1)))))) : (((((/* implicit */_Bool) (unsigned short)19061)) ? (((/* implicit */long long int) 226427788U)) : (-8345100225779838756LL)))));
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2318865750U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)296))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_10)))))))) && (((/* implicit */_Bool) (~(var_12)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) | (((unsigned long long int) 1755718520U))))) ? (((((/* implicit */_Bool) ((unsigned short) var_7))) ? (2217050950U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124)))));
        arr_2 [i_0 - 1] [i_0 - 2] = arr_0 [i_0 + 1];
    }
}
