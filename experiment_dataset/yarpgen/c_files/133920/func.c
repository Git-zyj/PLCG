/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133920
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((4294967295U), (((/* implicit */unsigned int) var_2))))), (var_9)))) && (((/* implicit */_Bool) 23U))));
    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_5))) != (var_1)))), ((signed char)122)));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)48927)))))) : (((4294967289U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)27063)))))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37615))) != (2922147569U)));
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-1836))));
                arr_13 [i_0] = ((/* implicit */int) 253030845728249999LL);
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)36390))))) ? (min((663974175U), (((/* implicit */unsigned int) (unsigned short)12122)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) -1686497676083654200LL))))))))));
            }
        } 
    } 
}
