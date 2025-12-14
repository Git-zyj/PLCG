/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188175
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
    var_13 = var_10;
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0))));
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        }
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
        {
            var_15 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_0] [i_2] [i_2])) * ((-(((/* implicit */int) arr_7 [(unsigned char)15])))))) >= (((/* implicit */int) ((arr_3 [i_0] [i_0] [i_2]) == (arr_3 [i_2] [i_2] [i_0]))))));
            var_16 = ((/* implicit */unsigned int) (+(((arr_3 [i_0] [i_0] [i_2]) ^ (arr_3 [i_0] [i_0] [i_2])))));
        }
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
        {
            var_17 ^= ((/* implicit */int) (!(((((/* implicit */int) (short)-32512)) > (((/* implicit */int) (signed char)-47))))));
            var_18 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [8U])) || (((/* implicit */_Bool) arr_7 [i_3]))))), ((+((+(arr_3 [i_0] [i_3] [i_3])))))));
            var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)17470)))))));
            arr_10 [i_0] = ((/* implicit */short) (((+(((/* implicit */int) arr_1 [i_0])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
            var_20 *= ((/* implicit */unsigned long long int) ((165953594) >> (((6802544146235205670LL) - (6802544146235205649LL)))));
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                var_21 = ((/* implicit */int) (((+(arr_2 [i_0] [i_4] [i_5]))) > (((((/* implicit */int) (unsigned short)10)) << (((-7279242196834660885LL) + (7279242196834660907LL)))))));
                var_22 = ((13153160648962680496ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) arr_8 [i_5])))))));
                arr_17 [i_0] = ((/* implicit */_Bool) (-(arr_16 [i_0] [i_4] [i_5])));
                var_23 = ((/* implicit */int) (!(((((/* implicit */int) arr_7 [i_0])) <= (arr_2 [i_0] [i_4] [i_5])))));
            }
            for (short i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_9 [i_6] [i_6])) ^ (arr_3 [i_0] [i_4] [i_0])))) || (((/* implicit */_Bool) arr_8 [i_0])))))));
                arr_20 [i_6] [i_4] [i_4] [i_4] |= ((arr_16 [i_0] [i_4] [i_0]) | (arr_16 [i_0] [i_0] [i_0]));
            }
            arr_21 [(_Bool)1] [i_0] = ((/* implicit */int) ((2423380897930632490ULL) % (18446744073709551615ULL)));
        }
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) max((((/* implicit */long long int) max((arr_9 [(short)14] [i_0]), ((-(((/* implicit */int) arr_7 [i_0]))))))), ((+((-9223372036854775807LL - 1LL)))))))));
        arr_22 [i_0] = ((/* implicit */int) ((min(((!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])))), (((arr_19 [i_0] [i_0] [i_0]) == (((/* implicit */int) arr_14 [i_0] [i_0] [i_0])))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)9807)), (-1280899308)))) / ((~(21ULL))))))));
        arr_23 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((~(arr_9 [i_0] [i_0]))), ((~(1656252766))))))));
        arr_24 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) max((((347934821) - (2147483647))), (((16) % (((/* implicit */int) (unsigned short)7037))))))), (((max((arr_16 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0])))) | (((/* implicit */unsigned int) ((/* implicit */int) ((2116558429U) == (600585337U)))))))));
    }
    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        var_26 ^= ((/* implicit */short) ((arr_26 [i_7]) == ((-(((/* implicit */int) arr_25 [i_7]))))));
        arr_28 [i_7] = ((/* implicit */int) ((min((((arr_27 [i_7] [i_7]) / (arr_27 [i_7] [i_7]))), (arr_26 [i_7]))) != (min(((-(((/* implicit */int) arr_25 [i_7])))), (arr_26 [i_7])))));
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        arr_39 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_31 [i_7] [(unsigned short)14]) > (((/* implicit */int) arr_29 [i_10] [i_7]))))) * (arr_31 [i_7] [i_8])));
                        var_27 = (~(-496174692));
                    }
                    var_28 ^= ((/* implicit */short) ((((/* implicit */int) max((arr_36 [i_7] [i_8] [i_7] [i_8] [i_7]), (arr_36 [(unsigned short)11] [i_9] [i_8] [i_7] [i_7])))) > (((/* implicit */int) arr_36 [i_9] [i_8] [14ULL] [i_9] [i_8]))));
                    arr_40 [i_9] [i_8] = ((/* implicit */short) (~(((/* implicit */int) max((arr_32 [(short)17] [i_8] [(_Bool)0]), (arr_32 [i_7] [i_7] [i_7]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_43 [i_11] [i_11] = ((/* implicit */long long int) (((-(arr_42 [i_11]))) <= (((/* implicit */int) arr_41 [i_11] [i_11]))));
        arr_44 [i_11] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_41 [i_11] [i_11]))));
    }
    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 2) 
    {
        var_29 = ((/* implicit */short) min(((+((+(((/* implicit */int) arr_7 [i_12])))))), (arr_19 [i_12] [i_12] [i_12])));
        var_30 = ((/* implicit */short) arr_13 [(unsigned char)2] [i_12] [i_12]);
    }
    var_31 = var_7;
    var_32 ^= ((/* implicit */unsigned int) min(((~(((((/* implicit */int) var_12)) + (var_3))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) & (var_3)))) > (var_10))))));
}
