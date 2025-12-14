/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12343
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_12)) : (13935143389171349365ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)31813))))))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (798092181U))))))))));
    var_17 |= ((/* implicit */short) max(((+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_7)) : (7272938653964610595ULL))))), (((/* implicit */unsigned long long int) var_1))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) max((((unsigned long long int) 7272938653964610595ULL)), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) <= (402300909U))))));
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) arr_2 [i_1 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) : (min((min((var_10), (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])))), (((/* implicit */int) max((((/* implicit */short) var_5)), ((short)-32625))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) 17U)), (var_4))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)1)), (var_2))))))) ? ((~(((/* implicit */int) arr_8 [i_0] [i_2] [i_4 - 1])))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 639716279U)), (11173805419744941021ULL)))) ? (((((/* implicit */_Bool) 639716279U)) ? (((/* implicit */int) var_5)) : (arr_13 [i_0] [i_0] [i_0] [i_0] [15ULL]))) : (((/* implicit */int) min(((short)-13152), (((/* implicit */short) arr_11 [i_0] [i_0] [i_0] [i_0])))))))));
                                arr_19 [i_0] [i_3] [11LL] [i_4] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (639716279U) : (((/* implicit */unsigned int) var_0)))))))));
                                var_19 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((int) arr_16 [i_4 - 3] [i_4] [i_3] [(signed char)1] [(signed char)16] [i_0] [i_0])), (((/* implicit */int) arr_17 [(_Bool)1]))))), (((((/* implicit */_Bool) -151188284)) ? (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_2] [i_4])), (6215940022787917872ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_3 [12ULL] [i_1] [i_0])))))))));
                                var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)70))))) ? (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_14))) ? (((arr_4 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (7272938653964610576ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_14)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_4);
}
