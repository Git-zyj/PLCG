/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148966
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
    var_20 = var_14;
    var_21 = ((/* implicit */unsigned long long int) min(((short)-15726), ((short)-25)));
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((long long int) var_6));
        arr_3 [i_0] = ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) var_18)) : (((unsigned long long int) (+(((/* implicit */int) (unsigned short)64035))))));
    }
    for (unsigned int i_1 = 2; i_1 < 17; i_1 += 3) 
    {
        arr_6 [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (((+(var_12))) != (((/* implicit */unsigned long long int) arr_4 [i_1 - 1] [i_1])))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 2; i_2 < 17; i_2 += 3) 
        {
            arr_10 [i_1 - 2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((short) var_11))) != (var_19))))) ^ (max((((/* implicit */unsigned int) (+(var_19)))), (arr_8 [i_1] [i_2] [16LL])))));
            arr_11 [i_1 + 1] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_2 - 2]))));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_15), (var_3)))) ? ((-(var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 1])) >= (((/* implicit */int) arr_7 [i_2 - 2] [i_2 - 2]))))))));
            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_7 [i_1 - 1] [i_2]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) var_16))))))))));
        }
        for (long long int i_3 = 2; i_3 < 16; i_3 += 2) 
        {
            /* LoopSeq 4 */
            for (short i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
            {
                var_24 = ((/* implicit */long long int) arr_9 [i_3] [i_3]);
                arr_16 [i_3 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_7 [i_1 - 2] [i_3 + 2]))) ? (((((/* implicit */_Bool) 0LL)) ? ((-(var_10))) : (((/* implicit */long long int) (-(2147483628)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967284U))))))));
                var_25 *= ((/* implicit */unsigned int) arr_9 [i_3 + 1] [i_1 - 1]);
            }
            for (short i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
            {
                arr_19 [i_5] |= ((/* implicit */long long int) var_2);
                var_26 *= ((/* implicit */signed char) (unsigned char)39);
            }
            for (short i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                arr_22 [i_6] [i_3] [i_1] &= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_12 [i_1 - 2])) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) (short)0)) : (var_13)))))));
                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -8723114568441839897LL)) ? (17ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16502))))))));
                var_28 = ((/* implicit */unsigned int) ((unsigned long long int) var_5));
            }
            for (signed char i_7 = 4; i_7 < 17; i_7 += 1) 
            {
                var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)1))));
                var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) (-(var_19)))) / (max((((/* implicit */long long int) var_6)), (arr_4 [i_1] [i_1]))))))));
            }
            arr_25 [i_1 - 2] [i_3] = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) 2147483621)) * (arr_21 [i_3 - 1] [i_3 - 2] [i_1 - 2] [i_1]))), (((/* implicit */unsigned long long int) (+(0LL))))));
            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) var_18))));
            arr_26 [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((short) min(((~(var_18))), (((/* implicit */int) (unsigned char)0)))));
        }
        var_32 = ((/* implicit */int) var_2);
        var_33 &= ((arr_14 [i_1 - 2] [i_1 - 1] [i_1 + 1]) - (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_1 [i_1] [i_1 + 1]))))));
        var_34 = ((/* implicit */int) var_2);
    }
    for (int i_8 = 0; i_8 < 14; i_8 += 4) 
    {
        var_35 ^= ((/* implicit */unsigned char) var_11);
        /* LoopSeq 2 */
        for (long long int i_9 = 1; i_9 < 13; i_9 += 1) 
        {
            var_36 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_8] [i_8])) ? (var_13) : (var_16)))), (min((var_15), (((/* implicit */long long int) arr_13 [i_8] [i_9]))))))), (((unsigned long long int) ((((/* implicit */_Bool) arr_17 [(signed char)3] [i_8])) ? (((/* implicit */int) arr_29 [i_9 - 1])) : (var_14))))));
            var_37 &= ((/* implicit */signed char) ((-1LL) < (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_8] [i_8])))));
        }
        /* vectorizable */
        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 1) 
        {
            arr_36 [i_8] = ((/* implicit */short) (+(((/* implicit */int) arr_13 [i_8] [i_10]))));
            arr_37 [i_8] [i_8] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_8]))) : (var_10)));
            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_10] [i_8])))))));
        }
        var_39 &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(var_18)))) + (((long long int) arr_28 [i_8]))));
        var_40 = ((/* implicit */unsigned long long int) var_15);
    }
    for (int i_11 = 0; i_11 < 23; i_11 += 3) 
    {
        var_41 = arr_38 [i_11];
        var_42 = -1058571228;
        arr_42 [i_11] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)7)) ? (arr_40 [i_11] [i_11]) : (arr_40 [i_11] [i_11]))), (((/* implicit */long long int) ((arr_40 [i_11] [i_11]) != (arr_40 [i_11] [i_11]))))));
        arr_43 [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) && ((!(((/* implicit */_Bool) max((((/* implicit */long long int) 2147483628)), (9223372036854775807LL))))))));
        arr_44 [i_11] [i_11] = ((/* implicit */long long int) (~(var_18)));
    }
    var_43 = ((/* implicit */unsigned int) var_15);
}
