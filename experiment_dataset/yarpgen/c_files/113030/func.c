/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113030
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
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) min(((unsigned short)28036), (((/* implicit */unsigned short) (unsigned char)26))))) < ((+(((/* implicit */int) ((8079980657099743726ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_1 [i_0])) ^ ((+(10366763416609807889ULL)))))) ? (((/* implicit */unsigned int) arr_1 [i_0])) : ((+((~(var_1)))))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(10366763416609807893ULL)))) ? (min((((/* implicit */unsigned long long int) 127U)), (min((((/* implicit */unsigned long long int) (short)-24047)), (10366763416609807890ULL))))) : (((/* implicit */unsigned long long int) (-(((var_0) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) var_0)))))))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((arr_1 [i_0]) / (((/* implicit */int) var_4))))) : ((-(var_8)))))) ? (var_1) : (((/* implicit */unsigned int) (+(((/* implicit */int) max((var_4), (((/* implicit */short) arr_2 [i_0]))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_15 = ((/* implicit */long long int) (_Bool)0);
        arr_8 [i_1] = ((/* implicit */short) arr_5 [i_1]);
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) arr_4 [i_1] [i_1]))))) < (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))));
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) (+(-7212090074859725836LL)));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_17 |= ((/* implicit */int) ((arr_11 [i_2] [i_2]) + (((/* implicit */unsigned long long int) 0U))));
        arr_13 [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) (unsigned short)41858))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) (_Bool)0))))));
    }
    var_19 = ((/* implicit */unsigned int) var_0);
}
