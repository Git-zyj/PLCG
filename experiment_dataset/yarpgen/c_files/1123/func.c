/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1123
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
    var_19 = ((((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) && (((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_16)))))) ? ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_17)) : (var_0))))) : (max(((-(((/* implicit */int) var_10)))), ((-(((/* implicit */int) var_18)))))));
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (726320559U))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_18)) >= (var_0))))) : (min((726320562U), (726320565U)))))))));
    var_21 = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_18)), (var_9)))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 726320553U)))))), (min((726320553U), (726320553U)))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) min((var_1), (((/* implicit */unsigned char) var_2))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (((((/* implicit */_Bool) var_17)) ? ((+(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((int) ((var_10) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) var_2)))))));
                arr_6 [i_0 + 3] [i_0] [i_1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 726320549U)) ? (3568646727U) : (3568646736U))));
            }
        } 
    } 
}
