/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103887
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
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) var_4))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_19 += ((/* implicit */long long int) var_10);
                                var_20 ^= ((int) var_7);
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_0] |= ((/* implicit */unsigned short) ((((_Bool) arr_9 [i_0] [i_0] [i_0] [i_1] [i_1])) ? (((((/* implicit */_Bool) (-(arr_7 [i_0] [(short)6] [i_1])))) ? (arr_8 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [(_Bool)1] [i_1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_1] [i_0]))))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [22]))) : (var_17)))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_9);
    var_22 |= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max((var_10), (var_10)))))));
}
