/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183409
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
    var_18 = ((/* implicit */unsigned char) (~(min((0), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)50263)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [(unsigned short)12] [i_2] &= ((/* implicit */int) min((((/* implicit */unsigned int) ((int) arr_2 [(signed char)10] [i_1 - 3]))), (var_7)));
                    arr_8 [i_1] [i_1] [i_2] [(_Bool)1] = ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)8))))) ? (((((/* implicit */_Bool) 0)) ? (3121061550U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned int) var_8)))))) | (((/* implicit */unsigned int) ((((/* implicit */int) ((short) (signed char)-64))) + (-551557225))))));
                    arr_9 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */int) (signed char)6)) != (((/* implicit */int) (signed char)102))))), (((unsigned char) (signed char)63))))) ? (((/* implicit */long long int) arr_2 [i_1] [i_2])) : (min((min((((/* implicit */long long int) arr_1 [i_1])), (var_1))), (((/* implicit */long long int) arr_0 [i_0]))))));
                    var_19 = (+(var_12));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((var_7), (((/* implicit */unsigned int) ((max((((/* implicit */int) var_3)), (var_8))) > (((/* implicit */int) var_0)))))));
}
