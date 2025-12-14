/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17598
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_16 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_1 [i_1])))) : (min((-1), (-1)))));
                var_17 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */int) (short)6438)) : (-1))), (((/* implicit */int) (!(var_1))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (short)6438)), (max((var_8), (((/* implicit */int) (unsigned char)255))))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (25))) : (arr_0 [i_0])));
                var_18 = ((/* implicit */signed char) -1);
                var_19 = ((/* implicit */_Bool) 8);
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) ((var_4) ? (2) : (-1))))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_8)) : (var_2))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), ((-(-1))))))));
    var_21 = ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            {
                arr_12 [i_2] [i_3] [i_3] = ((/* implicit */long long int) min(((~(arr_0 [i_3]))), (arr_0 [i_3])));
                arr_13 [i_3] [i_3] [i_2] = ((/* implicit */_Bool) var_2);
            }
        } 
    } 
}
