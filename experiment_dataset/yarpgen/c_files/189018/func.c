/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189018
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((int) ((int) var_15)));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_15 [i_4] [i_4] [i_2] [i_3] [i_4] = ((/* implicit */int) (-((-(arr_9 [i_0] [i_1] [(unsigned short)5] [i_2] [i_4])))));
                                arr_16 [i_4] [i_3] [i_3] [i_2] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1048575U)) ? (((/* implicit */int) (short)-25192)) : (((/* implicit */int) (short)-25206))))) ? (((((/* implicit */_Bool) (+(389451057)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25207))) : (arr_13 [(short)0] [i_1] [i_2] [i_3] [i_4]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */long long int) 262140)) == (-3152099589472725257LL)))))))));
                            }
                        } 
                    } 
                    arr_17 [0] [i_0] [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_2] [i_1] [i_2] [6] [i_1])) ? (arr_13 [i_0] [i_0] [i_0] [7] [(short)9]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -275523152)) ? (812670746312742471LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_13))) ^ (((((/* implicit */_Bool) 2115519520U)) ? (((/* implicit */int) var_0)) : (var_9)))))) ? (((/* implicit */int) var_14)) : ((~(((var_6) ? (-1775279400) : (var_12)))))));
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (-(var_11))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (var_3)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2770))) : (var_4))) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) 827575935)) != (var_1))) ? (((((/* implicit */_Bool) 389451053)) ? (827575951) : (-85895803))) : ((-(((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned long long int) (+(var_3)))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) -1387903358)), (43797676U)))) ? (((/* implicit */unsigned long long int) var_11)) : (var_4))))))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) (((~(1680751462))) <= (((/* implicit */int) ((598387974) <= (var_15)))))))));
}
