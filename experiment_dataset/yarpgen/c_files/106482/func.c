/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106482
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
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) arr_1 [i_0 - 1])) / (((/* implicit */int) arr_1 [i_0])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))) / (((unsigned long long int) ((unsigned long long int) (short)-28811)))));
                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_2 [(short)16] [i_0])) : (((/* implicit */int) (short)-28809)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (unsigned short i_3 = 3; i_3 < 13; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    arr_13 [i_2] = ((/* implicit */signed char) ((unsigned short) (-(((/* implicit */int) (short)28812)))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_2]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_3]))))) : (((unsigned int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((int) 0LL))) && (((/* implicit */_Bool) ((unsigned long long int) (short)-20221))))))) : ((~(((long long int) arr_11 [i_2] [i_2] [i_4]))))));
                }
            } 
        } 
    } 
    var_21 = (~(((/* implicit */int) (short)-23428)));
}
