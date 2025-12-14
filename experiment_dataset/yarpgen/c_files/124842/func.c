/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124842
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_12 = ((/* implicit */_Bool) ((arr_2 [i_0]) | (((((/* implicit */_Bool) (unsigned short)14216)) ? ((~(arr_2 [i_0]))) : (((/* implicit */unsigned long long int) var_11))))));
        arr_4 [i_0] = ((/* implicit */int) var_7);
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) (~(arr_5 [i_0])))))))))));
                    arr_10 [i_0] [i_0] [i_0] = ((signed char) min((((/* implicit */long long int) ((signed char) var_1))), (var_2)));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) arr_1 [i_1 + 2]))))) ? (arr_1 [i_1 - 1]) : (max((arr_1 [i_1 + 1]), (arr_1 [i_1 + 1])))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_0] [i_0]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 3; i_4 < 16; i_4 += 3) 
            {
                arr_16 [i_3] [i_3] [i_0] = (!((!(((/* implicit */_Bool) (unsigned char)112)))));
                var_16 &= ((/* implicit */signed char) arr_5 [(_Bool)1]);
            }
            arr_17 [i_0] [(_Bool)1] &= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_1 [i_3])) : (arr_2 [(signed char)8])));
            var_17 = ((((((/* implicit */int) arr_6 [i_0] [i_0])) + (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])))) - ((+(((/* implicit */int) (unsigned char)72)))));
        }
        for (long long int i_5 = 1; i_5 < 17; i_5 += 3) 
        {
            var_18 = arr_12 [0] [i_0];
            var_19 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_13 [i_5 - 1] [i_5 - 1] [(_Bool)1])) && (((/* implicit */_Bool) arr_13 [i_5 - 1] [i_5 - 1] [i_5 - 1])))));
        }
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] = ((/* implicit */unsigned short) ((long long int) (!((!(((/* implicit */_Bool) arr_7 [i_6])))))));
        var_20 = ((/* implicit */unsigned long long int) (-((-(((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) (unsigned char)184))))))));
        var_21 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12719)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)181))) : ((-9223372036854775807LL - 1LL))));
        var_22 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)-5280)) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) (unsigned char)214)))), (((/* implicit */int) ((unsigned char) 340026309077091584ULL)))))), (max((max((((/* implicit */unsigned long long int) var_7)), (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6] [10ULL] [i_6]))) - (arr_7 [i_6]))))))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)24)) ? (arr_0 [i_7]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)236)) << (((((/* implicit */int) (unsigned char)236)) - (231))))))));
        arr_28 [i_7] = ((/* implicit */signed char) ((short) arr_18 [i_7] [i_7] [i_7]));
        /* LoopSeq 1 */
        for (signed char i_8 = 2; i_8 < 15; i_8 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_9 = 1; i_9 < 13; i_9 += 1) 
            {
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)78)))))));
                var_24 = (+((-(arr_20 [i_7]))));
                arr_35 [i_7] [i_8] [i_7] = ((/* implicit */int) (_Bool)0);
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) var_4))));
                var_26 *= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_30 [i_8])))))));
            }
            var_27 += ((/* implicit */signed char) arr_24 [(short)13] [i_8]);
        }
        var_28 -= ((/* implicit */long long int) ((arr_0 [i_7]) * (arr_0 [i_7])));
        var_29 = ((/* implicit */short) ((((/* implicit */int) var_0)) >= (((((/* implicit */_Bool) arr_33 [(signed char)10] [i_7] [11LL])) ? (((/* implicit */int) arr_6 [i_7] [(unsigned short)6])) : (((/* implicit */int) var_0))))));
    }
    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) var_0))));
    var_31 = ((((/* implicit */long long int) ((/* implicit */int) var_7))) | ((-(((var_10) + (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
    var_32 = ((/* implicit */unsigned short) min((var_32), (((unsigned short) ((((((((/* implicit */long long int) ((/* implicit */int) var_6))) & (var_10))) + (9223372036854775807LL))) << (((((((/* implicit */int) var_6)) + (17414))) - (14))))))));
    var_33 = ((/* implicit */unsigned char) min((((/* implicit */short) var_4)), (var_6)));
}
