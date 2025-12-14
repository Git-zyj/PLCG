/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113649
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
    var_19 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 10; i_1 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (int i_3 = 1; i_3 < 8; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (signed char)51)))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */int) (-(min((((/* implicit */long long int) arr_13 [i_3 + 3] [i_1] [i_2] [(_Bool)1] [i_4] [i_2])), (var_3)))));
                            arr_14 [i_0 - 1] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_17) : (((/* implicit */int) (_Bool)1))))) <= (min((var_5), (((/* implicit */long long int) (_Bool)1))))))), ((+(((/* implicit */int) (signed char)51))))));
                            arr_15 [i_4] [i_3] [i_2] [i_1] [i_0 + 1] [i_0] = ((/* implicit */unsigned char) max(((signed char)66), (((/* implicit */signed char) var_0))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_19 [i_0] [i_1 - 1] [i_2] [i_3] [i_5] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-151627885)))) ? (((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)219)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) || (((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1])))))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((signed char) max((var_3), (((/* implicit */long long int) arr_9 [i_0 - 1] [i_1 + 1] [i_2] [i_3])))))) : (((/* implicit */int) ((2009102618780176504LL) >= (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)49)) <= (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_13 [7] [7] [(_Bool)1] [i_3] [i_3 + 3] [i_3 + 2])) ? (((/* implicit */int) arr_0 [i_0])) : (var_6)))))));
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max(((signed char)56), (((/* implicit */signed char) ((((long long int) (short)-18712)) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 3715673470U)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) var_0)))))))))))));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)81)), (var_18)))) & (min((((/* implicit */unsigned long long int) var_16)), (var_10))))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_11), (((/* implicit */short) arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_1])))))))))))));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_6 = 2; i_6 < 10; i_6 += 4) 
            {
                var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_1] [i_6 - 1]))));
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)49))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (unsigned short)3509)) <= (((/* implicit */int) (unsigned char)1)))))) ? ((~(arr_22 [i_0] [i_1 + 1] [i_6 - 2] [i_0] [i_1 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_7])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_24 [i_8] [i_7] [i_6] [i_0 + 1] [i_0 + 1]))))) <= (max((var_12), (((/* implicit */long long int) var_18))))))))));
                        arr_29 [i_6] [i_6 - 2] [i_6] [i_6 - 1] [7LL] = ((/* implicit */short) var_2);
                        arr_30 [i_0] [i_1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16ULL)) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) (short)-25070))));
                    }
                    for (long long int i_9 = 2; i_9 < 9; i_9 += 4) 
                    {
                        arr_33 [i_0] [i_1 - 1] [i_0] [6] [i_7] [i_1 - 1] [i_9] = ((/* implicit */_Bool) min(((-(((/* implicit */int) max(((unsigned short)6492), (((/* implicit */unsigned short) (signed char)-56))))))), (arr_17 [i_0] [i_1] [i_1] [i_7] [i_9])));
                        var_28 = ((/* implicit */long long int) max((var_28), ((+(((long long int) var_2))))));
                    }
                    arr_34 [i_0] [i_1 - 1] [i_0] = ((/* implicit */short) ((unsigned char) max((var_5), (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_1] [i_1])))));
                }
            }
            arr_35 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_9)))) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) ((unsigned short) var_14)))))) ? (var_6) : (((/* implicit */int) (!(((/* implicit */_Bool) 3)))))));
        }
        for (int i_10 = 1; i_10 < 10; i_10 += 3) /* same iter space */
        {
            arr_38 [i_0] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */int) ((unsigned char) max((var_0), (var_13))))) : (((/* implicit */int) (_Bool)1))));
            var_29 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_26 [i_0])))) & (var_3)));
        }
        for (unsigned short i_11 = 1; i_11 < 10; i_11 += 2) 
        {
            arr_43 [i_0] [i_0] [i_11] = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((/* implicit */short) (_Bool)0)), ((short)25069)))), (((var_0) ? (arr_10 [i_0] [i_0 - 1] [i_11 - 1] [i_11 + 1]) : (arr_28 [i_0 + 1] [i_0 + 1] [i_11 - 1] [i_11 + 1] [i_11 + 1])))));
            arr_44 [i_0] [(_Bool)1] [i_11 + 1] |= ((/* implicit */_Bool) (signed char)124);
            var_30 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) ((var_13) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_7)))))))) ? (((var_0) ? (var_2) : (((/* implicit */int) ((signed char) var_16))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_16))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)7))) <= (5486356612785062154LL))))))))));
        }
        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) arr_4 [i_0 - 1]))));
        arr_45 [i_0] [i_0 - 1] = ((/* implicit */_Bool) (+(((unsigned int) (~(((/* implicit */int) var_14)))))));
    }
    for (signed char i_12 = 1; i_12 < 21; i_12 += 4) 
    {
        arr_48 [i_12] = ((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_46 [i_12 - 1]))) & (((int) arr_46 [i_12 + 2]))));
        arr_49 [i_12] = ((/* implicit */_Bool) arr_46 [i_12]);
        var_32 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) min((var_6), (var_18)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) arr_47 [i_12] [i_12])) ? (((/* implicit */long long int) var_17)) : (var_16))))));
    }
    /* vectorizable */
    for (signed char i_13 = 0; i_13 < 18; i_13 += 3) 
    {
        arr_52 [i_13] [i_13] = ((unsigned short) (-(((/* implicit */int) (short)-25070))));
        /* LoopSeq 3 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_56 [i_14] [i_14] = ((/* implicit */unsigned int) arr_51 [i_13] [i_13]);
            /* LoopSeq 1 */
            for (long long int i_15 = 3; i_15 < 17; i_15 += 4) 
            {
                arr_60 [i_13] [i_14] [i_14] = ((/* implicit */short) ((unsigned short) ((_Bool) var_12)));
                var_33 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_15 - 1] [i_15 - 3] [i_15 - 1]))) <= (((((/* implicit */_Bool) (unsigned char)38)) ? (arr_46 [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22)))))));
            }
            arr_61 [i_13] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 11U)) ? (var_6) : (((/* implicit */int) (unsigned short)37157))));
        }
        for (long long int i_16 = 0; i_16 < 18; i_16 += 3) 
        {
            arr_64 [i_13] [i_13] [i_13] = ((/* implicit */long long int) (signed char)100);
            arr_65 [i_13] [i_13] [i_13] = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            arr_70 [i_17] [i_17] = ((/* implicit */unsigned char) ((arr_63 [i_13] [i_17]) % (((/* implicit */long long int) ((/* implicit */int) arr_51 [13] [i_17])))));
            var_34 ^= ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_55 [i_13] [i_13] [i_13]) : (((/* implicit */unsigned int) var_17))))));
        }
        /* LoopNest 2 */
        for (long long int i_18 = 0; i_18 < 18; i_18 += 4) 
        {
            for (unsigned long long int i_19 = 1; i_19 < 16; i_19 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_20 = 3; i_20 < 16; i_20 += 4) 
                    {
                        arr_80 [i_20] [i_19] [i_19] [i_13] = ((/* implicit */_Bool) ((unsigned char) ((unsigned short) (signed char)-1)));
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)16)) & (((/* implicit */int) (short)17565))))) ? ((-(((/* implicit */int) arr_59 [i_19])))) : (((/* implicit */int) (_Bool)1))));
                        var_36 ^= ((/* implicit */_Bool) 6461614853915371038LL);
                    }
                    arr_81 [(_Bool)1] [i_13] [i_19] [i_19] = arr_73 [i_13] [i_13] [i_13] [i_19];
                }
            } 
        } 
    }
}
