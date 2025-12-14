/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164317
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
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_8)), (min((((var_9) - (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)56)), ((unsigned short)1792)))) ? (((/* implicit */int) max((arr_2 [i_1] [i_0] [i_0]), (arr_2 [i_1] [i_1] [(unsigned char)1])))) : (((/* implicit */int) max((arr_2 [i_0] [i_0] [8]), ((unsigned char)31))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) ((signed char) arr_2 [i_0] [i_0] [i_0]))) >= (arr_0 [(signed char)2]))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_7 [i_4 - 1] [i_4 - 2] [i_3]), (arr_7 [i_4] [i_4 - 2] [i_2])))) ? (((/* implicit */int) min((arr_7 [i_4 + 2] [i_4 - 2] [i_2]), (arr_7 [i_4] [i_4 + 2] [i_2])))) : (((/* implicit */int) arr_7 [3U] [i_4 - 2] [i_3]))));
                                var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)63759))));
                                var_16 = ((/* implicit */signed char) ((unsigned char) (~(arr_5 [i_4 - 2]))));
                            }
                        } 
                    } 
                } 
                var_17 &= ((/* implicit */int) arr_3 [i_0]);
            }
        } 
    } 
}
