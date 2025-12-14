/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137031
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_19 -= ((/* implicit */_Bool) 4601710599849518045LL);
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((-4601710599849518058LL) | (4601710599849518045LL))))));
                            var_21 = ((/* implicit */short) var_12);
                        }
                    } 
                } 
                var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (min((((/* implicit */long long int) arr_10 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1] [i_1 - 2])), (((((/* implicit */long long int) ((/* implicit */int) var_1))) | (3251760139285490196LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 14666335682390589498ULL))))));
                var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6945))) : (-4601710599849518058LL)))) || (((/* implicit */_Bool) arr_7 [i_1 + 2] [i_1 - 1] [i_1 - 2])))) && (((((/* implicit */int) ((((/* implicit */int) arr_7 [i_1 - 2] [(short)17] [i_0])) >= (arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1])))) >= (((/* implicit */int) arr_3 [i_1 - 1] [i_1]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) % (4601710599849518019LL)));
}
