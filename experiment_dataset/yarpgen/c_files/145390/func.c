/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145390
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-7)) | (((/* implicit */int) var_10))))) < (var_6)));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0 + 1] [i_0 + 1] = ((((/* implicit */int) (short)28767)) & (((/* implicit */int) (unsigned short)65518)));
        arr_3 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0 - 1]))))) <= (((18446744073709551601ULL) - (((/* implicit */unsigned long long int) -1901031256))))));
        var_12 *= ((/* implicit */unsigned int) min((arr_0 [i_0 + 1] [i_0 - 1]), (max((((((/* implicit */unsigned long long int) 24688557U)) + (var_6))), (max((((/* implicit */unsigned long long int) 5199621684525682290LL)), (arr_0 [i_0 + 1] [i_0 + 1])))))));
        var_13 = ((/* implicit */unsigned int) ((short) max((arr_0 [i_0 + 1] [i_0 - 1]), (((/* implicit */unsigned long long int) var_10)))));
        arr_4 [i_0 - 1] = ((/* implicit */unsigned char) var_5);
    }
    for (unsigned int i_1 = 2; i_1 < 11; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) var_4);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 10; i_2 += 2) 
        {
            for (unsigned int i_3 = 1; i_3 < 8; i_3 += 4) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned long long int) var_0);
                    var_16 |= ((/* implicit */unsigned char) ((signed char) max((((/* implicit */int) (signed char)71)), (((((/* implicit */_Bool) (short)-32746)) ? (((/* implicit */int) arr_13 [i_2 + 1])) : (-15))))));
                    arr_15 [i_2] = min((var_7), (((/* implicit */unsigned int) var_0)));
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max((((/* implicit */int) (short)12392)), (((int) arr_10 [(short)6])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-65))));
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max((arr_10 [i_4]), (((((/* implicit */_Bool) arr_20 [i_1 - 1] [i_5] [i_5])) && (((/* implicit */_Bool) arr_17 [i_1 - 2])))))))));
                    arr_22 [i_1 - 1] [i_1 - 1] [i_1 - 2] = ((/* implicit */int) (~(1821444522U)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (+(arr_24 [i_6] [i_6]))))));
        /* LoopSeq 1 */
        for (int i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_10))));
            arr_29 [i_6] [i_7] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)251))));
            var_22 = ((/* implicit */unsigned char) arr_24 [i_7] [i_7]);
            var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_6] [i_7])) && (((/* implicit */_Bool) (signed char)-10)))))));
        }
    }
    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
    {
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_30 [i_8] [i_8])) ? (arr_30 [i_8] [i_8]) : (arr_30 [i_8] [i_8]))) != (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_8]))) : (var_2))), (((((/* implicit */_Bool) arr_30 [i_8] [i_8])) ? (arr_30 [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))))));
        arr_32 [i_8] [i_8] = ((/* implicit */int) ((((((/* implicit */_Bool) -4339590198162207480LL)) && (((/* implicit */_Bool) 226125263)))) && (((/* implicit */_Bool) (unsigned char)42))));
    }
    var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8))) : (var_7)));
    var_26 = ((/* implicit */unsigned int) max((var_26), (max((var_3), (max((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (var_7))), (((((/* implicit */_Bool) var_0)) ? (var_3) : (var_7)))))))));
}
