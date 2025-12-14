/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108454
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) var_3);
                arr_7 [i_0] [4LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1148417904979476480LL)) ? (((/* implicit */int) arr_4 [i_0] [i_0 + 3] [i_1])) : (((/* implicit */int) arr_4 [i_0 + 3] [i_1] [i_0 + 3]))))) : (var_6)));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_15);
    /* LoopSeq 3 */
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    arr_14 [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2048)) ? (63488U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))))) ? (((/* implicit */int) min((var_8), ((short)2047)))) : (((((/* implicit */int) var_10)) & (((/* implicit */int) (_Bool)1)))))) > (((/* implicit */int) var_4))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) arr_11 [i_2] [i_3]);
                                var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (max((arr_8 [(unsigned short)3]), (((/* implicit */long long int) 32767)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_7 = 1; i_7 < 23; i_7 += 1) 
        {
            for (unsigned int i_8 = 1; i_8 < 24; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    {
                        arr_28 [i_2] [i_7] [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_24 [i_8] [i_8 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_20 [i_8] [i_9]))) & (((((/* implicit */_Bool) arr_21 [i_7 - 1] [i_7])) ? (var_6) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_22 [i_2] [i_7] [i_9])), (arr_18 [i_7]))))))));
                        arr_29 [i_2] [(unsigned char)1] [(unsigned char)1] [i_8] [i_2] = ((/* implicit */long long int) min(((~(arr_13 [i_8 - 1] [13U] [i_8]))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) arr_24 [i_8] [i_8 - 1])))))));
                        arr_30 [i_9] [i_9] [i_8] = ((/* implicit */_Bool) var_10);
                        var_20 = ((/* implicit */unsigned char) (-(((((((/* implicit */long long int) ((/* implicit */int) var_8))) == (arr_8 [i_7]))) ? (((((/* implicit */_Bool) arr_25 [i_7] [i_7] [i_8])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (arr_17 [i_2] [i_7 + 1])))));
                    }
                } 
            } 
        } 
        arr_31 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)115), ((unsigned char)7))))) : (((((/* implicit */_Bool) arr_27 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_3))))) : (max((arr_20 [0U] [3U]), (((/* implicit */unsigned int) var_15))))))));
    }
    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_10] [i_10] [i_10]))) >= (-1LL))))) - (arr_17 [i_10] [i_10]))))));
        var_22 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) var_8)))));
    }
    /* vectorizable */
    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            for (long long int i_13 = 0; i_13 < 25; i_13 += 3) 
            {
                {
                    arr_40 [i_11] [(unsigned char)10] [i_12] = ((((/* implicit */int) (unsigned short)17458)) - (((/* implicit */int) arr_15 [i_11] [18U] [18] [i_12])));
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        for (short i_15 = 0; i_15 < 25; i_15 += 4) 
                        {
                            {
                                arr_46 [i_12] [i_12] [i_13] [i_13] [3LL] [i_13] = ((/* implicit */long long int) (~(342186260)));
                                var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_21 [i_12] [i_13]))));
                                var_24 = ((/* implicit */short) (~(arr_26 [i_11] [i_12] [i_13])));
                                var_25 = (((!(((/* implicit */_Bool) arr_20 [i_11] [i_11])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) : (arr_45 [(unsigned char)22] [i_12] [i_13]));
                            }
                        } 
                    } 
                    arr_47 [i_12] [21U] [14LL] [i_13] = 3345809262276321155LL;
                }
            } 
        } 
        arr_48 [3LL] [17U] = ((/* implicit */unsigned int) arr_33 [i_11]);
        /* LoopNest 3 */
        for (long long int i_16 = 0; i_16 < 25; i_16 += 1) 
        {
            for (unsigned int i_17 = 0; i_17 < 25; i_17 += 2) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        arr_55 [i_11] [i_11] [i_11] [i_16] = ((/* implicit */unsigned short) ((arr_9 [i_16]) ? (((/* implicit */int) arr_9 [i_11])) : (((/* implicit */int) arr_9 [i_18]))));
                        arr_56 [i_16] [i_16] [i_16] [i_18] = ((/* implicit */unsigned short) var_1);
                        arr_57 [i_16] = ((/* implicit */unsigned char) 647169928U);
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_19 = 1; i_19 < 16; i_19 += 3) 
    {
        for (unsigned int i_20 = 0; i_20 < 18; i_20 += 2) 
        {
            {
                var_26 = ((/* implicit */long long int) arr_21 [i_19 - 1] [i_20]);
                var_27 = ((/* implicit */unsigned int) var_5);
                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((long long int) max((max((arr_43 [i_19] [i_20] [i_20] [i_20] [i_20] [i_20]), (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_59 [(unsigned short)2])) ? (((/* implicit */int) arr_15 [i_19] [i_19] [i_20] [i_20])) : (((/* implicit */int) arr_6 [i_19])))))))))));
                arr_62 [i_19] [i_19] = ((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) - (arr_3 [i_19]))));
            }
        } 
    } 
}
