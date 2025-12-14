/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128136
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
    var_12 &= ((/* implicit */unsigned long long int) min((var_6), (var_6)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((var_7) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) arr_6 [i_3]))));
                                var_15 &= ((/* implicit */unsigned long long int) arr_0 [(unsigned char)2]);
                                arr_13 [(signed char)19] = ((/* implicit */long long int) ((short) arr_2 [i_0 + 1]));
                                arr_14 [(_Bool)1] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) (unsigned char)240)))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) ((_Bool) var_7));
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((long long int) (~(((/* implicit */int) arr_4 [i_2] [(unsigned char)7] [(unsigned char)7]))))))));
                }
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        var_18 = ((/* implicit */short) (!(((((/* implicit */int) arr_18 [21U] [i_5])) >= (((/* implicit */int) arr_18 [i_5] [i_5]))))));
        arr_19 [i_5] = ((/* implicit */unsigned int) ((((unsigned int) var_5)) >= (((/* implicit */unsigned int) ((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned char)180)))), ((_Bool)1)))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) min(((+(var_2))), (((/* implicit */unsigned long long int) (_Bool)1))));
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (short i_8 = 1; i_8 < 14; i_8 += 3) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned int) var_8);
                    var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(short)4] [(short)4] [i_6] [i_6] [i_6]))) >= (var_5)))), (arr_1 [i_7] [i_7])))) ? (min((((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (26141701)))), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_6] [i_7] [i_8])) >= (((/* implicit */int) arr_12 [i_8] [17ULL] [i_7] [i_7] [i_6]))))))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        for (unsigned char i_10 = 1; i_10 < 15; i_10 += 3) 
                        {
                            {
                                arr_35 [i_6] [5U] [i_8 + 1] [(short)13] [i_10] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_27 [i_10] [i_7] [i_10]))));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_10 [i_6]), (((/* implicit */unsigned long long int) (unsigned char)207))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((9223372036854775806LL) >= (((/* implicit */long long int) ((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) arr_10 [i_10])) ? (((/* implicit */unsigned long long int) 9223372036720558080LL)) : (arr_10 [i_6]))))))));
                            }
                        } 
                    } 
                    arr_36 [i_8] = ((/* implicit */unsigned char) (~(2121236783)));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_3) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_6] [i_6] [i_6])))))))))));
    }
}
