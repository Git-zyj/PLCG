/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167455
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
    var_16 = ((/* implicit */_Bool) var_4);
    var_17 = ((/* implicit */_Bool) var_1);
    var_18 = ((/* implicit */long long int) var_2);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (short i_3 = 3; i_3 < 15; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            arr_16 [i_3] = ((/* implicit */_Bool) (~(arr_10 [i_1 + 2])));
                            arr_17 [i_3] [i_1] [i_2] &= ((/* implicit */unsigned char) arr_5 [i_1 + 2] [i_1 + 2]);
                            var_19 = ((/* implicit */unsigned long long int) arr_2 [i_2] [i_2]);
                        }
                        arr_18 [i_0] [i_1 - 1] [i_1] [i_2] [i_2] [i_3 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_6 [i_3] [i_3 - 2] [i_1 - 1])));
                    }
                } 
            } 
        } 
        arr_19 [i_0] = ((/* implicit */short) var_3);
    }
    for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((((/* implicit */_Bool) ((arr_20 [i_5] [(_Bool)1]) ? (((/* implicit */int) arr_20 [i_5] [i_5])) : (((/* implicit */int) arr_22 [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5] [i_5]))) : (((((/* implicit */_Bool) arr_21 [i_5] [i_5])) ? (var_11) : (((/* implicit */unsigned int) ((arr_20 [i_5] [i_5]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_22 [i_5])))))))))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)229))))) ? (((arr_20 [i_5] [i_5]) ? (var_8) : (((/* implicit */int) arr_20 [i_5] [i_5])))) : (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        arr_26 [i_6] = ((/* implicit */unsigned short) (_Bool)1);
        var_22 = ((/* implicit */int) var_0);
        arr_27 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_6] [i_6])) ? ((+(((/* implicit */int) var_14)))) : (arr_2 [i_6] [i_6])));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_13))));
    }
    var_24 = ((/* implicit */int) var_13);
}
