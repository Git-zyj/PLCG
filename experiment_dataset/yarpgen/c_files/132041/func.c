/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132041
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
    var_12 = ((/* implicit */unsigned char) max((2147483647), (((((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (var_11)))) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) 18446744073709551615ULL)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [(unsigned short)10] = ((unsigned char) var_1);
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [(short)23])), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8973))) : (arr_0 [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7181))) : (((unsigned int) ((((/* implicit */_Bool) 1768399100U)) ? (((/* implicit */int) (unsigned short)8973)) : (((/* implicit */int) (unsigned short)8973)))))));
        var_14 = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned short)56562)), ((-(min((((/* implicit */unsigned int) -2147483626)), (arr_0 [i_0])))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_8);
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) min((arr_0 [i_0]), (((/* implicit */unsigned int) arr_4 [i_0]))));
            arr_7 [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) max(((unsigned short)8985), ((unsigned short)56563)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14))) : (14ULL))), (((/* implicit */unsigned long long int) (unsigned short)56590))));
        }
        for (short i_2 = 3; i_2 < 24; i_2 += 1) 
        {
            arr_10 [(short)24] [(signed char)17] = ((/* implicit */_Bool) ((int) (short)-32764));
            arr_11 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) arr_1 [i_0])))));
        }
        arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((17728478U) & (arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_9 [i_0] [i_0]))) : (((arr_0 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))))));
    }
    var_15 = ((/* implicit */long long int) var_6);
}
