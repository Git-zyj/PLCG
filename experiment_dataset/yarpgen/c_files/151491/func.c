/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151491
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_11))), (((/* implicit */long long int) var_9))))) : (var_1)));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)121)), ((unsigned short)53774)))) >= (((((/* implicit */_Bool) (~(arr_5 [i_0])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)106))))))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_14 [(unsigned char)18] [14ULL] [i_2] [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */short) max((((unsigned long long int) arr_11 [16ULL] [i_4] [i_3 + 4] [i_2] [0ULL] [16ULL] [16ULL])), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]))));
                                var_18 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_3 [i_0 - 2] [i_4] [i_1 - 2])) != (arr_12 [i_0 - 3] [(_Bool)1] [i_2])))), (((((/* implicit */unsigned long long int) var_0)) & (arr_12 [i_1 + 2] [i_3 + 4] [i_4])))));
                                arr_15 [i_2] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */int) (signed char)(-127 - 1))), (((((/* implicit */_Bool) arr_4 [(unsigned char)4] [(signed char)2])) ? (((/* implicit */int) arr_7 [i_4] [i_2] [i_2] [7LL])) : (((/* implicit */int) (signed char)106))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)111))));
            }
        } 
    } 
}
