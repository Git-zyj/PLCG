/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147070
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_9 [i_3] [5] [i_3] = min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (min((arr_8 [i_2 + 1] [i_2] [i_3] [i_2] [3]), (((/* implicit */unsigned long long int) arr_3 [i_2 - 1] [i_2] [i_2])))));
                        var_15 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_0] [i_2 + 1] [i_0] [i_3] [i_2 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_0] [i_2 + 1] [i_0] [i_3] [i_1]) >= (arr_8 [i_0] [i_2 + 1] [i_1] [i_0] [i_1]))))) : (min((9206659818693811388ULL), (((/* implicit */unsigned long long int) (_Bool)0))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) var_11))), (arr_2 [(_Bool)1]))))));
                        var_17 = ((((/* implicit */int) (!(((/* implicit */_Bool) (+(var_14))))))) % (((/* implicit */int) ((-191667311) != (min((((/* implicit */int) var_11)), (arr_16 [i_4] [i_5] [i_5] [i_4] [i_0])))))));
                        arr_18 [i_5] [16ULL] = (~(arr_1 [i_6]));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (arr_5 [i_0] [i_0])));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (min((min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0])) << (((var_10) + (1131941646))))))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((_Bool) ((_Bool) 6384593039320075497ULL)))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) 9112366032095239414ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        var_22 *= 12980059364711717366ULL;
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 12; i_8 += 1) 
        {
            for (int i_9 = 2; i_9 < 12; i_9 += 3) 
            {
                {
                    var_23 -= ((_Bool) (-(((/* implicit */int) arr_17 [i_8 - 2] [i_8 - 1] [(_Bool)1] [(_Bool)1] [i_8] [i_8]))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 3; i_11 < 11; i_11 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) (-2147483647 - 1));
                                var_25 = ((/* implicit */_Bool) ((min(((_Bool)0), ((_Bool)0))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)0))))) > (67108863)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_8 [i_11 + 3] [i_11 + 3] [i_8] [i_10] [i_8]) : (arr_30 [i_8] [i_8 + 2] [i_8] [i_8 + 2])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_22 [i_8] [i_8] [i_8 - 2])) < (arr_24 [i_11] [i_8] [i_8] [11])))) : ((+(((/* implicit */int) arr_10 [6ULL] [i_8 - 2] [i_8]))))))));
                                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) 1788265617541818202ULL)))) ? (((((/* implicit */_Bool) arr_8 [i_9 + 1] [i_9 - 1] [6] [i_9 - 1] [6])) ? (((/* implicit */unsigned long long int) ((int) (_Bool)0))) : (min((18446744073709551608ULL), (var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) << (((((0) - (var_7))) + (1052309491)))))))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) var_5))));
                    arr_32 [i_8] [i_8] = min((min((var_5), (min((((/* implicit */unsigned long long int) arr_3 [i_7] [i_8] [i_9 + 1])), (var_8))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_6 [i_9 + 1] [i_9 - 2] [i_8 + 1])), (var_14)))));
                    arr_33 [i_8] [i_9 - 2] [i_8] [i_8] = ((/* implicit */_Bool) 1267796637);
                }
            } 
        } 
        var_28 = ((((/* implicit */_Bool) (((_Bool)1) ? (11622671589810366000ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7] [i_7] [i_7])))))) ? ((-(12740753555470731375ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_7] [i_7] [i_7])) * (((/* implicit */int) var_13))))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_13 = 3; i_13 < 13; i_13 += 4) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 1) 
            {
                for (int i_15 = 0; i_15 < 14; i_15 += 2) 
                {
                    {
                        var_29 = ((/* implicit */unsigned long long int) arr_7 [i_15]);
                        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_13 - 1])) ? (min((((/* implicit */unsigned long long int) var_1)), (18446742974197923840ULL))) : (((((/* implicit */_Bool) 1124324781)) ? (arr_21 [i_13 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                        var_31 ^= arr_34 [i_14];
                    }
                } 
            } 
        } 
        var_32 &= ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned long long int) arr_16 [i_12] [i_12] [i_12] [i_12] [i_12]))) ? (((5705990518238820215ULL) - (((/* implicit */unsigned long long int) 1234981504)))) : (((/* implicit */unsigned long long int) arr_25 [i_12] [i_12] [i_12] [i_12])))) >> (min((((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) ((int) (_Bool)1)))))));
        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_42 [i_12] [8] [(_Bool)0]) : (((/* implicit */int) arr_20 [i_12] [i_12]))))) ? (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [(_Bool)1])))))) ? (((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_37 [i_12])), (2907133860200490087ULL))) >= (((unsigned long long int) var_7))))) : (min((((/* implicit */int) arr_10 [17ULL] [i_12] [i_12])), (1928847764))))))));
    }
    for (int i_16 = 0; i_16 < 25; i_16 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_17 = 2; i_17 < 24; i_17 += 4) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                {
                    var_34 ^= min((((var_6) + (var_8))), (((((((/* implicit */_Bool) var_8)) && (var_0))) ? (((((/* implicit */_Bool) -2058291449)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (0ULL))) : (((arr_47 [i_16] [i_16]) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    var_35 = ((((/* implicit */_Bool) 123123715)) ? (min((min((arr_50 [i_18] [i_18]), (((/* implicit */int) var_0)))), (((/* implicit */int) (_Bool)0)))) : (((arr_50 [i_18] [i_18]) >> ((((~(((/* implicit */int) var_1)))) + (33))))));
                    arr_52 [i_16] [i_18] = ((/* implicit */unsigned long long int) ((_Bool) ((var_5) / (((/* implicit */unsigned long long int) arr_50 [i_18] [i_18])))));
                    arr_53 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */_Bool) min((arr_46 [i_17 - 1]), (((/* implicit */int) ((6463033603020628868ULL) >= (((/* implicit */unsigned long long int) arr_46 [i_17 - 1])))))));
                }
            } 
        } 
        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_48 [i_16] [i_16])) ? (((/* implicit */int) ((var_12) || (((/* implicit */_Bool) -1891374538))))) : (((int) arr_51 [i_16] [22ULL] [(_Bool)1]))))))));
        var_37 = ((/* implicit */_Bool) (+(((var_11) ? (arr_48 [i_16] [i_16]) : (arr_48 [i_16] [i_16])))));
        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-2031550263) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) var_10)) : (1480910100176920558ULL)));
    }
    var_39 = ((/* implicit */_Bool) 9007199254740992ULL);
}
