/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10924
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
    var_18 = ((/* implicit */unsigned short) max((var_5), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) > (((/* implicit */long long int) ((((/* implicit */int) var_15)) << (((var_3) - (1263110874983575549ULL)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(unsigned short)4] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) arr_2 [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (arr_2 [i_0])))) / (((/* implicit */int) ((unsigned short) var_16)))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    var_19 += ((/* implicit */unsigned long long int) var_13);
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_1 [i_1]))));
                    var_21 = ((/* implicit */int) var_7);
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) arr_0 [i_0] [1]);
    }
    for (short i_3 = 3; i_3 < 9; i_3 += 2) 
    {
        arr_13 [(unsigned char)11] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */short) var_15)), (var_14))))))) ? (((((/* implicit */int) var_14)) - (((/* implicit */int) arr_11 [i_3 + 2])))) : (((/* implicit */int) ((((((/* implicit */unsigned long long int) var_13)) >= (arr_10 [i_3] [i_3] [i_3] [i_3]))) && (((/* implicit */_Bool) ((short) var_17))))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3])) || (((/* implicit */_Bool) var_5)))))))) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3 - 2] [i_3]))) : (((var_9) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3])))))))));
        var_24 = (-(((/* implicit */int) ((((/* implicit */int) arr_2 [i_3 - 3])) != (((/* implicit */int) arr_2 [i_3 - 2]))))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 14; i_4 += 1) 
    {
        var_25 -= ((/* implicit */unsigned int) ((int) var_4));
        var_26 &= ((/* implicit */signed char) arr_14 [i_4]);
    }
    var_27 *= ((/* implicit */unsigned int) (((((~(var_6))) == (((((/* implicit */int) var_14)) | (var_13))))) && (var_9)));
    var_28 = ((/* implicit */unsigned char) ((unsigned short) var_13));
}
