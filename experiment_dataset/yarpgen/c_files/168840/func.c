/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168840
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) var_6);
        var_18 = ((/* implicit */_Bool) var_10);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((_Bool) ((short) ((var_3) > (((/* implicit */unsigned long long int) 3685609181U))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((int) ((arr_4 [i_1]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_1])))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) var_5)), ((+(14336)))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 4; i_2 < 13; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned long long int) var_0);
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) (~(max((var_6), (-14362)))));
                                arr_22 [i_2] [i_2] [i_4] [i_2] [i_2] = ((/* implicit */_Bool) var_16);
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) ? (-10552074) : (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6 + 1] [i_6 + 1] [i_2 - 1]))) : (max((((/* implicit */unsigned int) arr_17 [i_2 - 3] [i_6 + 1] [i_2 - 3])), (var_15)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) arr_13 [9LL] [i_3]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            {
                                arr_27 [i_2] [0ULL] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_26 [i_2] [i_7] [0] [0] [i_2] [i_2]))) ? (min((min((2796154720568513123LL), (-2796154720568513129LL))), (((/* implicit */long long int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_13 [i_2] [i_2]))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) == (((/* implicit */int) var_9)))))))) ? (((unsigned long long int) var_12)) : (((((8ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (-1917027620))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
