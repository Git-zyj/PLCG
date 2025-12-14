/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135157
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((-(((arr_1 [(unsigned short)4] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) <= (var_10)))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))) + (((/* implicit */int) (short)(-32767 - 1)))))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_2]))) : (3007568521U))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_3 [i_0] [i_0] [i_1]), (arr_3 [i_0] [i_4] [i_4])))) / (min(((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((_Bool) var_6)))))));
                                var_15 &= ((/* implicit */signed char) (unsigned char)255);
                                var_16 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)64)) ? (16373176235825700925ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)13334)))))))));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_18 [i_0] [2] [i_1 - 1] [i_0] [i_5] [i_1 - 1] = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) min(((unsigned short)20336), (((/* implicit */unsigned short) (_Bool)0))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (16373176235825700925ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3)))))))));
                                var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_6] [i_5] [i_1] [i_1 - 2])) * (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))), (min((((((/* implicit */_Bool) 0U)) ? (16373176235825700925ULL) : (((/* implicit */unsigned long long int) 3675844332U)))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)182)), (var_9))))))));
                                var_19 *= ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) 441796714U)), (var_3)))));
                            }
                        } 
                    } 
                    var_20 = max((13596772126911566132ULL), (((/* implicit */unsigned long long int) (_Bool)1)));
                    var_21 ^= ((/* implicit */int) var_6);
                }
            } 
        } 
        var_22 *= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))));
        var_23 *= ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)51)), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)51))))) ? (((/* implicit */int) (unsigned short)9824)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))));
    }
    for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
    {
        arr_21 [i_7] = ((/* implicit */unsigned char) ((unsigned int) ((unsigned char) (!(((/* implicit */_Bool) 2073567837883850691ULL))))));
        arr_22 [i_7] [i_7] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((var_5), (arr_19 [i_7]))))));
        arr_23 [(unsigned char)20] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (+(((/* implicit */int) (signed char)106)))))) + ((+(((/* implicit */int) (short)-12819))))));
    }
    var_24 &= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-14))));
}
