/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113564
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
    var_19 = ((/* implicit */_Bool) (unsigned short)40695);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            arr_6 [i_1] [(unsigned short)2] &= ((/* implicit */unsigned int) ((var_17) ? (813792837) : (((/* implicit */int) (unsigned char)193))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_1 - 1] [i_1] [i_1 - 1] [i_2]))));
                arr_9 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (((((_Bool)0) ? (arr_5 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1] [i_1 + 1])))));
                arr_10 [i_0] [i_1] [i_1 + 3] [i_1] = ((/* implicit */unsigned int) ((arr_8 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_0]) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_0]))));
                arr_11 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-1))));
                /* LoopSeq 4 */
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */_Bool) ((939524096U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) == (3355443189U)))))));
                    var_22 &= ((/* implicit */_Bool) (((((_Bool)0) && (((/* implicit */_Bool) (unsigned char)64)))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1 + 1])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)16384)) == (((/* implicit */int) (unsigned short)49152)))))));
                }
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((_Bool) (unsigned char)192)))));
                    arr_18 [(signed char)13] [(signed char)13] [i_2] [(signed char)13] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                }
                for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    var_24 &= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)202))));
                    arr_21 [i_0] [(unsigned char)8] [(unsigned char)9] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))));
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) var_11))));
                    arr_22 [8U] [i_1 - 1] [0ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 939524106U)) ? (((/* implicit */int) arr_17 [i_1 + 2] [i_1 + 3] [i_1 - 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) var_5))));
                }
                for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    var_26 = (-(((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_6] [i_1 + 2] [i_0])));
                    var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))) : (939524107U)));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        arr_28 [i_0] [i_1] [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0))));
                        arr_29 [i_7] [i_7] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_27 [i_0])) == (((/* implicit */int) arr_27 [i_0]))));
                    }
                    arr_30 [i_6] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_2] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [5U] [i_1 + 1]))) : (-8640212960722507809LL)));
                }
            }
            for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned int i_9 = 3; i_9 < 17; i_9 += 4) 
                {
                    var_28 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5619176296425032373ULL)) ? (3355443187U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(signed char)13] [(signed char)13] [i_9])))))) ? (arr_15 [i_0] [i_1 + 3] [i_1 + 3] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
                    arr_36 [17LL] = ((/* implicit */signed char) ((((/* implicit */int) arr_24 [i_0])) / (((/* implicit */int) arr_12 [i_9 + 1] [i_9 + 1] [i_9]))));
                    var_29 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-26187)) ? (((/* implicit */int) arr_14 [i_0] [i_9 - 1] [i_8] [i_1 + 1])) : (((/* implicit */int) (_Bool)0))));
                }
                for (unsigned char i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    var_30 = ((/* implicit */unsigned char) ((arr_35 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 + 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_1 + 2]))));
                    var_31 = ((/* implicit */int) (+(((((/* implicit */_Bool) 1097364144128ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_10]))) : (arr_31 [i_8] [i_8] [i_1] [i_1])))));
                }
                for (int i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
                {
                    arr_43 [i_0] [1LL] [i_8] [i_11] &= ((/* implicit */long long int) (unsigned short)16384);
                    arr_44 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1])) ? ((((_Bool)0) ? (5619176296425032373ULL) : (12827567777284519270ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)8128)))))));
                    arr_45 [i_0] [(unsigned short)3] [i_0] [i_1] [15U] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-26189)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52824))) : (12827567777284519243ULL)))));
                    var_32 = ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_8])) ? (arr_23 [i_0] [3U] [(short)2] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52815)))));
                    arr_46 [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) 12827567777284519243ULL)))));
                }
                for (int i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_27 [i_8]))));
                    /* LoopSeq 2 */
                    for (short i_13 = 0; i_13 < 18; i_13 += 1) /* same iter space */
                    {
                        arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                        var_34 = ((short) arr_34 [i_1 + 1] [i_1 + 3] [i_1] [i_1]);
                        var_35 = ((/* implicit */int) ((arr_31 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                    }
                    for (short i_14 = 0; i_14 < 18; i_14 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned long long int) (unsigned short)49152);
                        arr_55 [i_0] [i_1] [2U] [i_12] [i_14] [i_8] [8ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1097364144128ULL)) ? (((/* implicit */int) (unsigned short)49139)) : ((+(((/* implicit */int) (short)-23872))))));
                        arr_56 [i_12] [i_1 + 2] [i_8] [i_12] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_40 [i_14] [i_12] [i_0] [i_0] [i_0])) ? ((~(((/* implicit */int) (unsigned char)133)))) : (((/* implicit */int) var_17))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_15 = 0; i_15 < 18; i_15 += 4) 
                    {
                        var_37 |= ((/* implicit */unsigned long long int) var_11);
                        var_38 += ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)157))));
                    }
                    for (unsigned short i_16 = 0; i_16 < 18; i_16 += 4) 
                    {
                        arr_62 [i_12] [14LL] [(unsigned short)10] [i_12] [i_12] [(unsigned char)15] [i_12] = ((/* implicit */unsigned int) arr_32 [(unsigned char)8] [i_1 + 3] [i_16]);
                        arr_63 [i_0] [i_1] [i_8] [i_12] [(unsigned char)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 + 2])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (721331233) : (((/* implicit */int) (signed char)-62)))) : (((/* implicit */int) (_Bool)1))));
                        arr_64 [i_0] [i_1] [i_1] [i_1] [i_16] [i_12] [i_12] = ((/* implicit */short) (~(((/* implicit */int) arr_25 [i_0] [i_0]))));
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 12827567777284519251ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 7414121814978598870LL))))) : (((((/* implicit */_Bool) 1872252027U)) ? (((/* implicit */int) arr_27 [i_16])) : (((/* implicit */int) arr_4 [i_16] [(unsigned short)14] [i_16]))))));
                        arr_65 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16382)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (_Bool)0))))) : (arr_60 [i_12] [i_12] [i_12] [17U])));
                    }
                    for (unsigned short i_17 = 0; i_17 < 18; i_17 += 2) 
                    {
                        arr_68 [(unsigned short)15] [i_1 + 3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) ((unsigned char) (short)-23876))) : (((/* implicit */int) arr_34 [i_1 + 3] [i_1] [i_1 + 2] [i_1 + 3]))));
                        arr_69 [i_0] [i_1 + 1] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) (!(var_17)));
                        var_40 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)16383))))) && (((/* implicit */_Bool) 1097364144132ULL))));
                    }
                }
                arr_70 [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)49133)) ? (12827567777284519243ULL) : (18446742976345407488ULL)));
            }
            arr_71 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_27 [i_0])) ? (18446742976345407476ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_42 [i_0] [i_0] [i_0] [i_0])) % (((/* implicit */int) var_1)))))));
        }
        /* vectorizable */
        for (long long int i_18 = 0; i_18 < 18; i_18 += 1) 
        {
            arr_74 [i_18] [i_18] [(unsigned short)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5619176296425032360ULL)) ? (var_8) : (((/* implicit */int) (unsigned char)242))))) ? (1097364144128ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) + (12827567777284519243ULL)))));
            var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) (-(((12827567777284519246ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23618))))))))));
            arr_75 [i_0] [i_0] [i_0] |= ((/* implicit */signed char) ((12827567777284519268ULL) + (5619176296425032372ULL)));
            arr_76 [i_18] = ((/* implicit */unsigned char) ((arr_66 [(unsigned short)17] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
        }
        arr_77 [i_0] = ((/* implicit */unsigned long long int) var_14);
        var_42 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */short) (signed char)-120))))) & (((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0] [(unsigned char)11])) ? (((((/* implicit */int) (signed char)5)) | (((/* implicit */int) var_16)))) : (((/* implicit */int) (short)15872))))));
    }
}
