/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105384
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_10))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_1 - 2] [i_0] [i_0] [i_1 - 2] [i_1 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_10 [i_0] [i_1 - 3] [i_1]) : (((/* implicit */int) (signed char)5)))) / (633513590)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_2] [i_0]) ? (((/* implicit */int) arr_8 [i_2] [i_3] [i_2] [i_0])) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 2] [i_0] [i_3])) ? (var_6) : (var_2)))) : (var_8)))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [(_Bool)0] [i_0] = (((+(var_6))) * (((/* implicit */int) ((_Bool) arr_8 [i_3 + 2] [i_2] [i_1 + 1] [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) var_6);
}
