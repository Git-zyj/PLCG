/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131962
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
    var_17 = ((/* implicit */int) ((-5497988067688648929LL) > (((/* implicit */long long int) -1519916704))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */_Bool) min((-1519916704), (((/* implicit */int) (!(((/* implicit */_Bool) ((6080756263123710966ULL) & (18188672688769233000ULL)))))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
                arr_9 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) (unsigned short)2517)) ? (6072706444409389178ULL) : (13590613052951264870ULL)))))) ? ((~(((/* implicit */int) arr_1 [i_0 + 2])))) : (((/* implicit */int) ((_Bool) arr_6 [i_0 - 2] [i_0 + 2])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_5 [i_0] [i_0])))), (((/* implicit */int) ((((/* implicit */int) ((_Bool) 1589033947U))) <= ((~(((/* implicit */int) arr_14 [i_2 + 1])))))))));
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))));
                            arr_15 [i_3] [i_0] [i_0] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_11)) * (((/* implicit */int) arr_3 [i_2]))))))) / (((arr_4 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 3] [i_0])))))));
                            arr_16 [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2])) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_2 + 1])) ? ((~(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (short)-29072))))))));
                            var_20 = ((/* implicit */unsigned int) min((((long long int) max((((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0])), (4294967295U)))), (((/* implicit */long long int) ((short) (+(6072706444409389178ULL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)63001)) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)63000)) > (((/* implicit */int) (short)16380)))))))) && (((/* implicit */_Bool) (short)-23293))));
    var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 4360746544254562565ULL)) ? (((/* implicit */int) var_11)) : (var_10)))))) ? (max((((/* implicit */int) var_5)), ((-(((/* implicit */int) (short)-12985)))))) : (((/* implicit */int) ((_Bool) ((var_10) & (-1519916702)))))));
}
