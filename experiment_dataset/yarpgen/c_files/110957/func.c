/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110957
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
    var_14 |= ((/* implicit */unsigned short) var_10);
    var_15 |= ((/* implicit */short) ((signed char) (+(((/* implicit */int) var_7)))));
    var_16 = ((/* implicit */signed char) ((long long int) (~(var_10))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((arr_1 [i_0] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [11ULL]))))) | ((+(arr_1 [(unsigned short)0] [(unsigned short)0])))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 23; i_3 += 4) 
                {
                    {
                        arr_12 [(_Bool)1] [(_Bool)1] [i_1] [i_1] [i_3 + 1] = ((/* implicit */unsigned int) ((((arr_9 [i_2] [i_1] [i_2] [i_3 + 1] [i_1]) & (((/* implicit */unsigned long long int) arr_1 [i_1] [i_3])))) << (((arr_3 [i_0] [i_0] [i_0]) - (10748009493282889663ULL)))));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]))) | (((arr_3 [i_0] [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0])))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((unsigned int) (~(arr_3 [i_0] [i_0] [i_0])))))));
        arr_13 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_8 [15U] [(signed char)16] [i_0] [i_0]))) + (((int) arr_0 [i_0]))));
    }
    for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 1) 
    {
        arr_16 [i_4 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [i_4 - 1] [i_4 + 1] [i_4] [i_4])) ? (((((/* implicit */_Bool) arr_1 [i_4] [i_4 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4]))) : (arr_1 [i_4] [i_4 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)11)) > (((/* implicit */int) (unsigned char)83)))))))) - (arr_4 [i_4 + 1] [(unsigned short)12] [i_4])));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((unsigned int) 1430695921381423637ULL)))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (~((+(((/* implicit */int) arr_15 [i_4 - 1])))))))));
    }
}
