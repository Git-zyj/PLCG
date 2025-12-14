/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123537
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
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */int) var_15))))))) ? (((/* implicit */int) var_10)) : (var_16));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (arr_3 [i_1])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_0])) || (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) (unsigned char)147))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_0] = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_1 [i_1 - 2])))), (((/* implicit */int) min((arr_1 [i_1 - 2]), (arr_1 [i_1 + 1]))))));
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (signed char)106))));
                            var_19 &= ((/* implicit */short) -7179622689045140765LL);
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) 1414094181))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) var_14);
                var_22 &= ((/* implicit */signed char) ((((/* implicit */int) (signed char)98)) - (((/* implicit */int) (unsigned char)139))));
            }
        } 
    } 
    var_23 -= ((/* implicit */signed char) (+(((/* implicit */int) var_14))));
}
