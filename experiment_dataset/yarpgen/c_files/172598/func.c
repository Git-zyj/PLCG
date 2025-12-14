/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172598
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
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) var_9))))) * ((~(var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_14))) * (1554426430332891719LL)))))) : (var_1));
    var_19 *= ((/* implicit */_Bool) min(((-(max((((/* implicit */long long int) var_11)), (var_1))))), (((/* implicit */long long int) var_5))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0]))) + ((-(arr_0 [(_Bool)1]))))))));
        var_21 -= ((/* implicit */_Bool) ((arr_0 [(_Bool)1]) >> (((((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (var_0))) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_15))))))) + (5796552622101988387LL)))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((int) ((long long int) var_11)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) (+((~(((((/* implicit */_Bool) -904404396)) ? (((/* implicit */long long int) -1)) : (6058486004325859404LL)))))));
        arr_8 [i_1] [i_1] = max((((long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (arr_6 [13])))), (((((arr_6 [i_1]) + (9223372036854775807LL))) >> (0LL))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                {
                    var_22 -= ((/* implicit */_Bool) max((var_0), ((((+(var_13))) & ((((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) var_12))))))));
                    arr_18 [i_2] [i_2] [i_2] [22LL] = ((/* implicit */long long int) (((((~(((/* implicit */int) var_9)))) + (((var_9) ? (var_7) : (((/* implicit */int) (_Bool)0)))))) & (min((arr_15 [i_2] [20LL] [22]), (arr_17 [i_3])))));
                    var_23 = min((max((((/* implicit */long long int) ((int) arr_14 [i_2] [i_3] [i_4]))), (((((/* implicit */_Bool) var_13)) ? (arr_14 [13] [i_3] [i_4]) : (((/* implicit */long long int) arr_11 [i_2] [i_4])))))), (((/* implicit */long long int) ((_Bool) arr_11 [i_3] [i_4]))));
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (~((-((-(((/* implicit */int) (_Bool)0)))))))))));
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_9)))) & (max((((/* implicit */long long int) var_15)), (arr_14 [i_4] [i_3] [(_Bool)1])))))) ? (min((((/* implicit */long long int) (-(var_3)))), (((((/* implicit */_Bool) arr_11 [i_2] [i_3])) ? (((/* implicit */long long int) var_3)) : (arr_14 [i_4] [i_3] [i_2]))))) : (((((/* implicit */_Bool) (~(arr_9 [i_3])))) ? (arr_14 [i_2] [i_3] [i_3]) : (((long long int) arr_12 [i_2] [i_3])))))))));
                }
            } 
        } 
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((arr_11 [13] [i_2]) * (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
    }
    for (int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        var_27 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_17 [i_5])))) ? (((((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [i_5]))) > (arr_14 [i_5] [i_5] [i_5]))) ? (((/* implicit */int) var_9)) : (max((arr_11 [i_5] [i_5]), (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((arr_15 [i_5] [i_5] [i_5]) == (((/* implicit */int) arr_12 [i_5] [i_5])))))));
        arr_22 [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_16))) ? (((/* implicit */int) ((var_12) == (var_3)))) : (((/* implicit */int) ((arr_10 [i_5]) > (((/* implicit */int) var_5)))))))) ? ((-(((/* implicit */int) ((arr_17 [10LL]) == (-904404396)))))) : (((arr_10 [i_5]) / (arr_10 [i_5]))));
        /* LoopSeq 4 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                var_28 = ((/* implicit */long long int) ((((_Bool) ((var_10) ? (var_12) : (-1034743351)))) && (((/* implicit */_Bool) (+(arr_15 [i_5] [i_6] [i_7]))))));
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_29 = ((/* implicit */int) (~(max(((~(-6058486004325859404LL))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) > (arr_29 [i_8] [i_8] [i_8] [i_8] [i_8]))))))));
                    var_30 *= ((/* implicit */int) arr_23 [i_8]);
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_13 [i_5] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))) : (((((/* implicit */_Bool) var_16)) ? (arr_17 [i_5]) : (arr_17 [i_7])))));
                }
                for (int i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    arr_34 [i_5] [i_9] = ((/* implicit */_Bool) var_4);
                    var_32 = ((long long int) (-(2274220936531547831LL)));
                }
                var_33 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_33 [i_5] [i_6] [i_7] [i_6] [i_6] [i_6]) / (arr_33 [i_5] [i_5] [i_6] [i_6] [i_7] [20LL])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) + (((/* implicit */long long int) arr_17 [i_5])))))))) : (((/* implicit */int) ((var_15) && (((/* implicit */_Bool) arr_28 [i_5] [i_5] [i_5])))))));
                var_34 = ((/* implicit */int) arr_27 [i_5] [i_7] [i_7] [i_5]);
                var_35 = max((((/* implicit */long long int) (~(arr_32 [i_5] [i_5] [i_5] [i_7])))), (((((/* implicit */long long int) ((/* implicit */int) var_9))) & (var_4))));
            }
            var_36 = ((/* implicit */int) ((_Bool) var_7));
            arr_35 [i_6] [i_5] [i_5] = ((/* implicit */_Bool) 2758935644231106310LL);
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_44 [i_12] = ((/* implicit */long long int) ((_Bool) ((var_15) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_19 [5LL]))));
                    arr_45 [i_11] = ((/* implicit */_Bool) ((arr_12 [i_5] [i_11]) ? (1548380783) : (-195544018)));
                }
                arr_46 [i_10] = ((/* implicit */_Bool) ((int) arr_23 [i_11]));
            }
            arr_47 [i_5] [22] = ((/* implicit */int) arr_20 [i_5]);
            var_37 = ((var_4) == (((/* implicit */long long int) var_12)));
        }
        for (long long int i_13 = 0; i_13 < 23; i_13 += 2) 
        {
            var_38 = ((/* implicit */long long int) (~(((var_12) + (arr_10 [i_13])))));
            var_39 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -1LL)) ? (arr_39 [i_5] [i_13] [i_13] [i_13]) : (arr_43 [(_Bool)1] [i_13]))) * (0)));
            var_40 |= ((/* implicit */_Bool) var_3);
            var_41 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) arr_17 [19LL])) ? (var_7) : (((/* implicit */int) arr_26 [i_5] [i_13] [i_13] [i_5])))), ((+(var_12))))) + (((/* implicit */int) var_8))));
            var_42 = ((/* implicit */_Bool) ((((_Bool) ((((/* implicit */_Bool) -1336614953)) ? (arr_13 [i_5] [i_13]) : (((/* implicit */long long int) arr_15 [13LL] [i_13] [i_5]))))) ? (((((/* implicit */_Bool) arr_13 [i_5] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5]))) : ((-(arr_29 [i_5] [i_5] [(_Bool)1] [i_13] [i_13]))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (var_6) : (var_13)))));
        }
        for (int i_14 = 0; i_14 < 23; i_14 += 3) 
        {
            arr_54 [i_5] [i_5] = ((/* implicit */int) var_15);
            var_43 |= ((/* implicit */int) var_15);
            var_44 ^= (_Bool)1;
            arr_55 [i_5] [i_5] [(_Bool)1] = ((_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [i_5] [i_14] [i_14] [5LL]))))) ? (max((8863834862333978911LL), (8863834862333978911LL))) : ((~(var_1)))));
        }
        var_45 = (~(((/* implicit */int) (((+(-3943960935521733043LL))) <= (((((/* implicit */long long int) ((/* implicit */int) var_11))) * (3943960935521733043LL)))))));
        /* LoopNest 3 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (int i_17 = 0; i_17 < 23; i_17 += 2) 
                {
                    {
                        var_46 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_28 [i_16] [i_15] [i_16])) ? (arr_28 [i_5] [i_16] [i_16]) : (((/* implicit */long long int) var_2)))) / (max((((/* implicit */long long int) arr_41 [i_5] [9] [i_16])), (var_1)))));
                        var_47 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (+(var_7)))) ? (arr_10 [i_5]) : (((((/* implicit */int) arr_41 [9] [i_16] [i_17])) >> (((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
    }
}
