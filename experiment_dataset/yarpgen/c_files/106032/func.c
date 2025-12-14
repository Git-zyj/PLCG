/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106032
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
    var_18 = ((/* implicit */short) ((unsigned int) max(((-(((/* implicit */int) var_11)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
    var_19 = ((/* implicit */short) max(((+(var_14))), (((/* implicit */long long int) ((((((/* implicit */int) (short)-8850)) + (2147483647))) << (((((/* implicit */int) ((unsigned short) var_16))) - (56055))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)59)) ? (1304569285878596467LL) : (((/* implicit */long long int) 1781258817))));
        var_21 = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) -1781258818)), (max((((/* implicit */unsigned long long int) var_0)), (var_5)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)4137)) ? (((((/* implicit */_Bool) 33292288)) ? (((/* implicit */int) (short)-2)) : (-1781258818))) : (((/* implicit */int) ((1781258817) == (((/* implicit */int) var_10))))))));
                                arr_14 [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) (short)-31294))))) ? (arr_9 [i_1] [i_2 + 1] [i_3] [i_4]) : (((/* implicit */long long int) (~(((/* implicit */int) arr_8 [8ULL])))))));
                                arr_15 [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */int) arr_1 [i_5]);
                                arr_16 [i_1] [i_2 + 1] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (~(var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_7)))) : (((((/* implicit */_Bool) 3484171307U)) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) : (571144168532729067ULL)));
                                var_23 ^= ((((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned short)37680), (((/* implicit */unsigned short) var_10))))) * (((/* implicit */int) arr_3 [i_2 + 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (((/* implicit */unsigned int) min((-1781258838), (((/* implicit */int) arr_0 [i_4]))))) : (max((var_3), (arr_10 [i_1] [i_2 + 1] [i_4] [2LL])))))) : (max((((/* implicit */unsigned long long int) arr_3 [i_2 + 1])), (min((4611686018427387904ULL), (((/* implicit */unsigned long long int) arr_5 [i_1])))))));
                            }
                        } 
                    } 
                    var_24 = ((((/* implicit */_Bool) (~(arr_12 [i_2 + 1] [i_3] [i_2] [i_2 + 1])))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_8 [i_3])), (4067805300U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (-1519430077) : (((/* implicit */int) arr_6 [i_1] [i_2 + 1] [i_3]))))) : (arr_10 [i_2] [i_2 + 1] [i_3] [i_3]))) : (((/* implicit */unsigned int) (-((~(((/* implicit */int) var_13))))))));
                    var_25 = ((/* implicit */long long int) arr_11 [i_1] [i_3] [i_1]);
                }
            } 
        } 
        arr_17 [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (max((468379837), (var_6)))))));
        var_26 = ((/* implicit */long long int) (-(arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
    }
    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5613273065586884950LL)) ? (((/* implicit */int) arr_8 [i_6])) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((unsigned short) arr_19 [i_6] [i_6]))) : (((int) arr_18 [i_6]))))))));
        var_28 -= min((((/* implicit */int) ((short) (-(var_6))))), (1781258814));
        var_29 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3840))) | (0LL))))), (min((max((((/* implicit */long long int) arr_7 [i_6] [i_6] [i_6])), (arr_4 [i_6]))), (((/* implicit */long long int) ((((-35271701) + (2147483647))) >> (((var_0) - (45070560))))))))));
        arr_20 [i_6] [i_6] = ((/* implicit */long long int) var_9);
        var_30 -= (~(((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (arr_1 [(unsigned char)0])))) + (-2465956428999122111LL))));
    }
}
