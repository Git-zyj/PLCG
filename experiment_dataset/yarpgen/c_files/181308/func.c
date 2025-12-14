/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181308
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
    var_18 = ((/* implicit */unsigned int) var_5);
    var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-6923)), (min((var_14), (((/* implicit */unsigned short) var_7)))))))) - (min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) var_11)) : (var_4))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) var_0);
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 16; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        for (short i_4 = 4; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_2] [i_0] [i_4 + 2] = ((/* implicit */unsigned int) var_4);
                                var_21 += ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_5)), (var_16))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1 + 1] [i_0] [i_3] [i_0] [i_2] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_13)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_4 - 1])) : (((/* implicit */int) var_2))))) : (arr_2 [i_0 + 1])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 1) 
                    {
                        for (long long int i_7 = 2; i_7 < 17; i_7 += 4) 
                        {
                            {
                                var_22 -= ((/* implicit */unsigned int) ((((((-1535083932) < (((/* implicit */int) (unsigned short)32219)))) || (((/* implicit */_Bool) var_13)))) && (((/* implicit */_Bool) ((long long int) var_16)))));
                                arr_20 [i_0] [i_1 - 2] [i_5] [i_6] [i_5] = min((((long long int) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_5] [i_6 + 2] [i_7 - 1])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_1))))) : (((/* implicit */int) (signed char)49))))));
                                var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_0] [i_5] [i_5] [i_6 + 1]))))), (((((/* implicit */_Bool) arr_14 [i_0] [i_1 - 2] [i_6 + 2])) ? (arr_5 [i_0] [i_1 - 1] [i_5] [i_6 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                                var_24 = ((/* implicit */int) ((((((/* implicit */long long int) ((unsigned int) (signed char)-12))) >= (min((((/* implicit */long long int) var_7)), (arr_2 [i_7]))))) ? (((((min((var_4), (((/* implicit */long long int) var_17)))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) (signed char)13)) || (var_2)))))) : (((/* implicit */long long int) ((((/* implicit */int) ((short) var_14))) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)119))))))))));
                                var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)5))))) >= (((((1179419413) != (((/* implicit */int) (signed char)-3)))) ? (var_16) : (var_9)))));
                            }
                        } 
                    } 
                } 
                arr_21 [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) (~(min((var_15), (var_12)))))));
            }
        } 
    } 
    var_26 = var_17;
    var_27 -= ((/* implicit */signed char) var_6);
}
