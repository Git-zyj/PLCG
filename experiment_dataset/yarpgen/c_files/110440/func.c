/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110440
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
    var_12 *= ((/* implicit */signed char) (+(((/* implicit */int) var_9))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((unsigned short) var_8)), (var_2))))));
        var_14 = max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned short)13006))))), (((3854201263547714198LL) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)1008)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_15 = ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_1]));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64851)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (18446744073709486080ULL)))) || (((/* implicit */_Bool) (~(6284663134984698179LL))))));
        /* LoopSeq 4 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_17 = ((/* implicit */unsigned char) arr_2 [i_1] [i_1]);
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (unsigned short)33662))));
            var_19 = ((/* implicit */unsigned long long int) (unsigned short)65535);
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_5 [i_2] [i_2]) : (arr_5 [i_1] [i_1])));
        }
        for (signed char i_3 = 2; i_3 < 16; i_3 += 1) 
        {
            var_21 = ((/* implicit */signed char) ((long long int) var_1));
            var_22 = ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)24))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_8 [i_1] [15ULL]))));
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) : (((arr_7 [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
            var_24 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 7568462967643388915ULL))));
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_1] [i_1]))))))));
        }
        for (unsigned char i_4 = 2; i_4 < 16; i_4 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_5 = 1; i_5 < 17; i_5 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_6 = 4; i_6 < 16; i_6 += 2) /* same iter space */
                {
                    arr_16 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_4 - 1])) != (((/* implicit */int) arr_3 [i_4 - 2]))));
                    arr_17 [i_1] [i_1] [i_5 + 2] [i_5 - 1] [i_1] [i_5 + 2] = ((/* implicit */signed char) arr_10 [i_1] [i_4]);
                }
                for (unsigned short i_7 = 4; i_7 < 16; i_7 += 2) /* same iter space */
                {
                    var_26 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) 260046848LL)))));
                    var_27 = ((/* implicit */unsigned short) ((unsigned char) 11723418600958639924ULL));
                    var_28 = ((/* implicit */unsigned long long int) arr_14 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_7 - 1] [i_5 + 1]);
                }
                for (unsigned short i_8 = 4; i_8 < 16; i_8 += 2) /* same iter space */
                {
                    arr_24 [i_1] [i_4] [i_1] [i_8] = ((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned char)12))))));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (((((/* implicit */_Bool) var_2)) ? (arr_7 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)210))))) : (((/* implicit */unsigned long long int) 824255824543239256LL))));
                    var_30 = ((/* implicit */unsigned short) ((signed char) ((arr_7 [i_1]) != (0ULL))));
                }
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? ((~(562915593682944LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_5])) + (((/* implicit */int) (unsigned short)19374)))))));
            }
            for (unsigned char i_9 = 1; i_9 < 18; i_9 += 2) 
            {
                var_32 |= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_26 [i_1] [i_1] [i_1])) < (((/* implicit */int) arr_22 [i_1] [i_1] [i_1] [i_1]))))) / (((((/* implicit */int) (unsigned short)11540)) << (((arr_19 [i_1] [(unsigned short)13] [i_1] [i_1]) - (2770024514735291699ULL)))))));
                var_33 += ((/* implicit */unsigned char) ((signed char) var_2));
                var_34 = ((((/* implicit */_Bool) arr_4 [i_9 - 1])) ? (arr_4 [i_9 + 1]) : (arr_4 [i_9 - 1]));
                var_35 = ((/* implicit */unsigned short) arr_6 [i_4]);
                var_36 = var_1;
            }
            for (unsigned long long int i_10 = 1; i_10 < 16; i_10 += 2) 
            {
                var_37 = ((/* implicit */long long int) var_10);
                var_38 = ((/* implicit */unsigned short) ((unsigned char) var_1));
                var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((5985876048391816718LL) | (1167775519457262320LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) -7554315426459670690LL)))))) : (arr_10 [i_1] [(signed char)15])));
                var_40 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_4 + 2] [i_4 + 2] [i_4])) ? (3742208470397182491ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))));
                var_41 = ((/* implicit */signed char) ((arr_25 [i_4 + 3] [i_4 + 2] [i_10 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_4 - 1] [i_10] [i_10 + 3] [i_10])))));
            }
            var_42 = (~(((long long int) (signed char)127)));
            arr_31 [1LL] [i_4] = ((/* implicit */long long int) (+((~(var_1)))));
            var_43 -= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (unsigned char)56)) ? (13723829632039572560ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))));
        }
        for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
            {
                for (unsigned char i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    {
                        var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_22 [i_1] [i_11] [i_11 - 1] [i_11 - 1])) : (((/* implicit */int) (signed char)-87))));
                        var_45 = ((/* implicit */unsigned short) ((unsigned long long int) (signed char)-50));
                    }
                } 
            } 
            var_46 = ((/* implicit */unsigned char) ((4892159248856184468LL) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)7))))))));
        }
    }
}
