/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185308
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
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-5063440010541000231LL)))) ? (((-1LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
        /* LoopSeq 4 */
        for (int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            var_12 *= ((/* implicit */unsigned char) arr_1 [i_0]);
            var_13 ^= ((/* implicit */long long int) ((unsigned char) (+(0ULL))));
        }
        for (int i_2 = 3; i_2 < 18; i_2 += 2) /* same iter space */
        {
            var_14 = ((((/* implicit */unsigned long long int) arr_6 [i_0 - 3])) > (arr_2 [i_0 + 1] [i_2 - 3]));
            var_15 = ((/* implicit */unsigned long long int) (-(arr_5 [i_0 - 3] [i_0] [i_2 - 3])));
        }
        for (int i_3 = 3; i_3 < 18; i_3 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 2; i_4 < 16; i_4 += 4) 
            {
                arr_12 [i_0] [i_0] [i_0] = ((int) (~(36028797018963967LL)));
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */int) arr_8 [i_0 - 2])) / (((/* implicit */int) arr_8 [i_0 - 2])))))));
                arr_13 [i_0] [i_3] [i_0] = ((/* implicit */long long int) (~(arr_9 [i_0])));
            }
            arr_14 [i_0] [i_3] [i_3] = ((arr_5 [i_0] [i_0] [i_3 - 1]) - (((/* implicit */long long int) -450222859)));
            var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)141)) << (((/* implicit */int) (short)21))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10762))) : (arr_6 [i_0 + 2])));
        }
        for (int i_5 = 3; i_5 < 18; i_5 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */int) arr_4 [i_0] [i_0]);
            /* LoopSeq 3 */
            for (int i_6 = 2; i_6 < 18; i_6 += 4) 
            {
                arr_21 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-3273)) > (((/* implicit */int) (unsigned char)205)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5]))) / (var_3)))));
                arr_22 [i_0] [i_5 - 1] [i_6 - 2] [i_5] = ((/* implicit */long long int) var_7);
                var_19 = ((/* implicit */int) ((((arr_15 [i_0] [i_5]) / (arr_15 [i_0] [i_0]))) != (((/* implicit */unsigned long long int) ((long long int) arr_7 [i_6])))));
                var_20 |= ((/* implicit */unsigned char) ((arr_11 [i_0] [i_5] [i_6 - 1]) % (var_7)));
            }
            for (short i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_8 = 0; i_8 < 19; i_8 += 3) 
                {
                    arr_29 [i_0] [i_0] [i_0] [i_8] [i_8] [(unsigned char)14] = ((/* implicit */unsigned long long int) ((_Bool) (short)-11090));
                    var_21 = ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_8]))) / (arr_5 [i_0] [i_0] [i_7]));
                    arr_30 [i_0] [i_0] [i_0 - 3] [5ULL] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))) / (18083584564126934023ULL)));
                }
                for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    arr_34 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 2] = ((((/* implicit */_Bool) arr_10 [i_0] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1671305059))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) 32767);
                        arr_37 [i_0] [i_5] [i_7] [i_9] [i_10] = ((/* implicit */unsigned char) ((arr_25 [i_0]) != (arr_25 [i_0])));
                    }
                }
                var_23 = ((/* implicit */int) (-(arr_19 [i_5] [i_5 - 2] [i_0])));
            }
            for (long long int i_11 = 0; i_11 < 19; i_11 += 3) 
            {
                var_24 = ((int) arr_5 [i_0] [i_0] [i_5 - 2]);
                var_25 = ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_36 [i_0] [i_0] [i_0 - 2] [i_0 + 2] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((_Bool) var_7))) : ((-(((/* implicit */int) var_6)))));
            }
        }
    }
    var_26 ^= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 476665454)) ? (var_7) : ((-(1261122166)))))));
    var_27 = var_8;
    /* LoopSeq 1 */
    for (int i_12 = 1; i_12 < 9; i_12 += 1) 
    {
        var_28 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) max((arr_35 [i_12] [i_12 - 1] [i_12]), (arr_35 [i_12] [i_12 - 1] [i_12])))))), (((/* implicit */int) arr_39 [i_12]))));
        var_29 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
        /* LoopSeq 3 */
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
        {
            arr_46 [i_12] [i_12] = ((/* implicit */long long int) min((-1), (((/* implicit */int) (_Bool)0))));
            /* LoopSeq 1 */
            for (int i_14 = 1; i_14 < 6; i_14 += 4) 
            {
                arr_50 [i_14] [i_12] [i_14] = ((/* implicit */unsigned long long int) var_7);
                var_30 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 9489631966702271356ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) -8274504821019131079LL)))));
                var_31 ^= max(((~(((((/* implicit */_Bool) 10405205994710112125ULL)) ? (8015256213136441244ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)171))))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_12] [i_12 + 1] [(_Bool)1])))))) : (max((((/* implicit */unsigned long long int) arr_35 [0ULL] [i_13] [0ULL])), (arr_2 [i_13] [i_14 - 1]))))));
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((max((arr_25 [i_12]), (((/* implicit */int) var_5)))), (((/* implicit */int) var_10))))) | (max((((/* implicit */long long int) max(((unsigned char)0), (((/* implicit */unsigned char) var_8))))), (var_0)))));
            }
        }
        /* vectorizable */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_33 = ((/* implicit */int) ((var_2) << (((arr_11 [i_12 + 1] [i_12 - 1] [i_12 + 1]) + (740825228)))));
            var_34 = ((/* implicit */_Bool) ((arr_7 [i_12 + 1]) ^ (((/* implicit */long long int) (-2147483647 - 1)))));
            var_35 = (~(((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7609))) : (14407223330581599473ULL))));
        }
        for (int i_16 = 0; i_16 < 10; i_16 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 4) 
            {
                arr_62 [i_12] = ((/* implicit */long long int) ((((arr_38 [i_17] [i_16] [i_16] [i_12]) > (arr_38 [i_12] [i_12 - 1] [i_12] [i_12 - 1]))) ? (((/* implicit */int) ((short) var_7))) : (((((/* implicit */_Bool) arr_47 [i_12 - 1] [i_16] [i_17] [i_12])) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)198)))) : (((/* implicit */int) (!(arr_18 [i_12]))))))));
                var_36 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-403067119) - (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned long long int) 1268276797)), (18442662170500892918ULL)))))) ? (((/* implicit */unsigned long long int) var_3)) : ((((-(18446744073709551615ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) > (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))));
                var_37 = ((/* implicit */unsigned long long int) 2380728982211290769LL);
                var_38 *= ((max((max((arr_4 [i_12] [i_17]), (((/* implicit */unsigned long long int) -1810317970)))), (((/* implicit */unsigned long long int) max((arr_6 [i_12]), (((/* implicit */long long int) arr_20 [i_12] [i_12 - 1] [i_12 - 1]))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))));
            }
            var_39 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((var_5) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) arr_55 [i_12] [i_12]))))), (((((/* implicit */_Bool) arr_7 [i_12])) ? (35182224605184LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
        }
    }
    var_40 = var_6;
}
