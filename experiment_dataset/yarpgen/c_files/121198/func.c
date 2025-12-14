/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121198
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
    var_19 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
    var_20 = var_3;
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (+(((/* implicit */int) var_5)))))));
    var_22 = ((/* implicit */signed char) min((((((/* implicit */int) var_18)) == (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))), (min(((!(((/* implicit */_Bool) var_16)))), (((((/* implicit */int) var_0)) == (((/* implicit */int) var_6))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned char) (unsigned char)216))) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-26)), ((unsigned char)0)))))), (((/* implicit */int) (signed char)12))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_23 = arr_0 [i_3] [(signed char)5];
                                arr_15 [(unsigned char)7] [i_1] [(signed char)5] [i_2] [(signed char)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_13 [i_2] [i_3])) : (((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1 - 1] [i_4] [i_4])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [(unsigned char)13] [(unsigned char)13])))) : (((/* implicit */int) arr_1 [i_0 - 1]))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_0 - 1])) * (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0 - 1])))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(unsigned char)12] [(signed char)18] [i_0 - 1] [(unsigned char)12])))))));
            }
        } 
    } 
}
