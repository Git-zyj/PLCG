/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137094
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
    var_17 = ((/* implicit */unsigned int) var_7);
    var_18 = ((/* implicit */unsigned short) var_15);
    var_19 = ((/* implicit */unsigned long long int) (_Bool)0);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_0]))))), (((arr_0 [i_0]) / (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)45)))))))));
        arr_4 [5ULL] = ((/* implicit */signed char) ((unsigned short) ((short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) -52221893)) : (13687582612331774622ULL)))));
        arr_5 [(_Bool)1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) min((arr_1 [5ULL] [i_0]), (arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 2; i_2 < 15; i_2 += 1) 
        {
            for (short i_3 = 1; i_3 < 15; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    {
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */int) (signed char)127)) > (arr_14 [i_1] [i_1] [i_1] [i_2] [i_3 - 1] [13]))))));
                        /* LoopSeq 1 */
                        for (int i_5 = 2; i_5 < 15; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (unsigned short)59941))));
                            var_23 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_17 [i_2 + 1] [i_2] [i_5 - 1]))));
                        }
                        var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_1] [i_2 - 1] [i_2 - 1] [(short)2] [i_2 - 1])) | (((((/* implicit */_Bool) (signed char)-88)) ? (arr_14 [i_2] [i_3] [i_2] [i_2] [i_2] [i_1]) : (806373712)))));
                        var_25 = ((/* implicit */short) var_16);
                        var_26 -= ((/* implicit */signed char) ((short) arr_9 [i_2 + 1]));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) ((int) arr_6 [i_1] [i_1]));
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) arr_11 [i_1]))));
    }
    var_29 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) var_2)))));
}
