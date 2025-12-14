/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123438
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
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_18 -= ((/* implicit */long long int) min((arr_1 [4U] [4U]), (((/* implicit */unsigned short) arr_4 [i_0]))));
                var_19 = ((((((/* implicit */int) var_12)) > (((/* implicit */int) (unsigned short)0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) arr_5 [9LL] [9LL] [i_0]))) == (var_6))))) : (min((((((/* implicit */long long int) var_2)) - (var_9))), (min((arr_5 [i_0] [i_1] [i_1 + 1]), (arr_3 [i_1 - 1]))))));
                var_20 = ((/* implicit */unsigned short) (unsigned char)252);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */long long int) var_8)) : (var_9)))) ? (((((/* implicit */long long int) 4055055451U)) - (var_1))) : (arr_7 [i_3])))) ? (1148691742) : (min((var_14), (arr_11 [1] [1] [1])))));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */long long int) arr_11 [i_2] [i_3] [i_3])) : (var_6)));
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (int i_6 = 3; i_6 < 13; i_6 += 4) 
                        {
                            {
                                arr_18 [i_2] [i_3] [i_4] = var_7;
                                var_23 = min((((min((arr_6 [13U] [13U]), (((/* implicit */long long int) (unsigned short)65535)))) & (min((arr_7 [i_2]), (((/* implicit */long long int) arr_15 [i_3] [i_4] [i_4] [i_6])))))), (34359738367LL));
                                var_24 = ((/* implicit */unsigned short) (~(var_1)));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */long long int) (~(((/* implicit */int) arr_9 [10LL]))))), (arr_12 [i_2] [i_2]))) : (((/* implicit */long long int) arr_16 [9U] [9U] [i_3] [9U] [i_2]))));
                /* LoopNest 3 */
                for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) -5626186613340144222LL)) ? (arr_19 [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) 1006281491))))) ? (-2147483637) : (((((/* implicit */_Bool) arr_9 [i_2])) ? (var_2) : (((/* implicit */int) arr_23 [i_2] [i_3] [i_2] [i_8] [i_8]))))))));
                                var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(-5626186613340144232LL)))) ? ((+((+(329054809975918414LL))))) : (((((/* implicit */long long int) min((((/* implicit */int) arr_22 [i_2] [i_2] [5])), (arr_11 [i_3] [i_3] [i_3])))) / ((-9223372036854775807LL - 1LL))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) var_2)), (var_13))), (var_8)))) ? (var_9) : (((/* implicit */long long int) min((((/* implicit */unsigned int) ((var_16) <= (((/* implicit */unsigned int) var_2))))), (min((var_16), (((/* implicit */unsigned int) var_5)))))))));
}
