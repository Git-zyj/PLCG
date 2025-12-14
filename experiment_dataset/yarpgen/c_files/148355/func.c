/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148355
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_2);
        arr_4 [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) arr_2 [i_0]))))) : (3606423400U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 11; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_3] [i_1] [i_1] [i_2 + 2])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : ((~(((/* implicit */int) arr_5 [i_1] [i_1]))))));
                    arr_14 [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) 688543878U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)179))) : (3606423400U)))) : (var_5))), (arr_9 [(unsigned char)1] [i_2] [i_2])));
                    arr_15 [i_1] = (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_3]))) == (((((/* implicit */_Bool) (unsigned char)76)) ? (arr_7 [10LL] [10LL] [10LL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [i_1] [i_3] [i_1])))))))));
                }
            } 
        } 
        arr_16 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])))) ? (((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)179)))))))) - (((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)184))))) : ((~(2405296080U)))))));
    }
    for (unsigned int i_4 = 3; i_4 < 24; i_4 += 1) 
    {
        arr_19 [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 988553007U)) ? (688543878U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(signed char)11]))))))))));
        arr_20 [i_4] = ((/* implicit */unsigned short) max((((/* implicit */short) ((max((var_5), (((/* implicit */unsigned long long int) arr_18 [i_4] [i_4 - 3])))) < (((/* implicit */unsigned long long int) ((3606423418U) | (((/* implicit */unsigned int) arr_18 [16U] [i_4])))))))), (var_11)));
    }
    var_15 *= ((/* implicit */unsigned int) var_1);
    var_16 = ((/* implicit */unsigned int) var_10);
}
