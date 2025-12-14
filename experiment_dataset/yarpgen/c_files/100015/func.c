/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100015
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned long long int) var_1)), (var_13))))) ? (min((var_3), (((/* implicit */unsigned long long int) arr_1 [(short)10])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 479475819U)) / (var_3)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))) : (((unsigned int) var_8)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned int) var_16)) <= (((var_7) % (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            arr_7 [i_0] = ((unsigned char) var_16);
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_6 [i_0] [i_1] [i_0]))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((signed char) min(((unsigned char)45), ((unsigned char)64)))))));
            arr_8 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */long long int) var_17)) & (((((/* implicit */_Bool) ((((arr_1 [i_0]) + (9223372036854775807LL))) << (((((arr_1 [i_0]) + (1747727820018938176LL))) - (30LL)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_12))) % (arr_1 [i_0]))) : (arr_5 [i_0] [i_0])))))) : (((/* implicit */_Bool) ((((/* implicit */long long int) var_17)) & (((((/* implicit */_Bool) ((((((arr_1 [i_0]) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((((((arr_1 [i_0]) + (1747727820018938176LL))) - (30LL))) - (2205386346673438791LL)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_12))) % (arr_1 [i_0]))) : (arr_5 [i_0] [i_0]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                var_21 -= ((/* implicit */signed char) ((long long int) arr_5 [i_0] [i_1]));
                var_22 = ((/* implicit */long long int) ((var_4) << (((((/* implicit */int) var_6)) - (67)))));
            }
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? ((-(((((/* implicit */unsigned long long int) var_9)) % (var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned int) var_4)))))));
        }
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) max((((short) min((var_10), (((/* implicit */long long int) var_8))))), (((/* implicit */short) var_18))));
        var_25 |= ((/* implicit */unsigned char) max((((/* implicit */signed char) ((((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_11))))) <= (((/* implicit */int) arr_14 [i_3] [i_3]))))), (((signed char) arr_13 [i_3] [i_3]))));
        var_26 *= ((/* implicit */signed char) arr_14 [i_3] [i_3]);
        var_27 = ((/* implicit */short) ((_Bool) ((short) var_18)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            var_28 = ((/* implicit */unsigned int) var_10);
            var_29 = ((/* implicit */unsigned short) var_18);
            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) var_17))));
            arr_17 [i_3] [i_4] = ((/* implicit */long long int) ((var_3) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56)))));
            var_31 = ((/* implicit */_Bool) ((((var_4) == (((/* implicit */int) var_18)))) ? (arr_13 [i_4 + 2] [i_4 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)56)))));
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] [i_5] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_13 [i_5] [i_5])) ? (9223372036854775807LL) : (arr_13 [i_5] [i_5]))));
        var_32 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5] [i_5])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5] [i_5]))) : (((((/* implicit */_Bool) var_15)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
        var_33 = ((/* implicit */long long int) (unsigned char)56);
        arr_22 [i_5] = ((/* implicit */signed char) min((((short) 532217931U)), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((var_15) < (((/* implicit */unsigned long long int) arr_13 [10LL] [10LL])))))) < (((((/* implicit */long long int) var_16)) ^ (arr_13 [i_5] [i_5]))))))));
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            var_34 = ((/* implicit */long long int) var_11);
            var_35 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_18 [i_5] [i_6])), (var_0)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (532217931U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6])))))) ? (arr_16 [(signed char)7] [i_5]) : (((((/* implicit */unsigned long long int) var_14)) / (var_3)))))));
            /* LoopSeq 3 */
            for (short i_7 = 2; i_7 < 17; i_7 += 4) 
            {
                var_36 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_7 - 1] [i_7 + 1] [i_7 + 1])) ? (var_10) : (arr_28 [i_7 - 1] [i_7 + 2] [i_7 - 2])))) || (((/* implicit */_Bool) arr_28 [i_7 - 2] [i_7 + 1] [i_7 - 2]))));
                var_37 = ((/* implicit */unsigned int) var_14);
            }
            for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
            {
                var_38 = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((var_18) ? (((/* implicit */int) arr_24 [i_5])) : (((/* implicit */int) var_11))))))) : (var_10)));
                var_39 &= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((signed char) (signed char)53))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned short) var_8)))))) : (((((/* implicit */_Bool) arr_14 [i_8] [16LL])) ? (((/* implicit */unsigned int) var_16)) : (var_2))))));
            }
            for (unsigned int i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
            {
                var_40 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((((arr_31 [i_9] [10ULL] [10ULL] [i_5]) <= (arr_31 [i_5] [12U] [i_5] [i_5]))) || (((/* implicit */_Bool) ((int) (signed char)-23)))))), (((unsigned char) var_6))));
                var_41 &= ((/* implicit */short) min((((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_32 [i_5] [i_5] [i_6] [i_5]))))), (((signed char) arr_16 [(signed char)18] [(signed char)18]))));
            }
        }
        for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            var_42 = var_16;
            var_43 = ((/* implicit */short) ((unsigned int) (unsigned char)44));
            var_44 = ((/* implicit */short) min((max((((/* implicit */int) max(((unsigned char)56), (((/* implicit */unsigned char) (_Bool)1))))), (max((-360161891), (var_0))))), (((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))));
            var_45 = ((/* implicit */unsigned short) arr_33 [i_5]);
        }
    }
    var_46 = ((/* implicit */unsigned long long int) var_6);
    var_47 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((signed char) var_5)))) < (((((((/* implicit */_Bool) (unsigned short)10059)) ? (var_0) : (((/* implicit */int) (short)-15518)))) << (((min((var_14), (((/* implicit */long long int) var_0)))) - (1094901601LL)))))));
    var_48 = ((/* implicit */unsigned int) var_0);
}
