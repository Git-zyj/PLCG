/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138056
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (+((+(arr_2 [i_0])))));
        arr_5 [16] = ((/* implicit */short) ((((arr_2 [i_0]) >> (((max((((/* implicit */long long int) (signed char)0)), (arr_2 [i_0]))) - (5848062878901778550LL))))) - (((/* implicit */long long int) ((/* implicit */int) var_9)))));
        var_12 = ((/* implicit */int) (~(((((/* implicit */_Bool) max((arr_2 [(signed char)11]), (((/* implicit */long long int) arr_3 [i_0] [i_0]))))) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (1048575U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
        var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_0]))))) ? ((+(var_11))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))))));
        arr_6 [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (1856516129U)))))) ? ((+((+(((/* implicit */int) var_6)))))) : ((+(((/* implicit */int) (_Bool)1))))));
    }
    var_14 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) (_Bool)1))))) : (15872ULL))), (min((var_11), (((/* implicit */unsigned long long int) var_2))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) arr_8 [i_1]);
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (-(((((/* implicit */int) arr_8 [i_1])) - (var_7))))))));
        arr_9 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_7 [i_1]))));
        arr_10 [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (unsigned short)24821))))));
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)40))));
        var_18 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)231))));
        arr_14 [i_2] = ((/* implicit */unsigned int) (-((-(((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
    }
    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
    {
        arr_17 [i_3] = var_5;
        var_19 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) (signed char)-81)))))))));
        arr_18 [i_3] [(signed char)9] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_8 [i_3])) ^ (((/* implicit */int) arr_8 [i_3]))))));
    }
    for (int i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_20 ^= arr_20 [i_4];
        arr_21 [i_4] = ((/* implicit */unsigned short) ((arr_19 [i_4]) ^ (((/* implicit */long long int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))), ((~(((/* implicit */int) var_6)))))))));
        var_21 = ((/* implicit */int) max(((-((~(var_11))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [(signed char)15])))))));
        arr_22 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_4])) ^ (((/* implicit */int) ((unsigned char) ((int) var_7))))));
        var_22 = ((((/* implicit */_Bool) ((((/* implicit */int) min((var_6), (((/* implicit */signed char) arr_20 [18ULL]))))) * (((/* implicit */int) (signed char)-90))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? ((-(arr_19 [i_4]))) : (((/* implicit */long long int) var_4))))) : (max((((/* implicit */unsigned long long int) arr_19 [i_4])), ((~(var_11))))));
    }
    var_23 = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
}
