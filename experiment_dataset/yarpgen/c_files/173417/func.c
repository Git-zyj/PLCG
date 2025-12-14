/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173417
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
    var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_7)), ((+(((((/* implicit */_Bool) var_7)) ? (927822093290039393ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)213)) ? (17518921980419512226ULL) : (927822093290039396ULL))), (((/* implicit */unsigned long long int) max((min((var_5), (var_6))), (var_3))))));
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)-19)), ((short)-31795))))));
                var_17 = ((/* implicit */signed char) (~(max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_1] [12U])) : (((/* implicit */int) (unsigned char)222))))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    arr_7 [i_2] [i_2] [i_2] [(signed char)4] |= ((/* implicit */int) ((short) ((17518921980419512222ULL) | (((/* implicit */unsigned long long int) ((5LL) - (13LL)))))));
                    var_18 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_11)))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 24; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            {
                                arr_18 [4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) (signed char)7))))) ? (17518921980419512212ULL) : (((/* implicit */unsigned long long int) 4095)))) << (((((((/* implicit */int) (unsigned char)50)) << (((((/* implicit */int) (short)-1)) + (26))))) - (1677721569)))));
                                var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) 521790657U)), (13LL)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) (unsigned char)236);
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)61880)) >> (((((/* implicit */int) var_3)) - (83)))))) ? (((/* implicit */int) var_4)) : (min((((/* implicit */int) (unsigned char)51)), (var_7)))));
                    var_22 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_0)))) && (((/* implicit */_Bool) var_6)))) ? (max((((/* implicit */unsigned long long int) arr_13 [i_1] [i_3] [11LL] [i_1])), (min((7601907000861588178ULL), (((/* implicit */unsigned long long int) (unsigned short)28738)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)119)), (var_0)))) ? (((((/* implicit */_Bool) var_11)) ? (var_11) : (var_11))) : (((/* implicit */int) var_9)))))));
                    var_23 = max((min((((/* implicit */long long int) (short)1)), (arr_9 [i_0] [i_1] [17]))), (((/* implicit */long long int) min((((((/* implicit */_Bool) (short)1)) ? (var_7) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))))));
                }
            }
        } 
    } 
}
