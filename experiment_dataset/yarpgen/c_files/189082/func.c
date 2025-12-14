/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189082
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
    var_18 &= (-(((((15ULL) >= (18446744073709551600ULL))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_9))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) 18446744073709551607ULL))));
        var_20 = ((/* implicit */short) var_3);
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((int) arr_8 [i_0] [i_1] [i_2 + 1]))) : (arr_6 [i_1])));
            }
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                var_23 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)248)) ^ (((((/* implicit */int) (unsigned short)59786)) ^ (((/* implicit */int) (unsigned char)251))))));
                var_24 &= ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_3])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)5))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255))))) : ((+(3237428851U)))));
            }
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                var_25 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_1] [i_4])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_4])))) != (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_4])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) > (min((15156126953351763608ULL), (((/* implicit */unsigned long long int) var_14))))))));
                var_26 = ((/* implicit */short) (((((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_13 [i_1])) : (((/* implicit */int) arr_11 [i_4] [i_1] [i_0])))))) + (2147483647))) << (((((((/* implicit */_Bool) ((signed char) arr_8 [i_4] [i_1] [i_0]))) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1])) && (((/* implicit */_Bool) 1539168687))))))) - (5)))));
            }
            arr_17 [i_0] = ((/* implicit */signed char) var_2);
        }
        for (short i_5 = 3; i_5 < 10; i_5 += 1) /* same iter space */
        {
            var_27 |= ((/* implicit */_Bool) var_15);
            var_28 = ((/* implicit */unsigned int) arr_19 [i_0] [i_5] [i_5]);
            var_29 &= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3237428840U)) ? (((/* implicit */int) (unsigned short)38397)) : (((/* implicit */int) arr_4 [i_5 - 3] [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
            arr_21 [i_0] [i_0] [i_5 - 1] = ((/* implicit */int) arr_5 [i_5 - 3] [i_5 + 1] [i_0]);
        }
        for (short i_6 = 3; i_6 < 10; i_6 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((short) arr_16 [i_0] [i_6 - 2] [i_6 - 1] [i_6])))));
            var_31 = ((/* implicit */unsigned char) ((int) -1708154746));
        }
    }
    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
    {
        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((unsigned short) ((((/* implicit */int) ((short) var_17))) << (((((/* implicit */int) arr_22 [i_7] [i_7])) - (44725)))))))));
        arr_30 [i_7] [i_7] = ((/* implicit */_Bool) 1057538443U);
        var_33 *= ((unsigned long long int) ((((/* implicit */int) var_2)) <= ((~(((/* implicit */int) arr_0 [i_7]))))));
        arr_31 [i_7] [i_7] = ((/* implicit */unsigned short) arr_10 [i_7] [i_7] [i_7] [i_7]);
    }
}
