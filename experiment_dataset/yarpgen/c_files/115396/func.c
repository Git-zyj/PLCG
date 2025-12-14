/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115396
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_0] [i_4] |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((unsigned long long int) var_15))))) ? (2902031757567316678ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_4]))) / (var_2)))) ? (((/* implicit */int) min((arr_1 [(_Bool)1]), (var_7)))) : (arr_8 [0U] [0U] [i_2] [0U]))))));
                                var_19 = ((/* implicit */unsigned long long int) ((int) (~(((((/* implicit */_Bool) 98303311U)) ? (((/* implicit */int) arr_12 [i_0] [i_0])) : (((/* implicit */int) var_5)))))));
                                var_20 = arr_5 [i_1] [i_2];
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_1] [i_0] |= ((/* implicit */int) ((_Bool) ((signed char) (_Bool)1)));
                    var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 15544712316142234938ULL)) || (((/* implicit */_Bool) var_16))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 22; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((arr_13 [i_0] [(signed char)0] [i_2] [i_1] [i_5 - 3]) ? (((int) (signed char)-3)) : ((~(((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0] [(_Bool)1] [i_0])) ? (((/* implicit */int) ((_Bool) arr_9 [i_5] [i_2] [i_0]))) : (arr_3 [(signed char)19] [i_2]))))))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(15544712316142234953ULL)))) ? (((((/* implicit */_Bool) arr_3 [i_5 + 1] [i_5 - 2])) ? (arr_3 [i_5 + 2] [i_5 + 2]) : (((/* implicit */int) arr_17 [i_5 - 3] [i_5 - 1] [i_5 - 3] [(_Bool)1] [i_5 + 2] [i_5 - 1])))) : (((/* implicit */int) arr_17 [i_5 + 2] [i_5 - 3] [i_5 - 2] [i_5] [i_5 - 2] [i_5]))));
                    }
                    for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        var_24 = arr_11 [7U] [(unsigned short)6] [(_Bool)1] [i_0] [i_0] [(unsigned short)23];
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_5 [i_6] [i_2]))))) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_18 [i_6] [i_2] [i_1] [(_Bool)1])) : (((/* implicit */int) arr_18 [i_0] [8ULL] [i_2] [i_6])))) : (((/* implicit */int) arr_12 [i_0] [i_0])))))));
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_24 [1ULL] [i_7])) : (((/* implicit */int) var_13))))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_7] [i_0])), (15544712316142234940ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)72)))));
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [2U]) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_7] [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))))))) ? (1160749314) : (((/* implicit */int) arr_13 [(unsigned short)10] [i_0] [i_0] [i_7] [i_7])))))));
                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) var_5))));
            }
            var_29 = ((/* implicit */int) var_2);
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_33 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_9] [5] [(_Bool)1])) - (((/* implicit */int) ((16342745524115902378ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_9] [10U] [i_0] [(_Bool)0]))))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_9] [i_9] [i_0])) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_9] [(_Bool)1]))))) : (((/* implicit */int) (!(((var_4) || (((/* implicit */_Bool) arr_5 [i_9] [(_Bool)1])))))))));
            var_30 -= ((/* implicit */unsigned int) var_13);
        }
    }
    /* vectorizable */
    for (unsigned short i_10 = 3; i_10 < 7; i_10 += 1) 
    {
        arr_36 [i_10 + 1] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_4 [i_10 - 1])) : (((/* implicit */int) arr_4 [i_10 - 1]))));
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_10] [i_10 - 2] [(_Bool)1] [i_10])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-117))));
    }
    var_32 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_6))))), (18446744073709551610ULL)));
    /* LoopSeq 2 */
    for (signed char i_11 = 0; i_11 < 23; i_11 += 3) 
    {
        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) ((signed char) (_Bool)1)))))))))));
        arr_39 [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [(signed char)4] [i_11]))))) ? (((int) arr_23 [i_11])) : (((arr_24 [i_11] [i_11]) ? (((/* implicit */int) arr_24 [6] [16U])) : (arr_23 [i_11])))));
        arr_40 [i_11] &= (!(((/* implicit */_Bool) arr_26 [i_11] [(signed char)6] [i_11] [(signed char)6])));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 15; i_13 += 2) 
        {
            for (int i_14 = 2; i_14 < 14; i_14 += 4) 
            {
                {
                    arr_49 [i_12] [i_13] = ((/* implicit */signed char) ((_Bool) (+(((((/* implicit */_Bool) arr_3 [i_12] [i_13])) ? (((/* implicit */unsigned long long int) arr_44 [i_12])) : (1001169870321130326ULL))))));
                    var_34 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_17 [i_12] [i_12] [i_12] [i_12] [i_12] [(signed char)9])) : (arr_44 [i_14]))) : ((~(((/* implicit */int) arr_13 [i_12] [i_12] [i_13] [i_13] [i_14]))))))));
                }
            } 
        } 
        var_35 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59031)) ? (((/* implicit */int) (signed char)-117)) : ((+(((/* implicit */int) (_Bool)1))))));
    }
    var_36 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_14))));
    var_37 = ((/* implicit */unsigned int) var_1);
}
