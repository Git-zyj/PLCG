/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189560
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_14 = ((((arr_1 [i_0] [(_Bool)1]) + (9223372036854775807LL))) << (((((arr_1 [i_0] [i_0]) + (2889161501062572517LL))) - (6LL))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 23; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2]))) + (var_3)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [(signed char)11] [i_3] [i_4] = ((/* implicit */unsigned long long int) (unsigned char)240);
                                var_17 -= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) 9122426824147232092LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [11ULL] [i_4]))) : (arr_8 [i_2] [17U]))));
                                var_18 = ((/* implicit */unsigned short) ((signed char) arr_1 [(unsigned short)16] [i_4]));
                                arr_14 [i_0] [(_Bool)1] [i_0] [i_3] [i_0] [i_3] = ((/* implicit */unsigned short) (-((~(arr_0 [i_3])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (short i_6 = 2; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_0]))));
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [17U] [i_1] [17U] [i_5] [i_6 + 2]))) : (var_12)))) ? (var_7) : ((+(var_5)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0]))));
    }
    var_22 = ((/* implicit */unsigned short) var_3);
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((var_7), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 9122426824147232092LL)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((short) var_1)))))))))));
}
