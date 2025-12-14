/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141888
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
    var_16 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) (((_Bool)1) ? (2751666045U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((_Bool) arr_4 [i_0]));
                    var_17 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_2]) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54)))))))), (((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (((((/* implicit */_Bool) var_11)) ? (arr_5 [i_1] [i_2]) : (((/* implicit */unsigned long long int) 2147483636)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)-8024))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) (unsigned char)72)))), (((/* implicit */int) (unsigned char)178))));
                                var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_15 [i_1] [i_1] [i_2] [i_3] [i_4 - 3] [i_0] [i_1])), (min((((((/* implicit */_Bool) arr_5 [i_2] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_0])))), (((((/* implicit */int) (unsigned char)72)) & (((/* implicit */int) (unsigned char)62))))))));
                                arr_17 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_1] [i_4 - 2] [i_4])), (arr_14 [i_1] [i_1] [i_2] [i_4 + 1] [i_4])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((var_0) > (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (var_4)))))));
    var_21 = ((/* implicit */signed char) -1511374903);
    var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((/* implicit */int) max((var_12), (((/* implicit */short) (unsigned char)32))))) : (var_14)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)45464)), (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) var_0)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1190061384)) ? (((int) var_15)) : (((/* implicit */int) var_4))))));
}
