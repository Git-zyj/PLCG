/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161143
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
    var_17 |= ((/* implicit */short) ((((/* implicit */int) (short)0)) + (((/* implicit */int) (unsigned char)200))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_18 += var_14;
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_19 = min((max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)-123)))), (((/* implicit */int) max((((/* implicit */unsigned short) (short)(-32767 - 1))), (var_0)))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_3 + 2] [i_3 + 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_11 [i_0] [9LL] [i_3 + 2] [i_3 + 2]))))) ? (((/* implicit */int) min((var_14), (((/* implicit */unsigned char) var_5))))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)122))))));
                                var_21 = ((/* implicit */_Bool) ((((long long int) max((0LL), (((/* implicit */long long int) var_3))))) / (((/* implicit */long long int) ((((/* implicit */int) ((short) arr_4 [i_0] [i_1]))) + (((((/* implicit */_Bool) -3423161102188661923LL)) ? (((/* implicit */int) (short)-25389)) : (((/* implicit */int) var_16)))))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (((_Bool)1) ? (4294967295U) : (11U))))));
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) max((var_0), (((/* implicit */unsigned short) arr_11 [2LL] [2LL] [i_0] [i_0]))))) >= (((/* implicit */int) ((arr_3 [i_0]) > (((/* implicit */int) var_14))))))))) * (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) var_4))))) ? ((((_Bool)1) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) var_2))))))));
                arr_12 [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_1] [i_0] [(unsigned short)5])) ? (max((var_12), (((/* implicit */unsigned long long int) arr_3 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_15)))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) var_13);
}
