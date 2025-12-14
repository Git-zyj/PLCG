/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185895
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_12 [6U] [i_1] [i_2] [i_3 - 1] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) (unsigned short)21)) : (((/* implicit */int) (signed char)43)))) * (((/* implicit */int) var_5))));
                            arr_13 [i_0] [(short)2] [i_2] [i_2] [9ULL] [i_3] = (signed char)17;
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    arr_16 [i_0] [(signed char)2] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) (unsigned char)43))), (((1217307672U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4])))))))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_9 [i_1] [i_0 - 1] [i_0])))))));
                    arr_17 [i_0] [i_1] [3ULL] = ((/* implicit */short) min((((unsigned int) min((((/* implicit */unsigned long long int) arr_11 [i_4] [i_1] [i_1] [i_4] [i_1] [i_4])), (arr_10 [i_0 + 3] [10U])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_8 [(_Bool)1] [i_4] [(_Bool)1] [i_4]), (var_0)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_0 + 1])))))));
                    arr_18 [4ULL] [i_1] [i_4] [4ULL] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((unsigned short)41228), (((/* implicit */unsigned short) (signed char)-82)))))));
                    arr_19 [i_0] [i_1] [(unsigned short)4] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned short)41215))))));
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    arr_22 [i_0] [(unsigned char)5] [i_5 + 1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)26980)) - (26961)))));
                    arr_23 [i_0] [i_5] = ((/* implicit */unsigned short) var_9);
                    arr_24 [i_5] [i_1] [(unsigned char)9] = ((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_5 + 1]));
                }
                for (short i_6 = 1; i_6 < 9; i_6 += 1) 
                {
                    arr_27 [i_6] = (+(((unsigned long long int) (-(((/* implicit */int) (unsigned short)24320))))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            {
                                arr_32 [i_7] [i_0] [i_6] [i_7] = ((/* implicit */signed char) ((((min((((/* implicit */unsigned long long int) (unsigned char)102)), (var_11))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_1)))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_25 [i_0 + 2] [i_1])), (((((/* implicit */int) arr_11 [i_6] [(unsigned short)7] [(signed char)6] [(short)7] [i_8] [i_6])) | (((/* implicit */int) var_5))))))) : (arr_2 [i_1] [i_1] [i_8])));
                                arr_33 [i_0] [i_6] [i_6 + 2] [i_7] = ((/* implicit */signed char) ((((((/* implicit */int) arr_7 [i_0 + 2])) + (((/* implicit */int) arr_7 [i_0 - 2])))) / (((/* implicit */int) (unsigned short)41200))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 4) 
                            {
                                arr_42 [i_0] [i_0] [10ULL] [i_1] [6ULL] [i_11] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) ((_Bool) arr_7 [i_0]))) : (((/* implicit */int) arr_20 [i_1] [i_9]))))));
                                arr_43 [i_0] [(signed char)8] [i_9] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) ((((/* implicit */int) arr_20 [i_11] [i_11])) >= (((/* implicit */int) arr_20 [i_11] [i_10])))))));
                                arr_44 [i_10] [i_9] = 4294967284U;
                            }
                            for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) 
                            {
                                arr_47 [i_12] [(signed char)0] [i_9] [i_12] [i_9] = (+(((min((((/* implicit */unsigned int) arr_25 [i_0] [i_9])), (3307079784U))) | (((/* implicit */unsigned int) ((((/* implicit */int) (short)26983)) | (((/* implicit */int) var_3))))))));
                                arr_48 [i_10] [i_10] [i_12] = ((/* implicit */unsigned char) (unsigned short)41226);
                                arr_49 [i_0] [i_10] [i_12] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_11)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_1] [4ULL] [4ULL] [(_Bool)1])) << (((arr_38 [i_9] [i_10]) - (2646503479U)))))) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_10] [i_12])) ? (((/* implicit */int) arr_11 [i_10] [i_10] [i_10] [i_10] [i_12] [i_10])) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) arr_20 [i_10] [i_10])) << (((var_12) - (2996133487924771769ULL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 2])))))));
                            }
                            for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 1) 
                            {
                                arr_53 [i_10] [i_1] [i_9] [i_10] [i_13] = ((/* implicit */unsigned short) (signed char)11);
                                arr_54 [i_0] [i_10] [i_9] [i_10] [i_1] = ((/* implicit */unsigned short) 17297703198666621893ULL);
                            }
                            for (long long int i_14 = 2; i_14 < 11; i_14 += 1) 
                            {
                                arr_58 [9ULL] [9ULL] [i_10] [8U] [8LL] = ((/* implicit */short) ((unsigned long long int) min((4284285591527094089LL), (((/* implicit */long long int) arr_37 [(short)4] [i_10] [0ULL])))));
                                arr_59 [i_0] [i_0] [i_10] [i_10] [i_10] [10U] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_31 [i_0 - 1] [i_0 - 1] [i_9] [i_9] [i_9] [i_0 - 1] [i_14])), (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)24291)) ? (((/* implicit */int) arr_34 [(unsigned short)8] [i_9] [i_10] [i_14])) : (((/* implicit */int) (signed char)38)))))))) || ((_Bool)1)));
                            }
                            arr_60 [i_1] [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_8) - (arr_21 [i_0] [i_1] [i_10] [i_10])))) ? (((((/* implicit */_Bool) arr_38 [(signed char)9] [(signed char)9])) ? (arr_51 [i_10] [(_Bool)1] [i_10] [1U] [i_1]) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) arr_21 [i_0] [i_1] [i_10] [i_10])))) + (979942236978786726ULL)));
                            arr_61 [i_10] [4U] [i_10] [i_10] [i_10] [5ULL] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) ((short) arr_52 [i_0] [i_1] [i_1] [i_1] [i_9] [2LL] [i_9]))) + (((((/* implicit */int) arr_26 [i_10] [i_0] [i_9])) - (((/* implicit */int) (_Bool)1))))))));
                            arr_62 [i_10] = ((/* implicit */long long int) (short)26975);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 12; i_15 += 2) 
                {
                    for (short i_16 = 3; i_16 < 11; i_16 += 2) 
                    {
                        {
                            arr_68 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((1217307684U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11)))))) | (arr_67 [i_0] [8LL] [i_0 + 1] [i_16 - 2])));
                            arr_69 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_16] = ((/* implicit */unsigned char) var_0);
                            arr_70 [i_0 + 1] [i_0 + 1] [(short)8] [i_16 - 2] = ((/* implicit */unsigned char) (+(((unsigned int) var_0))));
                        }
                    } 
                } 
                arr_71 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_1]))) : (var_10)));
            }
        } 
    } 
    var_13 = var_8;
    /* LoopSeq 1 */
    for (signed char i_17 = 1; i_17 < 23; i_17 += 1) 
    {
        arr_74 [(short)24] [i_17] = min((((((/* implicit */_Bool) arr_72 [i_17 + 2])) ? (11272024087432189683ULL) : (11272024087432189687ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_72 [i_17 + 2])) - (var_0)))));
        arr_75 [i_17] [i_17] = ((/* implicit */unsigned short) (signed char)-14);
        arr_76 [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_73 [i_17] [(short)20])) % (((unsigned long long int) ((((/* implicit */_Bool) 6616595543603811644ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-18))) : (var_2))))));
        arr_77 [(signed char)0] = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) 1217307656U)))));
    }
}
