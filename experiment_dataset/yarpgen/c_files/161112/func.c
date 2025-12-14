/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161112
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
    var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */long long int) 268435456)) != (var_3))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((((/* implicit */unsigned int) -494250351)) - (3758096384U))))))));
    var_11 = ((/* implicit */signed char) var_9);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) 2255666991U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)0)))), (((/* implicit */int) (signed char)89)))) & (((/* implicit */int) arr_2 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)167)) ? (((((/* implicit */_Bool) 1605137274)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))) : (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_2 [i_0])))))) != (((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_13 = ((/* implicit */signed char) ((2141909699U) >> ((((-(((/* implicit */int) arr_5 [i_1])))) + (32842)))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_1])))))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 2) 
    {
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (-(4294967295U))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((signed char)-64), (((/* implicit */signed char) arr_9 [i_2])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned char)12])) ? (arr_7 [(signed char)16]) : (arr_7 [14U])))) ? (max((((/* implicit */unsigned long long int) arr_9 [i_2 + 1])), (arr_7 [0LL]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_9 [i_2])), (var_5)))))))))));
        var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_8 [i_2 - 1] [(signed char)0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 - 1] [(signed char)14]))) : (((((/* implicit */_Bool) arr_8 [i_2 + 2] [(unsigned char)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 - 1] [(_Bool)1]))) : (18014397435740160ULL)))));
        arr_10 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12288))) : (arr_7 [i_2]))) << (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((unsigned int) (!((_Bool)1)))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)8))))), (arr_8 [i_2] [i_2])))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_7 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) ((arr_9 [i_2 + 2]) && (arr_9 [i_2])))) : (((((/* implicit */int) (signed char)106)) * (((/* implicit */int) arr_9 [i_2]))))))));
    }
    var_18 = ((/* implicit */_Bool) ((unsigned int) var_0));
}
