/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136628
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
    var_13 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 16916437179702288739ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))), ((+(((/* implicit */int) (short)24337))))))) ? ((~(min((1492372397595827549ULL), (((/* implicit */unsigned long long int) var_6)))))) : (1530306894007262876ULL)));
    var_14 = ((/* implicit */unsigned int) min((466959941870516473LL), (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)0)), (((((/* implicit */_Bool) -1228731268899006474LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (0U))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((unsigned short) (~(523264U))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1530306894007262876ULL)) ? (((/* implicit */unsigned long long int) 4133590755U)) : (1530306894007262854ULL)))) ? (((/* implicit */unsigned long long int) arr_2 [i_2] [i_1])) : (((13772471863713004766ULL) + (18446744073709551596ULL)))));
                    var_15 = ((/* implicit */unsigned int) (_Bool)1);
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                {
                    var_16 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) 384022859U)) && ((_Bool)1))))))) ^ (0ULL)));
                    var_17 -= ((/* implicit */unsigned long long int) (_Bool)1);
                    var_18 = ((/* implicit */unsigned char) ((16916437179702288740ULL) < (((/* implicit */unsigned long long int) -1228731268899006488LL))));
                    var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3 - 3])) ? (((/* implicit */int) (short)-32110)) : (((/* implicit */int) arr_6 [i_3 - 2]))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_3 - 1])))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 1; i_7 < 10; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_26 [i_4] [i_3] [i_7 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(161376524U))) >> ((((+(arr_1 [i_3]))) - (569301130)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3] [i_3 + 2]))) >= (((16916437179702288739ULL) * (((/* implicit */unsigned long long int) 1930236102U)))))))) : ((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))) : (-3958248257313456922LL))) << (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (583529219U))) - (583529218U)))))));
                                arr_27 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_16 [2U] [i_3 + 2] [i_3 + 2])), (5127679189463619696ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || ((_Bool)0)))))))) ? (((/* implicit */int) ((-4928560610623159935LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) : (((((/* implicit */_Bool) max((9481572167633697821ULL), (((/* implicit */unsigned long long int) (short)-31815))))) ? (((/* implicit */int) arr_16 [i_3 + 2] [i_3] [i_3 - 3])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32095)))))))));
                            }
                        } 
                    } 
                    arr_28 [i_3] = min(((-(((((/* implicit */_Bool) (unsigned short)56236)) ? (3975189973U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3] [i_3] [i_4] [i_4]))))))), (((/* implicit */unsigned int) (_Bool)1)));
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */long long int) ((arr_12 [i_3 + 2]) ? (((/* implicit */int) arr_12 [i_3 - 2])) : (((/* implicit */int) (_Bool)1))));
                        var_21 -= ((/* implicit */int) (_Bool)1);
                    }
                    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
                    {
                        arr_37 [6ULL] [i_3] [i_3] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_3 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5522572939011802948ULL)));
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) ((((arr_24 [i_9] [i_9] [(_Bool)1] [(unsigned char)0] [i_9]) ? (4294967282U) : (arr_5 [i_12]))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32760)))));
                            var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)-19)) || ((_Bool)1))))));
                            arr_40 [6LL] [(short)11] [i_3] [i_4] [i_3] [(unsigned short)9] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) ((((/* implicit */int) arr_12 [i_9])) >= (((/* implicit */int) arr_16 [i_3] [i_3] [i_3])))))));
                        }
                    }
                    for (unsigned long long int i_13 = 1; i_13 < 8; i_13 += 2) 
                    {
                        var_24 = ((((((/* implicit */_Bool) 1530306894007262876ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_3] [i_3] [i_3] [i_3] [i_3]))) : (16916437179702288736ULL))) != (arr_4 [i_3]));
                        arr_44 [i_3] [i_3] [i_4] [i_4] [(unsigned char)8] [i_13 + 2] = ((((/* implicit */_Bool) (short)-28971)) ? (((/* implicit */int) arr_34 [i_3] [i_4] [i_9])) : (((/* implicit */int) arr_34 [i_3] [0U] [0U])));
                        /* LoopSeq 2 */
                        for (long long int i_14 = 0; i_14 < 12; i_14 += 1) 
                        {
                            arr_48 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 16916437179702288739ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(_Bool)1] [(_Bool)1] [(_Bool)1])))))));
                            arr_49 [i_4] [i_9] [i_3] = ((/* implicit */_Bool) ((0U) ^ (((/* implicit */unsigned int) arr_11 [i_13]))));
                            var_25 = ((/* implicit */int) (_Bool)1);
                        }
                        for (short i_15 = 2; i_15 < 11; i_15 += 1) 
                        {
                            arr_54 [i_3] = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_26 = ((/* implicit */unsigned int) ((unsigned short) (_Bool)1));
                            arr_55 [i_3 - 3] [3U] [i_9] [i_13] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (4294967288U) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_5 [i_15]) : (((/* implicit */unsigned int) 2097151))))));
                        }
                    }
                    var_27 += ((/* implicit */unsigned long long int) (_Bool)1);
                }
                /* LoopSeq 2 */
                for (unsigned int i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        for (unsigned int i_18 = 3; i_18 < 8; i_18 += 3) 
                        {
                            {
                                var_28 += ((/* implicit */_Bool) 1538295114U);
                                var_29 += ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned short)9657)) * (((/* implicit */int) ((((/* implicit */_Bool) 6477444599033399455ULL)) && (((/* implicit */_Bool) arr_42 [11U] [i_17 - 1] [i_17] [i_16] [i_4] [i_3])))))))));
                                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1363147754)) && ((_Bool)1)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned short) (_Bool)1);
                                var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) min(((~(arr_56 [i_3] [i_3] [i_3 - 1] [i_19]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32100)) ? (((/* implicit */int) (unsigned short)27891)) : (((/* implicit */int) arr_7 [i_3] [i_3 - 2] [i_3 - 2]))))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_21 = 1; i_21 < 8; i_21 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        arr_76 [i_3] [i_3] [i_4] [i_3] = 4U;
                        var_33 = ((/* implicit */unsigned int) (unsigned char)255);
                        var_34 -= ((/* implicit */short) (_Bool)1);
                    }
                    /* LoopNest 2 */
                    for (long long int i_23 = 0; i_23 < 12; i_23 += 3) 
                    {
                        for (unsigned short i_24 = 0; i_24 < 12; i_24 += 1) 
                        {
                            {
                                var_35 = ((/* implicit */_Bool) ((unsigned short) 0LL));
                                arr_81 [i_3] [i_24] = ((/* implicit */unsigned char) ((arr_63 [i_24] [i_24] [i_21 + 4] [i_21 + 4] [i_3 - 3]) == (arr_63 [i_24] [i_21] [(unsigned short)5] [i_21 + 4] [i_3 - 3])));
                                var_36 -= ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23977))) * (2575381108U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
