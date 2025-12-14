/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163976
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
    var_15 = ((/* implicit */unsigned long long int) max((((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)130)))) & (min((var_9), (((/* implicit */int) var_5)))))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)-21082)) || (((/* implicit */_Bool) var_1))))))));
    var_16 = ((/* implicit */_Bool) ((((min((((((/* implicit */int) var_8)) - (((/* implicit */int) var_4)))), (((int) 9007199254740991ULL)))) + (2147483647))) << (((((/* implicit */int) var_12)) - (26436)))));
    var_17 = ((/* implicit */_Bool) ((((((-1LL) & (((/* implicit */long long int) var_10)))) + (((/* implicit */long long int) ((/* implicit */int) ((short) -10LL)))))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((int) 35LL)))))));
    var_18 = ((/* implicit */short) ((_Bool) ((((/* implicit */long long int) (~(var_10)))) > (-18LL))));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */int) ((((((-10LL) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)1] [i_0]))))) * (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2]))))))) - (((/* implicit */long long int) var_2))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            arr_13 [i_4] [i_1] [i_4] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((-3LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7447)))));
                            var_20 *= ((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_1]);
                        }
                        for (unsigned char i_5 = 4; i_5 < 14; i_5 += 2) /* same iter space */
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_0 - 2] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)49152)) <= (((/* implicit */int) (unsigned short)49124))))), (arr_14 [i_0] [i_2] [i_3] [i_3])));
                            arr_17 [i_0] [i_1] [i_1] [i_0] [i_5] = ((/* implicit */long long int) arr_8 [i_0] [i_0]);
                            var_21 = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) var_3)), (var_0))) >> (min((((((/* implicit */int) arr_8 [i_1] [i_1])) % (((/* implicit */int) var_4)))), (((((((/* implicit */int) var_8)) + (2147483647))) << (((4009220875U) - (4009220875U)))))))));
                        }
                        for (unsigned char i_6 = 4; i_6 < 14; i_6 += 2) /* same iter space */
                        {
                            var_22 ^= ((/* implicit */_Bool) 12LL);
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */int) ((signed char) (_Bool)1));
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((int) min((((/* implicit */int) arr_0 [i_6] [i_6])), (((((/* implicit */int) var_13)) - (((/* implicit */int) arr_1 [i_0] [i_1]))))))))));
                        }
                        var_24 ^= ((/* implicit */_Bool) ((((min((arr_4 [i_3] [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) (_Bool)1)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1]))))))))) & (((min((((/* implicit */unsigned long long int) var_5)), (var_14))) / (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_1]))))));
                    }
                } 
            } 
            arr_21 [i_0] = ((/* implicit */_Bool) 27LL);
        }
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_24 [i_7] [i_7] = ((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) (unsigned char)252)), (-1LL))));
        arr_25 [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
    }
    for (int i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_9 = 1; i_9 < 15; i_9 += 4) 
        {
            var_25 = ((/* implicit */int) -12LL);
            arr_32 [i_8] [i_9] [i_8] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((int) -11LL))))) <= (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) & (arr_28 [i_8])))), (min((2362336390263806954ULL), (((/* implicit */unsigned long long int) (unsigned short)511)))))));
            arr_33 [i_8] [i_8] [i_9] = (signed char)112;
        }
        arr_34 [i_8] = ((/* implicit */unsigned int) var_2);
    }
}
