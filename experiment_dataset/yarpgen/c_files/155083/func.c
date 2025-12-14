/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155083
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
    var_20 = (-(2949955484U));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_3 [i_0])))) ? (((((/* implicit */_Bool) 2992023583U)) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) (short)32399)))) : ((-(((/* implicit */int) (short)-17796))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                            {
                                var_22 *= (~(((((((/* implicit */_Bool) 3698124702U)) ? (596842578U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-93))))) * ((-(3698124718U))))));
                                arr_13 [i_0] [i_1] [(signed char)16] [i_0] [i_3] [i_3] [i_3] = ((/* implicit */short) (-(((((/* implicit */_Bool) (short)28638)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_0] [i_1] [i_3] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) (short)27296))))))) : (max((var_14), (3057773469U)))))));
                            }
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) ^ (min((((/* implicit */unsigned int) (short)-381)), (401626216U)))))));
                        }
                    } 
                } 
                var_24 *= max((((1927769485U) & (3698124701U))), (((1616927926U) * (1345011779U))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((2659075224U) - (1068888099U))) > (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
}
