/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1503
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_18 ^= ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_3 [i_0]))))), (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_0 [i_2]))))))), ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (2190016317U)))))));
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (((((-(arr_4 [i_0] [i_0] [i_0] [i_0]))) + (2147483647))) << (((min((var_1), (((/* implicit */unsigned long long int) arr_2 [i_1])))) - (17880894344958505437ULL))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((((int) (~(-1367479734)))), (((int) 1735131217)))))));
                            arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) (unsigned char)10)) & (((/* implicit */int) (_Bool)1)))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
                        {
                            var_21 *= ((/* implicit */long long int) min((((unsigned char) arr_7 [i_2] [i_2])), (((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_3] [i_5])) == (((/* implicit */int) arr_3 [i_0])))))));
                            var_22 |= ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_1 [i_1])) - (19110)))))) ? (((/* implicit */unsigned long long int) min((max((var_4), (((/* implicit */long long int) (signed char)16)))), (((/* implicit */long long int) arr_10 [i_0] [i_2] [i_0] [i_2] [i_3] [i_0]))))) : ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_2] [i_2]))) - (8215078550284309618ULL))))));
                            var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)56113)))) || (((/* implicit */_Bool) ((var_8) & (((/* implicit */int) var_11)))))))), (var_9)));
                            arr_15 [i_0] [i_1] [i_2] [i_0] [i_5] [i_5] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_3]));
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_3]))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) + (((/* implicit */int) arr_11 [i_0] [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-1)) | (((/* implicit */int) var_9))))) : (29025396U)));
                            var_25 = ((/* implicit */unsigned long long int) arr_2 [i_1]);
                            arr_19 [i_1] [i_3] [i_2] [i_1] = ((/* implicit */unsigned short) ((int) arr_17 [i_0] [i_1] [i_0] [i_2] [i_6] [i_1] [i_6]));
                        }
                        for (unsigned char i_7 = 2; i_7 < 15; i_7 += 4) 
                        {
                            arr_22 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) (unsigned char)255)))))) : (((((/* implicit */_Bool) max((((/* implicit */int) (signed char)52)), (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_0] [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (18446744073709551615ULL)))))));
                            var_26 = (i_1 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_14 [i_1] [i_1] [i_3] [i_7 - 1] [i_1]), (arr_14 [i_0] [i_1] [i_7 - 1] [i_7 + 4] [i_1])))) >> ((((+(((/* implicit */int) arr_14 [i_1] [i_1] [i_2] [i_7 + 2] [i_1])))) - (66)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_14 [i_1] [i_1] [i_3] [i_7 - 1] [i_1]), (arr_14 [i_0] [i_1] [i_7 - 1] [i_7 + 4] [i_1])))) >> ((((((+(((/* implicit */int) arr_14 [i_1] [i_1] [i_2] [i_7 + 2] [i_1])))) - (66))) - (41))))));
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] [i_7] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (arr_5 [i_1] [i_1] [i_1] [i_1])))), (min((2388268182304063746LL), (((/* implicit */long long int) arr_4 [i_3] [i_3] [i_3] [i_7]))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) ((1054002587782501722ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_17) : (((/* implicit */unsigned int) arr_2 [i_7]))))))));
                        }
                        var_27 += ((/* implicit */long long int) max((((arr_16 [i_0] [i_0] [i_0] [i_2] [i_0]) << (((((/* implicit */int) ((unsigned char) var_4))) - (28))))), (((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3]))));
                        var_28 = ((/* implicit */unsigned short) (signed char)-17);
                        arr_24 [i_0] [i_1] [i_3] = var_13;
                        var_29 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2] [i_2])) >= (((/* implicit */int) min((arr_11 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 3; i_9 < 16; i_9 += 1) 
                        {
                            {
                                arr_31 [i_0] [i_0] [i_0] [i_0] [i_1] [i_9 + 2] = 0LL;
                                var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (-(((/* implicit */int) (short)32767)))))));
                            }
                        } 
                    } 
                    arr_32 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8215078550284309630ULL)) ? (((unsigned int) 10982206730749885886ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_2] [i_0] [i_1] [i_0] [i_1] [i_0] [i_0])))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) - ((-(2388268182304063735LL))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) 53867395)) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_2] [i_1])))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */_Bool) (+(((/* implicit */int) var_9))));
    /* LoopSeq 3 */
    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 4) 
    {
        arr_35 [i_10] [i_10] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_33 [i_10])) ? (arr_33 [i_10]) : (arr_33 [i_10])))));
        arr_36 [i_10] = ((/* implicit */int) var_6);
        /* LoopNest 3 */
        for (signed char i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            for (short i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    {
                        arr_43 [i_10] [i_10] [i_10] [i_13] [i_10] = var_9;
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_14 = 0; i_14 < 10; i_14 += 3) 
                        {
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_10] [i_10] [i_12] [i_12] [i_12] [i_11] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_10] [i_10] [i_11] [i_12] [i_10] [i_10] [i_14]))) : (7105694986225723021LL)));
                            arr_47 [i_10] [i_11] [i_10] [i_14] [i_11] [i_14] = ((((/* implicit */_Bool) ((unsigned long long int) 8215078550284309618ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) & (var_16)))) : (arr_28 [i_10] [i_11] [i_12] [i_13] [i_14]));
                            var_33 ^= ((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) (unsigned char)68)))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 1) 
                        {
                            arr_51 [i_10] [i_11] [i_11] [i_13] [i_15] = (i_15 % 2 == zero) ? (((/* implicit */int) ((((long long int) (signed char)13)) << (((((((/* implicit */_Bool) arr_17 [i_10] [i_10] [i_10] [i_10] [i_10] [i_15] [i_10])) ? (((/* implicit */unsigned long long int) arr_17 [i_10] [i_10] [i_11] [i_11] [i_11] [i_15] [i_11])) : (var_15))) - (1800486924ULL)))))) : (((/* implicit */int) ((((long long int) (signed char)13)) << (((((((((/* implicit */_Bool) arr_17 [i_10] [i_10] [i_10] [i_10] [i_10] [i_15] [i_10])) ? (((/* implicit */unsigned long long int) arr_17 [i_10] [i_10] [i_11] [i_11] [i_11] [i_15] [i_11])) : (var_15))) - (1800486924ULL))) - (18446744072147153646ULL))))));
                            var_34 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((((/* implicit */int) var_0)) & (((/* implicit */int) arr_29 [i_10] [i_10] [i_12] [i_10])))) - (20))))))));
                        }
                        var_35 = arr_34 [i_13];
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)16530)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 3) 
    {
        var_37 = ((/* implicit */unsigned char) var_9);
        var_38 &= ((/* implicit */short) (signed char)13);
        var_39 ^= ((/* implicit */int) arr_29 [i_16] [i_16] [i_16] [i_16]);
        arr_56 [i_16] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_55 [i_16])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))));
        arr_57 [i_16] = ((/* implicit */int) var_5);
    }
    for (int i_17 = 1; i_17 < 9; i_17 += 4) 
    {
        arr_60 [i_17 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_17])) ^ (((/* implicit */int) ((unsigned short) 13977644620610233013ULL)))));
        arr_61 [i_17] [i_17] = ((/* implicit */_Bool) ((short) var_11));
        arr_62 [i_17] = ((((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) var_0)))))) >= (9252680552991194905ULL));
    }
    var_40 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_10)), (((unsigned long long int) ((((/* implicit */_Bool) 3752312004U)) ? (10231665523425241986ULL) : (((/* implicit */unsigned long long int) var_2)))))));
}
