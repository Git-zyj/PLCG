/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175667
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
    var_20 = ((/* implicit */unsigned int) ((short) max((((/* implicit */unsigned short) ((signed char) (unsigned short)61178))), (min(((unsigned short)8157), (((/* implicit */unsigned short) var_13)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)61189)) ? (((/* implicit */int) (unsigned short)4357)) : (((/* implicit */int) (unsigned short)4357)))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1])) ^ (((/* implicit */int) var_17))))) || (((/* implicit */_Bool) arr_4 [i_0] [i_0])))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min(((~(arr_10 [i_1] [i_1] [i_2 + 2] [(signed char)19]))), (((/* implicit */unsigned int) arr_5 [i_0] [(signed char)2] [(signed char)2])))))));
                                var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_7 [i_0] [i_1]))) ? (max((var_4), (((/* implicit */unsigned int) arr_7 [i_1] [i_3])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) ((unsigned int) ((arr_9 [i_1] [i_1] [i_1] [i_0]) << (((((/* implicit */int) arr_0 [i_0])) - (39754))))));
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((unsigned short) (unsigned short)4357)))));
            }
        } 
    } 
    var_25 = var_2;
}
