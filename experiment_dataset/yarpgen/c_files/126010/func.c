/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126010
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
    var_18 = ((/* implicit */unsigned char) ((signed char) var_5));
    var_19 = ((/* implicit */unsigned char) var_13);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_2] [2U] [i_4])) ? (arr_12 [i_0] [i_2] [i_1] [i_0]) : (arr_12 [i_0] [i_0] [i_0] [i_0]))));
                                var_21 = ((/* implicit */unsigned long long int) var_16);
                                var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (var_10))))))) == (((/* implicit */int) var_6))));
                                var_23 = ((/* implicit */unsigned int) (-((-(((((/* implicit */_Bool) 3046522652U)) ? (((/* implicit */int) (unsigned char)125)) : (605730707)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        arr_17 [i_5] [(unsigned char)3] [i_0] = ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_16 [(unsigned char)4] [i_0] [i_1] [i_2] [i_5] [i_5])) : (((/* implicit */int) (unsigned short)2)))), (((/* implicit */int) var_12))))));
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = (~(((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_12 [4] [i_2] [1LL] [i_0]))))));
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55261))) : (170792065U)))))));
                        var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)49284)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (signed char)-112))));
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)48451))));
    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (~((+((+(((/* implicit */int) var_1)))))))))));
}
