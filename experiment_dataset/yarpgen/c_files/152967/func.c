/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152967
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
    var_11 = ((/* implicit */signed char) var_2);
    var_12 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (var_4)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)41)) && (((/* implicit */_Bool) var_6))))) : (var_4)))) == (var_9)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (min((371464888719190766ULL), (((/* implicit */unsigned long long int) var_5)))) : (((var_2) & (((/* implicit */unsigned long long int) var_3)))))))));
                    arr_8 [i_2] [i_2] [i_0] = ((/* implicit */signed char) var_9);
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((var_7) / (((((/* implicit */int) var_10)) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4592))) * (1223999047840022522ULL))), (((/* implicit */unsigned long long int) var_7)))), (((((/* implicit */_Bool) ((var_8) % (var_8)))) ? (((/* implicit */unsigned long long int) var_8)) : (((var_0) | (((/* implicit */unsigned long long int) var_8))))))));
                                arr_13 [i_3] [i_2] [i_3] = ((/* implicit */unsigned long long int) min(((~(var_3))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60952))) <= (var_0))))));
                                arr_14 [i_2] [i_2] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? ((-(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) min((var_4), (var_4))))));
                                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((var_9) & (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_8) <= (((/* implicit */unsigned int) var_7)))))) : (((min((var_3), (((/* implicit */long long int) var_10)))) | (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
                            }
                        } 
                    } 
                    var_17 ^= ((/* implicit */short) ((10601195999642412331ULL) | (((/* implicit */unsigned long long int) var_9))));
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */_Bool) ((var_7) & ((-(max((var_7), (var_4)))))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 1; i_5 < 20; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_19 += ((/* implicit */unsigned char) min((min((var_2), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) (~(var_9))))));
                var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))))))), (min((371464888719190766ULL), (371464888719190766ULL)))));
                var_21 *= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_3)) <= (min((((/* implicit */unsigned long long int) var_6)), (var_0)))))), (((((/* implicit */unsigned int) var_7)) * (var_8)))));
            }
        } 
    } 
}
