/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123892
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (arr_0 [i_0]))))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_7)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (short)63))))))))));
        var_19 &= ((/* implicit */short) ((unsigned short) ((long long int) var_1)));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (-(var_15)));
        var_20 = ((/* implicit */short) ((signed char) ((unsigned long long int) var_12)));
    }
    var_21 ^= ((/* implicit */int) ((((unsigned int) max((var_10), (var_10)))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_16)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned char) var_2))))))));
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_10))));
    /* LoopSeq 3 */
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_23 = ((/* implicit */short) ((((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)1)) : (33554431))) > (((/* implicit */int) ((((/* implicit */int) (signed char)0)) < (((/* implicit */int) (signed char)0))))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 4497150137406873796LL)) ? (((/* implicit */long long int) -178593625)) : (6650222825830880276LL))), (4497150137406873819LL)))) : (4723917641454821711ULL)));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((max((arr_6 [i_1] [(signed char)10]), (arr_3 [i_1]))), (((/* implicit */unsigned short) ((short) (signed char)-23)))))))));
        var_24 = ((/* implicit */signed char) ((arr_4 [i_1]) * (((unsigned long long int) (signed char)0))));
        arr_8 [i_1] [i_1] = ((/* implicit */int) max((var_2), (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_15)), (var_5))))))));
    }
    for (long long int i_2 = 2; i_2 < 18; i_2 += 4) 
    {
        arr_12 [i_2] [20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))) && (((/* implicit */_Bool) max((min((var_0), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) 327134960U)))))));
        arr_13 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) arr_5 [i_2 + 4] [i_2 + 1])) ? (((/* implicit */int) arr_6 [i_2 + 4] [i_2])) : (((/* implicit */int) arr_6 [i_2 + 4] [i_2])))) : (((/* implicit */int) ((var_4) < (arr_11 [i_2 - 2] [i_2]))))));
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) arr_4 [7]))));
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((long long int) min((arr_4 [17LL]), (((/* implicit */unsigned long long int) 587862198))))))));
        var_27 = ((/* implicit */short) (-(((/* implicit */int) (signed char)(-127 - 1)))));
    }
    for (short i_3 = 2; i_3 < 18; i_3 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_4 = 3; i_4 < 17; i_4 += 4) /* same iter space */
        {
            arr_19 [i_4] = ((/* implicit */short) (+(((/* implicit */int) var_9))));
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((unsigned long long int) var_2)))));
                arr_22 [i_3] |= ((((/* implicit */_Bool) arr_3 [i_3 - 1])) ? (var_8) : (((/* implicit */unsigned long long int) -587862193)));
                var_29 = ((/* implicit */unsigned short) ((short) (+(arr_9 [i_3]))));
            }
            for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                var_30 = ((/* implicit */unsigned char) arr_3 [(short)7]);
                var_31 = ((/* implicit */signed char) ((unsigned short) arr_3 [i_3 + 2]));
            }
        }
        for (short i_7 = 3; i_7 < 17; i_7 += 4) /* same iter space */
        {
            var_32 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_10), (arr_3 [i_3 + 2])))) ? (((((/* implicit */_Bool) arr_3 [i_3 - 2])) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) arr_3 [i_3 - 2])))) : (((/* implicit */int) ((signed char) arr_3 [i_3 + 1])))));
            var_33 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (unsigned short)65535)))))) != (((15860213742562056283ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
            var_34 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (max((max((((/* implicit */unsigned long long int) var_6)), (arr_11 [i_3] [i_3]))), (min((var_8), (((/* implicit */unsigned long long int) (signed char)59)))))) : (((unsigned long long int) var_14))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_31 [i_8] = ((/* implicit */short) ((var_11) == (((/* implicit */long long int) ((unsigned int) 4294967285U)))));
            arr_32 [(short)5] [i_8] [(short)4] = max((((((/* implicit */_Bool) var_12)) ? (var_8) : (arr_29 [i_3 + 1]))), (((/* implicit */unsigned long long int) ((arr_28 [i_3 + 2] [i_8]) < (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
        }
        arr_33 [i_3 - 2] [i_3 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_15 [i_3 + 2] [i_3 - 1])) : (arr_29 [i_3 + 1])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)18)), ((unsigned short)15575)))) : (((/* implicit */int) var_10))));
    }
}
