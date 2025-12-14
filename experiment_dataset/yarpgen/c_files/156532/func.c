/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156532
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
    var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775808ULL)) ? (9223372036854775807ULL) : (9223372036854775786ULL)))) ? (max((((/* implicit */unsigned long long int) var_5)), (var_10))) : (((/* implicit */unsigned long long int) var_14))));
    var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) -7034179053932081839LL)) | (9223372036854775829ULL)));
    var_20 = ((/* implicit */int) max((var_11), (((/* implicit */unsigned long long int) ((int) (short)-29069)))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 1; i_1 < 16; i_1 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]))) : (arr_3 [i_1 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]))) : (33554431U))))));
            var_22 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_4)) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((9223372036854775806ULL) <= (arr_4 [i_1 + 1]))))))));
        }
        for (short i_2 = 1; i_2 < 16; i_2 += 1) /* same iter space */
        {
            arr_9 [13LL] [13LL] [13LL] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2 - 1])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_2] [i_2])) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(signed char)8])))))) ? (((3192868202140324285ULL) - (9223372036854775841ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_2 - 1] [i_2])))));
            var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -7440654190313532630LL)) ? (var_1) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) (unsigned char)58)) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9341))) : (9223372036854775808ULL))) : (((/* implicit */unsigned long long int) -940469449)))) : (((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)75))) : ((+(9223372036854775862ULL)))))));
            arr_10 [i_0] = (unsigned char)142;
        }
        /* vectorizable */
        for (short i_3 = 1; i_3 < 16; i_3 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */short) ((9223372036854775807ULL) > (((/* implicit */unsigned long long int) -7440654190313532640LL))));
            var_25 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_3]))) ^ (var_14)))) ? (7440654190313532644LL) : (((/* implicit */long long int) arr_6 [i_3 + 1] [i_3 - 1] [i_3 - 1]))));
            arr_14 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4143990046U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (9223372036854775782ULL)));
            /* LoopSeq 4 */
            for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7758047093894208200ULL)) ? (arr_8 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (1309344157) : (((/* implicit */int) var_6))));
                var_27 = ((/* implicit */unsigned char) ((signed char) arr_18 [i_3 + 1] [i_3]));
            }
            for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                var_28 ^= ((/* implicit */_Bool) var_3);
                var_29 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))));
                var_30 = ((/* implicit */short) ((9223372036854775780ULL) >> (((3192868202140324285ULL) - (3192868202140324232ULL)))));
            }
            for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
            {
                arr_26 [i_0] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_3 - 1] [i_6] [(unsigned char)4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_13 [i_0] [i_3 - 1]))));
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_3 + 1])) ? (((1099511627775ULL) >> (((arr_16 [i_0] [i_3 + 1] [i_0]) - (15332854919107730248ULL))))) : (var_9)));
                arr_27 [i_0] [i_0] [i_6] [i_3 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [(unsigned short)8] [(unsigned short)8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_0 [i_3 - 1] [i_6])));
                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (unsigned char)214))));
            }
            for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
            {
                var_33 = ((/* implicit */_Bool) ((arr_16 [i_0] [i_3 + 1] [i_7]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)41)))));
                var_34 = ((/* implicit */short) ((((/* implicit */_Bool) 571670831)) ? (((/* implicit */unsigned long long int) arr_7 [i_3 - 1])) : (arr_28 [i_3 + 1] [i_3] [i_7] [i_0])));
            }
        }
        var_35 = ((/* implicit */long long int) max((((/* implicit */int) (signed char)104)), (((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (signed char)-126))))));
    }
    for (unsigned int i_8 = 3; i_8 < 13; i_8 += 2) 
    {
        var_36 = ((/* implicit */unsigned short) ((long long int) (unsigned char)55));
        var_37 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) ^ (((((/* implicit */_Bool) ((unsigned long long int) arr_17 [i_8] [i_8] [i_8] [i_8]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [(_Bool)1] [i_8])) ? (((/* implicit */int) arr_25 [i_8] [i_8 - 3] [i_8 + 1] [i_8 - 3])) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) (unsigned char)214)) ? (arr_8 [i_8 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))))));
    }
}
