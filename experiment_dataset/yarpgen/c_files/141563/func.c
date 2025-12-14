/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141563
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
    var_19 = ((/* implicit */unsigned short) ((1488978678U) & (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)15)))))))));
    var_20 = ((/* implicit */short) ((((/* implicit */int) (short)-19085)) - (((/* implicit */int) (unsigned short)37492))));
    var_21 = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)-19088)) : (((/* implicit */int) (short)-10166)))) & (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (short)-19097)))))))));
    var_22 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (((/* implicit */short) var_16)))))) : (var_12)))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) 15913007731592588205ULL)) && (((/* implicit */_Bool) var_1))))))), (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0])))) << (((((/* implicit */int) min((((/* implicit */unsigned short) (short)-26025)), (var_2)))) - (9277)))))));
        var_23 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0])))) && (((((/* implicit */int) (_Bool)1)) == (2147483647))))) || (((/* implicit */_Bool) arr_2 [i_0]))));
        var_24 *= ((/* implicit */_Bool) arr_2 [i_0]);
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)-6542), ((short)-10166)))) ? (min((arr_4 [i_1 + 2] [i_1 + 1]), (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned short)45212)) : (((/* implicit */int) arr_1 [i_1 + 2])))))) : (((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (signed char)73)) : (1578979428))) ^ (((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) var_10))))))));
            arr_7 [i_0] = ((/* implicit */long long int) arr_4 [i_0] [i_0]);
        }
        for (unsigned int i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((unsigned int) ((arr_2 [i_2 + 1]) << (((arr_2 [i_2 + 2]) - (2910798115305524176ULL)))))))));
            var_26 = ((/* implicit */short) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)17032)) : (((/* implicit */int) (unsigned short)28029))))), (min((108939099U), (((/* implicit */unsigned int) 0)))))) * (((/* implicit */unsigned int) ((/* implicit */int) min((((var_3) != (((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */int) (unsigned char)182)) == (((/* implicit */int) (short)6))))))))));
        }
        for (short i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            var_27 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)15011), ((short)-19097))))) | (((((/* implicit */_Bool) 8388607LL)) ? (((/* implicit */unsigned long long int) min((3337387937U), (((/* implicit */unsigned int) (signed char)-18))))) : (((13904007744359496967ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_13 [i_0] [i_0]);
        }
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        var_28 = ((/* implicit */unsigned long long int) ((arr_0 [i_4]) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_4] [i_4])) ? (var_15) : (((/* implicit */int) (signed char)12)))))));
        /* LoopSeq 3 */
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            var_29 = ((((/* implicit */_Bool) (+(arr_2 [i_5])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-19097)) || (((/* implicit */_Bool) (short)19097))))) : (((/* implicit */int) arr_16 [i_5])));
            arr_21 [i_4] [i_4] = ((/* implicit */short) var_10);
        }
        for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            arr_24 [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_18))));
            arr_25 [i_4] [i_4] [i_4] = ((/* implicit */short) 63U);
        }
        for (int i_7 = 3; i_7 < 11; i_7 += 4) 
        {
            var_30 = ((/* implicit */_Bool) 4294967233U);
            var_31 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_9 [i_7 - 1] [i_7 - 3] [i_7 + 2])) : (((/* implicit */int) arr_9 [i_7 - 1] [i_7 - 3] [i_7 + 2]))));
        }
    }
    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) 
    {
        arr_30 [i_8] = ((/* implicit */long long int) ((min((var_15), (((/* implicit */int) arr_18 [i_8])))) >= ((-(((/* implicit */int) arr_18 [i_8]))))));
        arr_31 [i_8] = ((/* implicit */long long int) ((2147483647) >= (((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_27 [i_8]))) || (((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) arr_28 [i_8]))))))))));
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
    {
        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_9])) ? (((/* implicit */unsigned long long int) arr_4 [i_9] [i_9])) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28071))) : (2061584302080ULL)))));
        arr_35 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (short)-23432))) - (var_18))) & (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    }
}
