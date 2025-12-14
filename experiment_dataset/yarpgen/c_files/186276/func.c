/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186276
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
    var_12 = ((/* implicit */short) ((((int) ((((/* implicit */int) var_2)) % (((/* implicit */int) var_1))))) << (((((((/* implicit */int) (signed char)122)) * (((/* implicit */int) var_2)))) - (2770741)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 8; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */long long int) arr_9 [i_4 - 1]))))) ? (((/* implicit */int) arr_8 [(_Bool)1] [(_Bool)1] [i_2])) : (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_2)) - (22684))))) < (((/* implicit */int) (short)-8047))))));
                                var_13 = ((/* implicit */int) var_6);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -9))))) ^ (((/* implicit */int) var_2))));
                    var_14 = ((/* implicit */unsigned long long int) ((((_Bool) 4721569596933718425ULL)) ? (((/* implicit */int) (((~(var_10))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (_Bool)0)) : (1131820668))))))) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
}
