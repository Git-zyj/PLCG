/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166408
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
    var_20 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127)))))));
    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = 7ULL;
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3))) : (3201700378749633694LL)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (-2143052434))) : (arr_1 [i_0])));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (short i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (short i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
            {
                arr_11 [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) var_16))))))))));
                arr_12 [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_1 [i_1]), ((+(((/* implicit */int) (unsigned char)1)))))))));
            }
            for (short i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
            {
                arr_15 [i_4] [i_2] [i_2] [i_2] |= ((/* implicit */short) arr_13 [i_4] [i_2] [2ULL]);
                var_22 = ((/* implicit */unsigned char) (signed char)51);
            }
            for (signed char i_5 = 2; i_5 < 19; i_5 += 4) /* same iter space */
            {
                arr_18 [i_1] [2U] [i_2] [i_2] = arr_2 [i_1];
                arr_19 [i_2] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) -2824540240541927906LL)) ? (((/* implicit */long long int) var_11)) : (3201700378749633694LL)));
            }
            for (signed char i_6 = 2; i_6 < 19; i_6 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    for (unsigned int i_8 = 2; i_8 < 17; i_8 += 3) 
                    {
                        {
                            arr_28 [i_1] [i_2] [i_1] [i_2] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
                            var_23 |= ((/* implicit */short) 0);
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) var_2);
                var_25 |= ((/* implicit */unsigned short) var_9);
            }
            arr_29 [(unsigned short)10] [i_2] &= ((/* implicit */unsigned short) (-(max((max((var_11), (((/* implicit */int) arr_8 [(unsigned short)20] [i_1] [i_1])))), (var_2)))));
            var_26 = ((/* implicit */unsigned long long int) var_1);
        }
        /* vectorizable */
        for (short i_9 = 0; i_9 < 21; i_9 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) /* same iter space */
            {
                arr_35 [i_10] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_10]))));
                var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-20))));
            }
            for (unsigned int i_11 = 0; i_11 < 21; i_11 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    for (short i_13 = 1; i_13 < 19; i_13 += 4) 
                    {
                        {
                            arr_43 [i_11] [i_11] [(unsigned short)19] [i_12] [i_13 + 1] [i_13 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_1] [i_12] [i_11] [i_12])) ? (8044538363788244989ULL) : (arr_16 [i_1] [i_9] [i_11] [(short)6])));
                            var_28 = ((/* implicit */short) (signed char)-24);
                        }
                    } 
                } 
                var_29 = ((/* implicit */signed char) var_0);
                /* LoopNest 2 */
                for (int i_14 = 3; i_14 < 17; i_14 += 3) 
                {
                    for (int i_15 = 0; i_15 < 21; i_15 += 2) 
                    {
                        {
                            arr_48 [i_11] [i_11] [i_11] [(short)0] [i_15] = ((/* implicit */signed char) arr_7 [i_1]);
                            var_30 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_34 [15U] [15U]))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */short) (+((-(var_2)))));
            }
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 2; i_17 < 20; i_17 += 2) 
                {
                    for (int i_18 = 0; i_18 < 21; i_18 += 1) 
                    {
                        {
                            var_32 &= (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)0))))));
                            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (((((/* implicit */_Bool) var_2)) ? (3201700378749633706LL) : (((/* implicit */long long int) arr_37 [i_17] [i_16] [i_17] [i_16])))) : (((/* implicit */long long int) ((((/* implicit */int) var_15)) | (((/* implicit */int) var_14)))))));
                            arr_56 [i_1] [i_1] [i_9] [i_9] [i_16] [i_1] [i_18] &= (!(((/* implicit */_Bool) ((int) 11373981025511563612ULL))));
                            arr_57 [i_9] [i_9] &= ((/* implicit */signed char) 835347480);
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 17631123474392205220ULL)) ? (var_10) : (var_10)))));
                arr_58 [i_1] [i_9] [i_16 - 1] |= ((/* implicit */short) -3201700378749633695LL);
                arr_59 [i_1] [i_9] [i_16 - 1] = ((/* implicit */_Bool) ((long long int) arr_14 [i_1] [(_Bool)1] [i_1]));
            }
            for (unsigned long long int i_19 = 0; i_19 < 21; i_19 += 1) 
            {
                var_35 = ((/* implicit */int) ((unsigned short) (signed char)-52));
                arr_63 [i_9] [i_9] [i_19] = ((((((/* implicit */int) arr_23 [i_1] [i_1] [i_19])) == (((/* implicit */int) var_12)))) ? ((-(((/* implicit */int) arr_33 [i_1] [14ULL] [i_9] [i_19])))) : (((/* implicit */int) (short)-32758)));
            }
            /* LoopNest 2 */
            for (signed char i_20 = 1; i_20 < 20; i_20 += 3) 
            {
                for (unsigned long long int i_21 = 0; i_21 < 21; i_21 += 3) 
                {
                    {
                        var_36 = ((/* implicit */short) (-(((/* implicit */int) var_15))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_22 = 3; i_22 < 20; i_22 += 4) 
                        {
                            arr_73 [i_20] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_42 [i_20] [i_9] [i_20 + 1] [i_21] [i_9])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)77))))));
                            var_37 = ((/* implicit */short) (-(((long long int) var_13))));
                        }
                        for (unsigned long long int i_23 = 2; i_23 < 20; i_23 += 3) 
                        {
                            arr_76 [i_20] = ((/* implicit */signed char) var_19);
                            arr_77 [i_23] [i_23] [i_23] [i_20] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) var_19)) != (var_8))))));
                        }
                        for (short i_24 = 0; i_24 < 21; i_24 += 2) 
                        {
                            var_38 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_33 [i_9] [i_20] [i_21] [i_21])) ? (-3272731302482452759LL) : (((/* implicit */long long int) var_6))))));
                            arr_81 [i_1] [i_9] [i_20] [i_20] [1ULL] [18ULL] = ((/* implicit */_Bool) ((unsigned int) var_10));
                            arr_82 [i_20] = ((/* implicit */short) 879053881204197442LL);
                            var_39 = ((/* implicit */short) (-(((/* implicit */int) (short)224))));
                        }
                    }
                } 
            } 
            var_40 |= ((((/* implicit */_Bool) (short)0)) ? (arr_60 [i_1] [i_9] [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_70 [i_1] [i_1] [i_9])));
        }
        for (unsigned char i_25 = 0; i_25 < 21; i_25 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_26 = 0; i_26 < 21; i_26 += 2) 
            {
                for (unsigned int i_27 = 2; i_27 < 18; i_27 += 4) 
                {
                    {
                        arr_89 [i_1] [i_25] [i_26] [i_27] = ((/* implicit */unsigned char) arr_16 [i_1] [i_1] [i_26] [i_1]);
                        var_41 = ((/* implicit */unsigned int) (_Bool)0);
                        var_42 = ((/* implicit */long long int) var_10);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_28 = 1; i_28 < 18; i_28 += 2) 
            {
                for (unsigned short i_29 = 0; i_29 < 21; i_29 += 4) 
                {
                    {
                        arr_94 [i_25] = ((/* implicit */unsigned int) var_13);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_30 = 0; i_30 < 21; i_30 += 2) 
                        {
                            var_43 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_69 [i_1] [i_25] [i_28] [i_29] [i_29] [i_30])))) ? (((((/* implicit */_Bool) 2022327572U)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))) : (((/* implicit */long long int) ((/* implicit */int) var_19)))));
                            var_44 = ((/* implicit */long long int) (+(arr_84 [i_1] [i_1] [i_1])));
                        }
                        var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (max((var_11), (((/* implicit */int) var_14))))))))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_31 = 0; i_31 < 21; i_31 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_32 = 0; i_32 < 21; i_32 += 1) 
            {
                var_46 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_88 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) * (((/* implicit */int) (_Bool)0))));
                var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14542)) ? (((/* implicit */int) arr_33 [i_1] [i_32] [i_31] [i_31])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1))))));
                var_48 = ((/* implicit */_Bool) ((((/* implicit */int) (short)26937)) << (((((/* implicit */int) ((short) var_4))) - (17745)))));
                var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) << (((((/* implicit */int) (signed char)-96)) + (116)))))) ? ((+(var_10))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-44)) < (var_2))))));
            }
            arr_104 [i_1] [i_31] [i_31] |= ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_31] [i_31] [i_31])) % (((/* implicit */int) ((unsigned char) var_4)))));
            arr_105 [i_1] [i_1] [i_31] = ((/* implicit */unsigned short) ((var_2) << (((((/* implicit */int) var_17)) - (20688)))));
            var_50 = ((/* implicit */_Bool) ((unsigned int) (~(((((/* implicit */_Bool) 2272639724U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1)))))));
            var_51 = ((/* implicit */unsigned long long int) var_1);
        }
        var_52 |= ((/* implicit */short) ((unsigned short) 2272639724U));
    }
}
