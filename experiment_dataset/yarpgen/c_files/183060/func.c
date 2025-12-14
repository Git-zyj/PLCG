/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183060
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
    var_18 = (+(((((/* implicit */int) (short)684)) & (((/* implicit */int) (_Bool)1)))));
    var_19 = ((((/* implicit */int) var_13)) == (((/* implicit */int) var_16)));
    var_20 = ((/* implicit */short) ((signed char) (+(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_16)))))));
    var_21 = ((/* implicit */unsigned int) max((var_21), (((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 643098340)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((1403997477U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_2 [i_0])))) < ((-(((((/* implicit */int) arr_0 [(short)8])) | (var_15)))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (min((19ULL), (((/* implicit */unsigned long long int) (signed char)-25))))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 10; i_1 += 2) 
    {
        var_24 = ((/* implicit */short) 2882326765U);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 3; i_4 < 13; i_4 += 3) 
                {
                    {
                        arr_13 [i_4] [i_4] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((long long int) arr_3 [i_3] [i_1 - 1]));
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_3))));
                    }
                } 
            } 
        } 
        arr_14 [13] = ((/* implicit */_Bool) 2890969819U);
        var_26 = ((/* implicit */long long int) ((((unsigned int) arr_12 [i_1 - 2] [i_1] [i_1 - 2])) != (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 2] [i_1 + 1])))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 2; i_5 < 14; i_5 += 2) 
    {
        arr_19 [i_5 + 2] = ((/* implicit */signed char) arr_0 [i_5 + 3]);
        arr_20 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (arr_17 [i_5] [i_5 + 2]) : (((/* implicit */int) arr_15 [i_5 + 3]))));
    }
}
