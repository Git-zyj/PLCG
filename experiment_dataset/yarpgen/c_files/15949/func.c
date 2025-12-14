/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15949
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) (((((!(((/* implicit */_Bool) arr_0 [i_0])))) && (((/* implicit */_Bool) arr_0 [i_0])))) || (((((((/* implicit */_Bool) 18446744073709551614ULL)) || (((/* implicit */_Bool) (short)-32206)))) || (((/* implicit */_Bool) 13001285241199812817ULL))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        arr_9 [i_0] [i_0] [i_0] [5ULL] [i_1] [i_3] = arr_7 [i_0] [(unsigned char)11];
                        arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3] [(unsigned short)1] [i_3])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1])))))));
                    }
                    arr_11 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_7 [i_0] [i_0]), (arr_8 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_1 [(_Bool)1]) : (313982157U))) + (((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 4; i_4 < 12; i_4 += 1) 
                    {
                        for (long long int i_5 = 4; i_5 < 12; i_5 += 3) 
                        {
                            {
                                arr_17 [i_5] [i_2] [i_5] = ((/* implicit */int) arr_15 [i_0] [i_0] [(_Bool)1] [i_4] [i_5]);
                                arr_18 [i_0] [i_1] [i_2] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) var_9))))), ((signed char)111)))) ? (((((/* implicit */_Bool) (unsigned short)52165)) ? (((/* implicit */unsigned long long int) 4294967278U)) : (6809053120173625527ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_19 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned char)6] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_13 [6] [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6317)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)23585))))) ? ((~(arr_3 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_14 [i_0])) ? (((/* implicit */int) (short)-18886)) : (((/* implicit */int) arr_5 [8U] [i_0] [i_0])))))))));
        arr_20 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [(signed char)9] [(signed char)9] [(signed char)9] [(signed char)9] [i_0] [i_0]))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_0))))) * (arr_3 [i_0])))));
    }
    for (int i_6 = 4; i_6 < 22; i_6 += 2) 
    {
        var_14 = ((((((/* implicit */int) arr_22 [i_6 - 1] [i_6])) > (((/* implicit */int) arr_22 [i_6 + 1] [i_6])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_6 + 1] [i_6 - 2]))))) : ((-(((/* implicit */int) arr_22 [i_6 + 1] [i_6])))));
        var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_9)), ((unsigned short)5)))) ? (max((((/* implicit */long long int) (signed char)16)), (var_7))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) ((max((((/* implicit */unsigned int) arr_23 [i_6])), (var_1))) >> ((((_Bool)0) ? (arr_23 [i_6]) : (((/* implicit */int) (unsigned short)7)))))))));
        var_16 |= ((/* implicit */short) min((min((arr_21 [i_6 + 1]), (arr_21 [i_6 + 2]))), (((/* implicit */unsigned int) ((unsigned short) arr_21 [i_6 - 3])))));
        arr_24 [(_Bool)1] = min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_6])))))) == (0U)))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_23 [i_6])) ^ (var_1)))) ? ((~(arr_21 [i_6]))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_21 [i_6]))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_29 [i_7] = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) arr_26 [i_7])))))))), (min((arr_25 [i_7]), (((((/* implicit */_Bool) (unsigned short)63)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (short)-18881))))))));
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) arr_31 [i_9] [i_7] [i_9])) : (((/* implicit */int) (signed char)5))))) ? (((/* implicit */int) (!(arr_31 [i_9] [10U] [i_7])))) : (((/* implicit */int) var_0))))) ? (max((((/* implicit */unsigned int) arr_26 [i_8])), (4294967286U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)65528), (((/* implicit */unsigned short) (short)-14807))))))));
                    arr_36 [i_7] [i_7] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((var_6) ? (((/* implicit */int) (_Bool)1)) : (arr_27 [i_7])))), (arr_30 [i_7] [i_7])))) ? (((var_6) ? (arr_30 [i_7] [i_8]) : (arr_30 [i_7] [i_9]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)2040)) || (((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) var_11))))))));
                    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((signed char)74), (((/* implicit */signed char) (_Bool)1)))))));
                    arr_37 [i_9] [i_8] [i_9] = ((/* implicit */unsigned char) max((2147483632), ((~(((int) (_Bool)1))))));
                }
            } 
        } 
        var_20 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_25 [i_7])) ? (max((((/* implicit */unsigned long long int) var_6)), (arr_34 [i_7] [i_7] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
    }
    var_21 = var_4;
    var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) max((var_0), (var_0)))))));
}
