/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183508
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
    var_13 = ((/* implicit */unsigned short) var_4);
    var_14 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_0)) ? (432688189003650699ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (var_3))))))) ? (((((/* implicit */_Bool) var_0)) ? ((-(var_2))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (3266829080U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((min((((((/* implicit */unsigned int) ((/* implicit */int) (short)-17135))) & (var_2))), (((/* implicit */unsigned int) var_4)))) > (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                            arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */long long int) 1028138216U)) : (arr_3 [i_0 - 3] [i_3]))) & (((/* implicit */long long int) (~(1028138216U)))))), (((/* implicit */long long int) ((min((((/* implicit */long long int) -155159045)), (9223372036854775807LL))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))))));
                            arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) var_1)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_16 |= ((/* implicit */unsigned long long int) var_1);
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_2) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-29298)) ? (-155159045) : (((/* implicit */int) var_1)))))))) < (((/* implicit */int) ((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)0)))) > (((((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_4] [i_5])) - (((/* implicit */int) (unsigned short)52120)))))))));
                            var_18 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((((/* implicit */short) var_8)), (arr_1 [i_1] [i_5])))) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned short)0))))));
                            arr_18 [i_1] [i_4] [13] [i_1] [i_0] [i_1] = ((/* implicit */short) (-(((/* implicit */int) var_4))));
                        }
                    } 
                } 
                arr_19 [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((short) arr_0 [i_1]))), (((((2214624587U) > (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) ? (((/* implicit */int) (short)-10)) : (((/* implicit */int) (short)21028))))));
            }
        } 
    } 
}
