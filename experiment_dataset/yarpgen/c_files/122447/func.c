/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122447
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (min((((/* implicit */unsigned long long int) ((long long int) var_2))), (min((var_16), (((/* implicit */unsigned long long int) var_7)))))) : (((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */int) var_10)), (var_14)))))));
    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_3)) < (max((8589934591ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))), (var_0)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0] [i_0]))) ? (((unsigned long long int) arr_0 [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) & (((/* implicit */int) arr_0 [i_0] [(short)15])))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned short)14] [i_0]))) : (((long long int) arr_1 [i_0 - 2] [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((signed char) -1113169882123534567LL));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((short) (~(-1113169882123534567LL)))))));
        var_21 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0 - 2] [i_0])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)22238))))) ? ((~(((((/* implicit */int) arr_1 [i_1] [i_1])) >> (((((/* implicit */int) arr_0 [i_1] [i_1])) + (125))))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_17)) * (((/* implicit */int) var_6))))))));
        var_23 = ((max((((/* implicit */unsigned long long int) min((((/* implicit */int) (short)0)), (2147483644)))), (max((18ULL), (((/* implicit */unsigned long long int) (unsigned short)17)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [6LL] [i_1]))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 8; i_2 += 3) 
        {
            for (unsigned int i_3 = 2; i_3 < 8; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    {
                        arr_15 [i_2] [i_2] = arr_13 [i_1] [i_1] [i_2] [i_1] [i_1];
                        var_24 = ((/* implicit */int) ((((unsigned long long int) ((signed char) var_0))) << (((min((((/* implicit */unsigned int) ((((((/* implicit */int) (short)-22217)) + (2147483647))) >> (((((/* implicit */int) (short)22216)) - (22214)))))), (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_8 [i_1]))))) - (18861U)))));
                    }
                } 
            } 
        } 
    }
}
