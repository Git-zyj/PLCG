/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134525
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
    var_18 = ((/* implicit */long long int) min((var_18), (var_12)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 4) /* same iter space */
        {
            arr_6 [i_1] [i_0] [i_1] &= ((/* implicit */long long int) (_Bool)0);
            var_19 = -1736015282606824731LL;
        }
        /* vectorizable */
        for (long long int i_2 = 2; i_2 < 20; i_2 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */long long int) (((_Bool)1) && ((((_Bool)1) && (((/* implicit */_Bool) -9LL))))));
            arr_9 [i_0] [i_2] &= ((/* implicit */long long int) var_2);
            arr_10 [i_0] [i_2] [i_2] |= ((((/* implicit */int) arr_2 [i_2 - 1] [i_2 - 2] [i_0])) == ((~(((/* implicit */int) arr_5 [i_0])))));
        }
        for (long long int i_3 = 2; i_3 < 21; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 1; i_4 < 23; i_4 += 1) 
            {
                var_21 = 5697027024511812084LL;
                /* LoopSeq 1 */
                for (long long int i_5 = 4; i_5 < 23; i_5 += 4) 
                {
                    arr_21 [i_0] [i_0] [(_Bool)1] [i_5] [(_Bool)1] = ((/* implicit */long long int) (_Bool)0);
                    /* LoopSeq 4 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (-278168920120752534LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_23 = max((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))), ((~(9223372036854775807LL))));
                        var_24 += min((((/* implicit */long long int) (((-(4738928987552950481LL))) >= (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))))), (3702887629783397661LL));
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_25 = (_Bool)0;
                        arr_27 [i_0] [i_0] [i_5] [i_5] = ((((/* implicit */int) ((((/* implicit */int) max(((_Bool)1), ((_Bool)0)))) == (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))))) != ((+(((/* implicit */int) ((var_12) > (-3645861890887892363LL)))))));
                    }
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
                    {
                        arr_31 [5LL] [i_0] [1LL] [i_0] [i_0] = ((/* implicit */_Bool) max(((+(((336849438747842512LL) + (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_8]))))))), (((long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_0 [i_0])))))));
                        var_26 = ((/* implicit */long long int) max((var_26), (-463696921175029632LL)));
                        var_27 -= ((/* implicit */_Bool) (+(((long long int) ((arr_22 [i_0] [i_5] [i_4] [i_0] [i_4]) ^ (-2285865228430410238LL))))));
                        var_28 = ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) (_Bool)1)))));
                        arr_32 [i_0] [i_3 - 1] [i_4 - 1] [i_0] = (!((((_Bool)0) || ((_Bool)0))));
                    }
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
                    {
                        arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((9223372036854775807LL) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0]))) < (0LL)))))));
                        arr_37 [i_9] [i_3] |= arr_29 [i_0] [i_0] [i_4 - 1] [i_0] [i_9] [i_0] [i_3 - 1];
                        var_29 -= ((((((/* implicit */_Bool) -5913036266779618674LL)) ? (-8345340284837524896LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) <= (((/* implicit */long long int) ((/* implicit */int) ((var_16) == (1266687870040910575LL))))));
                    }
                }
                /* LoopSeq 3 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */int) ((-8726173748248494281LL) < (-4837606780873510891LL)))) << (((((/* implicit */_Bool) arr_25 [i_3 - 2] [i_3] [i_3] [i_3 + 3] [i_0])) ? (((/* implicit */int) arr_2 [i_3 - 2] [i_3] [i_3 + 1])) : (((/* implicit */int) var_2))))));
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!((_Bool)1))))));
                    arr_40 [i_0] [3LL] [i_3] [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) arr_2 [i_3 + 2] [i_4 - 1] [i_10])) - (((/* implicit */int) ((_Bool) (_Bool)1))))));
                }
                for (long long int i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    var_32 = (!(((/* implicit */_Bool) 7644818509530688717LL)));
                    var_33 = ((/* implicit */long long int) min((var_33), (-2115336108237705509LL)));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        arr_46 [i_0] [4LL] [i_0] [i_11] [i_0] = (+(arr_25 [i_4] [i_4] [i_4] [i_4 - 1] [i_0]));
                        var_34 = ((/* implicit */long long int) (+(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))));
                        var_35 = ((/* implicit */long long int) min((var_35), (((long long int) 2820022602535396416LL))));
                        var_36 = (!((_Bool)1));
                        arr_47 [12LL] [8LL] [i_3] [(_Bool)1] [i_12] &= (+((-9223372036854775807LL - 1LL)));
                    }
                    /* vectorizable */
                    for (long long int i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        arr_50 [i_13] [i_13] [i_4] [(_Bool)1] [i_4] &= ((/* implicit */long long int) (!(arr_12 [i_13])));
                        arr_51 [i_0] [i_0] [i_4] [(_Bool)1] [i_4] [i_3] &= (_Bool)1;
                        arr_52 [i_13] &= ((/* implicit */_Bool) (-(((long long int) (_Bool)1))));
                    }
                    for (long long int i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        arr_56 [i_0] [i_3 - 1] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                        var_37 = ((/* implicit */_Bool) 2130023429097078952LL);
                    }
                    arr_57 [i_0] [i_0] [0LL] [i_0] = ((/* implicit */_Bool) ((long long int) -8512866517170955993LL));
                }
                for (long long int i_15 = 2; i_15 < 22; i_15 += 2) 
                {
                    arr_60 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(arr_34 [(_Bool)1] [i_3] [i_15] [i_3] [i_15] [i_15] [i_15 + 1])))) << (((((/* implicit */_Bool) 9223372036854775799LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((~(var_17)))))));
                    /* LoopSeq 1 */
                    for (long long int i_16 = 1; i_16 < 23; i_16 += 4) 
                    {
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3431096447183903635LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (457125818739691813LL)));
                        arr_64 [i_0] [i_3 + 3] [i_3 + 1] [i_3] [i_3] [i_3] [i_3 + 2] = arr_62 [i_3] [i_3] [i_3] [i_3 + 1] [i_3 + 3] [i_3] [1LL];
                    }
                }
            }
            var_39 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) (_Bool)1)))));
            arr_65 [i_0] = ((/* implicit */long long int) arr_48 [i_3 + 2] [i_3] [i_3] [i_3] [i_0] [i_3] [i_3 + 3]);
        }
        var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) arr_13 [(_Bool)1] [i_0] [i_0]))) / (-6686338039670044709LL))), (((/* implicit */long long int) var_7)))))));
        arr_66 [i_0] = var_1;
        var_41 = ((/* implicit */_Bool) ((long long int) (((!(arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? ((-(arr_49 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_23 [i_0] [i_0] [(_Bool)1] [i_0] [i_0])))))));
        var_42 += ((/* implicit */_Bool) ((((/* implicit */_Bool) -3629470777404025852LL)) ? (((((/* implicit */_Bool) 8767930366503070000LL)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) (_Bool)1))))) : ((+(4844615387508571439LL))))) : (4783784710568148664LL)));
    }
}
