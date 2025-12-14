/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13544
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
    var_20 = var_1;
    var_21 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)73))))), (min((var_12), (((/* implicit */long long int) var_8))))))));
    var_22 = max((((/* implicit */long long int) (signed char)85)), (((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */long long int) var_13)), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)91))) == (var_3))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_7)))) ? (var_8) : (arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_0 [i_0])) : (7364232083835795707LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 6309266026572541206LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_1 [i_0]))))))) : (max((((/* implicit */long long int) arr_0 [i_0])), (max((var_3), (var_12)))))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_1 [i_0 - 1])))), (((arr_0 [i_0]) + (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-80642831)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -5168866668713282198LL))))) : (arr_0 [i_0]))) : (max((arr_0 [i_0]), (arr_0 [i_0])))));
        var_24 = (i_0 % 2 == zero) ? (((/* implicit */long long int) max((((min((((/* implicit */int) var_10)), (arr_0 [i_0]))) << (((arr_0 [i_0]) - (1163208874))))), (((/* implicit */int) ((signed char) (_Bool)1)))))) : (((/* implicit */long long int) max((((((min((((/* implicit */int) var_10)), (arr_0 [i_0]))) + (2147483647))) << (((((((arr_0 [i_0]) + (1163208874))) + (603894009))) - (17))))), (((/* implicit */int) ((signed char) (_Bool)1))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                var_25 = ((/* implicit */long long int) min((var_25), (((((/* implicit */_Bool) min((min((arr_6 [i_2] [14] [i_2]), (arr_3 [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4232391024U)))))))) ? (((/* implicit */long long int) max((arr_3 [i_0 + 3]), (arr_3 [i_0 + 2])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_2] [i_0])) ? (var_18) : (((/* implicit */unsigned int) 80642831))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (var_16))) : (6787649096950925591LL)))))));
                arr_7 [i_2] [i_0] [i_0 - 2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((arr_0 [i_0]), (arr_0 [i_0])))), (arr_3 [i_0])));
                var_26 = ((/* implicit */unsigned int) min((var_26), (min((((/* implicit */unsigned int) var_11)), ((+(arr_3 [i_0 + 1])))))));
            }
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
            {
                arr_12 [i_0] [i_0] [i_3] [0] &= (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_3] [i_1 - 1] [i_3])))))) : (((((/* implicit */_Bool) arr_6 [i_3] [i_1 - 1] [i_3])) ? (arr_6 [i_3] [i_1 - 1] [i_3]) : (arr_6 [i_3] [i_1 - 1] [i_3]))));
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) 273414240U)) && (arr_1 [i_0 + 2])))), (arr_0 [i_3])))) < ((((_Bool)0) ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 - 1]))))))));
                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (-((~(((/* implicit */int) arr_1 [i_1 - 1])))))))));
            }
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
            {
                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((4476544154636002133LL), (((/* implicit */long long int) arr_10 [i_0] [i_0 + 2] [i_0 + 2] [9LL]))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_5 = 2; i_5 < 14; i_5 += 4) 
                {
                    arr_17 [i_5] [i_0] [7] [i_5 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_13 [i_5 + 2] [i_0] [i_0] [i_0])))))));
                    /* LoopSeq 2 */
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
                    {
                        var_30 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (arr_3 [i_0 - 2])));
                        var_31 = ((/* implicit */unsigned int) -480696628);
                        arr_20 [i_1] [i_1 - 1] [i_4] [i_6] [i_0] [i_5] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_15 [i_0]))))));
                    }
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
                    {
                        arr_24 [i_7] [i_4] [i_0] [i_4] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [(unsigned short)8] [i_1 - 1] [i_7] [i_5])) ? (((/* implicit */int) arr_5 [i_5] [i_7] [i_4] [i_5])) : (2147483647)));
                        var_32 -= ((arr_1 [i_0 - 2]) ? (8969500146869053452LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_4] [i_5 + 1]))) > (arr_23 [i_5] [i_5] [i_4] [i_5] [0U]))))));
                    }
                    var_33 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [i_1 - 1] [i_1] [i_1]))));
                }
                for (signed char i_8 = 2; i_8 < 13; i_8 += 3) 
                {
                    var_34 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((signed char) arr_25 [i_4] [i_1 - 1] [i_4] [i_0 + 1]))), (2076752937U)));
                    var_35 |= ((/* implicit */unsigned char) max((max((max((((/* implicit */long long int) var_18)), (var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_18)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65532))) : (-4206446457292021638LL)))) ? (max((-3599883376624175642LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) arr_1 [i_1]))))))))));
                }
                var_36 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)123)) ? (3960799732U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (min((var_19), (arr_16 [i_0])))))) ? (max((((/* implicit */long long int) max((arr_5 [(unsigned char)14] [i_0] [i_0] [(unsigned char)14]), (((/* implicit */unsigned short) arr_18 [10LL] [15LL] [i_4] [i_4]))))), (((4476544154636002129LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59819))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0])))))));
            }
            for (unsigned short i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
            {
                var_37 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_15 [i_9]), (arr_15 [i_9]))))));
                var_38 -= ((((/* implicit */_Bool) var_14)) ? (max((arr_25 [i_0] [i_0] [i_1 - 1] [i_0 + 2]), (arr_25 [i_0] [i_0] [i_1 - 1] [i_0 + 3]))) : (((((/* implicit */_Bool) var_2)) ? (((var_10) ? (3599883376624175642LL) : (var_3))) : (((/* implicit */long long int) var_8)))));
            }
            arr_30 [i_0] = ((/* implicit */_Bool) ((unsigned char) min((((((/* implicit */_Bool) 3471608691U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2]))) : (-3599883376624175637LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [8LL] [i_0]))))))));
            var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_0 - 2]))));
        }
    }
    for (long long int i_10 = 0; i_10 < 13; i_10 += 2) 
    {
        var_40 |= ((/* implicit */unsigned short) (_Bool)1);
        var_41 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_27 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_10] [i_10] [i_10] [i_10]))) : (var_15))) | (max((var_2), (((/* implicit */long long int) var_4))))));
    }
    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
    {
        arr_37 [i_11] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_4 [16LL])) : (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) arr_9 [(signed char)6] [16U] [(signed char)6] [4LL])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_17)))) : (((/* implicit */int) ((((/* implicit */unsigned int) 2147483647)) > (arr_6 [8U] [16LL] [8U]))))))));
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 12; i_12 += 4) 
        {
            for (int i_13 = 0; i_13 < 12; i_13 += 2) 
            {
                {
                    arr_45 [i_11] = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_12]))));
                    arr_46 [(_Bool)1] [0] [i_13] = ((/* implicit */unsigned short) max((var_16), (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)65527)), (arr_11 [i_12]))))));
                }
            } 
        } 
    }
    for (int i_14 = 0; i_14 < 16; i_14 += 2) 
    {
        var_42 = ((/* implicit */_Bool) max((((((((((/* implicit */_Bool) 2147483647)) ? (arr_25 [i_14] [i_14] [(unsigned char)9] [i_14]) : (var_15))) + (9223372036854775807LL))) >> (((/* implicit */int) arr_10 [i_14] [i_14] [i_14] [1])))), (max((5271865259498620608LL), (((/* implicit */long long int) ((var_4) & (((/* implicit */int) arr_1 [i_14])))))))));
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 16; i_15 += 3) 
        {
            for (unsigned short i_16 = 0; i_16 < 16; i_16 += 4) 
            {
                {
                    arr_56 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_14]))))) & (((((/* implicit */_Bool) var_0)) ? (max((1070976725121035695LL), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) max((arr_27 [12LL] [12LL] [i_16] [i_16] [i_15]), (var_4))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 1; i_17 < 13; i_17 += 2) 
                    {
                        arr_60 [i_17 + 1] [10] [i_14] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_14] [i_15] [2U] [i_14] [i_17 + 3]))))) << (((var_18) - (1713234873U)))));
                        arr_61 [2] [i_15] [i_15] [i_14] [i_14] = ((((/* implicit */_Bool) ((unsigned char) min(((signed char)-37), (((/* implicit */signed char) arr_58 [6LL] [i_15] [i_16] [i_17] [i_16] [i_14])))))) ? (min((min((arr_28 [i_16] [i_16] [i_15] [i_14]), (((/* implicit */long long int) (_Bool)1)))), (min((-3599883376624175642LL), (((/* implicit */long long int) arr_0 [i_16])))))) : (((((/* implicit */_Bool) arr_28 [i_16] [i_15] [i_17 + 1] [i_15])) ? (arr_28 [i_14] [i_14] [i_17 + 1] [3LL]) : (arr_28 [i_15] [5LL] [i_17 - 1] [i_15]))));
                        arr_62 [i_17] [i_16] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_26 [i_14] [i_16] [(unsigned char)8] [i_14] [i_14]), (((/* implicit */int) arr_5 [i_17 - 1] [i_14] [i_14] [i_14]))))) ? (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)16]))) / (3599883376624175643LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))));
                        var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) ((max((var_3), (min((arr_57 [i_14] [i_15] [i_14] [i_17]), (((/* implicit */long long int) var_17)))))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_16]))) : (var_18)))))))))))));
                    }
                }
            } 
        } 
        arr_63 [i_14] = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) arr_14 [i_14] [i_14] [i_14])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)57)))), ((-(((/* implicit */int) arr_10 [i_14] [7] [i_14] [i_14])))))) >= (((/* implicit */int) max((arr_10 [i_14] [i_14] [i_14] [i_14]), (arr_10 [i_14] [i_14] [i_14] [i_14]))))));
        var_44 = ((/* implicit */long long int) max((var_44), (min((((((/* implicit */_Bool) arr_22 [i_14] [i_14] [6] [i_14] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_14] [i_14] [i_14] [12LL] [12LL] [i_14]))) : (((((/* implicit */_Bool) (signed char)-46)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_14]))))))), (((/* implicit */long long int) var_18))))));
        var_45 = max((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_54 [(_Bool)1] [(_Bool)1] [i_14]))))))), (((((/* implicit */_Bool) arr_19 [i_14] [i_14] [i_14] [i_14] [12LL])) ? (((/* implicit */int) arr_19 [i_14] [i_14] [i_14] [i_14] [i_14])) : (((/* implicit */int) arr_19 [i_14] [i_14] [i_14] [i_14] [i_14])))));
    }
}
