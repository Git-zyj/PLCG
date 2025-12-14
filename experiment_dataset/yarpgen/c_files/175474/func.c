/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175474
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
    var_12 = var_5;
    var_13 = ((/* implicit */long long int) var_0);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                {
                    var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)206)))) ? (arr_3 [i_0] [i_1 - 1] [i_1 - 1]) : (arr_4 [i_2 - 1] [i_1] [(_Bool)1] [i_0])))) ? (((((((/* implicit */int) arr_1 [i_0 + 1] [4ULL])) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0 + 3] [(unsigned char)18])) + (40))))) : ((-(((/* implicit */int) ((unsigned char) (_Bool)1)))))));
                    var_15 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) : (arr_2 [i_1] [i_2 + 1])));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_3] [i_3] [i_3] [i_3]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) arr_9 [i_3] [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))) : (min((((/* implicit */unsigned long long int) arr_3 [i_3] [(short)21] [i_3])), (var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) max(((unsigned char)134), ((unsigned char)3)))) >= (((/* implicit */int) max((arr_8 [i_3] [i_3]), ((short)-31659))))))))));
        /* LoopNest 2 */
        for (long long int i_4 = 2; i_4 < 8; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                {
                    var_16 += min((6185804262939194251LL), (((/* implicit */long long int) ((short) min((arr_13 [i_5]), (((/* implicit */unsigned long long int) (short)-32760)))))));
                    /* LoopSeq 1 */
                    for (short i_6 = 4; i_6 < 8; i_6 += 2) 
                    {
                        var_17 = ((/* implicit */_Bool) min(((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4]))) >= (arr_19 [i_6 - 3] [i_5] [2ULL] [i_3])))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_3] [i_3])))))))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_3] [i_4] [i_5] [i_6])) ? (((/* implicit */int) arr_1 [i_3] [i_4])) : (((/* implicit */int) ((unsigned char) (unsigned char)247)))));
                    }
                    arr_20 [i_3] [i_3] [i_5] = ((/* implicit */unsigned char) ((long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
        var_19 ^= max((((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -230244968824141777LL)) ? (3047744045770982624LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)163)))))) : (((((/* implicit */_Bool) arr_8 [(unsigned char)7] [i_3])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) (unsigned char)54)));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 4) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_7 + 3]))))), (arr_21 [i_7])))) ? ((((!(((/* implicit */_Bool) (short)-1)))) ? (((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [(unsigned char)3]))) : (arr_21 [(short)4]))) : (230244968824141785LL))) : ((~(arr_21 [(_Bool)1]))))))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_7 + 1])) / (((/* implicit */int) arr_22 [i_7 - 1]))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_7 + 1]))) : (9290677198038562417ULL))))))));
    }
    for (long long int i_8 = 3; i_8 < 12; i_8 += 4) 
    {
        var_22 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
        arr_27 [i_8 - 2] = ((/* implicit */_Bool) arr_21 [i_8 + 1]);
        /* LoopSeq 3 */
        for (short i_9 = 2; i_9 < 12; i_9 += 2) /* same iter space */
        {
            arr_30 [i_8] = min((9223372036854775805LL), (((((/* implicit */_Bool) arr_28 [i_8] [9LL])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -8596873592707247949LL)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_22 [(_Bool)1]))) ^ (-8596873592707247953LL))))));
            var_23 ^= ((/* implicit */unsigned char) 127LL);
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) 2915521512273456983LL)), (arr_28 [i_8 + 1] [i_8 + 1]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(short)9] [i_9] [i_9] [i_9 - 1])) ? (((/* implicit */int) (short)17571)) : (((/* implicit */int) var_1)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_22 [(_Bool)1])) == (((/* implicit */int) arr_1 [i_9] [i_9]))))) - (((/* implicit */int) arr_0 [i_8 - 2]))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_6)) : (min((((/* implicit */unsigned long long int) var_1)), (var_7)))))))));
        }
        /* vectorizable */
        for (short i_10 = 2; i_10 < 12; i_10 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (short)31976))));
            /* LoopNest 2 */
            for (short i_11 = 1; i_11 < 12; i_11 += 1) 
            {
                for (long long int i_12 = 0; i_12 < 13; i_12 += 4) 
                {
                    {
                        var_26 ^= (~(arr_4 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_12]));
                        arr_40 [i_8 - 2] [i_10 + 1] = ((/* implicit */int) var_5);
                        var_27 |= ((/* implicit */short) ((((/* implicit */int) (unsigned char)223)) | (((/* implicit */int) arr_5 [i_8 - 1] [i_11 - 1] [i_11] [i_10 + 1]))));
                        arr_41 [(short)5] [10LL] [i_12] = ((/* implicit */long long int) ((unsigned long long int) var_10));
                    }
                } 
            } 
        }
        for (short i_13 = 2; i_13 < 12; i_13 += 2) /* same iter space */
        {
            var_28 += (short)4379;
            arr_44 [i_8] |= ((/* implicit */short) ((unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)70)) >= (((/* implicit */int) (signed char)-116))))))));
            arr_45 [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) var_11);
        }
        var_29 = ((/* implicit */long long int) max((((((/* implicit */int) arr_5 [i_8 - 3] [i_8 - 3] [i_8 - 2] [i_8 - 2])) & (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((short) arr_5 [i_8 + 1] [i_8 + 1] [i_8 - 3] [i_8 - 3])))));
    }
}
