/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16596
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
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) var_1)))));
                            var_13 = ((/* implicit */long long int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) -1LL))));
                            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (short)32767);
                            var_14 -= ((unsigned short) var_2);
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((short)30015), ((short)-32766)))) ? (((((/* implicit */unsigned long long int) min((9223372036854775807LL), (((/* implicit */long long int) (short)32767))))) * (((unsigned long long int) (short)-30015)))) : (((/* implicit */unsigned long long int) max((var_2), (0LL))))));
                arr_13 [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)62376);
            }
        } 
    } 
    var_16 -= (short)30014;
}
