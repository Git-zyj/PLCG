/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105900
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
    for (long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        var_19 ^= ((/* implicit */int) min(((-((-(5899897275182477847LL))))), (4292870144LL)));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((4619005893165842667ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 18446744073709551615ULL))))))) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (signed char)62))));
            var_21 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / ((-2147483647 - 1))));
        }
        for (short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_22 = ((/* implicit */short) (-2147483647 - 1));
            var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_0 - 1] [i_2]))))) == (((((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_0 + 1])) | (var_12)))));
            var_24 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) | (((((/* implicit */long long int) arr_0 [i_0 - 1])) / (arr_2 [i_0 + 1] [i_0 - 3])))));
            var_25 = ((/* implicit */unsigned int) (signed char)-41);
            var_26 = ((/* implicit */short) ((int) max((max((arr_3 [i_2] [21LL] [i_2]), (-20))), ((-(((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            var_27 += ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */long long int) (+(arr_3 [i_0] [i_3] [i_0])))) : (arr_2 [i_0 - 1] [i_0 - 2]))));
            var_28 &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_3] [i_0 - 2])) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0 + 1])) : (12820288672806712078ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) (signed char)-62))))), (arr_1 [i_3] [i_0 + 1]))))));
        }
        var_29 = ((/* implicit */signed char) ((((/* implicit */int) ((short) (-(8314974474398473347ULL))))) * (max((((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 2])), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_0] [i_0 - 2])) : (((/* implicit */int) (unsigned short)13))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_30 += ((/* implicit */short) arr_5 [i_4] [i_4] [i_4]);
        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) max((arr_15 [i_4]), (arr_10 [i_4] [i_4] [i_4]))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) ((arr_5 [i_4] [i_4] [i_4]) <= (((/* implicit */long long int) ((/* implicit */int) var_3)))))), (min((var_3), (((/* implicit */unsigned short) arr_12 [i_4] [i_4])))))))));
    }
    var_32 -= ((/* implicit */short) ((((/* implicit */int) min((var_17), (((/* implicit */unsigned char) var_11))))) != ((-(((/* implicit */int) var_1))))));
}
