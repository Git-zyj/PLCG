/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104543
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
    var_13 = ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) min((((/* implicit */unsigned int) ((((arr_2 [i_1]) ? (var_3) : (-173009099))) > (var_1)))), (var_6))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) min((var_15), (var_9)));
                            arr_12 [i_0] [i_1] [i_3] [i_3] |= ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (18446744073709551615ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)3)) && (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-21)) > (((/* implicit */int) (unsigned char)222)))))));
                            arr_13 [i_3] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_3 [i_3])) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_8 [(signed char)7] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_3 [(unsigned char)7]))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) min(((-(arr_11 [(unsigned char)9] [i_1] [i_1] [i_1] [(unsigned char)11] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_0])) > (((/* implicit */int) arr_7 [i_0] [i_0]))))))))));
                arr_14 [(signed char)12] [i_1] [2LL] = ((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_0] [11U] [i_0] [i_1]))));
            }
        } 
    } 
}
