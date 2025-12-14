/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114511
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
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_1] = (i_1 % 2 == 0) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((var_0) + (2147483647))) << (((((/* implicit */int) arr_2 [i_1])) - (146))))) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(unsigned char)21])))))))) : (((/* implicit */int) (unsigned char)180)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((var_0) + (2147483647))) << (((((((/* implicit */int) arr_2 [i_1])) - (146))) - (47))))) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(unsigned char)21])))))))) : (((/* implicit */int) (unsigned char)180))));
                arr_7 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((int) var_13)) != (((/* implicit */int) min((arr_2 [i_1]), (arr_3 [i_0])))))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) 1379415864))));
                            var_16 = ((/* implicit */int) var_2);
                            arr_13 [i_1] [(unsigned char)0] [i_2] [(unsigned char)0] [i_2] = max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)117)) && (((/* implicit */_Bool) var_0))))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(unsigned char)12] [i_2 + 2] [i_2 + 1] [(unsigned char)12]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)80)))))));
                            arr_14 [(short)6] [i_1] [i_2] [16ULL] [(short)22] = (unsigned char)255;
                        }
                    } 
                } 
                var_18 &= ((/* implicit */short) (~(((/* implicit */int) (unsigned char)80))));
            }
        } 
    } 
    var_19 = ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) -1379415865)) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) (unsigned char)98)))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_3))))) : (var_7));
}
