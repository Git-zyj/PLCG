/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163210
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
    var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)102)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), (((/* implicit */unsigned char) var_10)))))) : (((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) ^ (((unsigned long long int) var_9))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_2 [i_1] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_6))))) ^ (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) != (((/* implicit */int) arr_7 [i_1] [i_0])))))))) : (min((((unsigned long long int) arr_3 [(_Bool)1] [(unsigned char)13])), ((-(arr_2 [i_1] [i_0])))))));
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((unsigned long long int) (-(min((((/* implicit */unsigned long long int) var_4)), (arr_2 [i_0] [i_0])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 18; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_12))) ? ((-(arr_11 [i_4 - 1] [i_4 + 1] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((/* implicit */_Bool) ((arr_17 [i_2] [i_3] [i_3] [i_4 - 1]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_17 [i_2] [i_4] [i_4] [i_4 + 1]))))) ? (((unsigned long long int) arr_17 [i_4] [i_4] [i_4] [i_4 - 1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_17 [i_2] [(signed char)16] [i_3] [i_4 + 1]), (arr_17 [i_4] [17ULL] [i_4 - 1] [i_4 + 1])))))))));
                        }
                    } 
                } 
                var_22 = max(((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) arr_15 [i_2] [i_2])))))), (((/* implicit */int) var_13)));
                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_3))));
                var_24 = ((((/* implicit */_Bool) ((unsigned long long int) ((arr_17 [i_2] [i_3] [i_3] [i_3]) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [13ULL] [(_Bool)1]))))) : (max((arr_2 [i_3] [i_2]), (((/* implicit */unsigned long long int) var_12)))))) : (var_11));
            }
        } 
    } 
}
