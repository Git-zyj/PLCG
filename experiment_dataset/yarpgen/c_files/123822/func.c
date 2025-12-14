/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123822
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
    var_10 = ((/* implicit */short) ((((min((var_6), (((/* implicit */unsigned long long int) (signed char)-117)))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_2))))))) >> (((((((/* implicit */_Bool) (+(var_8)))) ? (min((((/* implicit */unsigned int) (signed char)117)), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4935))))) - (100U)))));
    var_11 = ((/* implicit */unsigned long long int) min((min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) var_7)))), (((((/* implicit */int) ((unsigned char) var_9))) * (((((/* implicit */int) var_2)) - (((/* implicit */int) var_4))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) var_3);
                        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) var_5))));
                    }
                    for (int i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 11; i_5 += 1) 
                        {
                            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) var_1))));
                            var_14 = arr_12 [i_2] [i_2] [i_2 - 1] [i_0];
                        }
                        arr_18 [i_1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) min(((signed char)-117), ((signed char)117)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-118)) || (((/* implicit */_Bool) var_6))))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)224))))))))));
                        var_15 *= ((/* implicit */unsigned short) arr_8 [i_0] [i_2] [i_2 - 1] [i_2]);
                        arr_19 [i_1] [10] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned char)32), ((unsigned char)158)))) ? ((+(18446744073709551615ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]))) & (((((/* implicit */_Bool) arr_14 [11])) ? (((/* implicit */unsigned long long int) arr_5 [i_1] [i_2])) : (17021946358670580720ULL)))))));
                        var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(var_8))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)158)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_3 [i_1] [i_2 + 1]))) || (((/* implicit */_Bool) min((var_0), (((/* implicit */int) var_7)))))))) : (((/* implicit */int) (unsigned short)47391))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        arr_23 [i_0] [(unsigned char)2] [i_6] [i_0] |= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_1] [i_1]))));
                        arr_24 [i_1] = ((/* implicit */int) var_1);
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0])) ^ (((/* implicit */int) arr_14 [0U]))))) ? (((18446744073709551612ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [5U])) >= (((/* implicit */int) (unsigned char)158))))))));
                    }
                    var_18 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) (-(arr_8 [i_0] [i_1] [i_1] [10ULL])))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) + (var_6)))))));
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) (unsigned char)69)))))), (min((arr_0 [i_0]), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)118))))))))))));
                }
            } 
        } 
    } 
}
