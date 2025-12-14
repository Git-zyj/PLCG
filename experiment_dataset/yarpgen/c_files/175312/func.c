/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175312
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
    var_18 = ((/* implicit */_Bool) (unsigned short)29071);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / ((~(var_4)))));
                var_19 = ((/* implicit */unsigned short) var_7);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 1026741752))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)53850)))))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (var_1)));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (signed char)-15))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 += ((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
}
