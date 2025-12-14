/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166492
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
    var_20 += ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [(_Bool)1] [11] = ((((/* implicit */_Bool) 1464041398U)) ? (-508320983) : (-1));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) + (2147483647))) << (((((/* implicit */int) var_9)) - (61)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_13))) + ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0)))))));
                        var_22 = ((/* implicit */unsigned char) ((-1701735735) <= (((/* implicit */int) arr_9 [8] [i_2 + 1] [10] [i_2]))));
                        arr_12 [(unsigned short)10] [i_1] [(_Bool)1] [i_1] = ((/* implicit */signed char) ((unsigned int) ((var_5) ? (((/* implicit */int) arr_4 [5U] [7])) : (((/* implicit */int) (signed char)(-127 - 1))))));
                        arr_13 [(_Bool)1] = ((/* implicit */int) ((_Bool) (_Bool)1));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_23 = var_15;
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_1])))))));
                    }
                    var_25 = ((/* implicit */short) ((int) ((unsigned char) (signed char)34)));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (-(-603342730))))));
    }
    var_27 = ((/* implicit */unsigned int) var_19);
}
