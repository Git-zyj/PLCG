/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107896
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
    var_14 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) + (2147483647))) << (((((((/* implicit */int) arr_3 [i_1 + 1] [i_2])) + (27480))) - (21)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1])))))) : (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)88))))));
                    var_16 = ((/* implicit */long long int) (-(((1810028152U) % (((/* implicit */unsigned int) min((var_1), (1968760053))))))));
                }
                for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) max((arr_9 [i_1] [i_3] [i_1] [12LL]), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) <= ((-(((/* implicit */int) var_10))))))))))));
                    var_18 = ((/* implicit */short) (~(8388604LL)));
                }
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 1; i_5 < 24; i_5 += 1) 
                    {
                        var_19 ^= ((/* implicit */signed char) min((var_7), (((/* implicit */unsigned long long int) var_9))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65527)) << (((((((((/* implicit */int) var_8)) | (((/* implicit */int) var_10)))) + (107))) - (12)))));
                    }
                    arr_16 [i_1] [i_1 + 1] [(unsigned char)16] [i_4] = ((/* implicit */short) (unsigned char)218);
                    arr_17 [i_0] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */signed char) ((((((/* implicit */int) (short)-12)) + (2147483647))) << (((((arr_14 [i_0] [i_1 + 2] [i_1] [i_4] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)45))))) - (16700905138978974902ULL)))))) : (((/* implicit */signed char) ((((((/* implicit */int) (short)-12)) + (2147483647))) << (((((((arr_14 [i_0] [i_1 + 2] [i_1] [i_4] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)45))))) - (16700905138978974902ULL))) - (5539512463766876430ULL))))));
                    var_21 = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_12)) / (var_1)))));
                }
                var_22 *= ((/* implicit */short) -5774781410719848250LL);
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_2))))) == (min((5774781410719848250LL), (((/* implicit */long long int) var_0)))))))));
    var_24 = ((/* implicit */short) var_7);
}
