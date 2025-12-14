/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12086
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
    var_19 = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (9223372036854775807LL) : (-1133774990594121037LL));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((((long long int) (-(var_9)))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775796LL)))))));
        var_21 = (-((-(-1133774990594121037LL))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 6; i_1 += 2) 
    {
        var_22 = var_10;
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            var_23 = (~(var_1));
            /* LoopNest 2 */
            for (long long int i_3 = 4; i_3 < 9; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        arr_12 [i_4] [i_3] [i_4] [i_4] [i_1 - 1] [9LL] = ((long long int) 9223372036854775801LL);
                        /* LoopSeq 3 */
                        for (long long int i_5 = 3; i_5 < 6; i_5 += 3) 
                        {
                            var_24 = ((long long int) var_8);
                            var_25 = ((arr_14 [i_5] [i_5 + 4] [i_3 - 2] [i_3 - 1] [i_3] [i_3 - 1] [i_2]) + (var_6));
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((3093949442478003716LL) < (-3093949442478003716LL))))));
                        }
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            var_27 = ((/* implicit */long long int) min((var_27), (((((/* implicit */_Bool) ((long long int) arr_1 [i_2]))) ? (((((/* implicit */_Bool) var_0)) ? (-1378923533984579811LL) : (var_17))) : (var_0)))));
                            var_28 = arr_13 [i_2] [i_4] [i_3] [1LL] [i_4];
                        }
                        for (long long int i_7 = 4; i_7 < 9; i_7 += 3) 
                        {
                            arr_20 [i_1 + 3] [i_2] [i_4] [i_4] [i_7 - 4] = -3093949442478003691LL;
                            arr_21 [i_4] [i_4] [i_4] [i_3] [2LL] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6357396355744723147LL)) ? (-4323666033006009110LL) : (arr_18 [i_1 - 1] [i_2] [i_4] [i_4] [i_3] [i_7 + 1] [i_7])))) ? (((-9223372036854775802LL) % (-3093949442478003691LL))) : (((((/* implicit */_Bool) -7745263547018267969LL)) ? (18LL) : (9223372036854775801LL))));
                            var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
                        }
                        var_30 = arr_11 [i_1] [i_2] [i_3 - 3] [i_3 - 3] [i_4];
                        arr_22 [i_1 - 1] [i_4] = var_15;
                        var_31 = ((/* implicit */long long int) min((var_31), (((((/* implicit */_Bool) arr_1 [i_3])) ? (-2650913089747408877LL) : ((-(var_12)))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_8 = 1; i_8 < 8; i_8 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    arr_30 [i_1] [i_8] [i_1] [3LL] [7LL] [i_9] = ((/* implicit */long long int) ((arr_24 [i_8]) != (-5549946261558721108LL)));
                    arr_31 [i_1 - 1] [i_2] [2LL] [i_8] [i_2] [i_9] = ((((/* implicit */_Bool) var_2)) ? (arr_28 [i_8 - 1] [i_9]) : (var_0));
                }
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        {
                            arr_36 [i_11] [i_8] [i_8] [i_8] [5LL] = (~(arr_18 [3LL] [i_1 + 4] [i_8] [i_1 + 1] [i_8] [i_1 + 1] [i_1 + 3]));
                            var_32 = -6144588074460608147LL;
                            arr_37 [i_11] [i_8] [6LL] [i_8] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -362706806386374039LL)) ? (var_17) : ((-9223372036854775807LL - 1LL))))) ? (281406257233920LL) : (arr_10 [i_8 + 2] [i_8] [5LL] [i_1 + 3] [i_8] [i_1]));
                            var_33 = ((long long int) 2607896432172004053LL);
                            var_34 = ((((/* implicit */_Bool) 5182497668555510384LL)) ? (((((/* implicit */_Bool) arr_23 [i_11] [i_8] [i_8] [i_1])) ? (2249600790429696LL) : ((-9223372036854775807LL - 1LL)))) : ((-(var_12))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_12 = 1; i_12 < 8; i_12 += 4) 
                {
                    for (long long int i_13 = 1; i_13 < 7; i_13 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) (!(((/* implicit */_Bool) -362706806386374039LL)))))));
                            var_36 |= arr_19 [i_2] [i_2] [i_2] [i_12 - 1] [i_1];
                            var_37 = ((var_18) | (var_17));
                        }
                    } 
                } 
            }
            var_38 = ((((/* implicit */_Bool) 19LL)) ? (arr_14 [i_1] [i_1] [i_1 + 3] [i_1 + 4] [i_1 + 3] [i_1 - 1] [i_2]) : (8589934528LL));
            /* LoopSeq 1 */
            for (long long int i_14 = 0; i_14 < 10; i_14 += 4) 
            {
                arr_46 [i_1] [6LL] [i_1] = ((long long int) ((long long int) -281406257233921LL));
                arr_47 [i_14] [i_2] [i_1 + 3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_16))));
                var_39 -= ((((/* implicit */_Bool) arr_25 [i_1] [i_1 + 1])) ? (19LL) : (((((/* implicit */_Bool) arr_23 [4LL] [i_2] [i_2] [i_14])) ? (-9185576821025222257LL) : (arr_38 [i_2]))));
            }
        }
        for (long long int i_15 = 0; i_15 < 10; i_15 += 4) 
        {
            var_40 = 8589934536LL;
            arr_51 [i_1] = (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) ((9185576821025222256LL) >= (-6730073747542926032LL))))) : ((-(1458130569599299978LL))));
            var_41 |= var_6;
            var_42 = (-(-3617755446671782205LL));
        }
        for (long long int i_16 = 3; i_16 < 8; i_16 += 3) 
        {
            arr_55 [i_16] = ((((/* implicit */_Bool) 9149346646540858935LL)) ? (arr_33 [i_1 + 1] [i_1 + 4] [i_16 + 1] [i_16]) : (((7642832337227683485LL) | (-6056730840032488176LL))));
            /* LoopNest 2 */
            for (long long int i_17 = 2; i_17 < 9; i_17 += 3) 
            {
                for (long long int i_18 = 0; i_18 < 10; i_18 += 1) 
                {
                    {
                        var_43 = ((((/* implicit */_Bool) ((long long int) -6849373943140949219LL))) ? ((+((-9223372036854775807LL - 1LL)))) : (((((/* implicit */_Bool) -9149346646540858922LL)) ? (-6465368250217387496LL) : (3091311720592968502LL))));
                        var_44 = var_5;
                        /* LoopSeq 1 */
                        for (long long int i_19 = 2; i_19 < 9; i_19 += 3) 
                        {
                            var_45 = ((long long int) var_9);
                            var_46 = ((long long int) ((var_2) <= (9149346646540858921LL)));
                        }
                        var_47 = ((/* implicit */long long int) min((var_47), ((~(((arr_11 [i_1] [i_16 - 2] [3LL] [i_17] [i_18]) & (arr_54 [i_1 - 1] [i_16 - 2] [i_18])))))));
                        var_48 = ((long long int) ((long long int) var_5));
                    }
                } 
            } 
            var_49 = arr_38 [i_16];
        }
    }
    for (long long int i_20 = 1; i_20 < 7; i_20 += 3) /* same iter space */
    {
        var_50 = ((long long int) ((long long int) -812301303860422688LL));
        /* LoopNest 2 */
        for (long long int i_21 = 0; i_21 < 10; i_21 += 3) 
        {
            for (long long int i_22 = 0; i_22 < 10; i_22 += 3) 
            {
                {
                    var_51 = ((((((/* implicit */_Bool) 6056730840032488183LL)) ? ((-(2168526003494356256LL))) : (min((7601051415516069580LL), (-5853983359223375837LL))))) | (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [6LL]))))), ((-(arr_32 [1LL] [i_21] [i_20 + 3]))))));
                    var_52 = (-(0LL));
                }
            } 
        } 
    }
    for (long long int i_23 = 1; i_23 < 7; i_23 += 3) /* same iter space */
    {
        var_53 = ((((arr_56 [i_23 + 1] [i_23] [i_23] [i_23 + 1]) != (arr_32 [i_23 + 3] [i_23 + 3] [i_23]))) ? (((-6251461564457026748LL) & (-1019670921427567020LL))) : (((long long int) var_3)));
        var_54 = ((long long int) 9088539922895349569LL);
        arr_78 [i_23] [i_23] = 140737488355327LL;
    }
    /* LoopNest 3 */
    for (long long int i_24 = 0; i_24 < 16; i_24 += 4) 
    {
        for (long long int i_25 = 0; i_25 < 16; i_25 += 2) 
        {
            for (long long int i_26 = 0; i_26 < 16; i_26 += 2) 
            {
                {
                    var_55 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) 134217727LL)))));
                    var_56 = min((min((var_12), ((-(-1016415042888494042LL))))), (max((min((9185907363778516688LL), (var_17))), (((/* implicit */long long int) ((((/* implicit */_Bool) -6251461564457026748LL)) || (((/* implicit */_Bool) 2659422577960987390LL))))))));
                    var_57 = min((var_0), ((+(max((1662755948979715228LL), (-1662755948979715223LL))))));
                    arr_86 [i_24] [i_25] [i_25] [i_26] = arr_1 [i_26];
                    arr_87 [i_24] [i_25] [i_24] [i_26] = max((((((/* implicit */_Bool) ((long long int) 3091311720592968502LL))) ? (max((var_4), (var_5))) : (max((var_11), (var_11))))), (((/* implicit */long long int) (-(((/* implicit */int) ((var_14) < (-6954323278977994273LL))))))));
                }
            } 
        } 
    } 
    var_58 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))), (min((var_10), (var_1)))))) || (((/* implicit */_Bool) (-(var_7))))));
}
