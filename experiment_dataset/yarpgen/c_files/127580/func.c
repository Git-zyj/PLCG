/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127580
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
    for (short i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    var_12 = ((/* implicit */unsigned long long int) var_0);
                    var_13 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0] [i_1 + 1])) : (((/* implicit */int) arr_1 [i_2] [i_2]))))));
                    var_14 = var_9;
                }
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 22; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1 + 1] [i_1] [i_1] [(unsigned char)0])) ? (arr_13 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1]) : (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) max((arr_11 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]), (arr_11 [i_1] [i_1 + 2] [i_1] [i_1 + 2] [i_1 - 1])))))))));
                                var_16 |= ((/* implicit */short) min((((((/* implicit */_Bool) 1475599063U)) ? (2819368232U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_2)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 3224226287U)), (9223372036854775792LL)))) ? ((-(((/* implicit */int) (short)32764)))) : (((/* implicit */int) arr_3 [i_1 + 1])))))));
                                var_17 = ((/* implicit */unsigned long long int) 2819368214U);
                                var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) ((var_6) - (((/* implicit */unsigned long long int) arr_7 [i_5] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_5])) && (((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_4 - 1] [i_4])), (arr_2 [i_0])))))))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_5)), ((signed char)124)))), (arr_5 [i_0])))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_11)))) == (((int) (!(((/* implicit */_Bool) 1259312411U)))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    var_20 = ((/* implicit */short) max((1475599063U), (1475599078U)));
                    var_21 = ((/* implicit */short) ((max((14063443230688598142ULL), (((/* implicit */unsigned long long int) -9223372036854775792LL)))) >> (((max((min((((/* implicit */int) var_11)), (arr_13 [i_0] [i_1] [(_Bool)1] [i_6] [i_6]))), ((~(((/* implicit */int) var_8)))))) + (43)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        arr_19 [i_0] [i_1 - 1] [i_6] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_4 [i_1] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)203)))))) : (min((((/* implicit */unsigned long long int) -9223372036854775768LL)), (var_3))))), (((/* implicit */unsigned long long int) ((3601416822U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1 + 1] [i_1] [i_6] [i_0 - 2]))))))));
                        arr_20 [i_0] [i_1 + 1] [i_6] [i_6] [(unsigned short)4] = ((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (9223372036854775793LL))), (((/* implicit */long long int) (signed char)-119))));
                        var_22 |= arr_17 [i_0] [19ULL] [i_1] [(signed char)9] [i_7];
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) min((((2241025732U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_6] [i_0 - 4] [i_1 + 2]))))), (((/* implicit */unsigned int) arr_2 [i_7])))))));
                    }
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2819368234U)) ? (arr_16 [i_1]) : (((/* implicit */unsigned long long int) -9223372036854775794LL)))))))))))));
                    arr_21 [i_0] = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1]))) >= (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-7120230090826186099LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_18 [i_0 - 4] [i_1] [i_6] [i_0] [i_0]))))))) : (((((/* implicit */_Bool) max((arr_16 [i_6]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)5)), (9147343007221000869ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
                var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)250), (((/* implicit */unsigned char) arr_17 [i_0 - 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 2])))))) : (max((2819368216U), (((/* implicit */unsigned int) arr_12 [i_0 + 1] [i_1] [i_0 - 2] [i_0 + 1]))))));
                var_26 = ((/* implicit */unsigned short) arr_10 [i_1]);
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) min((((/* implicit */short) var_8)), (var_11)));
}
