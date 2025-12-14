/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171601
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
    var_14 = ((/* implicit */unsigned int) var_11);
    var_15 |= ((/* implicit */unsigned long long int) ((signed char) -1126358047));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_16 = ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-30647))))) < (6177740324711746149ULL))) ? (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (signed char)59)))), (((/* implicit */int) arr_1 [i_0]))))) : (var_6));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (long long int i_3 = 4; i_3 < 13; i_3 += 2) 
                {
                    {
                        arr_12 [(signed char)6] [10] [10] [i_3] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), ((((_Bool)1) ? (min((1), (((/* implicit */int) arr_7 [i_3] [i_2])))) : (((/* implicit */int) (signed char)-21))))));
                        var_17 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_1] [i_1] [2] [i_1 + 4] [i_1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1 + 4] [(signed char)8]))) & (var_6)))));
                        arr_13 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_7 [i_0] [i_0]);
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */signed char) arr_11 [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (signed char i_4 = 3; i_4 < 19; i_4 += 1) 
    {
        var_18 &= ((/* implicit */int) ((((/* implicit */_Bool) 6177740324711746168ULL)) ? (-7612763239349347219LL) : (((/* implicit */long long int) 15))));
        var_19 = (+(((/* implicit */int) arr_15 [i_4 - 3])));
        arr_17 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (signed char)-86))))) <= (((/* implicit */int) ((((/* implicit */int) arr_16 [i_4] [6])) <= (((/* implicit */int) arr_16 [i_4] [i_4])))))));
        var_20 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_4])) && (((/* implicit */_Bool) arr_16 [i_4 - 3] [i_4 + 3]))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_4] [i_4 - 3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_4] [i_4])) ? (((/* implicit */int) (short)15986)) : (((/* implicit */int) arr_16 [i_4] [4ULL]))))) : (-4290595270724411251LL)));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_21 [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) (signed char)-126))))) ? ((-((+(9006649498927104ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [1]))));
        arr_22 [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */unsigned int) -506769606)) : (3440821312U))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5] [i_5])))));
        var_22 = ((/* implicit */short) max((var_22), (min((min(((short)10515), (((/* implicit */short) arr_19 [i_5])))), (((/* implicit */short) max((arr_19 [i_5]), (arr_19 [i_5]))))))));
        var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_5])) ? (arr_20 [14ULL] [(signed char)8]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_5])) << (((((/* implicit */int) arr_18 [i_5])) - (16993)))))))) & (((((/* implicit */_Bool) 75191582)) ? (((((/* implicit */_Bool) 8116771738571834566ULL)) ? (72057593501057024ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)24488)))))))));
    }
}
