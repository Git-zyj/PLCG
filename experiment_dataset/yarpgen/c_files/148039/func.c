/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148039
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_0 + 1] [i_0 - 2]))))));
        arr_3 [(signed char)22] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((unsigned char) (short)-18672))))) ? (arr_1 [i_0] [i_0]) : (((((/* implicit */long long int) ((/* implicit */int) min((var_3), (arr_2 [i_0]))))) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_1 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_18 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) (unsigned char)137)))), (((/* implicit */int) ((short) arr_7 [i_0] [(unsigned char)2] [i_2 + 2] [i_0 - 2])))));
                    var_19 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2]))))), (max((arr_7 [i_2] [i_1] [i_2] [i_0]), (((/* implicit */long long int) ((unsigned short) arr_6 [i_0] [i_1])))))));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0]))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_1] [i_1] [i_2])), ((unsigned char)68))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29813))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [(unsigned char)0])))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [(unsigned char)14]))) : (var_15))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_15)))))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (unsigned short)64932)), (-6129856189282400032LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_6)))))));
    /* LoopSeq 1 */
    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        var_22 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_4 [i_3] [i_3] [(unsigned char)17])) : (((/* implicit */int) arr_4 [(unsigned short)16] [(unsigned short)21] [i_3])))) >= (((/* implicit */int) max((arr_4 [i_3] [(unsigned char)10] [i_3]), (arr_4 [i_3] [i_3] [i_3]))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
        {
            arr_14 [i_3] [(unsigned char)12] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_4] [i_4] [i_3])) < (((/* implicit */int) arr_8 [i_3] [i_3] [i_4]))));
            var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_3] [i_4] [i_4])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [i_4] [i_4]))));
            var_24 = ((/* implicit */signed char) min((var_24), (arr_4 [i_3] [i_4] [i_3])));
        }
        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
        {
            arr_18 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) | (min((((/* implicit */long long int) arr_12 [i_3])), (var_7)))))) ? (((/* implicit */int) arr_17 [i_3])) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3]))))) <= (((/* implicit */int) arr_12 [i_3])))))));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((short) var_7)))) ? (((((/* implicit */_Bool) max((((/* implicit */short) arr_16 [i_3])), (var_8)))) ? (((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((unsigned char) arr_6 [i_3] [i_5]))))) : (((((/* implicit */_Bool) var_15)) ? ((+(((/* implicit */int) arr_2 [(unsigned char)6])))) : (((/* implicit */int) var_3))))));
            /* LoopNest 2 */
            for (signed char i_6 = 2; i_6 < 18; i_6 += 1) 
            {
                for (signed char i_7 = 3; i_7 < 20; i_7 += 1) 
                {
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_5] [i_6] [i_7])) ? ((~(((/* implicit */int) (unsigned char)55)))) : (((/* implicit */int) (signed char)-25))));
                        arr_27 [(short)1] [i_5] [(unsigned char)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (max((((/* implicit */long long int) (unsigned char)0)), (9LL)))));
                    }
                } 
            } 
        }
        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
        {
            var_27 ^= ((/* implicit */long long int) max((max((max((var_1), (((/* implicit */unsigned short) arr_15 [i_3] [i_8])))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_3]))))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5))))))))));
            var_28 = ((/* implicit */unsigned char) ((unsigned long long int) -6129856189282400039LL));
        }
        for (short i_9 = 1; i_9 < 20; i_9 += 4) 
        {
            arr_33 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? ((+(((/* implicit */int) ((unsigned short) arr_32 [i_3]))))) : (((/* implicit */int) ((((/* implicit */int) arr_32 [i_9 - 1])) != (((/* implicit */int) var_2)))))));
            /* LoopSeq 1 */
            for (signed char i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_11 = 1; i_11 < 17; i_11 += 4) 
                {
                    for (unsigned char i_12 = 4; i_12 < 20; i_12 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) min((arr_21 [i_12] [(unsigned char)8] [(unsigned char)8]), (((/* implicit */short) arr_31 [i_12]))))) : (((/* implicit */int) max((var_9), (arr_11 [i_3] [i_9] [i_10]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)0)))) : (max((((((/* implicit */_Bool) arr_5 [i_3] [i_9])) ? (arr_1 [i_9] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) var_6))))));
                            var_30 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_6))))) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (5823615182730806254LL)))))) ? (((/* implicit */int) arr_26 [i_3] [16LL] [i_3] [i_3] [i_3])) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (var_7)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */int) (((+(((/* implicit */int) arr_31 [i_9])))) == (((/* implicit */int) arr_40 [i_3] [i_3] [i_9 + 1] [i_12 - 4] [i_12]))))) << (((((/* implicit */int) arr_15 [i_3] [i_3])) + (58)))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_26 [i_3] [i_3] [(unsigned char)5] [i_9 + 1] [i_3])) ? (arr_1 [i_10] [i_9]) : (arr_1 [(signed char)1] [i_9]))));
                var_33 = arr_2 [i_3];
            }
            arr_41 [i_3] [i_3] = ((/* implicit */signed char) arr_34 [i_9] [i_9] [(signed char)6]);
        }
        arr_42 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) arr_4 [(signed char)18] [i_3] [i_3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_30 [i_3] [i_3] [i_3])))) : ((-(((/* implicit */int) arr_25 [i_3] [i_3] [(signed char)19] [i_3]))))))) ? (((/* implicit */int) (unsigned char)68)) : ((-(((/* implicit */int) max((arr_13 [i_3]), (arr_37 [i_3] [i_3] [(unsigned char)7] [(unsigned char)7] [i_3] [i_3]))))))));
    }
    var_34 = ((/* implicit */signed char) var_10);
}
