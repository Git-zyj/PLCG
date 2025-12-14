/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185810
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
    var_14 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] [0LL] = ((((/* implicit */_Bool) max((((/* implicit */long long int) max(((_Bool)1), ((_Bool)1)))), (arr_1 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (min(((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)27006))) : (arr_1 [i_0]))), (((/* implicit */long long int) (-(((/* implicit */int) var_6))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_15 = ((/* implicit */short) arr_2 [i_1]);
            arr_7 [i_0] [0LL] [i_1] = ((/* implicit */_Bool) (((~(((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */int) arr_3 [i_0] [i_1])) | (((/* implicit */int) (short)27000))))));
            arr_8 [i_0] = ((/* implicit */short) arr_6 [14LL] [i_1] [11LL]);
            arr_9 [i_0] [(short)21] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) == (arr_2 [17LL])))) : (((arr_3 [i_0] [i_1]) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_0]))))));
        }
        for (long long int i_2 = 2; i_2 < 21; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
            {
                arr_15 [i_0] [i_2 - 2] [17LL] [i_3] = ((((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */short) arr_12 [i_0] [i_0] [20LL] [i_0])), (arr_5 [i_0]))))))) | (((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (arr_2 [i_0])))) ? (arr_10 [i_0] [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_3]))))));
                arr_16 [i_3] [13LL] [i_0] [i_0] = ((((((/* implicit */_Bool) -5671324511215920214LL)) ? (((/* implicit */long long int) ((arr_3 [i_2] [i_2]) ? (((/* implicit */int) arr_3 [i_0] [i_2])) : (((/* implicit */int) (short)-31256))))) : ((+(var_3))))) & (arr_10 [i_0] [(short)12] [i_3]));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    var_16 = arr_2 [(short)15];
                    var_17 = ((((/* implicit */_Bool) arr_2 [i_0])) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3] [i_2 - 2] [i_2 - 2])))))));
                    var_18 = (short)-8935;
                    arr_19 [(short)15] [i_4] = (~(-7893591887563959674LL));
                }
                var_19 -= ((/* implicit */short) arr_11 [i_3]);
                arr_20 [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) arr_1 [i_3]);
            }
            for (long long int i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
            {
                arr_23 [i_5] [19LL] [i_0] [i_0] = max((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))), (((((((/* implicit */long long int) ((/* implicit */int) var_2))) < (arr_11 [10LL]))) ? (max((arr_2 [i_5]), (arr_17 [i_0] [14LL]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_3 [(_Bool)1] [i_0]))) / (var_1))))));
                var_20 = ((((/* implicit */long long int) ((/* implicit */int) (short)-8935))) / (arr_1 [i_0]));
                arr_24 [i_0] [i_0] [i_2] [i_5] = max((arr_1 [i_0]), (((/* implicit */long long int) (!(((arr_2 [i_5]) == (arr_22 [i_0] [i_0] [i_0])))))));
            }
            /* LoopSeq 3 */
            for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                var_21 = var_6;
                arr_27 [i_0] = ((((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) ^ (((4975362030393594129LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-27035))))))) + (9223372036854775807LL))) >> (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_6] [i_2] [i_0])))) != ((+(((/* implicit */int) (_Bool)0))))))));
            }
            /* vectorizable */
            for (long long int i_7 = 2; i_7 < 21; i_7 += 3) 
            {
                var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-28368))));
                arr_31 [i_2] = (!(((/* implicit */_Bool) arr_11 [i_2 - 2])));
                var_23 ^= ((/* implicit */_Bool) var_4);
            }
            /* vectorizable */
            for (short i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                arr_34 [i_0] [i_2] [i_8] [i_8] = ((/* implicit */long long int) var_13);
                var_24 = arr_26 [i_8] [i_8] [i_8] [i_2 - 2];
            }
            arr_35 [i_0] [i_2] = (-((~(max((((/* implicit */long long int) arr_30 [i_2 - 1] [i_2 + 1] [i_0])), (arr_22 [i_0] [i_0] [i_2]))))));
            /* LoopSeq 3 */
            for (long long int i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                arr_39 [(short)9] [(short)9] [i_9] = arr_30 [i_0] [i_2 - 1] [i_9];
                var_25 = ((/* implicit */_Bool) arr_17 [i_0] [i_2 + 1]);
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                var_26 ^= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))) << ((((~(-7067231443431992226LL))) - (7067231443431992209LL)))));
                var_27 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (9223372036854775796LL)))))))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                arr_44 [i_0] [i_2 + 1] [(_Bool)1] |= ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_13 [i_0] [i_2 - 1] [i_0]))))));
                arr_45 [i_0] [i_2] [(short)8] = ((/* implicit */short) ((((/* implicit */_Bool) max((((var_0) / (var_10))), ((((_Bool)1) ? (-29LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) ((arr_28 [i_0] [i_0]) ? (1049138674376560744LL) : (arr_0 [i_0])))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_38 [3LL] [3LL] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_11])) ? (((/* implicit */int) min(((_Bool)0), ((_Bool)1)))) : (((/* implicit */int) (short)28368))))));
                var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (arr_43 [i_0] [i_2] [i_2] [i_0]) : (arr_37 [(short)15]))), (min((0LL), (5130166931634900465LL))))))));
            }
        }
        for (long long int i_12 = 0; i_12 < 22; i_12 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_13 = 0; i_13 < 22; i_13 += 3) 
            {
                var_29 = ((/* implicit */short) (~(((/* implicit */int) var_6))));
                arr_51 [i_0] [i_13] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [5LL] [5LL]))) : ((~(arr_49 [i_13] [i_13] [i_13] [i_0])))));
                var_30 = ((/* implicit */long long int) (~(((/* implicit */int) arr_21 [i_13] [4LL] [i_0]))));
                var_31 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_12] [i_13])) ? (arr_14 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)27035)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-6321))) : ((-(var_7)))));
                var_32 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((var_10) != (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))))) * (((((/* implicit */_Bool) arr_1 [3LL])) ? (arr_14 [i_13] [i_13]) : (-906272442338882243LL)))));
            }
            var_33 = ((/* implicit */long long int) (short)-5492);
            /* LoopSeq 1 */
            for (long long int i_14 = 0; i_14 < 22; i_14 += 3) 
            {
                arr_54 [i_0] [i_0] [i_12] = ((/* implicit */long long int) arr_12 [i_12] [i_12] [i_12] [i_12]);
                var_34 = ((/* implicit */_Bool) ((var_4) | (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_12)) ? (arr_49 [i_0] [(_Bool)1] [i_0] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))) : ((-(var_3)))))));
            }
        }
        var_35 = ((/* implicit */short) (~((~(-1LL)))));
        var_36 = ((/* implicit */long long int) (_Bool)1);
    }
    for (short i_15 = 2; i_15 < 16; i_15 += 1) 
    {
        arr_57 [i_15 - 2] [i_15] = ((/* implicit */short) arr_6 [(_Bool)1] [i_15 - 2] [i_15]);
        arr_58 [i_15] = ((/* implicit */short) arr_3 [i_15] [i_15 - 1]);
    }
    var_37 = ((((/* implicit */_Bool) var_12)) ? (var_12) : (((((/* implicit */_Bool) (short)-12975)) ? (max((var_11), (906272442338882243LL))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2973106966908137251LL))))));
    var_38 = var_10;
    var_39 = ((/* implicit */_Bool) max((var_39), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : ((+(var_0)))))) && (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (906272442338882242LL)))))))));
}
