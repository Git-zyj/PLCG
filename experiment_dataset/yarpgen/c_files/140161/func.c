/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140161
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
    var_12 ^= var_4;
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        var_13 += ((/* implicit */int) arr_0 [i_0 + 1]);
        var_14 = var_7;
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_0 + 1])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        var_15 = ((/* implicit */_Bool) ((arr_0 [i_0]) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 10)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? ((((_Bool)0) ? (-2020870042) : (1545014705))) : (min((2020870026), (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_0 [i_0]))));
        var_16 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_0 [i_0]))));
    }
    for (int i_1 = 3; i_1 < 21; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) ((unsigned char) arr_4 [i_1] [i_1]));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 3; i_3 < 21; i_3 += 4) 
            {
                for (int i_4 = 1; i_4 < 21; i_4 += 1) 
                {
                    {
                        arr_13 [i_1] [i_3 - 1] [i_2] [i_1] = ((/* implicit */unsigned short) arr_6 [i_3] [i_1]);
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_1]) % (arr_5 [i_1])))) ? (((/* implicit */unsigned long long int) max((arr_5 [i_1]), (-8)))) : (min((4611686018427256832ULL), (((/* implicit */unsigned long long int) arr_5 [i_1]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 2) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_4 [i_6 + 4] [i_1 - 2]))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)57479)) >= (((/* implicit */int) var_1))))), (min((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])), (arr_10 [i_5] [i_5] [i_6] [i_1])))))));
                    arr_18 [i_1] [i_1] [i_6 - 1] = max((arr_16 [i_5] [i_5] [i_1] [i_5]), (min((min((((/* implicit */int) arr_4 [i_1] [i_6 + 3])), (arr_5 [i_1]))), (((arr_4 [i_6 + 1] [i_5]) ? (1893646311) : (((/* implicit */int) (short)-17444)))))));
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (arr_6 [i_1] [i_1])))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (226199754)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [i_6] [i_5] [i_1]))) : (((unsigned long long int) arr_8 [i_1] [i_1] [i_1])))) : (min((arr_11 [i_6] [i_6]), (((/* implicit */unsigned long long int) min(((short)0), ((short)-17446))))))));
                        arr_21 [i_1] = ((/* implicit */unsigned short) min((((arr_9 [i_1] [i_6] [i_6]) ? (arr_5 [i_1]) : (var_2))), (((/* implicit */int) ((unsigned short) (short)-17444)))));
                        arr_22 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 10)) && (((/* implicit */_Bool) (unsigned short)0)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((((/* implicit */_Bool) var_4)) ? (arr_14 [i_6] [i_7]) : (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_7])))) : (min((arr_14 [i_1] [i_1]), (((/* implicit */unsigned long long int) (_Bool)0)))))))));
                        arr_23 [i_1] [i_5] [i_1] [i_7] = ((((/* implicit */_Bool) ((arr_5 [i_1]) + (arr_5 [i_1])))) ? (((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)149)) && (((/* implicit */_Bool) -1346535860)))), (min(((_Bool)1), (arr_4 [i_1] [i_5])))))) : (min((arr_6 [i_1] [i_1]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_5] [i_5]))))))));
                    }
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) arr_9 [i_1] [i_1] [i_1]);
    }
}
