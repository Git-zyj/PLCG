/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121700
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_15 *= ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))) - (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_5)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_16 -= ((/* implicit */int) var_13);
                    var_17 = ((/* implicit */long long int) arr_2 [i_2] [i_2] [i_2]);
                    arr_7 [i_0] [i_2] = ((/* implicit */_Bool) (+(var_6)));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */long long int) max((((/* implicit */int) var_1)), (var_9)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_18 = ((/* implicit */long long int) (+((-2147483647 - 1))));
            arr_15 [i_4] [i_3] = (~(arr_9 [i_3]));
            var_19 = ((/* implicit */int) ((((/* implicit */int) ((-2147483631) <= (-1144831434)))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
            arr_16 [i_3] = ((/* implicit */int) ((var_6) <= (2147483647)));
        }
        for (int i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            arr_20 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_5] [i_5] [i_3])) ? (arr_19 [i_3] [i_3] [i_3]) : (arr_12 [i_3])));
            /* LoopSeq 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_20 = ((/* implicit */_Bool) (~(arr_9 [i_3])));
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_30 [i_8] [i_5] [i_6] [i_6] [i_8] = ((/* implicit */_Bool) (~(((long long int) arr_10 [i_5] [i_6]))));
                        var_21 = ((((var_1) ? (-5123080273806806595LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) >> (((arr_23 [i_8] [i_7] [i_6] [i_3]) ? (((/* implicit */int) var_5)) : (var_9))));
                    }
                    for (int i_9 = 2; i_9 < 22; i_9 += 1) 
                    {
                        var_22 = (-(arr_27 [i_9 + 2] [i_9] [i_9] [i_9] [i_9] [i_9 - 1] [i_9 - 2]));
                        var_23 = ((/* implicit */int) var_2);
                    }
                    arr_33 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_7]))))) < (((/* implicit */int) (((-2147483647 - 1)) <= (2147483641))))));
                }
            }
            for (long long int i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                /* LoopSeq 1 */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    var_24 -= (!(((/* implicit */_Bool) arr_12 [i_11 - 1])));
                    /* LoopSeq 1 */
                    for (int i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        var_25 += ((/* implicit */_Bool) (~(((((/* implicit */long long int) var_9)) & (var_13)))));
                        arr_43 [i_12] [i_11] [i_5] [i_10] [i_5] [i_3] = ((/* implicit */_Bool) 2951421626089540871LL);
                        arr_44 [i_12] [i_5] = ((var_8) ? ((+(arr_36 [i_11] [i_3] [i_3]))) : (((/* implicit */long long int) var_9)));
                        var_26 = ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_11 - 1]))));
                    }
                }
                /* LoopSeq 4 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (arr_42 [i_3] [i_5] [i_10] [i_10] [i_13] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                    arr_47 [i_13] [i_13] = ((arr_11 [i_3]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_23 [i_3] [i_3] [i_10] [i_13])) : (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) -2951421626089540896LL)) ? (arr_34 [i_5] [i_13]) : (var_2))));
                    var_28 = ((/* implicit */long long int) ((arr_10 [i_3] [i_3]) >= (((/* implicit */long long int) arr_27 [i_3] [i_13] [i_13] [i_10] [i_5] [i_5] [i_3]))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (long long int i_15 = 0; i_15 < 24; i_15 += 4) 
                    {
                        arr_55 [i_3] [i_10] [i_3] = ((/* implicit */_Bool) ((var_6) - (((/* implicit */int) var_4))));
                        arr_56 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((long long int) 5412043975225392620LL));
                        var_29 = (-(((/* implicit */int) ((var_11) || (((/* implicit */_Bool) var_2))))));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_59 [i_3] [i_5] [i_10] [i_14] [i_5] [i_5] = ((int) arr_36 [i_3] [i_5] [i_10]);
                        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_10)));
                        arr_60 [i_16] [i_5] [i_10] [i_10] [i_5] [i_3] = ((/* implicit */_Bool) arr_54 [i_5] [i_5] [i_5] [i_5] [i_5]);
                    }
                    var_31 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) arr_39 [i_14] [i_10] [i_5] [i_5] [i_3])) >= (var_7))))));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                {
                    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_14))))))))));
                    arr_65 [i_17] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((_Bool) ((((var_6) + (2147483647))) >> (((/* implicit */int) (_Bool)0)))));
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_33 = ((/* implicit */int) ((((/* implicit */int) arr_26 [i_3] [i_5] [i_10] [i_18])) > (((/* implicit */int) arr_35 [i_10] [i_10] [i_10]))));
                    var_34 = (~(arr_66 [i_3] [i_3] [i_18] [i_10] [i_18] [i_10]));
                    var_35 = ((/* implicit */_Bool) arr_19 [i_5] [i_10] [i_18]);
                }
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_20 = 1; i_20 < 23; i_20 += 2) 
                {
                    for (int i_21 = 0; i_21 < 24; i_21 += 2) 
                    {
                        {
                            arr_76 [i_3] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_70 [i_19]) & (arr_48 [i_5] [i_3] [i_19] [i_5] [i_3])))) ? ((~(((/* implicit */int) (_Bool)1)))) : (var_0)));
                            var_36 = (!(((var_7) < (((/* implicit */long long int) arr_9 [i_3])))));
                        }
                    } 
                } 
                arr_77 [i_19] [i_3] [i_3] [i_3] = ((/* implicit */int) ((var_2) <= (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                var_37 = ((int) (_Bool)1);
            }
        }
        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) -4761908662536111216LL)) && ((_Bool)1)));
        arr_78 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_12))) && (arr_62 [i_3] [i_3] [i_3] [i_3])));
    }
    for (long long int i_22 = 0; i_22 < 23; i_22 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
            {
                for (long long int i_25 = 0; i_25 < 23; i_25 += 4) 
                {
                    {
                        arr_92 [i_25] [i_22] [i_23] [i_22] [i_22] = ((((/* implicit */_Bool) (+((-(-4761908662536111226LL)))))) && ((((-(((/* implicit */int) var_3)))) >= (((/* implicit */int) arr_67 [i_24 - 1] [i_24 - 1] [i_24 - 1] [i_22])))));
                        var_39 = min((((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_24 - 1] [i_24 - 1] [i_24] [i_24 - 1] [i_24] [i_24 - 1]))))), ((~(1883560278))));
                        arr_93 [i_25] [i_25] [i_25] [i_22] &= arr_72 [i_22] [i_24] [i_25];
                        var_40 -= ((/* implicit */int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)1))))))) ? (((long long int) ((var_4) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (6643737370161448981LL)))) : (((/* implicit */long long int) ((((/* implicit */int) var_1)) / ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_26 = 0; i_26 < 23; i_26 += 1) 
        {
            arr_97 [i_22] [i_26] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 5163124210857243781LL))));
            arr_98 [i_22] [i_26] = ((/* implicit */_Bool) (~(min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_71 [i_22] [i_22] [i_22] [i_22])) ? (var_0) : (2147483647)))), (((((/* implicit */_Bool) arr_28 [i_22] [i_22] [i_22] [i_26] [i_26] [i_22] [i_26])) ? (arr_88 [i_22] [i_26]) : (var_7)))))));
        }
        var_41 -= ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_57 [i_22] [i_22] [i_22])))), ((+(((/* implicit */int) arr_57 [i_22] [i_22] [i_22]))))));
        var_42 -= ((/* implicit */long long int) ((_Bool) 2951421626089540848LL));
    }
    var_43 = var_1;
}
