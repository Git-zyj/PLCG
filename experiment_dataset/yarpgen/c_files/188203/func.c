/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188203
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_10 = max((((((/* implicit */_Bool) 262143)) ? (1267443737) : (262143))), (((((/* implicit */_Bool) -262131)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_4 [i_0] [i_0])))));
                    arr_7 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_2]))))) && (((/* implicit */_Bool) (-(min((((/* implicit */int) var_2)), (arr_5 [i_0] [i_0]))))))));
                    var_11 ^= ((int) (unsigned char)45);
                }
            } 
        } 
    } 
    var_12 = var_6;
    var_13 ^= ((/* implicit */int) var_6);
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((int) 117533662)) : (var_3)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 262143)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) ((unsigned char) -262139)))))) : (((/* implicit */int) (unsigned char)253)));
}
