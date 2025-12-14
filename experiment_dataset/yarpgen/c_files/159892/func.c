/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159892
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
    var_10 &= (+((~(var_3))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                for (unsigned char i_3 = 1; i_3 < 9; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_11 [i_0] [i_0 - 1] [i_0] [i_2] [i_0] [i_4] [i_2] = ((/* implicit */unsigned int) var_3);
                            var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_3)) ? ((~(18446744073709551613ULL))) : (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))))));
                        }
                        for (long long int i_5 = 4; i_5 < 9; i_5 += 1) 
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_0] [i_5 - 4] [9U] [i_0] = ((/* implicit */short) (((-(((/* implicit */int) ((signed char) arr_6 [i_0] [3LL] [i_2 - 1] [i_0]))))) <= (((/* implicit */int) ((((/* implicit */int) var_6)) <= ((-(((/* implicit */int) var_2)))))))));
                            arr_15 [i_0] [i_1] [i_1] [i_3] [i_5 - 2] [i_0] [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_9))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) 1773949376))))) ? (min((((/* implicit */int) var_6)), ((-(((/* implicit */int) arr_12 [i_2] [i_2] [(signed char)1] [i_3 + 1] [i_5] [2U])))))) : (((/* implicit */int) min(((!(((/* implicit */_Bool) arr_6 [i_0] [i_1 - 3] [i_0] [i_0])))), (arr_9 [i_3 - 1] [i_0 - 1] [i_1 + 1] [i_2 - 1] [i_0]))))));
                            arr_16 [i_0] [9LL] [i_2 - 1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1 - 2] [i_0])) : (((/* implicit */int) arr_6 [i_0] [(_Bool)1] [i_1 - 2] [i_0]))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_19 [i_0 - 1] [i_1 - 3] [i_1 - 3] [(unsigned char)2] [i_6] &= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)120)) * (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_17 [i_0] [i_0] [i_1 - 3] [i_2] [(unsigned char)8] [i_3] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))))));
                            var_12 = ((/* implicit */short) (((-((~(arr_3 [i_0]))))) ^ (var_5)));
                            var_13 = ((/* implicit */_Bool) arr_5 [7ULL] [7ULL] [i_0 + 2]);
                        }
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_4 [6U] [6U] [i_3 - 1])) : (7260408131689550654ULL))), (min((11186335942020000961ULL), (((/* implicit */unsigned long long int) 2550252041U)))))) <= (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_0 [(_Bool)1])))) >> (((((/* implicit */int) var_8)) - (6587)))))))))));
                        var_15 *= ((/* implicit */unsigned char) 1162340576U);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_7 = 3; i_7 < 9; i_7 += 4) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_7 - 2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_23 [i_0] [i_7 + 1]))))) ? (((((/* implicit */_Bool) arr_23 [i_0] [i_7 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_7 - 3]))) : (arr_8 [i_7 - 3] [i_7 - 3] [i_0] [i_7]))) : ((+(arr_8 [i_7 - 3] [i_7] [5] [4LL])))));
            arr_24 [i_0] [i_7] [i_0] = ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) (short)-27352)))));
        }
        arr_25 [i_0] [i_0] = ((/* implicit */long long int) var_9);
        arr_26 [i_0] = ((/* implicit */unsigned short) max((var_4), (((/* implicit */unsigned long long int) var_5))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) 
    {
        arr_31 [(_Bool)1] = var_4;
        var_17 = ((/* implicit */long long int) max((var_17), (((((/* implicit */_Bool) ((short) var_9))) ? ((-(arr_28 [i_8] [i_8]))) : ((-(var_7)))))));
        var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))));
    }
    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 21; i_11 += 3) 
            {
                for (unsigned short i_12 = 2; i_12 < 20; i_12 += 2) 
                {
                    {
                        arr_41 [i_12 + 1] [i_12 + 1] [i_11] [i_11] [i_12 + 1] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_34 [i_9]))))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1632975721)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))));
                        arr_42 [i_9] [i_11] [i_11] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((long long int) var_0))) : (((unsigned long long int) ((long long int) var_8)))));
                    }
                } 
            } 
        } 
        arr_43 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (11186335942020000959ULL) : (25ULL)));
    }
    /* vectorizable */
    for (signed char i_13 = 4; i_13 < 11; i_13 += 3) 
    {
        var_19 = ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_4) : (((/* implicit */unsigned long long int) var_3))))));
        arr_47 [i_13] [i_13] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_13 - 3] [i_13 - 3] [i_13 - 3])) ? (((/* implicit */int) arr_39 [i_13] [(unsigned char)8] [i_13 - 2] [i_13] [i_13])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [1] [1])))))));
        arr_48 [i_13] = ((/* implicit */short) var_8);
        arr_49 [i_13] = ((((((/* implicit */_Bool) var_3)) ? (5213128845301214237ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) | (((/* implicit */unsigned long long int) ((unsigned int) var_8))));
    }
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) -3621414518635973251LL)) + (var_1)));
}
