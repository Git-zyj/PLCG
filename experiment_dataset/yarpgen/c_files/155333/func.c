/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155333
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
    var_18 = ((/* implicit */unsigned long long int) 3783998910U);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_6 [i_2] = var_3;
                    arr_7 [i_1] [(_Bool)1] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((_Bool) arr_3 [i_0] [i_1] [i_2])))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_1] [(_Bool)1] [i_3])), (var_4)))) ? (((782692821U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_1] [i_2])))))));
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 596818663)), (arr_0 [i_2] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2] [i_3])) || (((/* implicit */_Bool) arr_8 [i_0] [2] [i_0] [i_2] [(signed char)5]))))) : (((/* implicit */int) (((_Bool)1) && ((_Bool)1)))))))));
                        var_22 = ((/* implicit */unsigned short) var_6);
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (((((/* implicit */_Bool) var_15)) ? (1ULL) : (((/* implicit */unsigned long long int) var_9))))))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 2; i_4 < 18; i_4 += 2) 
    {
        var_24 = ((/* implicit */int) arr_10 [i_4]);
        var_25 ^= var_8;
        arr_12 [i_4] = arr_11 [i_4 + 3] [i_4];
        var_26 = ((/* implicit */short) arr_11 [i_4] [0]);
    }
    var_27 = ((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) * (var_1)));
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_0)))) && (((/* implicit */_Bool) (short)32757))));
}
