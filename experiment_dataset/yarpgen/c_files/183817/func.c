/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183817
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (short)-24201)), (((unsigned long long int) ((short) (_Bool)1))))))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */short) arr_4 [i_0 + 4]);
                    arr_9 [i_0] [i_0 - 2] [i_1] [(short)2] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))) < (((/* implicit */int) var_11))));
                    var_19 ^= ((/* implicit */unsigned int) arr_3 [(short)13] [8] [i_0]);
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */signed char) var_0);
    }
    for (short i_3 = 2; i_3 < 19; i_3 += 1) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_3 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3 + 1] [i_3 - 2]))) : (var_13))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
        var_20 += ((/* implicit */short) ((max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) arr_1 [i_3] [i_3])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))))) != (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_0 [i_3 - 1] [i_3 - 1])))))));
        arr_15 [(signed char)18] = ((/* implicit */unsigned int) arr_3 [i_3 - 1] [i_3 - 2] [i_3 - 2]);
    }
    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!((_Bool)1))))));
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (short)-14333))));
    var_23 ^= ((/* implicit */signed char) ((unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32767))) : (2713258598U))) != (((/* implicit */unsigned int) ((/* implicit */int) (short)27378))))));
}
