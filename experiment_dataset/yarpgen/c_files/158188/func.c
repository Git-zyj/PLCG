/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158188
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
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_10))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) (unsigned char)104)))));
        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)127))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (2483420223694637542LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 3])))));
        var_21 = ((/* implicit */unsigned char) (~(2641349813U)));
        arr_6 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 3]))));
        var_22 = ((/* implicit */long long int) 1653617483U);
    }
    /* vectorizable */
    for (unsigned char i_2 = 3; i_2 < 10; i_2 += 3) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */long long int) 7U)) : (-6834833331326600755LL)))) ? (((/* implicit */int) arr_1 [i_2 - 1])) : (((((/* implicit */int) (unsigned char)154)) / (((/* implicit */int) (unsigned char)116))))));
        var_23 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(946253370U))))));
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)59)) ? (((((/* implicit */_Bool) arr_7 [i_2])) ? (var_6) : (((/* implicit */int) arr_0 [i_2] [i_2])))) : (((((/* implicit */int) arr_8 [i_2])) - (((/* implicit */int) arr_1 [i_2]))))));
        arr_11 [i_2] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (unsigned char)119)))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 1) 
    {
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) arr_12 [i_3]))));
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((unsigned char) (~(arr_12 [i_3])))))));
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2566223494U)) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) (unsigned char)24))));
        /* LoopSeq 1 */
        for (int i_4 = 2; i_4 < 19; i_4 += 2) 
        {
            var_28 = ((/* implicit */int) arr_16 [i_3] [i_3]);
            var_29 = ((/* implicit */long long int) arr_17 [i_3 - 1]);
        }
        arr_18 [i_3] = ((/* implicit */unsigned char) var_0);
    }
    var_30 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))) ? (-2040088454330053924LL) : (((/* implicit */long long int) var_7)))) : (5039349029893927695LL)));
    var_31 = ((/* implicit */unsigned char) ((((long long int) (unsigned char)178)) | (((/* implicit */long long int) ((unsigned int) 6569119523316256890LL)))));
    var_32 = var_11;
}
