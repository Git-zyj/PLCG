/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146636
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
    for (short i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_10 = (i_1 % 2 == zero) ? (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 5091341776745465770LL)) ? (((/* implicit */int) arr_1 [i_0])) : (988297040))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)17973)), (5091341776745465761LL)))) ? (((/* implicit */long long int) ((((arr_3 [i_1]) + (2147483647))) << (((((arr_3 [i_1]) + (527227728))) - (7)))))) : (var_1))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 5091341776745465770LL)) ? (((/* implicit */int) arr_1 [i_0])) : (988297040))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)17973)), (5091341776745465761LL)))) ? (((/* implicit */long long int) ((((arr_3 [i_1]) + (2147483647))) << (((((((arr_3 [i_1]) + (527227728))) - (7))) - (486561266)))))) : (var_1)))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */int) var_8);
                            var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */long long int) -2147483627)) != (8883150979653349131LL))))));
                            arr_10 [i_1] [i_1] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
                        }
                    } 
                } 
                var_13 = max((((/* implicit */long long int) ((short) min((5091341776745465770LL), (((/* implicit */long long int) (short)(-32767 - 1))))))), ((+(5091341776745465769LL))));
                arr_11 [i_1] = (~(-5091341776745465763LL));
            }
        } 
    } 
    var_14 += ((/* implicit */int) var_3);
    var_15 = ((/* implicit */long long int) var_7);
}
