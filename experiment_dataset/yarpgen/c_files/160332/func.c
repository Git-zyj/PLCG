/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160332
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
    var_16 = ((/* implicit */unsigned char) ((int) ((((var_0) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_0)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63)) ? (((/* implicit */int) arr_5 [i_1 - 3] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) (unsigned char)196))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_1 [i_2]))));
                arr_11 [i_1] = ((((/* implicit */unsigned int) arr_4 [i_1 - 1] [i_1] [i_1 + 2])) & (arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 - 1]));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_1] [(unsigned short)3] [i_1 + 2] [i_1 + 3])) < (((/* implicit */int) arr_9 [(_Bool)1] [i_1] [i_1 - 2]))));
            }
            for (int i_3 = 1; i_3 < 12; i_3 += 1) 
            {
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 3; i_5 < 12; i_5 += 1) 
                    {
                        var_19 -= ((/* implicit */_Bool) (+(((/* implicit */int) var_0))));
                        var_20 = ((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_4] [i_3] [i_1 + 1] [i_0]);
                    }
                    /* LoopSeq 2 */
                    for (int i_6 = 1; i_6 < 11; i_6 += 4) 
                    {
                        arr_23 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_13);
                        var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_15 [i_1] [i_1] [i_3 + 1] [2U] [i_4] [2U]))));
                        arr_24 [i_1] [(_Bool)1] = ((/* implicit */unsigned char) ((var_14) * (((/* implicit */int) arr_12 [12ULL] [12ULL] [12ULL] [1U]))));
                        var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -1825645971)) ? (((/* implicit */int) arr_16 [i_6] [i_6] [i_6] [i_6 + 2])) : (((/* implicit */int) arr_18 [i_0] [i_1] [i_3] [i_0] [i_4] [i_0])))) & (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (-1825645959))))));
                    }
                    for (short i_7 = 1; i_7 < 11; i_7 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned char) var_7);
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((unsigned short) arr_2 [i_4]))));
                        var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63))) - ((~(17537515483460215907ULL)))));
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((unsigned long long int) ((int) (unsigned short)10))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_8 = 2; i_8 < 10; i_8 += 1) 
                    {
                        var_27 = (!(((/* implicit */_Bool) (~(var_9)))));
                        arr_30 [i_8] [i_1] [i_1] [i_1] [(unsigned char)2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_20 [i_3] [i_1])))))));
                        arr_31 [i_1] [2] [i_3] [i_4] [i_8] = ((/* implicit */unsigned char) (-(((int) (_Bool)1))));
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) arr_4 [(_Bool)1] [(_Bool)1] [i_8]))));
                    }
                    arr_32 [i_0] [(unsigned char)12] [i_0] [12U] &= ((/* implicit */unsigned short) (-(((/* implicit */int) ((17537515483460215910ULL) < (((/* implicit */unsigned long long int) var_14)))))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)23));
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) var_2))));
                }
                for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 4) /* same iter space */
                {
                    arr_38 [i_0] [i_1] [i_3] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_1 - 3] [i_3] [i_3 + 1] [i_3 - 1] [i_10])) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) arr_2 [i_1 + 1]))));
                    arr_39 [i_1] [i_1] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)46997))))));
                }
                var_31 = ((/* implicit */int) arr_17 [i_0] [(unsigned short)5] [i_1] [i_1]);
                arr_40 [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_3] [i_0]))))) + ((+(((/* implicit */int) (_Bool)1))))));
            }
            arr_41 [i_0] [i_1] [i_1] = ((unsigned long long int) (_Bool)1);
        }
        arr_42 [i_0] [i_0] = ((/* implicit */short) ((((min((((/* implicit */int) var_15)), (-543658061))) > (((/* implicit */int) var_3)))) ? (max((((/* implicit */unsigned int) (unsigned char)255)), (((arr_10 [(unsigned short)2] [i_0] [i_0] [i_0]) ? (3924877177U) : (((/* implicit */unsigned int) -112794905)))))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_37 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_3)))))))));
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_45 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 413473116U)) ? (var_7) : (((/* implicit */int) arr_8 [i_11]))));
        arr_46 [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_4 [i_11] [i_11] [i_11])) < (((unsigned long long int) -229572584))));
        arr_47 [i_11] = ((/* implicit */unsigned short) (~(49558467)));
        /* LoopNest 3 */
        for (unsigned short i_12 = 1; i_12 < 11; i_12 += 3) 
        {
            for (unsigned int i_13 = 1; i_13 < 10; i_13 += 2) 
            {
                for (int i_14 = 0; i_14 < 13; i_14 += 1) 
                {
                    {
                        arr_58 [i_11] [i_14] [i_12] [i_13] [i_14] [i_14] = ((/* implicit */unsigned short) 285631583);
                        var_32 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (unsigned char)95))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_15 = 0; i_15 < 13; i_15 += 4) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (var_5))))));
                            arr_63 [i_14] [i_12] [i_13] [i_12] [i_13] [5ULL] = ((unsigned short) ((((/* implicit */_Bool) arr_50 [i_13] [i_12] [i_13])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_52 [(unsigned short)0] [(_Bool)1] [(unsigned short)0]))));
                        }
                        for (unsigned short i_16 = 0; i_16 < 13; i_16 += 4) /* same iter space */
                        {
                            var_34 &= ((/* implicit */unsigned int) ((unsigned short) arr_49 [i_12 + 1]));
                            var_35 = ((/* implicit */int) max((var_35), (((1569018991) | (((/* implicit */int) (short)31566))))));
                            arr_67 [i_14] [8ULL] [i_13] [i_14] [(_Bool)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_13 + 3] [i_12 + 2] [i_13])) ? (1359710714) : (((/* implicit */int) var_0))));
                            var_36 = ((/* implicit */unsigned char) max((var_36), (arr_37 [3U] [i_13] [6ULL])));
                        }
                        for (unsigned short i_17 = 0; i_17 < 13; i_17 += 4) /* same iter space */
                        {
                            arr_72 [i_17] [i_12] [i_14] [i_14] [i_17] [i_12 - 1] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_4)))));
                            arr_73 [i_17] [i_17] [i_17] &= ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) & (arr_71 [i_12 + 1] [i_12 + 2] [i_13 - 1] [i_13] [i_13 - 1])));
                        }
                        for (unsigned short i_18 = 0; i_18 < 13; i_18 += 4) /* same iter space */
                        {
                            arr_76 [i_11] [i_11] [i_14] [i_11] [i_18] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_13] [i_13 + 3] [5]))));
                            var_37 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_13 + 3]))));
                            arr_77 [i_11] [i_12] [i_13] [(_Bool)1] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_19 [i_12 + 2] [i_12 + 2] [i_13 - 1] [i_14] [i_13] [i_13 + 1]))));
                            var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((int) ((var_1) >= (arr_29 [i_11] [i_11] [i_12] [i_13] [6ULL] [i_12] [(unsigned char)10])))))));
                        }
                    }
                } 
            } 
        } 
        arr_78 [i_11] [(_Bool)1] = ((/* implicit */short) 18446744073709551596ULL);
    }
    var_39 = max(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))) : (min((((/* implicit */unsigned int) (_Bool)1)), (379959734U))))), (((/* implicit */unsigned int) var_14)));
}
