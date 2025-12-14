/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152670
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
    for (int i_0 = 1; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_10 = ((/* implicit */int) (unsigned short)34999);
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1638546302)), (((15269674168097795575ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (unsigned short)65535)) << (((arr_6 [i_1]) - (648403054)))))));
                            var_12 = ((/* implicit */int) 6408452371577299371ULL);
                            arr_15 [10] [i_1] [i_2] [i_1 - 1] [i_1] [i_0] = ((/* implicit */unsigned short) (~(arr_11 [i_1] [i_2] [i_3] [i_4])));
                            arr_16 [i_0] [i_1] [i_2] [i_3] [(_Bool)1] = arr_7 [i_0] [i_0] [1] [i_1];
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            arr_19 [i_1] [i_3] [i_1] [(unsigned short)2] [(unsigned short)7] = ((((/* implicit */int) ((((/* implicit */_Bool) ((65535) / (1213074364)))) && (((/* implicit */_Bool) 65522))))) * (((/* implicit */int) (unsigned short)65280)));
                            arr_20 [i_0] [i_0] [i_1] [i_1] [i_3] [i_5] = 328815223;
                        }
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
                        {
                            var_13 = (-((+(((/* implicit */int) (_Bool)1)))));
                            arr_23 [i_1] [i_3] = ((/* implicit */int) (_Bool)1);
                            arr_24 [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] [i_2] [(unsigned short)8] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((1827297715) ^ (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (15233487532338909785ULL))))))) * (((((/* implicit */_Bool) arr_1 [i_1 - 3] [i_0 + 1])) ? (arr_1 [i_1 - 1] [i_0 + 1]) : (-15)))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
                        {
                            var_14 = (~(194025105));
                            arr_28 [i_0] [i_0] [i_1] [i_2] [i_1] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(16806747865527048801ULL)))) && ((!(((/* implicit */_Bool) (unsigned short)65532))))));
                            arr_29 [i_1] = min(((+(arr_5 [i_0 + 1] [i_1 - 3]))), (arr_5 [i_0 - 1] [i_7]));
                        }
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (((unsigned long long int) (unsigned short)44369))))))))));
                    }
                } 
            } 
        } 
        arr_30 [i_0] &= ((int) (-(((/* implicit */int) (_Bool)1))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            for (int i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                for (unsigned short i_10 = 4; i_10 < 10; i_10 += 1) 
                {
                    {
                        var_16 = ((/* implicit */int) var_3);
                        var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((6888835294750406462ULL), (((/* implicit */unsigned long long int) (unsigned short)65408)))), (((/* implicit */unsigned long long int) 65535))))) ? (((/* implicit */int) ((unsigned short) var_2))) : (max((((((/* implicit */int) (unsigned short)5824)) % (1513428590))), (((/* implicit */int) var_0))))));
                    }
                } 
            } 
        } 
    }
    for (int i_11 = 1; i_11 < 12; i_11 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            for (unsigned short i_13 = 2; i_13 < 12; i_13 += 2) 
            {
                {
                    var_18 = ((/* implicit */int) (unsigned short)65535);
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 1; i_14 < 12; i_14 += 3) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 13; i_15 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) arr_31 [i_15] [i_15]))));
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((((-569766429) & ((~(((/* implicit */int) var_9)))))) + (2147483647))) << (((2147483647) - (2147483647))))))));
                            }
                        } 
                    } 
                    arr_51 [i_11 - 1] [(unsigned short)4] [i_13] [i_11 + 1] = (+(1595812747));
                }
            } 
        } 
        arr_52 [i_11 - 1] [i_11] = ((/* implicit */unsigned short) -1417708140);
        arr_53 [i_11] = ((/* implicit */unsigned short) (_Bool)1);
    }
    for (int i_16 = 1; i_16 < 12; i_16 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) 131071))));
        /* LoopSeq 2 */
        for (int i_17 = 1; i_17 < 12; i_17 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_18 = 0; i_18 < 13; i_18 += 2) 
            {
                for (unsigned short i_19 = 0; i_19 < 13; i_19 += 4) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (-(0))))));
                        /* LoopSeq 3 */
                        for (int i_20 = 1; i_20 < 12; i_20 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (+(1)))) ? (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) (_Bool)1))))) : (((((/* implicit */_Bool) var_8)) ? (-2091706924) : (644463765))))), (((/* implicit */int) (_Bool)1)))))));
                            var_24 = ((/* implicit */unsigned short) min((((((-65536) != (var_8))) ? (min((((/* implicit */int) (unsigned short)44369)), (1484619357))) : ((~(((/* implicit */int) (_Bool)1)))))), ((+((~(((/* implicit */int) (unsigned short)19152))))))));
                        }
                        for (int i_21 = 2; i_21 < 12; i_21 += 1) /* same iter space */
                        {
                            var_25 = min((((/* implicit */int) arr_43 [i_16] [i_16] [i_16])), ((+((~(var_7))))));
                            var_26 = ((/* implicit */unsigned short) (+(max((1917351924), (((/* implicit */int) ((((/* implicit */int) (unsigned short)40838)) == (var_8))))))));
                            var_27 &= ((/* implicit */int) ((((/* implicit */_Bool) (+(10462385344086543754ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)21166)))))) - ((+(4398046511103ULL))))) : (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) -1579580622)) ? (((/* implicit */int) (unsigned short)40731)) : (((/* implicit */int) (unsigned short)61248)))))))));
                        }
                        for (int i_22 = 2; i_22 < 12; i_22 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) var_7))));
                            arr_74 [11ULL] [i_17] [(_Bool)1] [i_17] [i_17] [i_17] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65523)) ? ((-2147483647 - 1)) : (-644463765)))) && (((/* implicit */_Bool) 58720256))))), ((-(1975007606)))));
                        }
                        var_29 = ((unsigned short) (+(min((4095), (((/* implicit */int) (unsigned short)14784))))));
                        arr_75 [i_16 - 1] [(_Bool)1] [i_17 - 1] [i_19] = (~(-1383190654));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_23 = 2; i_23 < 12; i_23 += 2) 
            {
                for (int i_24 = 1; i_24 < 11; i_24 += 2) 
                {
                    {
                        arr_82 [i_16] [i_17] [i_23] [i_24] = ((/* implicit */int) 15314015578639329370ULL);
                        arr_83 [i_16] [i_16] = ((((/* implicit */int) (!(((/* implicit */_Bool) 460477476))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [(unsigned short)8] [i_17] [i_17 - 1]))))));
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((min((arr_59 [i_23 + 1] [(_Bool)1] [i_24 + 2] [4]), (((/* implicit */int) (unsigned short)62152)))) != (arr_8 [i_16 - 1] [i_17 - 1] [i_23]))))));
                    }
                } 
            } 
            var_31 = (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)12759)) != (((((/* implicit */int) arr_50 [(unsigned short)0] [(unsigned short)0])) * (((/* implicit */int) var_6))))))));
            /* LoopNest 2 */
            for (int i_25 = 0; i_25 < 13; i_25 += 4) 
            {
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    {
                        arr_88 [2ULL] [2ULL] [i_25] [i_25] [i_25] = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_72 [i_16 + 1] [i_17] [i_16 + 1] [i_25] [i_26] [9])))))), (-194025106)));
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) -2115382144))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_27 = 1; i_27 < 10; i_27 += 4) 
        {
            arr_92 [i_16 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1596795823)) ? (((int) -1453794123)) : (((/* implicit */int) (unsigned short)52777))))) && (((((/* implicit */unsigned long long int) 600630028)) != (14954607374315682500ULL)))));
            /* LoopNest 3 */
            for (unsigned short i_28 = 0; i_28 < 13; i_28 += 2) 
            {
                for (int i_29 = 0; i_29 < 13; i_29 += 2) 
                {
                    for (unsigned short i_30 = 1; i_30 < 12; i_30 += 4) 
                    {
                        {
                            var_33 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(-940763702))), (arr_81 [i_27 + 2] [i_27 - 1] [i_27 + 3] [i_27 + 3] [i_27 + 3])))) ? ((+(((((/* implicit */_Bool) (unsigned short)42408)) ? (arr_42 [i_16] [i_27] [i_29]) : (4095ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (266287972352ULL) : (((/* implicit */unsigned long long int) arr_41 [i_30])))))))));
                            var_34 ^= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (_Bool)1)))) - ((~(arr_79 [i_27 - 1] [i_27 - 1] [i_16 - 1])))));
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */int) min((var_35), (max((((int) ((10462385344086543727ULL) << (((/* implicit */int) (_Bool)1))))), (((/* implicit */int) (unsigned short)4))))));
            arr_100 [i_16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2128425630))));
        }
    }
    var_36 = ((/* implicit */int) var_0);
    var_37 = ((/* implicit */unsigned short) ((194025105) << (((5804815646112341823ULL) - (5804815646112341823ULL)))));
    var_38 = ((/* implicit */int) min((var_38), (max(((+((+(((/* implicit */int) var_4)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
}
