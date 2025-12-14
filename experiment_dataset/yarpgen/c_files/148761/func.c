/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148761
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
    var_12 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_11) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) min((var_6), (var_6))))))) || (((((/* implicit */_Bool) ((unsigned char) var_11))) || (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-46)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (!(((min((2147483646), (((/* implicit */int) var_0)))) == (((((/* implicit */_Bool) var_9)) ? (-2147483647) : (((/* implicit */int) var_2)))))))))));
                arr_5 [12] [i_1] &= ((/* implicit */unsigned int) (((((~(((/* implicit */int) var_5)))) + (2147483647))) << (((((/* implicit */int) ((var_3) >= (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */int) (unsigned short)28827))))))) - (1)))));
                var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) min(((unsigned short)36709), (((/* implicit */unsigned short) arr_1 [i_1 + 1] [i_1 - 1]))))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_1 + 1] [i_1 + 1])), (var_6))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_15 = min((((/* implicit */unsigned long long int) min((((long long int) var_0)), (((/* implicit */long long int) (~(var_7))))))), (((unsigned long long int) var_1)));
                            arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) (((-(arr_12 [10ULL] [i_3] [i_1 - 1] [i_3]))) > ((~((-(((/* implicit */int) var_9))))))));
                            arr_15 [i_0] = ((/* implicit */int) min((min((var_7), (((/* implicit */unsigned int) arr_3 [i_1] [i_0] [i_1 - 1])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_1] [i_0] [(unsigned short)3])) : (((/* implicit */int) arr_1 [i_1] [i_1])))))));
                            arr_16 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_3 [i_1 + 1] [i_0] [i_3])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */int) min((((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_0)))))), (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_7))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)12471)) ? (var_3) : (((/* implicit */int) var_11)))))))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_1))));
}
