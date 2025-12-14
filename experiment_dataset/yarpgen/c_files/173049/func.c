/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173049
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = arr_0 [i_0];
        arr_3 [i_0] [i_0] = ((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), ((~(arr_4 [8ULL])))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            var_17 = (((_Bool)1) ? (11211553110112547623ULL) : (0ULL));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (_Bool)1))));
                        var_19 = (((((_Bool)1) ? (3055541209432947378ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)0)))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            var_20 += (+(arr_14 [i_2 - 1] [i_2 - 2] [i_4] [i_2]));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
                            var_22 = var_8;
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_21 [i_1] [i_2] [i_1] [i_4] = ((((/* implicit */_Bool) 13166203253611158582ULL)) || ((_Bool)1));
                            var_23 = ((unsigned long long int) var_10);
                            var_24 = ((/* implicit */_Bool) (+(13166203253611158587ULL)));
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_6 [i_2]))));
                            arr_22 [i_2] [i_2] [i_3] [i_4] [i_6] &= (+(10029651032121022340ULL));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                arr_25 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_11 [i_1])));
                arr_26 [i_2] [i_1] = ((_Bool) arr_23 [i_1] [i_7]);
                arr_27 [i_1] [i_2 - 1] [i_1] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_2 + 1] [i_7 - 1]))) > (((arr_5 [i_7] [i_2]) + (var_14)))));
                arr_28 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) arr_18 [i_1] [i_2] [i_2] [i_7] [i_7 - 1]);
            }
        }
        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 3; i_10 < 19; i_10 += 3) 
                {
                    {
                        arr_38 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [i_8] [i_10 - 2] [i_1]))));
                        arr_39 [i_1] [i_1] [i_8] [i_9] [i_9] [i_8] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (16800703380299815460ULL) : (5187294578121995649ULL)));
                        arr_40 [i_1] [i_9 - 1] [i_9 - 1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & (18446744073709551615ULL)));
                        var_26 = var_14;
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned long long int) min((var_27), (var_11)));
        }
        arr_41 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 4) 
        {
            var_28 = ((/* implicit */unsigned long long int) ((var_14) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((arr_43 [i_11]) >> (((arr_43 [i_11]) - (7786389481427581280ULL))))))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_30 = ((/* implicit */_Bool) (+((+(13166203253611158582ULL)))));
            arr_51 [i_13] = ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_42 [i_11]) != (arr_44 [i_11] [i_13]))))));
            /* LoopNest 3 */
            for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 2) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 1) 
                {
                    for (unsigned long long int i_16 = 1; i_16 < 22; i_16 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */_Bool) (-(max((5467314120767636966ULL), (((/* implicit */unsigned long long int) arr_60 [i_14] [i_13] [i_14] [4ULL] [i_16] [i_16 + 1] [i_16]))))));
                            var_32 = max((8589934576ULL), (0ULL));
                            arr_61 [i_11] [i_11] [i_13] [i_13] [i_15] = (_Bool)1;
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (unsigned long long int i_18 = 4; i_18 < 22; i_18 += 4) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_69 [i_11] [21ULL] [i_17] [i_18 - 4] [i_13] [i_19] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_65 [i_18 + 1] [i_18 - 3] [i_18] [i_19] [i_19]) < (arr_55 [i_18 + 2] [i_18] [i_18 - 2] [i_18] [i_18 - 4] [i_13])))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13241284950203869627ULL)))));
                            arr_70 [i_11] [i_13] [i_13] [11ULL] [i_19] [i_18 - 1] [i_17] = ((unsigned long long int) ((((/* implicit */int) var_7)) >> (((/* implicit */int) arr_67 [i_11] [i_11] [i_18 - 2] [i_18 + 1] [i_19]))));
                            var_33 = ((/* implicit */_Bool) max((((arr_54 [i_13] [i_13]) * (arr_54 [i_13] [i_13]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_54 [i_13] [i_13])) || (((/* implicit */_Bool) arr_54 [i_13] [i_13])))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 2) 
        {
            arr_74 [i_11] [i_20] [i_20] = arr_73 [i_11] [i_20];
            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) arr_47 [i_20] [i_11] [i_11])) : (((/* implicit */int) arr_47 [i_20] [i_20] [i_11])))))));
            var_35 = (((((_Bool)1) && (((/* implicit */_Bool) arr_57 [i_11] [i_20])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (2522087638814479530ULL))) : (((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_11] [i_11] [i_11] [i_11] [(_Bool)1] [i_20]))))));
        }
        var_36 *= ((((/* implicit */_Bool) (~(max((arr_54 [i_11] [i_11]), (((/* implicit */unsigned long long int) arr_52 [i_11]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4994349473455232810ULL)) && (((/* implicit */_Bool) var_3)))))) : (((unsigned long long int) ((arr_72 [i_11] [i_11]) < (var_10)))));
    }
    var_37 = ((/* implicit */_Bool) ((unsigned long long int) (-(((var_15) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_14))))));
    var_38 = ((/* implicit */_Bool) max((10563190096321185578ULL), (((/* implicit */unsigned long long int) var_15))));
    var_39 = ((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) var_9))));
    var_40 = ((unsigned long long int) (_Bool)1);
}
