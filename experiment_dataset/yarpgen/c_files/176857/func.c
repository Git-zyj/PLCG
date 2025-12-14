/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176857
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
    var_20 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14)))) ^ (var_9))) % (((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) 2147483647)), (18446744073709551615ULL)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_8 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((unsigned int) ((unsigned char) arr_1 [i_2]))) + (((/* implicit */unsigned int) max((((/* implicit */int) arr_3 [i_0] [i_0 + 1])), (((((/* implicit */int) var_6)) + (((/* implicit */int) var_14)))))))));
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    arr_11 [i_3] = ((/* implicit */unsigned char) ((unsigned short) max((((arr_7 [i_1] [i_1] [i_1]) ^ (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (short)17610)))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_12))));
                    var_22 -= ((/* implicit */unsigned short) ((((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) >= (arr_9 [i_0] [i_0] [i_0] [i_0])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 12365708384673968983ULL))))))));
                    var_23 += ((/* implicit */unsigned short) ((((arr_2 [i_1 - 3] [i_0 - 1]) - (arr_2 [i_1 + 3] [i_0 + 1]))) >= (((/* implicit */int) var_7))));
                }
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 4; i_5 < 10; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_4] [i_4] [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)157))) : (6081035689035582632ULL)));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (18446744073709551615ULL)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((var_16) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)43)))))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5]))))))))));
                    }
                    for (unsigned char i_6 = 1; i_6 < 9; i_6 += 2) 
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_11);
                        var_26 ^= (_Bool)1;
                        arr_22 [i_1] = ((/* implicit */_Bool) ((1ULL) ^ (var_18)));
                    }
                    var_27 -= ((/* implicit */signed char) arr_5 [i_1] [i_1]);
                }
                arr_23 [i_0] |= ((int) max(((short)(-32767 - 1)), (((/* implicit */short) arr_0 [i_2]))));
                var_28 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) + (var_0)))) ? (max((((/* implicit */unsigned long long int) arr_18 [i_0] [i_0])), (18446744073709551602ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1))))))));
            }
            /* LoopSeq 2 */
            for (short i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((_Bool) max((arr_2 [i_0 - 1] [i_1 + 1]), (((/* implicit */int) var_13))))))));
                arr_28 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_13 [i_7]);
                arr_29 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)3)) ^ (((/* implicit */int) (unsigned char)27))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0 + 1] [i_1 - 2])) >> (((((var_18) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14))))) - (6486943088383234409ULL)))))) : (max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_18))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                arr_32 [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)54)) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_14))))) : (((((/* implicit */_Bool) arr_26 [i_1] [i_1])) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))))));
                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) var_18))));
            }
            var_31 = ((unsigned char) var_15);
        }
        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) var_6))));
    }
    for (unsigned short i_9 = 1; i_9 < 10; i_9 += 4) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14ULL)) ? (((((/* implicit */int) (unsigned short)21537)) % (((/* implicit */int) var_14)))) : (((/* implicit */int) (unsigned short)23712))))) ? ((-(4294967295U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [(signed char)0] [(signed char)0])) ? ((+(((/* implicit */int) var_19)))) : (var_11)))))))));
        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (!(((/* implicit */_Bool) ((max((7570435696381700614ULL), (((/* implicit */unsigned long long int) 4294967288U)))) ^ (((/* implicit */unsigned long long int) 395978911U))))))))));
    }
    var_35 += ((/* implicit */short) max((((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) var_16)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (var_9)))))), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (short)-28966)) ? (var_18) : (((/* implicit */unsigned long long int) 2081038229))))))));
}
