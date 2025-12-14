/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117956
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_10))));
                                var_16 = ((/* implicit */long long int) min(((+(((arr_13 [i_0] [8ULL] [i_2] [i_2] [i_0] [i_0] [i_4 + 1]) ? (((/* implicit */int) arr_7 [(signed char)2] [i_1 - 1] [i_1])) : (((/* implicit */int) var_8)))))), ((-(((/* implicit */int) ((_Bool) arr_6 [(unsigned char)10] [7] [7])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [5ULL] = ((arr_18 [i_0 - 1] [i_1] [i_2] [i_5] [i_1]) | (((((/* implicit */_Bool) arr_20 [i_0] [i_0 - 2] [i_0 - 1] [i_1 + 2] [i_1 - 2] [i_2 - 1])) ? (min((8514028380733659919ULL), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [(_Bool)1])))) : (9932715692975891696ULL))));
                                var_17 = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_14 [i_0] [i_0] [(_Bool)1])))), (((/* implicit */int) arr_12 [i_0])))), ((+(((/* implicit */int) arr_7 [i_0 + 1] [i_1 + 1] [i_5]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) 9932715692975891696ULL)) ? (1938354205) : (((/* implicit */int) var_7))))), (var_11))));
    var_19 = var_8;
    var_20 = ((/* implicit */_Bool) (~(9932715692975891678ULL)));
}
