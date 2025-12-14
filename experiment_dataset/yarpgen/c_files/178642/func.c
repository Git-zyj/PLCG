/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178642
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
    var_10 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (unsigned short)2))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_7 [i_0 + 1] [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                var_11 = ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) var_0))))) | (max((arr_3 [i_0] [3U]), (((/* implicit */long long int) arr_5 [i_1] [i_0]))))))) ? (max((((((/* implicit */_Bool) (unsigned short)65535)) ? (14178729244654162578ULL) : (0ULL))), (((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */unsigned long long int) -8830688273465233210LL)) : (4ULL))))) : (max((var_4), (((/* implicit */unsigned long long int) 2737232160U)))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 4; i_2 < 12; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 18446744073709551594ULL)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) -1)))) ^ ((~(4ULL)))));
                                arr_18 [(short)11] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (~(((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [5LL] [i_3] [i_1] [i_1])))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 8119040897993945749ULL))))) - (1)))))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_0] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */long long int) arr_15 [i_0] [1U] [i_0] [i_0])) + (arr_3 [i_0] [i_1]))) : (max((((/* implicit */long long int) var_8)), (arr_3 [i_1] [5]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_1)) / (arr_9 [i_0] [i_0] [8ULL] [i_1])))) ? (((/* implicit */int) (short)11320)) : (((((/* implicit */_Bool) (signed char)36)) ? (arr_5 [i_0] [i_0]) : (-6))))))));
            }
        } 
    } 
}
