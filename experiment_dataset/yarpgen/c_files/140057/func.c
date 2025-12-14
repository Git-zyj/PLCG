/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140057
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
    var_19 -= ((/* implicit */long long int) ((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-106)))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_20 += ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)12))));
                arr_7 [i_0 - 1] [i_0 + 4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)-117)) - (((/* implicit */int) (unsigned short)12))))) ^ (var_16)));
            }
        } 
    } 
    var_21 += ((/* implicit */unsigned char) max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18702)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (9223372036854775798LL)))) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) min(((signed char)122), (((/* implicit */signed char) var_2)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_2 = 3; i_2 < 14; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            var_22 += ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_13 [i_2 + 1]), (((/* implicit */int) var_14)))))));
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */long long int) (-(((((/* implicit */int) (signed char)-123)) + (((/* implicit */int) (unsigned short)1)))))))));
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_13)))))));
                    var_25 -= ((/* implicit */long long int) (short)18701);
                }
                /* LoopSeq 1 */
                for (unsigned char i_6 = 3; i_6 < 11; i_6 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 1; i_7 < 12; i_7 += 4) 
                    {
                        arr_26 [i_2 + 1] [i_7] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_25 [i_2] [i_3] [i_4] [i_6 - 2] [i_7 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28645))))))));
                        var_26 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2097152ULL)) ? (((/* implicit */int) arr_15 [i_6 + 4] [i_3] [i_3] [i_6 + 1])) : (((/* implicit */int) arr_15 [i_2 + 1] [i_2] [14] [(unsigned short)10])))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) >= (var_9))))) >= (((((/* implicit */_Bool) (unsigned short)28646)) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)15009))))))))));
                        var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_18 [i_3] [i_2 - 1] [i_4] [i_6 + 1] [i_4])) : (-8951598096462317178LL))) / (((/* implicit */long long int) (+(2944192765U))))));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_20 [i_2 + 1] [i_2 + 1] [i_2 - 1]), (arr_20 [i_6 + 2] [i_3] [i_2 + 1]))))) >= (((var_13) ? (((((/* implicit */_Bool) (short)-29847)) ? (((/* implicit */unsigned long long int) 2944192765U)) : (arr_12 [i_3]))) : (((/* implicit */unsigned long long int) var_9))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_4] [i_4] [i_8])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_17 [i_2 + 1] [i_6 + 4]))))));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((long long int) 13604493859379329395ULL)))));
                    }
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (-(min((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)18701))))), (((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) var_0)) : (arr_11 [i_2] [i_3] [i_6]))))))))));
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) > (((((/* implicit */_Bool) 690547299088455608LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (2372639770U)))));
                }
            }
            for (signed char i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
            {
                var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)15009)))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)0)) + (((/* implicit */int) (unsigned char)156))))) : (((((/* implicit */_Bool) (unsigned short)9)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157))))))))))));
                var_34 = ((/* implicit */long long int) max((var_34), (((((/* implicit */_Bool) max((var_14), (arr_30 [i_3] [i_2] [i_2 - 1] [i_2 + 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)18690)), (arr_12 [i_2])))) ? (((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_4))))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)80))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (short)18701)) : (((/* implicit */int) var_8))))) : (((var_13) ? (5989484972706773344LL) : (((/* implicit */long long int) ((/* implicit */int) (short)15417)))))))))));
                var_35 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_28 [i_9] [i_9] [i_3] [i_3] [i_3] [i_2] [i_2])) ? ((~(14054754777372531929ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_14))))))), (((unsigned long long int) (-(((/* implicit */int) var_7)))))));
                var_36 *= ((/* implicit */unsigned char) (-((~(max((arr_24 [i_2] [i_3] [i_3] [i_3] [(short)8] [i_3] [i_9]), (var_11)))))));
                var_37 = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) (short)18701)) ? (1925864957U) : (var_0))))) > (((/* implicit */unsigned int) ((((/* implicit */int) (short)15009)) - (((/* implicit */int) arr_21 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2 - 1])))))));
            }
        }
        /* LoopSeq 1 */
        for (int i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((_Bool) var_12)))));
            arr_33 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-75)) >= (((((/* implicit */_Bool) arr_21 [i_10] [i_2] [i_2] [i_2 - 1])) ? (((/* implicit */int) (unsigned short)60794)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (unsigned char)160))))))));
            var_39 = ((/* implicit */unsigned char) arr_28 [i_2 - 1] [i_2] [i_10] [i_10] [i_10] [i_10] [i_10]);
        }
    }
    var_40 = ((/* implicit */long long int) ((((var_17) + (2147483647))) >> (((((((var_13) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned short)28635)))) ^ (((/* implicit */int) min(((unsigned short)28644), (((/* implicit */unsigned short) var_14))))))) - (33)))));
}
