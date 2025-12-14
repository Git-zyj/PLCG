/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152010
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)25001)) * (((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (var_6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)117)) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_4))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_3] [i_1] = ((/* implicit */unsigned char) arr_7 [i_0] [(unsigned short)12] [(signed char)4] [i_0]);
                                arr_13 [i_0] [i_0] [i_0] [i_0] [(unsigned short)12] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_3] [i_1] [i_1] [i_3])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_4] [i_3] [i_4]))))) * (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4] [(unsigned char)11] [i_2] [i_1] [i_0]))) : (arr_5 [i_0] [i_1] [i_2] [i_3])))));
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (arr_6 [i_0] [i_2] [i_2])))) : (((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) arr_4 [i_0] [i_3] [i_4])))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) (_Bool)1)), (((((((/* implicit */int) (signed char)127)) >= (((/* implicit */int) var_15)))) ? (((/* implicit */int) max(((unsigned char)136), (((/* implicit */unsigned char) arr_10 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1] [i_0]))))) : (((835099122) >> (((((/* implicit */int) var_4)) - (60)))))))));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (arr_7 [i_0] [i_0] [i_0] [i_0])));
                    var_19 = ((/* implicit */short) (~((~(arr_5 [i_0] [i_1] [i_2] [i_2])))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (var_8)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)0))))) : (var_6)));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_1))));
    var_22 += ((/* implicit */signed char) max(((~(((/* implicit */int) ((signed char) var_0))))), (max((((/* implicit */int) ((signed char) var_7))), (var_11)))));
}
