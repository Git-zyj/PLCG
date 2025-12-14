/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153580
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
    var_18 = ((/* implicit */_Bool) var_15);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */_Bool) var_12);
                    arr_8 [(_Bool)1] [i_1] [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_7 [i_2 + 2] [i_2 + 2] [i_2]);
                    var_20 -= ((/* implicit */_Bool) ((11853795978304937313ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28831)))));
                    arr_9 [(_Bool)1] [(_Bool)1] [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) (short)-28842);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28841)) ? (((/* implicit */int) (short)5043)) : (((/* implicit */int) (short)-5044))));
        var_22 -= ((/* implicit */short) var_9);
        arr_13 [i_3 - 1] = ((13933390183525422483ULL) - (((((/* implicit */_Bool) (short)5038)) ? (arr_1 [i_3] [i_3 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3 - 1] [i_3 - 1]))))));
    }
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_25 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_19 [i_4] [i_5] [i_6]))) ? (((/* implicit */int) arr_22 [i_5] [i_5] [i_6] [(short)16] [i_7] [i_7])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-5038)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1051403701530002768ULL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23361)) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) arr_19 [i_4] [i_5] [i_6]))))))))) : (6544803477581988092ULL)));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                            {
                                var_23 = ((/* implicit */_Bool) arr_28 [i_4] [i_5] [i_6] [i_4] [i_7] [i_8] [i_8]);
                                var_24 = ((((/* implicit */_Bool) (short)28830)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32764))) : (0ULL));
                            }
                            /* vectorizable */
                            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                            {
                                arr_31 [i_9] [i_4] [i_6] [i_4] [i_4] = ((/* implicit */unsigned long long int) (short)-28838);
                                var_25 ^= (short)5038;
                            }
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_10 = 0; i_10 < 25; i_10 += 3) 
                            {
                                var_26 = arr_14 [i_4];
                                var_27 = ((/* implicit */unsigned long long int) var_3);
                                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)23362)) ? (((/* implicit */int) (short)32754)) : (((/* implicit */int) (short)32754))));
                                var_29 &= ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28831))) : (3187057343129105430ULL)));
                                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) 6555838490822843495ULL)) ? (((/* implicit */int) (short)18056)) : (((/* implicit */int) (_Bool)1))));
                            }
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_17 [i_4]))) ? (((((/* implicit */_Bool) arr_30 [i_4] [i_6] [i_5] [i_4])) ? (((/* implicit */int) arr_30 [i_4] [i_5] [i_6] [i_7])) : (((/* implicit */int) arr_30 [i_6] [i_6] [i_6] [7ULL])))) : (((/* implicit */int) (_Bool)1))));
                            var_32 = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)0)))) - (((/* implicit */int) arr_32 [i_4] [i_5] [i_5] [22ULL] [i_7]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((unsigned long long int) (short)-28831)))));
                    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) arr_20 [i_4] [i_5] [i_4]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_38 [i_4] [i_5] [(_Bool)1] [i_4]))));
                }
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 25; i_12 += 3) 
                {
                    for (short i_13 = 0; i_13 < 25; i_13 += 4) 
                    {
                        {
                            arr_43 [i_4] [i_5] [i_4] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 281474976710144ULL)) && (((/* implicit */_Bool) (short)-23361)))))) : (((unsigned long long int) arr_15 [i_4] [i_4]))));
                            arr_44 [i_4] [i_4] [i_12] [i_13] = ((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) (short)-32754)) : (((/* implicit */int) arr_38 [i_4] [i_4] [i_4] [i_4]))));
                            /* LoopSeq 4 */
                            for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 3) 
                            {
                                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (11890905582886708120ULL)))) ? (((((/* implicit */_Bool) (short)-28831)) ? (((/* implicit */int) (short)-19620)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (arr_38 [i_4] [i_13] [i_12] [i_4]))))));
                                arr_49 [i_4] [i_5] [i_12] [i_12] [i_4] [i_5] = ((/* implicit */short) (_Bool)1);
                            }
                            for (short i_15 = 0; i_15 < 25; i_15 += 3) /* same iter space */
                            {
                                arr_53 [i_4] [i_5] [i_12] [20ULL] [i_13] [i_5] [i_5] &= ((/* implicit */short) var_4);
                                var_36 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) - (((((/* implicit */int) arr_18 [i_4] [i_13])) - (((/* implicit */int) var_3))))))) * (7076342800397067414ULL)));
                                arr_54 [i_4] [i_5] [i_5] [i_4] [i_15] = ((/* implicit */_Bool) (short)1289);
                            }
                            for (short i_16 = 0; i_16 < 25; i_16 += 3) /* same iter space */
                            {
                                var_37 *= ((_Bool) ((((/* implicit */_Bool) arr_17 [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_4] [i_5] [i_12] [i_13] [i_16]))) : (896518659083566703ULL)));
                                arr_59 [i_16] [i_4] [i_12] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32754)) ? (((/* implicit */int) arr_22 [i_4] [i_5] [i_5] [i_12] [i_13] [13ULL])) : (((/* implicit */int) (short)32754))));
                                var_38 = ((/* implicit */short) (((_Bool)1) ? (((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_4] [i_5] [16ULL] [i_12] [i_12] [i_13] [i_16]))) : (7961419705277652055ULL))) : (((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) arr_50 [i_4] [i_5] [i_5] [i_12] [i_12] [(short)0] [i_16])))))));
                            }
                            /* vectorizable */
                            for (short i_17 = 0; i_17 < 25; i_17 += 3) /* same iter space */
                            {
                                var_39 = ((/* implicit */unsigned long long int) max((var_39), (var_5)));
                                arr_62 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) var_1);
                                arr_63 [i_4] [i_5] [i_4] [i_17] = arr_21 [i_4] [i_5] [i_13] [i_17];
                            }
                        }
                    } 
                } 
                var_40 = (_Bool)1;
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_19 = 0; i_19 < 25; i_19 += 4) 
                    {
                        for (unsigned long long int i_20 = 1; i_20 < 23; i_20 += 4) 
                        {
                            {
                                arr_71 [i_4] = ((/* implicit */short) var_15);
                                var_41 = arr_19 [i_5] [i_20 - 1] [i_19];
                                var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32755)) ? (((/* implicit */int) (short)30655)) : (((/* implicit */int) (short)21355))));
                                var_43 = arr_39 [i_4];
                                var_44 = ((/* implicit */_Bool) arr_48 [i_20] [i_20 - 1] [i_20] [i_20 - 1] [i_20] [i_20 + 1] [(short)8]);
                            }
                        } 
                    } 
                    var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) ((unsigned long long int) arr_24 [i_4] [i_4] [i_5] [i_5] [i_18] [i_18])))));
                    var_46 -= ((/* implicit */unsigned long long int) ((arr_51 [i_4]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14))));
                }
            }
        } 
    } 
    var_47 = ((/* implicit */_Bool) var_8);
}
