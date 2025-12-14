/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169042
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
    var_16 = ((/* implicit */unsigned short) min(((((!(var_7))) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) var_12))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((var_6) << (((((/* implicit */int) (short)24420)) - (24396))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_17 += ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)255)) ? (arr_2 [(short)4]) : (((/* implicit */unsigned long long int) var_3)))) << ((((~(((/* implicit */int) (unsigned char)0)))) + (44)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (unsigned short)5))));
                                arr_13 [1] [i_1] [(_Bool)0] [i_1] [11LL] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_6 [(unsigned short)7] [(short)8] [i_1] [i_3]))))) ? (((((/* implicit */_Bool) arr_4 [(unsigned char)2] [(short)13] [i_2])) ? (18ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))) ? ((-(((/* implicit */int) max((arr_12 [i_0] [i_1] [8LL] [i_1] [13LL]), (((/* implicit */unsigned short) arr_4 [i_0] [i_1] [(signed char)13]))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) 1879480697)), (var_6)))) ? (((var_7) ? (((/* implicit */int) arr_1 [(unsigned char)13])) : (((/* implicit */int) (unsigned char)240)))) : (((/* implicit */int) ((short) var_9)))))));
                                arr_14 [(unsigned char)2] [11LL] [i_1] [i_1] [i_1] [8] = ((/* implicit */signed char) ((unsigned short) ((unsigned long long int) (signed char)102)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) (-(((/* implicit */int) ((((var_14) - (((/* implicit */unsigned int) -1879480695)))) == (((/* implicit */unsigned int) ((((/* implicit */int) (short)4095)) & (((/* implicit */int) (short)-28494))))))))));
}
