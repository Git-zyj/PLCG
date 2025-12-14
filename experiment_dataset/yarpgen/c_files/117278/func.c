/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117278
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
    var_11 = ((/* implicit */signed char) var_10);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)0))))) ^ (((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_8)), (((unsigned short) var_5))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 15; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_12 -= ((/* implicit */long long int) ((_Bool) 5343003471343095186LL));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            var_13 = ((/* implicit */unsigned long long int) var_2);
                            arr_17 [i_0] [17] [i_2] [i_2] [i_0] [i_4] = ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)0)), (((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned char)21))))))) ? (max((arr_14 [i_0] [i_1] [i_0] [i_2 - 4] [i_2 + 1] [i_2 + 3] [16ULL]), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (arr_0 [i_3]))))));
                            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (+((-(((unsigned int) var_5)))))))));
                        }
                        for (unsigned char i_5 = 2; i_5 < 17; i_5 += 3) 
                        {
                            arr_20 [i_0] [i_0] [i_2] [i_3] [i_3] [i_3] [i_5 - 1] = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) & (((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */int) (unsigned short)26712)) : (((/* implicit */int) (signed char)4))))));
                            var_15 = ((/* implicit */short) max((((/* implicit */long long int) var_0)), ((+(((-5343003471343095187LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                            arr_21 [i_0] [i_0] [i_2 - 2] [(signed char)4] [i_5] = ((/* implicit */unsigned int) ((min((((((/* implicit */int) var_5)) >> (((var_4) + (2190554455164022441LL))))), (((/* implicit */int) var_8)))) < (((/* implicit */int) arr_6 [i_1] [i_3]))));
                            var_16 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)-9)))))))));
                            arr_22 [i_0] [i_0] [i_0] [i_2] [i_5] &= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((3939254870834279165LL) == (((/* implicit */long long int) ((/* implicit */int) var_7)))))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))) : (((((/* implicit */_Bool) var_1)) ? (((long long int) (unsigned short)26713)) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                        }
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((max((var_6), (((/* implicit */long long int) var_2)))) / (((/* implicit */long long int) ((int) var_4))))))));
                            arr_25 [i_6] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_6] [i_0] [i_0])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0])))))) / (var_1))) - (((/* implicit */unsigned long long int) ((var_4) - (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_2 - 1] [i_2] [i_2 + 3] [(unsigned char)2] [i_2 - 1]))))))));
                            var_18 = min((((/* implicit */long long int) ((((/* implicit */_Bool) -5343003471343095175LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)9728))))), (min((((/* implicit */long long int) arr_23 [i_2] [i_6])), (((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                        }
                        arr_26 [i_3] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)12)) / (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_1)))))));
                        var_19 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))) ? (((1610612736U) | (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))))));
                        var_20 &= ((/* implicit */unsigned short) ((short) ((min((var_9), (((/* implicit */unsigned int) var_10)))) << ((((+(var_9))) - (968345505U))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */long long int) arr_13 [i_0] [i_0] [11LL] [i_0] [i_0]);
    }
    for (unsigned int i_7 = 4; i_7 < 8; i_7 += 1) 
    {
        var_22 = ((/* implicit */short) (~(((((var_4) + (9223372036854775807LL))) >> ((((-(((/* implicit */int) var_7)))) - (86)))))));
        arr_31 [i_7] = ((/* implicit */unsigned char) ((((var_9) < (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) ? (((/* implicit */long long int) (((((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_23 [i_7] [i_7])))) + (2147483647))) >> (((((/* implicit */int) var_7)) + (135)))))) : (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned short) (short)-25377))))) ? (min((((/* implicit */long long int) (short)32070)), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_10))))))))));
    }
    for (short i_8 = 1; i_8 < 21; i_8 += 2) 
    {
        arr_34 [i_8 + 1] = ((/* implicit */long long int) max((min((arr_33 [i_8 + 2]), (max((arr_32 [13]), (((/* implicit */unsigned int) var_0)))))), ((~(arr_33 [i_8 - 1])))));
        arr_35 [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
    }
}
