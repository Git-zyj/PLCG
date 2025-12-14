/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122568
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
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-28)) || (((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))))) <= ((+(((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 2]))))));
        arr_4 [i_0] = ((/* implicit */short) min((min((arr_2 [i_0]), (arr_2 [i_0]))), (((/* implicit */unsigned int) min(((-(((/* implicit */int) var_5)))), (((((/* implicit */_Bool) (short)-991)) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0])) : (((/* implicit */int) (short)(-32767 - 1))))))))));
    }
    /* LoopNest 2 */
    for (short i_1 = 4; i_1 < 14; i_1 += 3) 
    {
        for (short i_2 = 1; i_2 < 12; i_2 += 3) 
        {
            {
                var_20 = ((/* implicit */short) ((unsigned long long int) (+(((/* implicit */int) arr_6 [i_1 - 1] [i_2 + 2])))));
                var_21 = var_11;
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        {
                            var_22 = (short)-32745;
                            arr_16 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned long long int) min(((short)-991), ((short)-20800)))))))));
                            var_23 ^= ((/* implicit */unsigned int) var_19);
                            arr_17 [i_3] [i_3] [i_2 + 3] [i_1] [i_1] = ((/* implicit */long long int) (~(arr_2 [i_3])));
                            arr_18 [i_1] [i_1] [i_1 + 1] [i_1 - 3] [i_1] [i_1 - 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_3] [i_3]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_5 = 2; i_5 < 13; i_5 += 4) 
                {
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_12 [i_5 + 2] [i_1] [i_1])) <= (min((((/* implicit */unsigned long long int) arr_6 [i_1 - 2] [i_1 - 2])), (arr_0 [i_5] [i_5 - 1])))))) != (((((/* implicit */_Bool) arr_15 [i_1] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_5 - 1] [i_5 - 1] [i_5] [i_1]))))) : (((/* implicit */int) (short)18661))))));
                    var_25 = min((((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_1 [i_2] [i_2])))))), (min((arr_2 [i_5]), (((/* implicit */unsigned int) (unsigned char)23)))));
                }
                arr_22 [i_1] [i_2] = min((((/* implicit */long long int) 375850135U)), (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2] [i_1])) ^ (((/* implicit */int) var_9))))) ? (6140744023686449101LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1 - 4] [i_2 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_19))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) -4296965268370006350LL)) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)-9321), (((/* implicit */short) var_6)))))) : (((long long int) (short)124)))), (((/* implicit */long long int) max((((/* implicit */short) (signed char)-1)), (var_7))))));
    var_27 = ((/* implicit */short) 1125899902648320ULL);
}
