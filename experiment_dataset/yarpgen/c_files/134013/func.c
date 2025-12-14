/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134013
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
    var_13 = ((((/* implicit */int) var_2)) >> (((var_9) - (2005428113))));
    var_14 = var_11;
    var_15 ^= ((/* implicit */short) (~(((/* implicit */int) var_5))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0 - 1] [i_0]))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (~(var_7))))));
        arr_4 [10ULL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_2 [i_0 - 1]))))) ? (var_12) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) != (((/* implicit */int) arr_2 [i_0 - 1]))))));
        arr_5 [(unsigned char)0] [i_0] = ((/* implicit */long long int) ((unsigned char) ((arr_0 [i_0]) ? (12618150785282938093ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17142))))));
        arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0]))))) != (((long long int) var_4))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1 - 1])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_7 [6]))));
        arr_10 [(short)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)17125)) * (((/* implicit */int) arr_8 [i_1]))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((_Bool) arr_8 [i_1 - 1])))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                for (short i_4 = 1; i_4 < 8; i_4 += 2) 
                {
                    {
                        arr_18 [i_4] = ((/* implicit */unsigned char) ((arr_11 [i_1 - 1] [i_1 - 1]) != (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [(unsigned char)10])))))));
                        var_18 ^= ((/* implicit */short) (~(((/* implicit */int) ((arr_11 [i_1] [i_1]) > (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 - 1]))))))));
                        arr_19 [i_1] [i_1] [i_1] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) 12618150785282938078ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-12069))));
                    }
                } 
            } 
        } 
    }
}
