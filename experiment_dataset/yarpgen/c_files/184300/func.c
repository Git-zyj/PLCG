/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184300
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        var_20 -= ((/* implicit */short) min((((12086991831513281356ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [2] [i_2 - 2] [i_2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)102)) - (((/* implicit */int) arr_6 [i_3 - 1] [i_2 - 4] [(_Bool)1])))))));
                        var_21 = ((/* implicit */unsigned short) min((var_12), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-1897)) : (((/* implicit */int) (unsigned char)127))))) ? ((~(((/* implicit */int) var_13)))) : ((((_Bool)1) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                        arr_11 [i_0] [i_3] [i_0] = ((/* implicit */long long int) (+(6359752242196270261ULL)));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((-4361212479240736886LL) > (((/* implicit */long long int) arr_5 [i_0] [12LL]))))))) & ((-((~(arr_5 [i_1] [i_0]))))))))));
                        arr_14 [i_1] [i_4] = ((/* implicit */_Bool) min((var_17), (((/* implicit */long long int) var_7))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */short) -2384757257863788566LL);
                        arr_17 [i_5] [i_2] [i_2 - 4] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-100))));
                    }
                }
            } 
        } 
    } 
    var_24 += ((/* implicit */int) var_5);
}
