/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164857
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
    var_13 = var_12;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_7 [i_0] [i_0]))));
                            var_14 = ((/* implicit */signed char) (~((-(((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) arr_4 [i_3] [i_2] [i_1 + 2] [i_0])))))))));
                            var_15 = var_11;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    for (unsigned int i_5 = 2; i_5 < 9; i_5 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) (-(((/* implicit */int) max((arr_6 [i_1 + 1] [i_1 - 1] [i_5 - 2] [i_5 - 2]), (arr_6 [i_1 + 1] [i_1 - 1] [i_5 - 2] [i_5 - 2]))))));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1] [i_5 - 2]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_5 - 2] [i_4] [2U] [i_5] [i_0])))))));
                            arr_18 [i_0] [i_0] [i_4] [i_5 - 2] = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_0] [i_4])) * (((/* implicit */int) (unsigned char)36))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (unsigned char i_7 = 3; i_7 < 19; i_7 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 1; i_9 < 18; i_9 += 2) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_18 = (_Bool)1;
                                arr_34 [i_9 + 1] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_19 [i_6] [i_7])) * (arr_32 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_7] [i_7 - 2] [i_6])));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        arr_37 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((unsigned char) ((unsigned char) arr_28 [(unsigned char)19] [i_11] [i_11] [i_11] [i_11] [i_11]));
                        var_19 = ((/* implicit */int) ((long long int) (~(((/* implicit */int) (signed char)(-127 - 1))))));
                    }
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned int) ((2546192928621580745LL) / (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_6] [i_7] [i_12] [i_12] [i_7] [i_7]))) : (7486193450489888499LL)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 1; i_13 < 18; i_13 += 2) 
                        {
                            arr_44 [i_6] [i_7] [i_7] [i_8] [i_8] [i_12] [i_6] = ((/* implicit */unsigned int) (_Bool)1);
                            var_21 = ((/* implicit */unsigned char) arr_33 [i_6] [i_6] [i_8] [i_12] [i_12]);
                        }
                    }
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        arr_47 [i_6] = (_Bool)1;
                        arr_48 [i_6] [i_6] [i_8] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((arr_25 [i_6] [i_14 - 1] [i_7 - 2]) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    }
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_12)))) * (arr_45 [i_7 + 1] [i_7 - 2] [i_7 + 1])));
                    var_23 = arr_19 [i_6] [i_6];
                }
                /* vectorizable */
                for (signed char i_15 = 0; i_15 < 20; i_15 += 4) /* same iter space */
                {
                    arr_51 [i_6] [i_6] [i_6] [i_6] = (-(2675022917U));
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 20; i_17 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) ((long long int) arr_45 [i_7] [i_7 - 3] [i_16 + 1]));
                                arr_57 [i_6] [i_15] [i_15] [i_6] [i_6] = ((int) (+(((/* implicit */int) arr_55 [i_6] [i_6] [i_6] [i_6] [i_6]))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (arr_52 [i_6] [i_6] [i_6] [i_6]))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_7 - 2] [i_7 - 3])))));
                }
                for (signed char i_18 = 2; i_18 < 17; i_18 += 2) 
                {
                    arr_60 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) <= (min((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (67108863U))), (((((/* implicit */_Bool) arr_40 [i_18])) ? (3177219910U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((unsigned int) arr_43 [i_19] [i_19 - 1] [i_18 + 3] [i_7 + 1]));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            arr_66 [i_6] [i_7] [i_6] = ((/* implicit */int) ((((((/* implicit */unsigned int) arr_42 [i_18] [i_19 - 1] [i_18] [i_6] [i_6] [i_6])) * (var_3))) * (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) * (((/* implicit */int) arr_24 [i_20] [i_6] [i_6])))))));
                            arr_67 [i_6] [i_7] [i_6] [i_19] [i_7] = ((/* implicit */_Bool) ((((arr_21 [i_20]) & (-6728081827568496273LL))) / (((/* implicit */long long int) (~(3908524232U))))));
                            arr_68 [i_6] = ((/* implicit */unsigned int) arr_31 [i_20] [i_18] [i_18] [i_7] [i_6] [i_6]);
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_18 + 3] [(signed char)19] [i_18 + 1] [i_18 + 1])) + (((/* implicit */int) arr_43 [i_18] [i_18] [i_18 + 2] [i_18 + 1]))));
                        }
                        var_28 = ((/* implicit */_Bool) (+(((long long int) arr_63 [i_7 + 1] [i_7 + 1] [i_6] [i_18 - 2]))));
                        arr_69 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) (((((-(((/* implicit */int) (_Bool)1)))) * (max((arr_42 [i_6] [i_6] [i_7 + 1] [i_6] [i_18 - 2] [i_6]), (((/* implicit */int) arr_38 [i_19] [i_6] [i_6] [i_6] [i_6] [i_6])))))) <= (((/* implicit */int) (!(((_Bool) 2679933463U)))))));
                        arr_70 [i_6] [i_7] = ((_Bool) (+(((((/* implicit */_Bool) var_10)) ? (1372960747U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))));
                    }
                    for (signed char i_21 = 2; i_21 < 19; i_21 += 2) 
                    {
                        arr_73 [i_6] = var_11;
                        var_29 = ((/* implicit */_Bool) (+((~(min((arr_25 [i_6] [i_6] [i_6]), (((/* implicit */unsigned int) arr_42 [i_6] [i_6] [i_7] [i_21] [i_7] [i_6]))))))));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_46 [i_6] [i_6] [i_6] [i_6])) * (((/* implicit */int) ((signed char) -5708160995489055597LL)))));
                    }
                    arr_74 [i_6] [i_7] = ((int) max(((signed char)2), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_3)))))));
                }
                var_31 = ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_72 [i_7 - 3] [i_7 + 1] [i_6] [i_6] [i_7 - 1] [i_7]))))));
            }
        } 
    } 
}
