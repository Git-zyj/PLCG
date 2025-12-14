/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123978
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) / (max((3132041582U), (((/* implicit */unsigned int) var_8))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))) : (var_14)));
                var_17 &= ((/* implicit */unsigned short) ((var_2) >= (((/* implicit */int) var_6))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) var_13);
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (unsigned char i_3 = 1; i_3 < 11; i_3 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_4 [i_3 - 1] [i_3 - 1] [i_3 - 1]))))));
                arr_12 [10] [i_3 - 1] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_2] [i_2]))));
                var_20 = ((/* implicit */int) ((unsigned long long int) var_8));
                arr_13 [(signed char)1] [i_2] [i_2] = arr_10 [(_Bool)1];
            }
        } 
    } 
}
