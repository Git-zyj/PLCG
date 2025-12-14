/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148928
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
    var_14 += ((/* implicit */int) ((((/* implicit */_Bool) 625583197U)) && (((/* implicit */_Bool) var_9))));
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) min((-1976937384), (((/* implicit */int) var_1)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((signed char) arr_0 [i_0]))), ((+(arr_0 [i_0])))))) ? (((/* implicit */int) min((var_11), (min((var_11), (((/* implicit */signed char) var_12))))))) : (((((/* implicit */int) max((((/* implicit */unsigned char) var_10)), (arr_1 [i_0])))) & (((/* implicit */int) max(((unsigned short)15601), ((unsigned short)15624)))))))))));
        var_17 = ((/* implicit */int) (-(((unsigned int) ((((/* implicit */_Bool) (unsigned short)15624)) ? (((/* implicit */int) (unsigned short)15624)) : (((/* implicit */int) (unsigned short)3)))))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned short)49911))))), ((+(((/* implicit */int) var_2))))))) || (((/* implicit */_Bool) ((((var_8) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49916))))) ? (((((/* implicit */_Bool) arr_3 [7])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1]))))))))));
            var_18 = (-(((((/* implicit */_Bool) ((unsigned short) arr_2 [i_1] [i_0]))) ? (((/* implicit */unsigned long long int) arr_3 [20LL])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
            arr_6 [(signed char)11] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_3 [i_0])), (max((((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])) % (arr_0 [i_0 + 1]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)245)))))))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) max((max((((long long int) arr_7 [i_2] [i_2])), (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_2] [i_2] [i_2 - 1])) != (((/* implicit */int) (unsigned char)21))))))), (min((((/* implicit */long long int) (+(((/* implicit */int) var_9))))), (max((((/* implicit */long long int) (unsigned short)15619)), (var_5)))))));
            var_20 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) -1703953458)) ? (348610431) : (((/* implicit */int) (signed char)127))))));
            arr_9 [i_0 + 1] = ((/* implicit */int) max(((-((-(var_7))))), (((((/* implicit */_Bool) (+(arr_2 [i_2] [i_0])))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_10))) : (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
        }
        for (int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        {
                            arr_21 [i_6] [4ULL] [9] [16ULL] = ((/* implicit */_Bool) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) 8734115535599129670ULL))))))), ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1])) && (((/* implicit */_Bool) var_6)))))))));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((157269825) - (((/* implicit */int) var_10))))) ? ((+(((/* implicit */int) arr_1 [i_6])))) : (((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_3] [i_6]))))));
                        }
                    } 
                } 
            } 
            arr_23 [i_0] [i_0] = ((/* implicit */int) arr_12 [i_0] [i_3] [i_3] [i_3]);
            var_21 = max((((/* implicit */unsigned long long int) var_10)), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 549755813887LL)) && (((/* implicit */_Bool) -348610436))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_3] [i_3]))) & (var_6))))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            arr_26 [i_0] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) 8734115535599129670ULL))) ? ((-(arr_25 [(_Bool)1] [i_7] [(signed char)5]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
            /* LoopSeq 2 */
            for (int i_8 = 4; i_8 < 19; i_8 += 4) 
            {
                arr_30 [i_8] [i_7] [1U] [i_0] = ((/* implicit */unsigned char) arr_12 [i_8] [i_7] [i_8] [5LL]);
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 2; i_9 < 18; i_9 += 4) 
                {
                    var_22 += ((/* implicit */unsigned short) var_10);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 4; i_10 < 18; i_10 += 3) 
                    {
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 549755813887LL)) ? (157269815) : (((/* implicit */int) (unsigned char)21))))) ? (arr_19 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_16 [i_0] [i_7] [i_9 + 2] [i_10]))))));
                        var_24 = ((unsigned int) 2831431131U);
                    }
                    var_25 ^= ((/* implicit */long long int) arr_1 [i_8]);
                    arr_37 [i_0 + 1] [i_0 + 1] [(unsigned short)12] [i_0 + 1] [i_0 + 1] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (unsigned short)49934)) >> (((arr_34 [i_7] [i_7] [i_8] [i_9 + 3] [i_7]) + (2770476972824898826LL))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 3; i_11 < 18; i_11 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_8 - 2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_35 [i_0] [i_0] [i_0] [i_0] [i_11] [i_7])) != (var_5))))) : (arr_36 [(_Bool)1] [i_7] [i_8] [i_9 + 1] [i_9 + 1]))))));
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) var_6))));
                        arr_41 [(unsigned short)12] [i_7] [i_11] [i_8] [i_9] [i_11 - 1] [i_11] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_13 [i_0] [i_7] [i_8 - 1])) == (arr_4 [i_7] [i_9] [i_7]))))));
                        arr_42 [i_7] [i_7] [i_7] [i_7] [i_7] [i_11] [i_11] = ((/* implicit */long long int) (+((-(var_7)))));
                    }
                }
                arr_43 [17U] [11LL] [i_8] = ((/* implicit */signed char) 2391254553U);
                arr_44 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))));
                var_28 += ((/* implicit */long long int) arr_17 [1LL] [6] [i_7] [i_0] [i_0]);
            }
            for (unsigned int i_12 = 1; i_12 < 18; i_12 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    arr_50 [i_12] [i_13] [i_13] [i_13] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0]))) * (((var_12) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_13] [i_13] [i_13] [i_13] [i_13]))))));
                    arr_51 [i_13] [i_7] [i_12] [i_7] [i_0] |= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_0] [(signed char)5] [i_0]))) >= (var_7))) ? (((((/* implicit */_Bool) arr_28 [i_0])) ? (arr_36 [i_0] [i_0] [15U] [i_0] [15U]) : (((/* implicit */unsigned long long int) arr_15 [i_7] [i_12 + 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_25 [i_13] [i_7] [i_0 + 1]))))));
                    var_29 = ((/* implicit */int) (+(-549755813887LL)));
                    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_29 [i_0] [i_7] [i_7] [i_7])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [5] [i_0] [i_7] [i_12] [i_13]))))) != ((-(7851986482276885902ULL))))))));
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? ((~(var_5))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                }
                /* LoopNest 2 */
                for (long long int i_14 = 1; i_14 < 18; i_14 += 3) 
                {
                    for (unsigned short i_15 = 2; i_15 < 20; i_15 += 4) 
                    {
                        {
                            arr_56 [i_0 + 1] [i_12] [(unsigned char)5] = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_14])))));
                            arr_57 [i_12] = ((/* implicit */int) arr_13 [10LL] [i_15] [10LL]);
                            var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(9712628538110421945ULL))))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) <= ((~(arr_36 [i_7] [13] [i_7] [i_7] [i_7])))));
            }
        }
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        arr_61 [13LL] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)3072)), (var_7)))) ? (arr_59 [i_16] [i_16]) : (arr_59 [i_16] [i_16]))), (((/* implicit */unsigned long long int) ((long long int) max((var_4), (((/* implicit */unsigned long long int) (unsigned char)18))))))));
        var_34 = ((/* implicit */unsigned long long int) ((arr_58 [i_16] [i_16]) >= (((((/* implicit */_Bool) -31221569)) ? (((((/* implicit */_Bool) arr_60 [9ULL] [9ULL])) ? (arr_58 [i_16] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (max((((/* implicit */long long int) var_11)), (arr_58 [i_16] [i_16])))))));
        var_35 = ((/* implicit */unsigned char) (+(3293161535U)));
        /* LoopSeq 1 */
        for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 2) 
        {
            arr_64 [14U] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (7072162480192241367ULL)));
            arr_65 [i_16] [i_17] [16U] = ((/* implicit */int) arr_62 [i_16]);
            var_36 += ((/* implicit */int) var_2);
        }
    }
}
