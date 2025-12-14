/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108092
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)11)) * (((/* implicit */int) (signed char)-76))));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_11) ^ ((~(var_12)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_12)))) : (var_12)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_3 [i_1 - 1] [i_0]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_0]))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = var_3;
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    var_16 = ((/* implicit */unsigned long long int) var_0);
                    var_17 ^= ((/* implicit */short) ((((/* implicit */int) var_3)) == (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_13)))))))));
                    var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_13 [i_1]))) : ((~(((arr_3 [i_0] [i_0]) - (((/* implicit */unsigned long long int) var_13))))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 4; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -677020053)) ? (((/* implicit */int) (short)11)) : (((/* implicit */int) (unsigned char)32))))) < (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_6])) || (((/* implicit */_Bool) var_0)))))) % (var_0)))));
                                arr_19 [i_0] [i_1 - 2] [i_4] [i_5] [i_0] [i_6 - 4] [i_0] &= ((/* implicit */unsigned char) ((var_8) >> (((((/* implicit */int) var_1)) - (70)))));
                                arr_20 [20LL] [(unsigned short)19] [i_0] [i_5] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_2);
                                arr_21 [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)20)))))) - (((var_13) & (var_11))))) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_7 [i_0])) : (var_5))))))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(var_13))))));
                }
                for (signed char i_7 = 2; i_7 < 23; i_7 += 2) 
                {
                    arr_25 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_8) > (arr_4 [i_0])))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ? (((/* implicit */unsigned long long int) (~(var_7)))) : ((-(arr_9 [i_1 - 1] [i_7 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        for (signed char i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            {
                                arr_33 [i_0] [i_0] [i_7 - 1] [i_9] = ((/* implicit */short) var_12);
                                var_20 = var_13;
                            }
                        } 
                    } 
                }
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    var_21 = ((/* implicit */unsigned char) var_5);
                    var_22 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_10] [(short)17] [i_0] [i_1 - 2] [i_0] [i_0])))))))))));
                }
            }
        } 
    } 
}
