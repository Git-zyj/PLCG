/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161472
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
    var_12 = min((((unsigned long long int) var_10)), (((/* implicit */unsigned long long int) (((_Bool)0) ? (1043822486) : (((((/* implicit */_Bool) -1043822486)) ? (137138036) : (-1043822463)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) -1043822486)) : (12490200171094850499ULL)));
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1220339567U)) ? (var_7) : (arr_1 [14ULL] [i_1]))), (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) 17U)) : (1784818632676510459ULL)))))) ? ((-(((((/* implicit */_Bool) 68252515)) ? (2951093805768592738ULL) : (((/* implicit */unsigned long long int) arr_0 [i_1] [i_0])))))) : (((unsigned long long int) arr_3 [i_0] [i_0 - 1]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 2) /* same iter space */
    {
        arr_7 [i_2] = (!(((/* implicit */_Bool) arr_5 [i_2] [i_2 - 1])));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [2ULL])))))));
        arr_8 [i_2] = (~(((((/* implicit */int) (_Bool)1)) ^ (var_2))));
        var_16 = var_5;
        /* LoopSeq 3 */
        for (int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_18 [i_2] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
                        arr_19 [i_2] [i_3] [7ULL] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) 1469682255)) : (2014600514326084084ULL)));
                        var_17 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
                    }
                } 
            } 
            var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) | (arr_9 [i_2 - 1])));
            var_19 *= ((/* implicit */_Bool) arr_6 [i_2 + 1]);
        }
        for (int i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 17; i_8 += 3) 
                {
                    for (int i_9 = 1; i_9 < 17; i_9 += 1) 
                    {
                        {
                            arr_31 [i_2] [16ULL] [i_2] [i_2] [i_2] [i_2] [i_2 + 1] = ((/* implicit */unsigned long long int) arr_28 [i_7] [i_6]);
                            var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)))) ? ((-(1469682255))) : ((-(-2098488065)))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_29 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1])) <= (((((/* implicit */_Bool) arr_21 [i_2])) ? (((/* implicit */unsigned long long int) var_10)) : (var_1)))));
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 2; i_10 < 18; i_10 += 2) 
                {
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        {
                            var_22 = ((unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_2 + 1] [i_2] [i_7] [i_6])) ? (var_10) : (-191576227)));
                            arr_37 [i_2] [i_6] [i_7] [i_10 - 2] [i_11] [i_2] = ((/* implicit */unsigned long long int) arr_22 [i_2]);
                        }
                    } 
                } 
            }
            var_23 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 2) 
            {
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((1784818632676510463ULL) + (arr_26 [i_2] [i_6] [i_12] [i_12])))));
                arr_42 [i_2] [i_12] |= ((/* implicit */int) (!(((/* implicit */_Bool) 5245806892964861388ULL))));
            }
        }
        for (int i_13 = 0; i_13 < 19; i_13 += 3) 
        {
            var_25 += ((((/* implicit */_Bool) arr_32 [i_2] [i_13] [i_2 - 1])) || (((/* implicit */_Bool) arr_17 [i_2] [i_13] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_13])));
            var_26 = ((/* implicit */unsigned int) ((arr_16 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1]) << (0ULL)));
            var_27 |= arr_16 [i_2] [i_2 + 1] [i_2 + 1] [(_Bool)1];
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 19; i_14 += 2) 
            {
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    {
                        var_28 = 4950366208463924231ULL;
                        arr_50 [15ULL] [i_2] [i_13] [i_13] [14] [i_15 + 1] = ((/* implicit */unsigned int) var_2);
                        /* LoopSeq 1 */
                        for (unsigned int i_16 = 2; i_16 < 15; i_16 += 4) 
                        {
                            var_29 |= ((/* implicit */unsigned long long int) ((3074627747U) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_2 + 1] [i_13] [i_14] [i_15]))))))));
                            var_30 *= ((/* implicit */int) (-(((((/* implicit */_Bool) -1484923713)) ? (2746871998U) : (4253448407U)))));
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) ((((/* implicit */_Bool) 14794900773196252232ULL)) && (((/* implicit */_Bool) 15495650267940958877ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned long long int i_17 = 1; i_17 < 17; i_17 += 4) 
                        {
                            arr_55 [i_2] [i_13] [i_14] [i_15 + 1] [i_13] [i_17 + 1] [i_15] |= ((/* implicit */int) ((((/* implicit */_Bool) (+(0U)))) ? (((((/* implicit */_Bool) 3630355721938443704ULL)) ? (15690811810945786781ULL) : (((/* implicit */unsigned long long int) 658009602)))) : (((/* implicit */unsigned long long int) 3074627745U))));
                            var_32 *= ((/* implicit */int) (-(((((/* implicit */_Bool) arr_36 [i_2] [i_2] [i_2] [10ULL] [i_14])) ? (0ULL) : (((/* implicit */unsigned long long int) arr_28 [i_2] [i_2]))))));
                            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-56858196)))) ? (arr_45 [i_2] [i_2] [i_14] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_39 [4] [i_14] [i_15]) != (arr_36 [i_2 + 1] [i_13] [(_Bool)1] [i_15 + 1] [i_2])))))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            arr_59 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_2] [i_14] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) -1208264593)) ? (-1208264593) : (var_2)))));
                            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((12639322333214529391ULL) < (var_11))))));
                            var_35 += ((((/* implicit */_Bool) -658009605)) ? (16ULL) : (11566375327833585933ULL));
                        }
                        for (int i_19 = 0; i_19 < 19; i_19 += 3) 
                        {
                            var_36 = ((((unsigned long long int) arr_47 [i_2])) != (arr_57 [i_2 - 1] [i_2 - 1] [(_Bool)1] [i_2 + 1] [i_2 + 1]));
                            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13255333211450566127ULL)) ? (-1211055615) : (((/* implicit */int) (_Bool)1))));
                        }
                        var_38 = ((/* implicit */unsigned long long int) max((var_38), (((((/* implicit */_Bool) (+(7127976674827649880ULL)))) ? (((/* implicit */unsigned long long int) 1643059277)) : (18446744073709551586ULL)))));
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_20 = 1; i_20 < 18; i_20 += 2) /* same iter space */
    {
        var_39 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(105506263))) - (((int) (-2147483647 - 1)))))) ? ((((!(((/* implicit */_Bool) 18446744073709551572ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (1811746886U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [13U] [i_20] [i_20] [i_20] [i_20 - 1])))))) : (((arr_17 [i_20] [i_20] [i_20] [i_20] [(_Bool)1] [i_20 + 1]) + (((/* implicit */unsigned long long int) -524093484)))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((18446744073709551605ULL) < (((/* implicit */unsigned long long int) 1368858269))))))))));
        var_40 &= ((unsigned long long int) 524093490);
        var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) (((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) < (var_1))))) : (min((arr_5 [i_20] [i_20]), (((/* implicit */unsigned long long int) arr_62 [i_20 + 1] [i_20] [i_20] [i_20] [i_20])))))) <= (((/* implicit */unsigned long long int) arr_45 [i_20 - 1] [i_20 - 1] [i_20] [9U])))))));
        var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) 18446744073709551596ULL))));
        var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) ((18446744073709551608ULL) != (arr_52 [i_20] [i_20] [16U] [16U] [i_20 + 1] [i_20 + 1]))))));
    }
}
