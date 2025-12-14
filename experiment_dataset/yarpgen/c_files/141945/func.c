/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141945
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
    var_14 = ((/* implicit */short) var_3);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 11; i_2 += 4) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned char) ((short) ((arr_8 [i_0] [(_Bool)1] [i_2]) && (((((/* implicit */_Bool) (unsigned char)63)) && (((/* implicit */_Bool) (unsigned char)63)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [10LL] [i_0] [(unsigned char)10] [i_2] [7U] [(short)8] = ((/* implicit */long long int) ((((/* implicit */int) max((arr_13 [i_0 + 1] [i_2 - 2] [i_2 - 3] [i_3 - 1]), (((/* implicit */unsigned short) (unsigned char)63))))) - (((/* implicit */int) (unsigned char)133))));
                                arr_17 [(unsigned char)10] [i_0] [i_2] [i_0] [(unsigned char)10] = ((/* implicit */unsigned char) ((arr_4 [i_0 + 1] [i_2 + 2] [i_3 - 1]) ? (((long long int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)63)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) arr_11 [i_0 + 1] [(unsigned short)0] [i_0 + 1] [i_3 + 1] [i_4]))))))));
                                var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((int) var_9))) ? (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) - (((/* implicit */long long int) ((((/* implicit */int) max(((unsigned short)13), (((/* implicit */unsigned short) (_Bool)0))))) - (((/* implicit */int) (_Bool)1)))))));
                                var_17 = ((/* implicit */unsigned char) min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_6 [(short)12] [i_3 - 1])) : (((/* implicit */int) (unsigned char)209))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (min((((((/* implicit */int) var_6)) | (((/* implicit */int) var_3)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_12)), ((unsigned short)63782))))))));
}
