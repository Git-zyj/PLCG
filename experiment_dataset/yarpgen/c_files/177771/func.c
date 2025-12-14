/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177771
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_20 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16454792389014599175ULL)) ? (((/* implicit */int) ((_Bool) var_10))) : (((/* implicit */int) var_7))))) - ((~(1991951684694952462ULL)))));
                var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) 1991951684694952442ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_1] [i_0])))))), (((((/* implicit */_Bool) -2147483634)) ? ((~(16783642870122246053ULL))) : (((((/* implicit */_Bool) 1991951684694952445ULL)) ? (13903402760511301389ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) arr_5 [2]);
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_2] [i_2] [i_2]))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_0])))));
                            }
                        } 
                    } 
                    arr_11 [i_2] = ((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_1] [i_1]));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    arr_16 [i_5] = ((/* implicit */int) var_10);
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)130)) & (var_19))) >> (((1991951684694952450ULL) - (1991951684694952446ULL)))));
                        var_25 = ((/* implicit */int) (unsigned short)18877);
                        var_26 = ((/* implicit */int) ((var_10) ? (((((/* implicit */_Bool) var_6)) ? (4543341313198250234ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned char)2] [i_5])))));
                        var_27 -= ((/* implicit */_Bool) var_5);
                    }
                    var_28 = ((((/* implicit */_Bool) ((67108864) + (arr_12 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) var_16)) : (arr_18 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_5]));
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 19; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) min(((_Bool)1), (var_11)))))))) : (((((/* implicit */_Bool) 629724655)) ? (((/* implicit */unsigned long long int) 2147483647)) : (16454792389014599177ULL)))));
                            var_30 += ((/* implicit */int) var_7);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 20; i_9 += 4) 
                            {
                                var_31 -= ((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_1]);
                                var_32 |= ((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_7]);
                                var_33 = ((/* implicit */unsigned char) ((arr_10 [i_9] [i_1] [i_1 + 1] [i_7 + 1]) / (arr_10 [(unsigned char)2] [i_1] [i_1 - 1] [i_7 + 1])));
                            }
                            var_34 = (_Bool)1;
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) var_10))))) & (((var_10) ? (arr_14 [i_0] [i_0] [i_0]) : (arr_14 [i_0] [i_7] [i_0])))))) ? (-2147483640) : (max((arr_9 [i_1] [i_1] [i_1 + 1] [i_8] [i_1 + 1] [i_1 + 1] [i_1 + 1]), (arr_9 [i_1 + 1] [i_1] [i_1 + 1] [i_8] [i_1 + 1] [i_1 - 1] [i_1 + 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_36 = ((/* implicit */_Bool) ((((/* implicit */int) var_13)) >> (((var_19) + (537235296)))));
    /* LoopSeq 1 */
    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11064652616044678634ULL)) ? (11602707311443751708ULL) : (((/* implicit */unsigned long long int) -1584941307))))) ? (arr_32 [i_10] [(_Bool)1] [i_12]) : (arr_31 [i_10] [i_10] [i_10])))) ? (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_12))))) ? (((((/* implicit */_Bool) 8159100964539992146ULL)) ? (((/* implicit */int) arr_30 [i_11])) : (((/* implicit */int) (unsigned short)16657)))) : (((((/* implicit */_Bool) arr_35 [i_12] [i_12] [i_11] [i_10])) ? (((/* implicit */int) var_13)) : (arr_32 [i_10] [i_10] [i_10]))))) : (((/* implicit */int) (unsigned short)16661))));
                    var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? ((((!(((/* implicit */_Bool) arr_33 [i_11] [i_11])))) ? (((((/* implicit */_Bool) (unsigned short)17156)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1991951684694952446ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1991951684694952473ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)19819))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 2047)) ? (1606818700) : (((/* implicit */int) (unsigned char)142)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 25; i_13 += 2) 
                    {
                        var_39 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26611))) < (12090135387750878200ULL))))));
                        var_40 = ((/* implicit */unsigned char) 1991951684694952470ULL);
                        arr_40 [i_11] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) ? (-686891091) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) -686891074)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (_Bool)1)))) : (arr_38 [i_10] [i_10] [i_10] [i_10])));
                    }
                    arr_41 [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) max((var_8), (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        arr_42 [i_10] = ((/* implicit */unsigned short) 686891086);
        var_41 = ((/* implicit */unsigned char) arr_38 [i_10] [i_10] [i_10] [i_10]);
        var_42 = ((((-686891048) ^ (((/* implicit */int) arr_33 [i_10] [i_10])))) | (((((/* implicit */int) arr_33 [i_10] [i_10])) | (((/* implicit */int) arr_33 [i_10] [i_10])))));
    }
    var_43 = ((/* implicit */unsigned char) ((unsigned short) var_14));
}
