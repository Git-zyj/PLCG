/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185700
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 7; i_2 += 1) 
            {
                {
                    var_14 *= ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 - 1]);
                    arr_9 [i_1] [i_1] [(unsigned char)2] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30120))) : (arr_5 [i_0] [(unsigned short)8] [i_2])))) ? (((/* implicit */int) ((1964498966247974385ULL) >= (arr_1 [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)219))) > (arr_5 [(_Bool)1] [(unsigned char)4] [i_2]))))))) >= (((min((((/* implicit */unsigned long long int) arr_8 [(unsigned char)4])), (2279951605191486379ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 - 1] [2ULL]))))));
                }
            } 
        } 
        var_15 = ((/* implicit */int) arr_7 [i_0]);
        var_16 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (16166792468518065237ULL)))));
    }
    var_17 *= ((/* implicit */short) var_8);
    /* LoopSeq 4 */
    for (short i_3 = 1; i_3 < 11; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    {
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (unsigned char)219))));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_18 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3]))) : (16166792468518065237ULL))) <= (((((/* implicit */_Bool) arr_18 [i_3 + 1] [i_6])) ? (var_1) : (((/* implicit */unsigned long long int) arr_14 [i_4] [11U] [5])))))) && (((/* implicit */_Bool) arr_15 [i_4])))))));
                        arr_20 [i_3] [i_3 + 1] [i_3] [i_3] [i_3 + 1] = ((/* implicit */unsigned short) arr_18 [7U] [i_3]);
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_7 = 3; i_7 < 11; i_7 += 4) 
        {
            arr_24 [(unsigned short)5] [i_7] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_3 + 1]))) : (9615215210146345452ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-21543)) / (((/* implicit */int) arr_12 [i_3]))))))) ^ (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1665))) - (var_1))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)70))) <= (2279951605191486383ULL)))))))));
            var_20 = ((/* implicit */unsigned int) ((long long int) max((arr_11 [i_3 + 1]), (arr_11 [i_7 - 1]))));
            var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) 1902394109U)) & (arr_11 [i_7 - 3])))));
        }
        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */long long int) 16166792468518065232ULL);
            var_23 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) -1635185691)), (((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16166792468518065232ULL)) ? (((/* implicit */int) arr_18 [i_3] [i_8])) : (((/* implicit */int) (unsigned char)3))))) : (((arr_17 [(_Bool)1] [(short)6] [i_8]) ? (((/* implicit */unsigned long long int) arr_14 [i_8] [i_3 - 1] [(unsigned short)8])) : (arr_11 [i_8])))))));
            var_24 |= ((/* implicit */unsigned int) 2279951605191486389ULL);
            /* LoopNest 3 */
            for (unsigned int i_9 = 1; i_9 < 11; i_9 += 4) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) (-(arr_25 [i_3] [7ULL])));
                            arr_33 [i_3] [4ULL] [i_8] [(unsigned short)0] [i_10] [i_9] = ((/* implicit */unsigned int) 4764095451933634521LL);
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned short i_12 = 0; i_12 < 12; i_12 += 1) 
            {
                arr_36 [i_3] [i_8] = ((/* implicit */unsigned char) arr_14 [9] [7] [0LL]);
                var_26 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_8]))) != (arr_35 [i_3] [i_8] [i_12]))))) / ((+(12686775659236199241ULL)))))));
                arr_37 [(signed char)2] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40968)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3]))) : (1902394109U)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_29 [(unsigned char)10] [i_8])) / (arr_25 [(short)1] [(short)1])))) : (((((/* implicit */_Bool) arr_35 [(short)6] [i_8] [i_8])) ? (arr_19 [i_3] [i_3] [i_12] [i_8]) : (((/* implicit */long long int) arr_26 [i_3] [i_8])))))));
            }
            for (unsigned char i_13 = 0; i_13 < 12; i_13 += 4) 
            {
                arr_41 [i_8] [i_8] [i_8] [10U] = ((/* implicit */unsigned long long int) max(((+(((((/* implicit */_Bool) var_3)) ? (arr_30 [i_13] [i_8] [(_Bool)1] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) (short)19394))))))), (((/* implicit */long long int) (~(((/* implicit */int) min((var_11), (((/* implicit */short) (unsigned char)24))))))))));
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 12; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            arr_48 [(short)11] [i_3] [(unsigned char)0] [i_13] [i_13] [i_15] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (16166792468518065213ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)150)))))) ? (((/* implicit */unsigned long long int) 212511411U)) : (var_12))) < (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */int) arr_17 [i_3 + 1] [i_3] [i_3])) : (((/* implicit */int) arr_45 [(short)1] [(short)1] [7] [i_3])))))))));
                            var_27 += ((/* implicit */short) ((((/* implicit */_Bool) 12609822526721346949ULL)) ? (var_6) : (((/* implicit */int) arr_12 [5LL]))));
                            arr_49 [i_3] [i_8] [i_13] [i_14] [i_14] [i_15] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) arr_17 [i_13] [i_14] [i_14])) & (((/* implicit */int) arr_12 [i_3]))));
                            var_28 = ((/* implicit */long long int) max((8831528863563206164ULL), (min((((/* implicit */unsigned long long int) max((arr_10 [i_3] [(signed char)0]), (((/* implicit */unsigned short) var_10))))), (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned long long int) arr_27 [i_8]))))))));
                        }
                    } 
                } 
                arr_50 [1] [1] [i_13] [1] = ((/* implicit */_Bool) var_6);
            }
            for (unsigned long long int i_16 = 1; i_16 < 11; i_16 += 1) 
            {
                /* LoopNest 2 */
                for (short i_17 = 1; i_17 < 10; i_17 += 2) 
                {
                    for (short i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        {
                            arr_59 [i_3] [i_3] [i_17] [i_17] [(unsigned char)3] [(signed char)4] [10ULL] = (((((-(4294967284U))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_8] [i_16 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-82))) : (((((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_3] [i_18] [i_16]))) < (arr_47 [i_3] [i_3] [i_3] [i_3] [(_Bool)1] [i_3]))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (arr_30 [(signed char)1] [i_17] [i_16] [i_16])))) : (4939059378157081300ULL))));
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (short)-29462))));
                            arr_60 [i_3] [i_8] [i_16] [0ULL] [i_16] [i_17] = ((/* implicit */unsigned short) ((unsigned int) (unsigned char)155));
                        }
                    } 
                } 
                var_30 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_8] [i_16])) ? (((/* implicit */int) var_13)) : (arr_52 [i_3] [i_3] [i_8] [(unsigned short)7])))) != (max((((/* implicit */unsigned int) (_Bool)0)), (((arr_58 [i_3 - 1] [i_3 - 1] [10LL]) ? (arr_54 [i_8]) : (((/* implicit */unsigned int) arr_26 [8] [i_8])))))));
            }
            for (unsigned char i_19 = 1; i_19 < 10; i_19 += 4) 
            {
                var_31 = ((/* implicit */int) (~(12686775659236199261ULL)));
                var_32 += ((/* implicit */unsigned char) ((7856899260937184988ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3 + 1])))));
                arr_63 [i_8] [i_8] [(signed char)10] [i_8] = ((/* implicit */unsigned char) arr_43 [4U] [i_19] [i_19 - 1] [(short)5] [i_19 - 1] [i_19]);
            }
        }
        for (unsigned char i_20 = 0; i_20 < 12; i_20 += 2) /* same iter space */
        {
            var_33 = min((((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) >= (arr_55 [i_3] [0] [i_3] [i_20] [i_3] [i_20]))))), (min((((/* implicit */int) (unsigned short)42367)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_10 [i_3] [i_20])) : (((/* implicit */int) arr_46 [(short)11] [11ULL])))))));
            var_34 ^= ((/* implicit */short) ((((/* implicit */int) arr_45 [i_20] [i_20] [i_3] [i_3])) * (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2279951605191486379ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-9095))) : (arr_54 [i_20])))) || (((/* implicit */_Bool) min((arr_28 [i_20] [i_20]), (((/* implicit */long long int) 60U))))))))));
        }
        arr_67 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_3] [i_3])) ? (var_12) : ((((+(arr_55 [i_3 + 1] [6] [i_3 + 1] [(signed char)0] [i_3 + 1] [i_3 - 1]))) | (((unsigned long long int) arr_31 [0] [(signed char)6] [(short)2] [2U] [4ULL]))))));
        /* LoopSeq 1 */
        for (signed char i_21 = 1; i_21 < 10; i_21 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_35 ^= ((/* implicit */short) 1635185688);
                var_36 += ((/* implicit */int) (short)3977);
                arr_73 [8] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)87)) ? (((((/* implicit */_Bool) 980362781588128303ULL)) ? (2279951605191486404ULL) : (((/* implicit */unsigned long long int) arr_51 [(_Bool)1] [(_Bool)1] [(_Bool)1])))) : (((((/* implicit */_Bool) arr_66 [i_3])) ? (arr_57 [i_22] [i_21] [11ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-82)))))))) ? (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_46 [i_3] [i_21])) & (((/* implicit */int) arr_29 [(short)2] [(_Bool)1]))))))) : (max((((/* implicit */unsigned int) arr_45 [i_3] [i_3] [9ULL] [8ULL])), (((unsigned int) arr_38 [i_22] [i_21] [i_3 - 1]))))));
            }
            var_37 = ((/* implicit */unsigned long long int) arr_70 [i_3] [(short)4]);
        }
    }
    for (unsigned int i_23 = 2; i_23 < 21; i_23 += 2) 
    {
        var_38 = ((/* implicit */int) arr_75 [i_23 + 1]);
        var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) 12102053735825785551ULL))));
    }
    for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
    {
        arr_79 [(_Bool)1] &= ((/* implicit */short) (+((~(1073741823)))));
        /* LoopNest 2 */
        for (unsigned long long int i_25 = 1; i_25 < 14; i_25 += 2) 
        {
            for (int i_26 = 0; i_26 < 17; i_26 += 1) 
            {
                {
                    var_40 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1635185667))));
                    arr_85 [2ULL] [i_24] = ((/* implicit */long long int) var_8);
                }
            } 
        } 
        var_41 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_74 [(short)7] [(short)7])) ? (((/* implicit */int) arr_77 [i_24])) : ((+(((/* implicit */int) arr_78 [i_24 + 1]))))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_77 [i_24])) ? (((/* implicit */unsigned int) -1635185688)) : (arr_81 [4LL] [i_24])))) ? (min((arr_82 [i_24 + 1] [i_24] [i_24] [16LL]), (((/* implicit */unsigned long long int) arr_75 [i_24 + 1])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_77 [i_24])))))))));
        arr_86 [i_24] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_74 [i_24 + 1] [i_24])) ? (((/* implicit */int) min((arr_78 [i_24 + 1]), (arr_78 [i_24 + 1])))) : (((((/* implicit */_Bool) arr_74 [i_24 + 1] [i_24])) ? (((/* implicit */int) arr_74 [i_24 + 1] [i_24])) : (((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned long long int i_27 = 0; i_27 < 22; i_27 += 4) 
    {
        var_42 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28547)) ? (-1635185712) : (((/* implicit */int) arr_75 [21U]))))) ? (((((/* implicit */_Bool) 1635185691)) ? (7940088910018822148ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)106))))) : (((/* implicit */unsigned long long int) -1LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) < ((+(arr_76 [i_27])))))));
        var_43 = ((/* implicit */unsigned char) arr_87 [i_27]);
    }
    var_44 = ((/* implicit */unsigned char) min((((((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned char)174)))) << (((max((5759968414473352375ULL), (((/* implicit */unsigned long long int) var_8)))) - (5759968414473352363ULL))))), (((((/* implicit */_Bool) 127U)) ? (var_5) : (((/* implicit */int) (unsigned char)54))))));
    var_45 = ((/* implicit */_Bool) var_11);
}
