/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170022
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-8898)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)74))) : (((((/* implicit */_Bool) (unsigned char)175)) ? (13894822211684414770ULL) : (((/* implicit */unsigned long long int) -1))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) arr_1 [i_0])))))) + (((((/* implicit */_Bool) arr_1 [i_0])) ? (-4028593997267622680LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
                        arr_10 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_3])) ? (((unsigned int) (signed char)82)) : (((/* implicit */unsigned int) arr_9 [i_2 + 1]))));
                        var_14 = ((/* implicit */int) ((unsigned short) var_1));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 2; i_4 < 12; i_4 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_5 = 4; i_5 < 15; i_5 += 1) 
        {
            var_15 = ((/* implicit */int) min((var_15), (max((((((/* implicit */_Bool) arr_14 [i_5] [i_4 - 2] [9ULL])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))), (max((((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) arr_3 [i_5])) : (((/* implicit */int) var_3)))), (((/* implicit */int) arr_3 [i_4]))))))));
            var_16 = ((/* implicit */short) (-(((/* implicit */int) (signed char)74))));
        }
        var_17 += ((/* implicit */int) (_Bool)1);
        var_18 = ((/* implicit */_Bool) var_6);
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_21 [i_7] [i_6] [i_6] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-31954)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_6))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (var_10)))))))) ? (((((/* implicit */int) arr_17 [i_4 + 4] [i_4 + 4] [i_4 + 3])) >> (((((/* implicit */int) arr_17 [i_4 - 1] [i_4 + 2] [i_4 + 3])) - (79))))) : (((/* implicit */int) var_4))));
                    arr_22 [11U] [11U] [i_7] [i_7] = ((/* implicit */unsigned long long int) var_4);
                    arr_23 [i_4] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_7 [i_4] [i_4 + 1]), (arr_7 [i_4 - 1] [i_4 + 1])))) ? (((((/* implicit */_Bool) ((signed char) (unsigned char)0))) ? ((-(((/* implicit */int) (short)-31968)))) : ((-(((/* implicit */int) arr_1 [i_7])))))) : ((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)4188)) < (((/* implicit */int) (signed char)-72)))))))));
                }
            } 
        } 
        arr_24 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4 + 1] [i_4])) ? (((/* implicit */int) arr_7 [i_4] [i_4 + 1])) : (((/* implicit */int) arr_7 [(signed char)16] [i_4 + 4]))))) ? (max((4050409567141635871ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_7 [i_4 - 1] [i_4 - 1]))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) 
    {
        var_19 *= ((/* implicit */short) (+(max((arr_25 [i_8] [i_8]), (((/* implicit */unsigned long long int) arr_1 [i_8]))))));
        arr_28 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-31954)) ? (((/* implicit */int) ((signed char) var_3))) : (var_11)));
        var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_8] [i_8]))) : ((~(16ULL)))));
        arr_29 [14U] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3435014283105595811LL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6352586168780907413LL)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (short)-32706))))) ? (((/* implicit */int) arr_11 [i_8])) : (((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */int) (short)-26064)))))) : (((/* implicit */int) ((((/* implicit */int) var_4)) >= (arr_9 [i_8]))))));
        var_21 *= ((/* implicit */unsigned short) var_7);
    }
}
