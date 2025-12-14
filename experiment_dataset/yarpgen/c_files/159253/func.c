/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159253
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_3 [i_1] [i_1] [i_0]);
                arr_6 [i_0] = ((/* implicit */unsigned short) var_10);
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_11 *= ((/* implicit */long long int) ((((/* implicit */_Bool) min(((+(var_8))), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (18093510816728752452ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20621)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)249)))) : (min((18093510816728752452ULL), (((/* implicit */unsigned long long int) (unsigned char)255)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_4] [i_4] [i_3 + 1] [i_2 - 1])) * (((var_3) ? (((/* implicit */int) (short)18229)) : (((/* implicit */int) var_3)))))))));
                                var_12 = ((/* implicit */short) (+(max((max((((/* implicit */unsigned long long int) (_Bool)0)), (18093510816728752452ULL))), (((/* implicit */unsigned long long int) arr_3 [i_2] [i_3 + 1] [i_4]))))));
                                arr_14 [i_3] [(unsigned char)20] = ((/* implicit */short) ((((/* implicit */_Bool) 18093510816728752452ULL)) ? (((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((unsigned char) (unsigned char)4))))) : (((/* implicit */int) arr_7 [i_0] [i_2] [i_2] [i_0]))));
                                arr_15 [(short)2] [i_4] [(_Bool)1] [i_2] [i_2] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) arr_11 [i_1] [i_2 - 1] [i_1] [i_3] [i_3 + 1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)7863), (((/* implicit */unsigned short) (unsigned char)237))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)7)))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((_Bool) ((short) (unsigned char)253))))));
    var_14 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)120))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_10))))) : ((~(2097428019200522209LL))))) : (((/* implicit */long long int) (+((-(((/* implicit */int) var_10)))))))));
}
