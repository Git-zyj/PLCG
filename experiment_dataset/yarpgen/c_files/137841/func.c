/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137841
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
    var_18 = ((/* implicit */_Bool) (unsigned short)40672);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((unsigned int) arr_2 [i_1]))) ^ (((((/* implicit */long long int) ((/* implicit */int) (short)-3285))) ^ (128700465548103711LL))))) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_2])))));
                    var_20 |= ((/* implicit */unsigned char) arr_6 [i_0] [i_0]);
                }
            } 
        } 
    } 
}
