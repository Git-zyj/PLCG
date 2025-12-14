/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175980
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [6] [i_0]))))))))));
        var_21 &= (~(((var_7) + (var_7))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 + 3]))))));
        arr_4 [i_0] = ((/* implicit */long long int) (+(arr_1 [i_0 - 2])));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((arr_5 [(unsigned short)2]) + (2147483647))) >> (((var_1) + (3861519272045925569LL))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_1]))) || (((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)212)), (1610486937)))))))) : (((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (1610486937)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) * (arr_6 [i_1] [i_1])))))));
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)239)) ? (arr_6 [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_3))))))))));
    }
    for (int i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
    {
        var_25 ^= ((/* implicit */unsigned long long int) 1953586088U);
        var_26 = ((/* implicit */int) 826296124U);
        var_27 = (-2147483647 - 1);
        var_28 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 12998444126311157684ULL)))))), (((unsigned long long int) min((var_14), ((unsigned char)0))))));
    }
    for (int i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) ((var_12) || (((/* implicit */_Bool) var_1))))))));
        arr_12 [i_3] = ((/* implicit */int) ((unsigned int) min((((/* implicit */long long int) (-2147483647 - 1))), (2068401788631130322LL))));
        var_30 = ((/* implicit */int) arr_7 [i_3] [i_3]);
        var_31 = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(unsigned short)15] [i_3]))) : (2341381207U)))) & (((((/* implicit */long long int) var_3)) ^ (arr_11 [i_3])))))));
    }
    var_32 &= ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_14))))), ((~(var_18)))))));
}
