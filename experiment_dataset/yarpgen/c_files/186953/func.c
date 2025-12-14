/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186953
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
    for (unsigned int i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            var_18 = ((((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0 + 1])) || (((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1])))) ? (((arr_4 [i_0] [i_0 - 3]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0 + 1]))))) : (min((((/* implicit */unsigned int) arr_6 [i_0] [i_0 + 2])), (arr_4 [i_0] [i_0 - 3]))));
                            var_19 = ((/* implicit */long long int) min((var_14), (((/* implicit */unsigned long long int) arr_7 [(unsigned char)17] [(_Bool)1]))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [3U] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_5 [i_0] [i_0 - 3])), (((((/* implicit */_Bool) -7811446753938087432LL)) ? (min((((/* implicit */long long int) 4294967295U)), (-7811446753938087432LL))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_4)), (((var_7) ? (((((/* implicit */_Bool) var_14)) ? (645795912U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_12))));
                var_22 = ((/* implicit */_Bool) var_3);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned int) (~(var_16))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)0), ((_Bool)1))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (6954647039549240729LL)))))));
}
