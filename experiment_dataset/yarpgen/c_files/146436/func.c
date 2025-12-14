/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146436
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
    var_14 = max((((((/* implicit */_Bool) max((var_13), (((/* implicit */signed char) var_1))))) ? (((/* implicit */int) var_12)) : (min((((/* implicit */int) var_8)), (var_0))))), (((((/* implicit */int) (unsigned char)4)) + (var_0))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) (~(min((((((/* implicit */int) arr_2 [i_0 + 1] [(_Bool)1])) ^ (((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) ((_Bool) arr_1 [i_0 + 1])))))));
                var_16 = ((/* implicit */short) (~(((arr_3 [i_0 - 2] [i_1]) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 3]))))));
                var_17 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_0 + 1])) <= (((/* implicit */int) arr_3 [i_0 + 3] [i_1]))))), (((((/* implicit */int) arr_3 [i_0 + 2] [i_1])) ^ (((/* implicit */int) arr_3 [i_1] [i_1]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned long long int) var_4)))))))) ^ (((/* implicit */int) ((_Bool) 1073737728)))));
    /* LoopNest 3 */
    for (unsigned char i_2 = 1; i_2 < 22; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_14 [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_9 [i_5] [i_3] [i_3] [i_3]))));
                        var_19 = ((/* implicit */unsigned short) ((arr_12 [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2 + 2]) ? (((/* implicit */int) arr_12 [i_5] [i_3] [i_4] [i_5])) : (((/* implicit */int) arr_8 [i_3]))));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4])) || (arr_12 [i_5] [i_4] [i_3] [i_2 + 2]))))));
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_2 + 2])))))));
                            arr_17 [i_2] [i_3] [i_2] [i_3] [i_5] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (938890020) : (((/* implicit */int) (unsigned char)19))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)4))))) : (((/* implicit */int) (unsigned char)239))));
                            arr_18 [i_2] [i_2] [i_3] [21] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_2] [i_3] [i_2] [i_2] [i_5] [i_3])) * (((/* implicit */int) ((signed char) arr_4 [6LL])))));
                            arr_19 [i_6] &= ((/* implicit */long long int) ((unsigned int) ((unsigned char) arr_9 [i_6] [i_4] [i_3] [i_2])));
                        }
                        for (short i_7 = 3; i_7 < 20; i_7 += 1) 
                        {
                            var_22 += ((/* implicit */unsigned int) arr_10 [i_2 - 1] [i_7 + 2] [i_4] [0U]);
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)19)))))) >= (((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_2] [i_3] [i_4] [i_5] [i_7 + 3]))) + (arr_22 [i_5])))));
                        }
                    }
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_25 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2 + 1]))));
                            arr_28 [i_3] [i_4] [i_4] [i_2] [i_3] = ((/* implicit */unsigned short) arr_15 [i_9] [i_2 - 1] [i_8] [i_2 - 1] [(signed char)6] [i_2 - 1]);
                        }
                        for (short i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            arr_32 [i_3] [i_3] [i_4] = ((unsigned char) arr_11 [i_10] [i_3] [i_2]);
                            var_25 = ((/* implicit */long long int) arr_4 [i_2]);
                        }
                        var_26 &= ((/* implicit */signed char) ((6935876928585324414LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236)))));
                    }
                    arr_33 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) max((arr_12 [i_4] [i_3] [i_4] [i_2 + 1]), (arr_12 [(_Bool)1] [i_3] [i_4] [i_2 + 1]))));
                    arr_34 [i_2] [i_2] [i_2] [i_3] = ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) (unsigned char)7)) : (131064));
                    var_27 -= ((signed char) (+(((/* implicit */int) arr_20 [i_3]))));
                }
            } 
        } 
    } 
}
