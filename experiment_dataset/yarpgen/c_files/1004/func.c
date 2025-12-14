/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1004
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 7; i_1 += 1) 
        {
            var_16 ^= var_3;
            arr_5 [i_1] = ((/* implicit */unsigned int) ((18446744073709551614ULL) + (((/* implicit */unsigned long long int) ((6LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)126))))))));
            var_17 = ((/* implicit */long long int) arr_4 [i_0] [i_1 - 3]);
        }
        var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124))) + (0U))), (((/* implicit */unsigned int) (unsigned char)255))))) ? (min((((arr_1 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned char) var_4))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0])))));
        var_19 = ((/* implicit */long long int) var_10);
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                {
                    arr_11 [(unsigned char)1] [i_2] [i_3] [i_0] |= ((/* implicit */unsigned short) 6LL);
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) 72057594037927935LL))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned int) ((signed char) ((unsigned char) var_3)));
    /* LoopSeq 1 */
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            {
                                arr_27 [i_4] [0] [i_6] [0] [i_7] [i_4] = ((/* implicit */unsigned short) arr_25 [i_6]);
                                arr_28 [i_4] [(_Bool)1] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4]))) : (arr_18 [0LL] [0LL] [i_4])))) ? (arr_18 [i_4] [i_5] [i_4]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_4])) % (((/* implicit */int) arr_17 [i_4])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) -731742733387022693LL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 741975035228319432LL))))) : ((+(((/* implicit */int) (short)32767))))))) : (min((((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [(signed char)11])) | (((/* implicit */int) (unsigned char)249))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4))) : (72057594037927930LL)))))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)35))) * (13942482781076159918ULL)))) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) (short)20831))));
                        }
                        arr_33 [i_4] [i_4] [i_4] [(short)10] = ((unsigned char) ((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) (signed char)-27))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)125))) : (13435978028627618756ULL)));
                    }
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_12 = 1; i_12 < 8; i_12 += 3) 
                        {
                            arr_39 [i_4] [i_5] [i_6] [i_4] [i_12] = ((/* implicit */_Bool) arr_12 [i_4]);
                            arr_40 [i_4] [i_6] [(unsigned char)0] [i_4] [7ULL] [i_6] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_24 [i_4] [6LL] [i_6] [i_11] [i_11] [i_6]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_4] [i_5] [i_6]))) : (min((arr_23 [i_4] [i_5] [i_5] [(signed char)3]), (-11LL)))))) ? (((((/* implicit */_Bool) var_4)) ? (((long long int) var_11)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)0)))))) : (var_12)));
                            arr_41 [i_4] [i_4] = ((/* implicit */short) max((min(((-(((/* implicit */int) (unsigned short)58166)))), ((-(((/* implicit */int) (short)8554)))))), (((/* implicit */int) (_Bool)1))));
                            var_24 = ((/* implicit */unsigned long long int) var_2);
                        }
                        for (unsigned char i_13 = 0; i_13 < 12; i_13 += 4) 
                        {
                            var_25 ^= ((/* implicit */unsigned long long int) (+(((unsigned int) var_10))));
                            arr_44 [i_4] [i_5] [i_6] [(short)3] = ((/* implicit */signed char) var_1);
                        }
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) arr_15 [i_11]))));
                        arr_45 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 72057594037927930LL)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (unsigned char)255))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 12; i_14 += 2) 
                    {
                        for (short i_15 = 0; i_15 < 12; i_15 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */unsigned char) arr_22 [i_5] [i_6] [i_4] [i_15])), ((unsigned char)78)))), (((((/* implicit */int) (!(((/* implicit */_Bool) -1071220366))))) / (((/* implicit */int) (_Bool)1))))));
                                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (unsigned char)120))) ? (((/* implicit */unsigned long long int) ((long long int) min(((unsigned short)21171), (((/* implicit */unsigned short) arr_42 [i_4] [i_5] [i_6] [i_6] [i_4])))))) : (((((((/* implicit */_Bool) arr_23 [i_4] [i_6] [i_14] [i_6])) ? (((/* implicit */unsigned long long int) 72057594037927935LL)) : (var_6))) >> (((/* implicit */int) ((((/* implicit */int) arr_12 [i_4])) != (((/* implicit */int) (unsigned short)64006)))))))));
                                var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (max((arr_25 [(short)4]), (((/* implicit */int) (signed char)-27)))) : ((-(((/* implicit */int) (signed char)26)))))) >> (((72057594037927935LL) - (72057594037927929LL)))));
                            }
                        } 
                    } 
                    var_30 ^= ((/* implicit */signed char) max(((unsigned short)65533), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)248)))))));
                }
            } 
        } 
        arr_52 [i_4] = ((/* implicit */unsigned long long int) ((((-22LL) < (var_12))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) var_1))))))) : (2598624610U)));
    }
}
