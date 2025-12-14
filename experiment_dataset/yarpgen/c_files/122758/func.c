/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122758
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
    for (signed char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                var_14 = ((/* implicit */signed char) arr_1 [i_0]);
                var_15 = ((/* implicit */signed char) arr_3 [i_0]);
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 9; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [(short)2] &= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))))) ? (((((/* implicit */_Bool) ((arr_3 [i_0 - 2]) / (arr_7 [i_0 + 1])))) ? (((arr_3 [7LL]) << (((arr_9 [(signed char)2] [6LL] [6LL] [i_0]) - (5881056689432379784ULL))))) : ((+(arr_1 [i_1]))))) : ((~(((((/* implicit */_Bool) var_6)) ? (arr_1 [i_2 - 1]) : (((/* implicit */long long int) var_3))))))));
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_8 [i_0 - 3] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (var_4)))))) <= (var_12))))));
                            var_17 = ((/* implicit */long long int) (~(max(((-(((/* implicit */int) (short)32767)))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)-32750)) : (((/* implicit */int) var_8))))))));
                        }
                    } 
                } 
                arr_11 [i_1] = ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)65527)) : (((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30720)) ? (arr_1 [i_0]) : (var_10)))) ? (((/* implicit */int) arr_8 [i_0 - 3] [i_0] [i_0 + 2])) : (((/* implicit */int) ((var_12) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))) : (((/* implicit */int) (short)0)));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_7))));
}
