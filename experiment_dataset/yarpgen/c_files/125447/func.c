/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125447
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
    var_18 |= ((/* implicit */int) var_17);
    var_19 = ((/* implicit */int) min((var_19), (max((1839830307), (-1310872626)))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -4180996205095976250LL)) ? ((((~(-118105012575132653LL))) / (-4180996205095976250LL))) : ((+(-1732742027336545327LL)))));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_0])) / ((~(((9080271219078133897LL) & (arr_1 [i_0] [i_0])))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_7 [i_0] [2] [i_1] &= ((/* implicit */int) -2098865895373748761LL);
            /* LoopNest 2 */
            for (long long int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                for (int i_3 = 1; i_3 < 9; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */long long int) min((var_20), (((((/* implicit */_Bool) ((int) ((int) arr_5 [i_2])))) ? (((/* implicit */long long int) arr_0 [i_0 + 2])) : (arr_1 [3LL] [i_3 - 1])))));
                        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -9080271219078133891LL))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */long long int) (+(1839830313)));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                {
                    arr_20 [i_4] [i_5] [i_5] [i_6] = (+((-(arr_14 [i_4]))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 8; i_7 += 1) 
                    {
                        for (int i_8 = 1; i_8 < 10; i_8 += 2) 
                        {
                            {
                                arr_26 [1LL] [i_5] [i_6] [i_7] [i_6] = arr_16 [i_4] [i_4];
                                var_22 = (-(arr_17 [i_4] [i_6]));
                                var_23 = (-(((/* implicit */int) ((7788795185197351351LL) != (((/* implicit */long long int) 1202305323))))));
                                var_24 = ((/* implicit */int) ((long long int) var_5));
                            }
                        } 
                    } 
                    arr_27 [i_5] [i_5] [i_6] [i_6] = (+(9080271219078133902LL));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_9 = 1; i_9 < 10; i_9 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                /* LoopSeq 2 */
                for (long long int i_11 = 0; i_11 < 11; i_11 += 3) 
                {
                    var_25 |= ((/* implicit */long long int) arr_29 [i_9 - 1] [i_9 + 1]);
                    /* LoopSeq 1 */
                    for (long long int i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        var_26 = arr_31 [i_4];
                        arr_39 [i_4] [i_9] = ((/* implicit */long long int) var_0);
                    }
                    var_27 = ((/* implicit */long long int) (~(((/* implicit */int) ((arr_32 [4LL] [i_9] [i_9] [i_11]) == (((/* implicit */long long int) 1508719453)))))));
                    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) -9080271219078133895LL)) ? (((/* implicit */long long int) arr_30 [i_9 - 1] [i_9 - 1] [i_9 - 1])) : (var_12)));
                }
                for (int i_13 = 4; i_13 < 8; i_13 += 2) 
                {
                    var_29 = ((/* implicit */int) (+(var_17)));
                    var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) arr_32 [i_13] [i_10] [2] [1LL])))));
                    var_31 = ((/* implicit */long long int) min((var_31), (((long long int) arr_18 [i_9 - 1] [0] [i_13]))));
                }
                var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])))))));
                var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_8))) && (((/* implicit */_Bool) (~(-9080271219078133898LL)))))))));
                arr_44 [i_9] = ((((/* implicit */_Bool) arr_30 [i_4] [i_9] [i_4])) ? (arr_31 [i_10]) : (arr_28 [5LL] [i_4]));
                var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((9080271219078133892LL) << (((9085097488628158913LL) - (9085097488628158913LL)))))) ? (-4180996205095976250LL) : (((var_13) ^ (arr_35 [i_4])))));
            }
            var_35 = ((((/* implicit */_Bool) -4180996205095976250LL)) ? (3380102276357666025LL) : (((/* implicit */long long int) -1839830313)));
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 11; i_14 += 1) 
            {
                for (long long int i_15 = 0; i_15 < 11; i_15 += 4) 
                {
                    for (int i_16 = 1; i_16 < 8; i_16 += 4) 
                    {
                        {
                            var_36 = var_17;
                            var_37 ^= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 625484212267457344LL)) ? (arr_47 [i_4] [i_9] [i_14] [i_16]) : (((/* implicit */long long int) arr_51 [i_15] [i_15] [i_14] [i_15])))));
                            arr_53 [i_4] [i_4] [i_9 + 1] [i_14] [i_9] [6] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_16] [i_9] [i_14] [i_9])) ? (arr_51 [10LL] [i_9] [i_9] [i_9]) : (-298484829)))) == (arr_45 [i_4] [i_9] [i_16 + 2])));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 3 */
        for (long long int i_17 = 1; i_17 < 10; i_17 += 1) 
        {
            for (int i_18 = 1; i_18 < 9; i_18 += 2) 
            {
                for (long long int i_19 = 3; i_19 < 10; i_19 += 1) 
                {
                    {
                        var_38 = (+(arr_48 [i_17] [i_17] [i_17 - 1] [i_17 + 1] [i_17 + 1] [i_17 + 1]));
                        var_39 = ((/* implicit */int) ((((/* implicit */_Bool) -5491068356063709260LL)) ? ((~(3539876328002445909LL))) : (((-3647355047520969018LL) ^ (arr_54 [i_4] [i_4] [i_4])))));
                        arr_64 [i_4] [i_17] [1] [i_18] = ((/* implicit */long long int) ((-764669062) != (((((/* implicit */_Bool) arr_50 [i_4] [i_18] [5LL] [i_4])) ? (var_11) : (var_6)))));
                    }
                } 
            } 
        } 
    }
}
