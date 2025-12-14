/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180561
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
    for (long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) >> (((((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])) - (17873)))));
        var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((6367880555540085399ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])))))) ? (((/* implicit */int) max((((/* implicit */short) arr_2 [i_0 + 1])), (arr_1 [i_0] [i_0 + 1])))) : (((/* implicit */int) (!(arr_2 [i_0]))))));
        var_21 ^= ((/* implicit */unsigned short) min((((/* implicit */int) var_12)), ((+(((/* implicit */int) (signed char)-7))))));
        var_22 = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) -3455951058365023153LL)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (_Bool)1)))))) | ((-(((/* implicit */int) arr_2 [i_0]))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (unsigned int i_3 = 2; i_3 < 14; i_3 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-10)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)2)))))))) ? (arr_5 [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)2)))));
                    arr_13 [i_3] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) == (arr_10 [i_1] [i_1] [i_1])))), (min((var_1), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) var_7))));
                    var_24 = ((/* implicit */short) (+(((/* implicit */int) (!(((((/* implicit */long long int) -1)) >= (4049444126901813173LL))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 4; i_4 < 20; i_4 += 3) 
    {
        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    arr_21 [i_4] = ((/* implicit */long long int) arr_19 [i_4] [i_4] [i_4] [i_5]);
                    arr_22 [i_4] [i_5] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(var_9))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)120)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4] [i_6]))))))))) ? (arr_19 [10ULL] [i_4] [i_5] [3LL]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) arr_14 [i_4])))))));
                    var_25 = ((/* implicit */signed char) min((((unsigned long long int) arr_16 [i_4] [i_5])), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_16 [i_4] [i_4])), (var_2))))));
                }
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_17 [i_4 - 1])) < (((/* implicit */int) arr_14 [i_4]))))) - (((((/* implicit */int) var_13)) + (((/* implicit */int) arr_14 [i_4]))))));
            }
        } 
    } 
}
