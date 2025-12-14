/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125186
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((707268146466515388LL) + (-707268146466515388LL)))) == (((unsigned long long int) min((((/* implicit */long long int) 536739840U)), (-707268146466515420LL))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) arr_0 [i_0 + 1]);
        arr_2 [i_0 + 3] = ((-707268146466515393LL) / (-707268146466515420LL));
        var_20 = ((/* implicit */int) ((arr_1 [i_0 + 1]) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [(signed char)19])))))));
    }
    for (unsigned short i_1 = 3; i_1 < 22; i_1 += 4) 
    {
        /* LoopSeq 4 */
        for (signed char i_2 = 2; i_2 < 22; i_2 += 3) 
        {
            var_21 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)244)) ? (var_14) : (((/* implicit */int) arr_8 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
            arr_9 [i_1 - 1] = ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
        }
        for (int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            arr_12 [i_1] [i_1] [i_3] = ((/* implicit */int) ((short) (+(((/* implicit */int) arr_10 [i_1 - 1] [i_3])))));
            arr_13 [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) (~(arr_5 [i_3])))) ^ ((~(-707268146466515420LL)))))));
        }
        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            arr_16 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? ((+(((unsigned int) (-9223372036854775807LL - 1LL))))) : (((((/* implicit */_Bool) var_7)) ? (((unsigned int) 19)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1])) < (((/* implicit */int) arr_4 [i_1 - 3] [1ULL]))))))))));
            var_22 -= ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) (+(((/* implicit */int) (unsigned short)15656))))))));
        }
        for (int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            var_23 = ((/* implicit */signed char) min((arr_17 [i_1]), (((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) arr_4 [i_1 - 1] [i_5])), (-3118718967817282752LL))))))));
            var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */int) ((arr_6 [i_1] [i_5]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1])))))) % (((((/* implicit */_Bool) arr_4 [i_1 - 3] [i_1 - 3])) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) (unsigned short)14499))))))));
        }
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned long long int) var_14)), (arr_17 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_6), (((/* implicit */short) (signed char)-42)))))) : (((long long int) min((304906111U), (((/* implicit */unsigned int) var_6))))))))));
        var_26 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1 - 3] [i_1 - 3])) & (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1]))))) ? (((((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 1])) ^ (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1])))) : ((~(((/* implicit */int) arr_3 [i_1 - 3] [i_1 - 3]))))));
    }
}
