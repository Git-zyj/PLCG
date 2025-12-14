/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155330
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_1 + 1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((short) 4294967295U)))))) == (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) - (min((((/* implicit */unsigned int) arr_0 [i_1] [i_0])), (1U)))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_17 = ((/* implicit */long long int) ((((((/* implicit */int) ((unsigned char) 4294967276U))) | (((/* implicit */int) arr_1 [i_0] [i_2])))) / (((/* implicit */int) (short)32767))));
                    var_18 *= arr_2 [(short)6] [(short)6] [(short)6];
                }
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1] [(signed char)9] [i_1 - 1])) : (((/* implicit */int) (short)-32748)))), (((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 1; i_3 < 7; i_3 += 4) 
    {
        for (int i_4 = 4; i_4 < 9; i_4 += 4) 
        {
            {
                arr_12 [i_3] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_8 [i_3 + 2])) ? (((/* implicit */int) arr_8 [i_3 - 1])) : (((/* implicit */int) arr_8 [i_3 + 2]))))));
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    arr_15 [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((4294967285U) / (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                    arr_16 [i_3] = ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_3 + 3]))));
                    var_20 |= max((max((arr_3 [i_4 + 1] [i_4 - 1]), (arr_3 [i_4 + 2] [i_4 + 2]))), (arr_3 [i_4 - 1] [i_4 + 1]));
                }
                arr_17 [i_3] [(unsigned char)6] [i_3] = ((/* implicit */long long int) (-(((((/* implicit */int) (short)-32755)) * (((/* implicit */int) var_9))))));
                /* LoopNest 2 */
                for (long long int i_6 = 1; i_6 < 9; i_6 += 1) 
                {
                    for (int i_7 = 2; i_7 < 9; i_7 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((4294967290U), (((/* implicit */unsigned int) arr_19 [i_4] [i_6] [i_4] [i_3 + 2]))))))))));
                            arr_23 [i_3] [i_4] [i_3 + 2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_21 [i_6] [i_6] [i_7 - 1] [i_7 + 2])), (29U)));
                            var_22 = ((/* implicit */_Bool) min((((((((((/* implicit */int) arr_10 [i_3] [i_3] [i_4])) / (((/* implicit */int) arr_2 [i_3] [(unsigned short)13] [i_3])))) + (2147483647))) << (((((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL)))) - (1))))), ((((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 11U))))) : (((((/* implicit */_Bool) var_7)) ? (2147483647) : (((/* implicit */int) var_10))))))));
                            var_23 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)0)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
