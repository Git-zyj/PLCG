/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106369
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_1 [(signed char)0])) != (((/* implicit */int) var_7)))));
                    var_17 = ((/* implicit */long long int) max((var_17), (-7345414453921016778LL)));
                }
            } 
        } 
    } 
    var_18 = ((int) max((((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (signed char)127))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))))));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)152)) > (16777088))))) : (((var_11) | (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
    /* LoopNest 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            {
                arr_16 [i_3 - 1] [i_3 - 1] [i_4] = ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3]))) : (var_14))) ^ (((/* implicit */unsigned long long int) var_11))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) ((max((arr_19 [3LL] [3LL] [i_4] [i_4]), (arr_19 [i_6] [(_Bool)1] [(_Bool)1] [i_3 - 1]))) ? ((~(((/* implicit */int) (signed char)-116)))) : ((~(((/* implicit */int) (unsigned char)104))))));
                            var_21 = ((/* implicit */unsigned int) arr_15 [i_6]);
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (signed char)127))));
                        }
                    } 
                } 
            }
        } 
    } 
}
