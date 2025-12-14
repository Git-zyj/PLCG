/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134811
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_11 = ((/* implicit */int) ((((arr_0 [i_0 + 1]) << (((((/* implicit */int) arr_2 [6ULL] [i_0 - 1])) - (20427))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (arr_3 [i_0] [i_0])))) ? (min((arr_3 [i_0] [i_0]), (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_1 [i_0])))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            var_12 = ((/* implicit */int) 613447679606558672ULL);
            arr_6 [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 17833296394102992953ULL)) ? (1ULL) : (18446744073709551614ULL))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_1)) : (var_8))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), (arr_3 [i_1 - 2] [i_0])))), (min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (17833296394102992935ULL)))))));
            var_13 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (arr_5 [i_0] [i_1 - 1]) : (arr_5 [i_0] [i_1 - 1]))) - (((arr_0 [i_0 + 1]) << (((arr_5 [i_0] [i_1 - 2]) - (13083923212951125152ULL)))))))) : (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (arr_5 [i_0] [i_1 - 1]) : (arr_5 [i_0] [i_1 - 1]))) - (((arr_0 [i_0 + 1]) << (((((arr_5 [i_0] [i_1 - 2]) - (13083923212951125152ULL))) - (503522574798526984ULL))))))));
        }
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
        {
            arr_10 [i_0] [i_0] [i_2] = arr_3 [i_0 - 1] [i_2];
            arr_11 [i_0] = ((/* implicit */signed char) min((309016679), (((/* implicit */int) (signed char)120))));
        }
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
        {
            var_14 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [4ULL]))))), (((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 - 1] [i_0 - 1])) ? (arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_14 [i_0 - 1] [i_0 + 1] [i_0 + 1])))));
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 4) 
            {
                for (int i_5 = 2; i_5 < 11; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        {
                            arr_22 [i_0] [i_0] [i_4] [i_5] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_9 [i_0 + 1] [i_0 + 1] [i_0]) : (arr_9 [i_0 - 1] [i_0 + 1] [i_0]))) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_4 - 2] [i_5 + 2])) ? (arr_4 [i_0] [i_0] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4 - 3] [i_4 - 3] [i_5 - 1] [(unsigned short)10]))))))));
                            arr_23 [i_0] [i_3] [i_3] [i_5 + 1] [i_0] [i_5] = ((/* implicit */unsigned short) ((long long int) var_1));
                        }
                    } 
                } 
            } 
        }
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_7 = 0; i_7 < 10; i_7 += 2) 
    {
        arr_28 [i_7] [i_7] = ((/* implicit */unsigned short) var_6);
        var_15 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_7]))));
        var_16 ^= ((/* implicit */int) 613447679606558681ULL);
    }
    for (signed char i_8 = 1; i_8 < 16; i_8 += 4) 
    {
        arr_33 [i_8] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (arr_31 [i_8])))) ? (min((arr_31 [i_8]), (arr_31 [i_8]))) : (max((var_0), (((/* implicit */unsigned long long int) arr_29 [i_8])))));
        var_17 = ((/* implicit */unsigned short) min((((((arr_30 [i_8]) ^ (arr_31 [i_8]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_29 [i_8]), ((_Bool)1))))))), (((/* implicit */unsigned long long int) (~(arr_32 [i_8]))))));
        arr_34 [i_8] [i_8] = ((/* implicit */short) ((((long long int) arr_32 [i_8 - 1])) - (((/* implicit */long long int) (-(((/* implicit */int) arr_29 [i_8])))))));
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 10; i_9 += 2) 
    {
        arr_37 [i_9] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (-309016680) : (((/* implicit */int) arr_2 [i_9] [i_9])))) | (((/* implicit */int) arr_15 [i_9] [i_9] [i_9]))));
        var_18 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_9] [i_9] [i_9] [i_9] [i_9]))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_40 [i_10] = ((/* implicit */short) arr_39 [i_10] [i_10]);
        arr_41 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_39 [i_10] [i_10]) - (((/* implicit */unsigned long long int) var_9))))) ? (arr_39 [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (arr_39 [i_10] [i_10])))) ? (((((/* implicit */_Bool) arr_38 [i_10])) ? (arr_38 [i_10]) : (arr_38 [i_10]))) : (((arr_38 [i_10]) & (((/* implicit */unsigned int) var_1))))))))))));
    }
    var_20 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_9)) : (var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (26U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : (max((((/* implicit */unsigned long long int) 2929777646U)), (18446744073709551615ULL)))))));
}
