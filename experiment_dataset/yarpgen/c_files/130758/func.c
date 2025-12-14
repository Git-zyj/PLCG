/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130758
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
    var_12 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-12))) / (var_3))))))));
    var_13 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) (short)9)), ((((_Bool)0) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_5)))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_1))))) : (((/* implicit */int) ((((/* implicit */unsigned int) var_10)) == (819262922U)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_14 = ((/* implicit */unsigned int) (+(arr_2 [i_1])));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1439854825U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)12))) : (arr_8 [i_0] [i_0] [i_2] [i_3])));
                        arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (~(((unsigned int) (short)8))));
                    }
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) 3091712218U);
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_4 [i_4])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4] [i_1] [i_1]))))))))));
                    }
                }
                /* LoopSeq 3 */
                for (short i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    arr_14 [i_0] [i_1] = var_3;
                    arr_15 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-10)) ? (((((/* implicit */_Bool) (-(arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) arr_4 [i_0])) : ((+(arr_12 [i_0] [i_5]))))) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_1] [i_5]))));
                }
                /* vectorizable */
                for (signed char i_6 = 3; i_6 < 20; i_6 += 1) 
                {
                    var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [0U] [i_6 - 3] [i_6 - 2]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        var_19 = ((unsigned int) arr_18 [i_0] [i_1] [i_6 - 1]);
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_0])) ? (-5422066191213544756LL) : (((/* implicit */long long int) 0))))) | (arr_12 [i_0] [i_0])));
                        arr_22 [i_7] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_6 - 2])) ? (((/* implicit */int) (short)32747)) : (((/* implicit */int) (short)-9))));
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_26 [i_0] [i_6] [i_0] = ((/* implicit */long long int) var_8);
                            var_21 |= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_1)) >= (var_10)))) * (((/* implicit */int) arr_20 [i_0] [i_6 - 2] [i_0] [i_0]))));
                        }
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_1] [i_0] [i_7] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) arr_17 [i_6 - 1] [i_6] [i_6 - 2] [i_6 - 3]))));
                    }
                    for (short i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        var_23 = ((/* implicit */_Bool) arr_24 [i_6 - 1] [i_6 - 3] [i_6 - 1]);
                        var_24 = ((/* implicit */int) (short)32757);
                    }
                    var_25 = ((/* implicit */_Bool) ((long long int) arr_29 [i_1] [i_6 + 1] [i_1]));
                }
                /* vectorizable */
                for (short i_10 = 1; i_10 < 18; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_11 = 1; i_11 < 17; i_11 += 1) 
                    {
                        var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)18894))));
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_28 [i_11] [i_11 + 3] [i_10 + 3] [i_1] [i_0])))))));
                    }
                    var_28 = (~(arr_19 [i_0] [i_1] [i_10 - 1] [i_0] [i_0] [i_10 - 1]));
                }
                /* LoopSeq 2 */
                for (signed char i_12 = 2; i_12 < 18; i_12 += 4) 
                {
                    arr_40 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_12 - 2] [(_Bool)1] [(_Bool)1] [i_12 - 2])) | (((/* implicit */int) arr_20 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) ^ (1203255096U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_12 + 2] [i_1] [i_1] [i_0]))) | (13659562433677731023ULL)))));
                    var_29 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 4294967278U)) : (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) <= (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [6ULL] [i_0])) : (-1))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-19588)) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_12] [i_0] [i_0] [i_1])))))))));
                }
                for (short i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        arr_46 [i_0] [i_1] [(signed char)19] [i_0] [i_14] = ((/* implicit */signed char) arr_19 [(short)17] [(short)17] [i_1] [i_0] [i_1] [i_0]);
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((int) var_11))) | (((long long int) (unsigned char)57))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_0] [i_13]))) : (536870904U)));
                        var_31 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_35 [4LL] [4LL] [4LL] [i_13] [i_0]))));
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */int) ((5596718672302527047LL) == (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)0))))))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_13])) > (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)11))) + (10622080249658040844ULL)))))))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_15 = 0; i_15 < 21; i_15 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (int i_16 = 0; i_16 < 21; i_16 += 2) 
                        {
                            arr_53 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) arr_28 [i_16] [i_0] [i_13] [i_1] [i_0]));
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) 981630890U)) ? (arr_39 [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [10ULL] [i_16] [i_15] [i_16]))))))));
                            var_34 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)27161))));
                        }
                        for (unsigned int i_17 = 0; i_17 < 21; i_17 += 2) /* same iter space */
                        {
                            arr_56 [i_0] [i_1] [i_13] [i_13] [i_0] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_13] [i_15]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_0] [i_1] [i_13]))) : (arr_55 [i_0] [(signed char)8] [i_15] [9] [15LL])))) ? (arr_39 [i_0]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)1)))))));
                            arr_57 [i_0] [i_17] [i_13] [i_13] [i_13] [i_1] [i_0] = 3758096391U;
                            var_35 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)10)))))));
                            var_36 = var_2;
                        }
                        for (unsigned int i_18 = 0; i_18 < 21; i_18 += 2) /* same iter space */
                        {
                            var_37 = ((/* implicit */short) (~(((((/* implicit */int) arr_59 [i_18] [i_1] [i_1] [i_1])) * (((/* implicit */int) arr_44 [i_18]))))));
                            arr_60 [i_0] [i_0] [i_15] = ((/* implicit */long long int) ((arr_18 [i_0] [i_15] [i_18]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_1] [(signed char)9]))) : (377802335U)));
                            var_38 = ((/* implicit */short) ((long long int) 21));
                            arr_61 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [i_0] [i_15] [i_18]))));
                        }
                        for (signed char i_19 = 0; i_19 < 21; i_19 += 2) 
                        {
                            var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) ((((/* implicit */_Bool) 144115188067467264ULL)) ? (arr_48 [i_0] [i_0] [i_0] [i_19] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12))))))));
                            var_40 = ((/* implicit */signed char) 2324590069U);
                        }
                        arr_66 [i_0] [i_0] [i_0] [i_13] [i_15] = (signed char)64;
                    }
                }
            }
        } 
    } 
}
