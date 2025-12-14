/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128071
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
    var_10 = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */short) max((min((((((/* implicit */_Bool) arr_3 [(signed char)3] [(signed char)3])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_2 [i_0])))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [(short)5] [i_0])))))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0] [i_1])), (arr_0 [i_0]))))));
                var_12 -= ((/* implicit */unsigned short) (((+(min((((/* implicit */unsigned int) (unsigned short)62921)), (arr_3 [i_0 + 1] [i_0 + 1]))))) + (((/* implicit */unsigned int) max((((/* implicit */int) var_8)), (((((/* implicit */int) (unsigned short)62537)) + (((/* implicit */int) arr_1 [(unsigned short)8] [(signed char)13])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            {
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) arr_9 [i_2]))));
                arr_11 [i_2] = ((/* implicit */unsigned int) var_2);
                /* LoopNest 2 */
                for (signed char i_4 = 3; i_4 < 22; i_4 += 3) 
                {
                    for (unsigned short i_5 = 2; i_5 < 21; i_5 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_8 [i_2 - 3] [i_3] [i_4 + 1]))) & (((/* implicit */int) var_8)))))));
                            var_15 = ((/* implicit */signed char) arr_14 [i_4] [i_4]);
                        }
                    } 
                } 
            }
        } 
    } 
}
