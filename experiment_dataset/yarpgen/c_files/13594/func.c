/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13594
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
    var_11 ^= (+(max((min((var_9), (((/* implicit */unsigned int) var_4)))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)3584))) * (var_2))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3585))) : (var_9)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_0] [i_1] [i_1]))) ? (((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) (((+(0ULL))) << (((((/* implicit */int) (short)-3594)) + (3648)))));
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_0] [11ULL] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((var_6) | (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_3])))), (((long long int) ((_Bool) (short)-3585)))));
                        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((3254779998U) - (((((/* implicit */_Bool) (short)3585)) ? (3254780000U) : (3060899352U)))))) ? (((/* implicit */int) (short)-12350)) : (((/* implicit */int) (short)3598))));
                        arr_12 [i_0] = ((/* implicit */short) ((int) (short)3598));
                        var_13 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (arr_3 [i_0] [13U])))), (max((((/* implicit */unsigned long long int) 2753568564872406692LL)), (3585744760368816761ULL))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        var_14 = ((((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_5)), (arr_4 [i_0] [i_1] [i_1]))) > (((/* implicit */unsigned long long int) 4224290198U)))))) & (((((((/* implicit */long long int) ((/* implicit */int) var_4))) | (-6155743531866119554LL))) ^ (((/* implicit */long long int) min((2358685761U), (((/* implicit */unsigned int) (short)28895))))))));
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_8);
                        arr_18 [i_0] = ((/* implicit */short) min((max((((((/* implicit */_Bool) (short)1627)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_5))), (((/* implicit */unsigned int) 1944919879)))), (((/* implicit */unsigned int) (_Bool)1))));
                        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)3581)) ? (((/* implicit */long long int) min((3669745514U), (3669745531U)))) : (var_7))) / (((/* implicit */long long int) ((/* implicit */int) (short)-15778))))))));
                    }
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_2] [7ULL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-15737))) / (2017612633061982208LL)))) / (min((((/* implicit */unsigned long long int) 1222717419)), (arr_4 [i_0] [i_0] [i_2])))));
                        /* LoopSeq 4 */
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_5] [i_1] &= ((/* implicit */long long int) max((2634091301U), ((+(1930470075U)))));
                            var_16 = ((/* implicit */long long int) min((var_16), (1443737729649700918LL)));
                            arr_25 [i_0] [i_0] [i_2] = ((/* implicit */long long int) 625221765U);
                            arr_26 [i_0] [i_1] [i_1] [1LL] [13] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((4294967295U) << (((624272425) - (624272422)))))))) ? ((+((~(((/* implicit */int) var_0)))))) : (((/* implicit */int) ((572702010) > (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (short)28909))))))))));
                        }
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 19; i_7 += 1) /* same iter space */
                        {
                            var_17 += ((/* implicit */unsigned long long int) -383901581);
                            arr_30 [(_Bool)1] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (short)-28909))));
                        }
                        /* vectorizable */
                        for (long long int i_8 = 0; i_8 < 19; i_8 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned int) ((arr_3 [i_5] [i_0]) - (((/* implicit */int) (short)-16938))));
                            arr_33 [(short)0] [(short)0] [17U] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16918)) ? (((/* implicit */unsigned long long int) 2336983255U)) : (12502028187534688277ULL)))) ? (((/* implicit */long long int) 3902191217U)) : (var_7)));
                            var_19 &= ((/* implicit */_Bool) (short)-28895);
                            arr_34 [i_0] [i_0] [8LL] [i_2] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_1] [i_0])) && (((/* implicit */_Bool) var_6)))))));
                            arr_35 [i_0] [17U] [17U] [i_5] [i_8] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((625221781U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-10057)))))) ? (((/* implicit */long long int) 1915665777)) : (((((/* implicit */_Bool) -383901581)) ? (var_10) : (var_10)))));
                        }
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */int) (short)-28911);
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_20 [i_0] [i_1] [i_1] [i_0] [i_5] [i_9])) : (arr_19 [i_9] [i_5] [i_2] [i_1] [i_0])));
                        }
                    }
                    arr_39 [i_0] [i_1] [i_2] = ((/* implicit */short) 3669745540U);
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 15; i_10 += 3) 
                    {
                        for (long long int i_11 = 0; i_11 < 19; i_11 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */short) 18446744073709551615ULL);
                                arr_47 [i_1] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */long long int) 5944715886174863339ULL);
                            }
                        } 
                    } 
                    arr_48 [i_1] [i_1] [i_2] &= min((1453752744U), (((/* implicit */unsigned int) (short)-28909)));
                }
                for (long long int i_12 = 3; i_12 < 18; i_12 += 1) /* same iter space */
                {
                    var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (short)-10266)))) << (((((/* implicit */int) arr_37 [i_12 - 3] [i_12] [i_12] [i_12] [i_12] [i_1] [i_12 - 1])) + (15546)))))) > ((-(((((/* implicit */unsigned long long int) var_1)) % (12502028187534688285ULL)))))));
                    arr_51 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (~(min((max((7495604247874771118ULL), (((/* implicit */unsigned long long int) 625221773U)))), (((/* implicit */unsigned long long int) ((short) var_9)))))));
                    var_24 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_2)), (max((max((((/* implicit */long long int) var_3)), (-29LL))), (((/* implicit */long long int) max((var_0), ((short)-1963))))))));
                    var_25 = ((/* implicit */long long int) (short)-10266);
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (short)28933)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15778))) : ((-9223372036854775807LL - 1LL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((short) 2931689838612185367LL))) || (arr_31 [i_0] [i_1] [i_0] [i_1] [i_1])))) : (((/* implicit */int) (short)9108))));
                }
                /* vectorizable */
                for (long long int i_13 = 3; i_13 < 18; i_13 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) 8245122119858948117LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-28952))) : (2978847252U)));
                    var_28 = ((8245122119858948117LL) >> ((((+(-227558796))) + (227558802))));
                    arr_55 [i_0] [i_1] [i_0] [i_0] = (-(((((/* implicit */_Bool) (short)17447)) ? (1405091632) : (((/* implicit */int) (short)-32767)))));
                    var_29 *= 3068320727U;
                }
                for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 2) 
                {
                    var_30 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */int) (short)-17432)) : (((/* implicit */int) (short)9809))))) ? (min((var_5), (((/* implicit */unsigned int) (short)28909)))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-9490))) : (1697014386U))))) >> (((max((min((((/* implicit */unsigned long long int) 8583066029354216604LL)), (18446744073709551601ULL))), (((/* implicit */unsigned long long int) var_7)))) - (9911934940678328888ULL))));
                    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (4294967283U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)4095))) > (3195275471U))))) : ((-(1125899873288192LL)))))) ? (var_10) : (var_10)));
                    var_32 = ((/* implicit */long long int) (+((-(681600509U)))));
                    arr_58 [i_0] [4LL] [i_14] [9LL] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-4258)) && (((/* implicit */_Bool) (short)-28909)))) ? (((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_14] [i_0] [i_14])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) -1125899873288192LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))));
                    var_33 = ((/* implicit */_Bool) 31LL);
                }
                arr_59 [i_0] [i_0] [i_1] = (~(((/* implicit */int) ((((((/* implicit */_Bool) 8245122119858948118LL)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]))))) != (((/* implicit */unsigned int) (~(((/* implicit */int) (short)2481)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_15 = 0; i_15 < 12; i_15 += 1) 
    {
        for (short i_16 = 4; i_16 < 8; i_16 += 3) 
        {
            for (long long int i_17 = 0; i_17 < 12; i_17 += 3) 
            {
                {
                    arr_68 [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_14 [i_15] [i_16 + 4] [i_15] [i_17])))) ? ((-(((((/* implicit */_Bool) -4699641947331822455LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (3025851244U))))) : (arr_56 [7U])));
                    var_34 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_43 [i_15] [i_15] [i_17] [i_17] [i_16 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) (short)16384))) : ((-(var_6))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (911159219U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? ((~(var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2352049951U)) || (((/* implicit */_Bool) 134217728U)))))))))));
                    var_35 = max((max((((/* implicit */long long int) arr_31 [i_15] [(short)10] [i_16] [(short)10] [i_15])), (((((/* implicit */_Bool) arr_29 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_15] [i_15] [i_15] [5U]))))))), (((/* implicit */long long int) 323806152U)));
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 11; i_18 += 3) 
                    {
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned int) ((int) 1406642818U));
                                var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */int) (short)2462)) * (((/* implicit */int) (short)-32762))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_38 -= ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) -227558802))), (((long long int) (_Bool)0))))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_3)) + (2147483647))) >> ((((+(var_6))) + (6343385413493654646LL)))))) : (max((((/* implicit */long long int) 0U)), ((((_Bool)1) ? (((/* implicit */long long int) var_1)) : (-1531457605734210431LL))))));
}
