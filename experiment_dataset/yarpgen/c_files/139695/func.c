/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139695
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
    var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
    var_14 = (~(-1258795936892373064LL));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 -= ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_5 [(_Bool)1] [i_2 - 1] [i_2] [i_2 - 1])))) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_0] [6])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1]))) : (max((((/* implicit */long long int) var_6)), (arr_5 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                    var_16 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1]))))));
                    var_17 = (((~((~(9223372036854251520LL))))) <= (((/* implicit */long long int) ((/* implicit */int) var_9))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((/* implicit */int) var_9))))) ? ((((_Bool)1) ? (((/* implicit */long long int) var_3)) : (var_12))) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) >> (((var_7) + (1730749556)))))))) >> (((((/* implicit */int) var_2)) - (70)))));
    var_19 = (~(var_8));
}
