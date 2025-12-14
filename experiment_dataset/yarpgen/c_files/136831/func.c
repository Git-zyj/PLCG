/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136831
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
    var_10 &= ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned char)221)) >> (((/* implicit */int) (unsigned char)27))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_5 [(unsigned char)4] [i_0] [i_1])) ? (((/* implicit */int) arr_1 [(unsigned char)5])) : (((/* implicit */int) (unsigned char)214)))) & (((/* implicit */int) (signed char)-4)))) + (((/* implicit */int) (unsigned char)9))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 7; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2 + 2] [(unsigned char)6] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 2])) >> (((((/* implicit */int) arr_2 [i_1 + 1] [i_2 + 1])) - (98)))))) ? (((((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [(unsigned char)2] [i_0] [(signed char)8])) : (((/* implicit */int) (unsigned char)64)))) - (((/* implicit */int) (unsigned char)146)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0])))))));
                                var_11 = ((/* implicit */unsigned char) min((var_11), ((unsigned char)190)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
