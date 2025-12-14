/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108232
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
    for (signed char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_17 += ((/* implicit */unsigned short) arr_3 [i_2 - 1]);
                            arr_10 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (arr_9 [i_0]) : (4687753069600530260LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)8004))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_9 [i_0])))))) ? (((/* implicit */int) ((min((var_10), (((/* implicit */unsigned long long int) 462215601U)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */int) arr_5 [i_2] [i_1])))))))) : (((((/* implicit */int) ((_Bool) 4687753069600530269LL))) & (((((/* implicit */_Bool) 6812762855834385557ULL)) ? (1742933465) : (((/* implicit */int) (short)2566))))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] = ((/* implicit */_Bool) arr_2 [i_0]);
                arr_12 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((short) (+(((unsigned long long int) arr_3 [i_0])))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) max((((11633981217875166059ULL) + (((/* implicit */unsigned long long int) 462215601U)))), (((((/* implicit */_Bool) ((long long int) (unsigned char)191))) ? (((/* implicit */unsigned long long int) 4687753069600530278LL)) : (var_10)))));
    var_19 = ((/* implicit */long long int) (((+(6812762855834385557ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    var_20 = ((/* implicit */unsigned short) max((max((max((((/* implicit */long long int) var_3)), (var_16))), (((/* implicit */long long int) (short)18732)))), (((/* implicit */long long int) var_14))));
}
