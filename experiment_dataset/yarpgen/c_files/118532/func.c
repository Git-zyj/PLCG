/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118532
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_0 [i_3] [i_2]))))));
                        arr_13 [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((16ULL), (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_1] [i_0]))))))))));
                        var_20 = ((/* implicit */unsigned long long int) var_15);
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (~(((((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) (unsigned char)2)) : (0))) & ((-(((/* implicit */int) (_Bool)0)))))))))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((arr_6 [i_1]) / (((/* implicit */int) ((_Bool) (unsigned short)18670)))))) ^ (((((/* implicit */_Bool) (unsigned char)16)) ? (((((/* implicit */_Bool) arr_9 [i_3] [i_1] [i_3] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))) : (8835452422124449003ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_3] [i_2] [i_1] [i_1] [i_3])))))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] &= ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -9)) ? (-1) : (min((5), (((/* implicit */int) (unsigned char)21))))))) & (var_3)));
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            var_23 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)18))) : (((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_18)))))));
            /* LoopSeq 1 */
            for (signed char i_5 = 1; i_5 < 16; i_5 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_6 = 1; i_6 < 16; i_6 += 3) 
                {
                    arr_23 [i_6] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned char)25))))))), (min((((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [16U])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */unsigned int) arr_21 [i_6] [i_4] [i_4] [i_0] [i_0])))))))));
                    arr_24 [(_Bool)1] [i_6 - 1] [i_5 - 1] [i_4] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)1)) * (((/* implicit */int) (unsigned char)242))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_15 [i_0] [i_0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15))))))))) : (var_16)));
                }
                arr_25 [i_5] [i_5 - 1] [i_4] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) / (arr_16 [i_4])))) & (var_18)))) && (((/* implicit */_Bool) arr_16 [i_5 + 1])));
                var_24 = ((/* implicit */short) max((arr_11 [i_4] [i_5] [i_4] [i_4] [i_4]), (min((arr_11 [i_4] [i_5 + 1] [i_5 - 1] [(short)4] [i_4]), (arr_11 [i_4] [i_5] [i_4] [i_0] [i_4])))));
            }
            arr_26 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)253)))))), (max((((((/* implicit */_Bool) 8)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24761))))), (arr_0 [i_0] [i_4])))));
            var_25 = ((/* implicit */unsigned char) (+(min((((/* implicit */int) (_Bool)1)), ((~(-16)))))));
        }
        /* vectorizable */
        for (int i_7 = 2; i_7 < 16; i_7 += 1) 
        {
            arr_29 [i_0] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)11033))) : (arr_10 [i_7 - 2] [i_7 - 1] [i_7 - 2] [i_7 - 2]));
            /* LoopNest 3 */
            for (short i_8 = 3; i_8 < 16; i_8 += 3) 
            {
                for (unsigned int i_9 = 0; i_9 < 17; i_9 += 1) 
                {
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */short) (((~(((/* implicit */int) var_10)))) ^ (arr_34 [i_8] [i_7 - 2] [i_8 - 2] [i_7])));
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_0] [i_7] [(unsigned short)12] [(_Bool)1] [i_10])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-24761)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))))));
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1)))))));
                            arr_39 [3ULL] [i_8] [i_8 - 1] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) + (var_9)));
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 3) 
    {
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((824466465) / (7)))) ? (((/* implicit */unsigned long long int) arr_10 [i_11] [i_11] [i_11] [i_11])) : (var_14)));
        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) arr_9 [(unsigned short)10] [i_11] [i_11] [10ULL] [i_11] [(unsigned short)10]))));
        /* LoopSeq 1 */
        for (int i_12 = 4; i_12 < 10; i_12 += 1) 
        {
            var_31 = ((/* implicit */short) var_12);
            var_32 = ((/* implicit */short) 3610809380759829447LL);
        }
    }
    /* vectorizable */
    for (signed char i_13 = 3; i_13 < 17; i_13 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (unsigned short i_16 = 0; i_16 < 19; i_16 += 3) 
                {
                    {
                        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) var_18))));
                        arr_58 [i_13] [(unsigned char)0] [i_13] [i_15] = ((/* implicit */int) ((arr_49 [i_13 - 1]) / (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) * (((/* implicit */int) (unsigned char)129)))))));
                        var_34 = ((/* implicit */unsigned long long int) var_17);
                    }
                } 
            } 
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(0U)))) ? (var_18) : (((/* implicit */long long int) arr_57 [i_13]))));
        }
        /* LoopNest 3 */
        for (short i_17 = 0; i_17 < 19; i_17 += 4) 
        {
            for (unsigned long long int i_18 = 2; i_18 < 16; i_18 += 2) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        var_36 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_65 [i_13 - 3] [i_17] [i_13])) < ((~(arr_57 [i_13])))));
                        /* LoopSeq 1 */
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            var_37 = ((/* implicit */unsigned long long int) ((short) ((_Bool) arr_68 [i_19] [i_19] [i_18] [i_18])));
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_67 [i_20] [i_19] [i_18 - 1] [i_18] [i_19] [i_13 - 2])) : (((/* implicit */int) arr_56 [i_19] [i_17] [i_19]))))) == (var_3)));
                            arr_69 [i_19] [4U] [i_19] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) arr_47 [(short)3])) ? (arr_57 [i_17]) : ((-(((/* implicit */int) arr_65 [i_20] [i_19] [i_20]))))));
                            var_39 = (-(-16));
                        }
                        var_40 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_52 [i_13 - 1])) == (((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3688))) : (18446744073709551612ULL)))));
                    }
                } 
            } 
        } 
        var_41 = ((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
    }
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        arr_73 [i_21] = ((/* implicit */unsigned int) var_12);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_22 = 4; i_22 < 16; i_22 += 2) 
        {
            var_42 = ((/* implicit */unsigned short) ((_Bool) var_14));
            arr_78 [i_22] [i_21] [i_21] = ((/* implicit */unsigned long long int) (-(arr_57 [i_22 - 4])));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_23 = 0; i_23 < 18; i_23 += 2) 
        {
            for (unsigned long long int i_24 = 0; i_24 < 18; i_24 += 1) 
            {
                {
                    var_43 = ((/* implicit */short) var_0);
                    /* LoopNest 2 */
                    for (unsigned char i_25 = 4; i_25 < 17; i_25 += 4) 
                    {
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            {
                                var_44 = ((/* implicit */_Bool) min((max((12251704033315043144ULL), (((/* implicit */unsigned long long int) 412745126)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)6)), ((~(((/* implicit */int) arr_55 [i_21] [i_23] [i_24] [i_25] [i_21])))))))));
                                var_45 = ((/* implicit */unsigned int) (-(18446744073709551587ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_27 = 0; i_27 < 18; i_27 += 3) 
                    {
                        for (unsigned short i_28 = 2; i_28 < 15; i_28 += 3) 
                        {
                            {
                                var_46 = ((/* implicit */unsigned long long int) arr_47 [i_21]);
                                var_47 &= ((/* implicit */signed char) (~((((~(((/* implicit */int) var_8)))) & (((/* implicit */int) var_15))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_48 = (_Bool)0;
    }
    var_49 = ((/* implicit */unsigned long long int) (short)8);
}
