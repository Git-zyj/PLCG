/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181656
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
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) (+(-1)))), (((((-4613589045355690095LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)44775)) - (44740))))))) - (-733820755591032983LL)));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_13 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */int) ((short) arr_8 [i_2] [i_2] [i_2] [i_2 + 2]));
                            arr_14 [i_0] [i_2] [i_3 + 3] [i_3 + 3] [i_0] = ((/* implicit */unsigned short) ((-733820755591032983LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_15 [i_2] = ((/* implicit */long long int) var_11);
                            var_18 *= ((/* implicit */short) var_16);
                            arr_16 [i_2] [i_1] [i_2] [i_1] [i_3 + 4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) >> ((((~(((unsigned int) (unsigned short)23702)))) - (4294943583U)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_16);
    var_20 = ((/* implicit */unsigned long long int) ((long long int) var_4));
    var_21 |= ((/* implicit */long long int) ((_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) & (4294967291U))) & (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
    var_22 = ((/* implicit */long long int) min((var_22), (min((((long long int) (+(var_0)))), (((4007196307039166774LL) - ((((_Bool)1) ? (7916829700738994023LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
}
