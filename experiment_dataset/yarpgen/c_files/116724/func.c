/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116724
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) && (((/* implicit */_Bool) (~(var_14))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_0] [(unsigned char)19] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) var_9)))));
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_3])) ? (arr_11 [i_3] [i_2] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned short)18] [(unsigned short)18] [(unsigned short)18]))))))));
                        var_22 -= ((/* implicit */_Bool) (-(arr_11 [i_3] [i_2] [i_1] [i_0])));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 4; i_4 < 12; i_4 += 4) 
    {
        var_23 = ((/* implicit */signed char) ((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29761)))));
        arr_15 [i_4] [i_4 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_11 [i_4] [i_4] [i_4] [i_4])))) ? ((+(((/* implicit */int) (unsigned char)103)))) : (((/* implicit */int) arr_4 [i_4 - 4] [i_4 - 1] [i_4 + 1]))))) ? (((((/* implicit */_Bool) ((arr_6 [i_4] [i_4]) ? (((/* implicit */long long int) ((/* implicit */int) (short)26107))) : (arr_9 [i_4] [i_4])))) ? ((+(((/* implicit */int) arr_10 [i_4] [i_4 + 1] [i_4 + 1] [i_4])))) : (((/* implicit */int) ((short) (_Bool)0))))) : ((-(((/* implicit */int) arr_5 [i_4 - 2] [i_4] [i_4 + 1]))))));
    }
    for (short i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)9712))));
        var_25 = ((/* implicit */long long int) (-((-(((/* implicit */int) ((unsigned short) (short)-32761)))))));
        arr_18 [i_5] [21] = ((/* implicit */_Bool) (unsigned short)60544);
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3400083320U))))) : (arr_17 [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [i_5]))))) : ((+(((var_14) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65526)))))))));
    }
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_4), (var_0)))) ? (((((var_4) & (((/* implicit */long long int) ((/* implicit */int) var_6))))) | (((/* implicit */long long int) ((/* implicit */int) ((var_10) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))) : ((~(((((/* implicit */_Bool) (short)-32687)) ? (var_5) : (((/* implicit */long long int) var_19))))))));
}
