/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156012
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
    var_18 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (3709915227U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */unsigned int) (((~(((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) var_16))))) : (min((((/* implicit */unsigned int) (~(((/* implicit */int) var_16))))), (min((3709915202U), (((/* implicit */unsigned int) var_9))))))));
    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_4 [i_0] [i_0] [i_2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))))) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) != (((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) var_8))))))) : (((/* implicit */int) ((short) arr_4 [i_2] [i_1] [i_2]))))))));
                    arr_7 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_2] [i_0] [i_2] [i_2])) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) var_4))));
                    var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 585052068U)))))) & (max((arr_2 [i_0]), (((/* implicit */long long int) 3709915231U))))))) || ((!(((arr_1 [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        for (signed char i_4 = 2; i_4 < 19; i_4 += 1) 
        {
            {
                var_22 += ((/* implicit */int) (!(((/* implicit */_Bool) ((3709915231U) >> (((((((/* implicit */_Bool) arr_13 [i_3] [(_Bool)1])) ? (((/* implicit */int) (short)26731)) : (((/* implicit */int) (_Bool)1)))) - (26712))))))));
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (((!(((/* implicit */_Bool) 585052068U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3])))))) : (((arr_13 [i_3] [(_Bool)1]) >> (((64U) - (43U))))))))));
                var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_17))))));
            }
        } 
    } 
}
