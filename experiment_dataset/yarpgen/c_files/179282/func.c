/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179282
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (var_19) : (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_12)) : (var_5)))) : (((((/* implicit */_Bool) var_15)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))) > (((((/* implicit */_Bool) 831995866U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65532))) : (9ULL)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (-((~(((unsigned int) arr_5 [i_0] [i_0] [i_0])))))))));
                    arr_7 [i_0] = ((/* implicit */unsigned int) ((var_5) == (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (var_17) : (((/* implicit */unsigned long long int) var_15)))) <= (((var_3) & (((/* implicit */unsigned long long int) var_9)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */long long int) var_14)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4] [(unsigned short)14] [i_2] [i_0] [i_0])))))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned int) arr_12 [i_4 + 1] [i_4] [i_4] [i_4] [i_4] [6U])))))));
                                var_23 |= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */unsigned int) 2147483647))))) ? (((/* implicit */unsigned int) var_18)) : (var_2))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_3] [i_3])) ? (var_5) : (((/* implicit */int) var_4)))))));
                                var_24 = ((/* implicit */short) var_19);
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (~(((((/* implicit */long long int) -2147483647)) ^ (7792925903787988016LL))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) var_13)) ? (16U) : (((/* implicit */unsigned int) var_5))))))))));
                                var_27 &= ((/* implicit */short) ((((((/* implicit */_Bool) (+(1462187232)))) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_5] [16])) : (((((/* implicit */_Bool) (short)-1377)) ? (((/* implicit */unsigned long long int) var_7)) : (var_3))))) % (((/* implicit */unsigned long long int) ((((var_17) <= (((/* implicit */unsigned long long int) var_5)))) ? (3610419016U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-60))))))))));
                                var_28 = ((/* implicit */signed char) 10120188010870840441ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */short) ((((((var_8) == (var_16))) && (((var_2) != (((/* implicit */unsigned int) -1120225980)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) var_6))))) <= (((var_1) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65530))))))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-4040))))) / (max((((/* implicit */long long int) var_2)), (var_15)))))));
}
