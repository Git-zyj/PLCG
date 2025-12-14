/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172657
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((arr_7 [i_1] [i_1] [i_2 + 1] [i_1 + 1]) != (arr_7 [9U] [17LL] [i_2 + 1] [i_1 + 1])))), (381734415320167263ULL)));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_14 -= ((/* implicit */unsigned int) ((signed char) (short)-26016));
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_1 + 1] [i_2 + 1] [(short)5] [i_1 + 1])) != (((/* implicit */int) ((arr_5 [i_1 + 2] [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) ((short) var_3)))))))));
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((unsigned int) var_4))) <= (((((/* implicit */_Bool) ((short) (signed char)124))) ? (((((/* implicit */unsigned long long int) var_13)) - (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -115539136755833424LL))))))))));
                }
            } 
        } 
    } 
    var_16 = var_8;
}
