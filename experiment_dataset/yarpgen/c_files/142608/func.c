/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142608
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
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] |= ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) (short)-15604))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) == (arr_3 [i_0] [i_0])))))), (((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned char)42)))), (((arr_1 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212))))))))));
        arr_5 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((var_9) | (((/* implicit */unsigned long long int) 1607109214U))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_3 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            arr_13 [i_2] |= ((/* implicit */short) var_2);
            var_13 = ((/* implicit */unsigned char) (~(2687858081U)));
        }
        for (signed char i_3 = 3; i_3 < 10; i_3 += 1) 
        {
            arr_16 [i_3 + 2] = ((/* implicit */unsigned short) var_11);
            arr_17 [i_3] [i_3] = ((/* implicit */unsigned char) (+(arr_12 [i_3] [i_3 + 2] [i_3 + 2])));
            var_14 = ((/* implicit */int) (~(arr_12 [i_3 + 4] [i_3 + 2] [i_3])));
            arr_18 [i_1] [i_3] [i_3] &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_10 [i_1] [i_1])) : (((/* implicit */int) arr_8 [i_1]))))));
        }
        var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)214)) : ((+(((/* implicit */int) (_Bool)1))))));
        arr_19 [i_1] [i_1] = ((/* implicit */signed char) var_3);
        arr_20 [(signed char)6] [(signed char)6] = ((/* implicit */unsigned char) ((13ULL) == (var_9)));
        arr_21 [i_1] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)214)) != (arr_14 [i_1] [i_1])));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_25 [i_4] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)-50))))) ? (min((((/* implicit */unsigned long long int) (signed char)-55)), (4259904412583779387ULL))) : (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) var_2))))))), (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) + (((((/* implicit */_Bool) (unsigned short)59636)) ? (153049482819690407LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_4] [i_4]))))))))));
        arr_26 [i_4] = ((/* implicit */unsigned short) (signed char)(-127 - 1));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (max((arr_22 [i_4]), (((/* implicit */long long int) min(((signed char)121), ((signed char)-104))))))));
    }
    var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4035122863U)), (14186839661125772216ULL)))))) ? (-4189810676418475847LL) : (((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_11))))) : (var_5)))));
}
