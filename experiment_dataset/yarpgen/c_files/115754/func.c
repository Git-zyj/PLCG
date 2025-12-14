/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115754
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
    var_18 ^= ((/* implicit */short) (+(((/* implicit */int) (((+(4174759726U))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_4) : (var_4)))))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((_Bool) var_12))) : (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (var_9))) - (((/* implicit */int) ((var_12) && (((/* implicit */_Bool) 120207569U)))))))) : (min((((/* implicit */long long int) var_15)), ((+(var_11)))))));
    var_20 += ((/* implicit */short) min((((((((/* implicit */int) var_15)) - (((/* implicit */int) var_2)))) / ((+(((/* implicit */int) (short)13283)))))), (((/* implicit */int) ((((long long int) var_14)) <= (((/* implicit */long long int) min((((/* implicit */int) (_Bool)0)), (var_0)))))))));
    var_21 = ((/* implicit */_Bool) var_11);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] = min((((/* implicit */unsigned int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_5))))), ((short)32767)))), ((~(((((/* implicit */_Bool) 120207562U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_2]))) : (4174759724U))))));
                    var_22 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) != (arr_0 [i_0])))) == (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_1))))));
                    var_23 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (var_13)));
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) arr_0 [i_0]);
                }
            } 
        } 
    } 
}
