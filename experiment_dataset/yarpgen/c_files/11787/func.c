/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11787
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) ((arr_0 [i_0]) || (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */signed char) ((unsigned int) arr_1 [i_0]));
        var_17 = ((/* implicit */int) ((unsigned long long int) (unsigned short)28390));
        var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 544954152U)))))) / (((((/* implicit */_Bool) 2889855462U)) ? (var_9) : (((/* implicit */unsigned int) arr_1 [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned char)66), (arr_7 [i_1]))))))) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            arr_11 [i_1] [i_1] [i_1] = (~(((/* implicit */int) ((unsigned char) (unsigned short)28390))));
            arr_12 [i_2] = ((/* implicit */short) (~(var_3)));
            arr_13 [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -5130648330910841882LL)) ? (arr_1 [i_1]) : (((/* implicit */int) (_Bool)1)))) ^ (((((var_13) + (2147483647))) << (((((/* implicit */int) arr_7 [i_1])) - (127)))))))) ? (min((1002042359856564628LL), (((/* implicit */long long int) arr_6 [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) 544954159U)))))))))));
            var_19 -= ((/* implicit */short) arr_5 [i_1]);
        }
        for (int i_3 = 2; i_3 < 21; i_3 += 2) /* same iter space */
        {
            arr_16 [i_1] [i_3 - 1] [i_3] = ((/* implicit */long long int) var_12);
            var_20 = ((/* implicit */long long int) arr_1 [i_3 + 1]);
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 21; i_4 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    {
                        arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = arr_19 [i_1] [i_4];
                        var_21 = ((/* implicit */unsigned char) (!(arr_0 [i_5])));
                        var_22 |= ((var_13) | (((/* implicit */int) (signed char)-43)));
                        arr_28 [i_5] [i_5] = ((/* implicit */signed char) (~(arr_10 [i_4 - 1])));
                        arr_29 [i_1] [i_5] = ((/* implicit */unsigned int) arr_10 [i_4 - 1]);
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned int) ((unsigned char) (unsigned short)52223));
            arr_30 [i_1] [i_1] = ((/* implicit */short) ((arr_10 [i_4 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-43)))));
            var_24 = ((/* implicit */long long int) ((((int) arr_10 [i_1])) | (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)37145)) || (((/* implicit */_Bool) (signed char)43)))))));
        }
        arr_31 [i_1] = ((/* implicit */int) arr_5 [i_1]);
        arr_32 [i_1] |= ((/* implicit */unsigned long long int) (signed char)-73);
        arr_33 [i_1] [i_1] |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1])) ? (997020528U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), ((+(var_10)))))), ((((!(((/* implicit */_Bool) 2145042097U)))) ? (((((/* implicit */_Bool) 508)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20631))) : (arr_18 [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1228352458717613585ULL)) ? (3750013134U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
    }
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) ((short) ((((/* implicit */int) var_16)) >> (((((/* implicit */int) var_11)) - (11808)))))))));
    var_26 = ((/* implicit */int) var_10);
}
