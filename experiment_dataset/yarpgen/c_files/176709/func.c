/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176709
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
    var_17 = ((/* implicit */unsigned char) var_16);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)117)) & (var_8))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) 1095588188)), (arr_7 [i_4] [i_4 + 1] [i_1 - 2] [i_1 - 2]))) >> ((((+(((/* implicit */int) var_9)))) - (5523)))));
                                var_20 = ((/* implicit */signed char) ((unsigned int) ((arr_6 [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 3]) | (((/* implicit */int) (unsigned short)7350)))));
                                var_21 |= ((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) var_9))), ((((!(((/* implicit */_Bool) arr_11 [i_4] [i_3] [i_1] [i_1] [i_0])))) ? (((((/* implicit */_Bool) var_15)) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)101))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5891764281104168996ULL))))))))));
                            }
                        } 
                    } 
                    var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1984765630)) ? (2706013249048847091ULL) : (((/* implicit */unsigned long long int) var_6))))) ? ((-(((/* implicit */int) (short)-20600)))) : (((((/* implicit */int) (short)-31688)) - (((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_0]))))));
                    arr_13 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */_Bool) min((((unsigned int) ((((/* implicit */int) arr_9 [i_1])) >> (((var_5) - (13463876878941372812ULL)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? ((~(var_8))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [18U] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))))))))) : (((/* implicit */_Bool) min((((unsigned int) ((((((/* implicit */int) arr_9 [i_1])) + (2147483647))) >> (((var_5) - (13463876878941372812ULL)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? ((~(var_8))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [18U] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (int i_6 = 3; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [13LL] [13LL])) ? (((/* implicit */long long int) var_15)) : (arr_15 [i_6] [18U] [i_2] [i_1] [i_1] [i_0]))) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_2 [14U] [(short)1])))))), (((((unsigned int) var_15)) >= (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)7339)))))))));
                                arr_20 [i_1] [5] [i_2] [i_5] [i_6] = ((/* implicit */short) max((((((/* implicit */_Bool) min((1095588188), (356061305)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_5))) : (((/* implicit */unsigned long long int) arr_14 [i_6] [i_6 - 1] [i_6 - 1] [i_6] [i_1 - 2])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
