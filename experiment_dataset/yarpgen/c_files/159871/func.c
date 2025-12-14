/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159871
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
    var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_2))))) : (var_4)))) | ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40))) | (9038075894162136067ULL)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (_Bool)1);
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))) ? (((arr_1 [(unsigned char)2] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) ((_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned short) arr_1 [i_0] [i_0])))))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (-1483844491) : (770957509)))) ? (((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (min((499011134), (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (unsigned short i_1 = 1; i_1 < 12; i_1 += 1) 
    {
        var_17 += ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (max((((/* implicit */unsigned int) -1792440003)), (max((((/* implicit */unsigned int) (unsigned char)107)), (703625U))))));
        var_18 = ((/* implicit */unsigned int) (((-(((((/* implicit */int) arr_1 [i_1] [i_1])) * (((/* implicit */int) (_Bool)0)))))) * (((((((/* implicit */int) arr_5 [i_1])) * (((/* implicit */int) arr_5 [(signed char)8])))) * (((/* implicit */int) arr_0 [i_1 - 1]))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_1 + 1])) ^ (((/* implicit */int) arr_0 [i_1 + 1]))));
            var_19 &= ((/* implicit */short) (((~(((/* implicit */int) arr_8 [i_1] [i_2])))) >= (((((/* implicit */_Bool) -658335072)) ? (((/* implicit */int) arr_5 [(signed char)2])) : (((/* implicit */int) (_Bool)0))))));
        }
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
        {
            arr_12 [i_3] = ((((/* implicit */int) (!((!(arr_10 [i_1] [i_1])))))) | (((/* implicit */int) ((max((((/* implicit */int) (unsigned short)65535)), (-787788637))) > (((/* implicit */int) ((1792440002) <= (((/* implicit */int) arr_7 [i_1] [i_1])))))))));
            arr_13 [8] [i_3] [i_1] = arr_7 [i_1 + 1] [i_3];
            var_20 += ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))), (((((/* implicit */_Bool) ((arr_10 [i_1] [i_1]) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_1]))))) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_1]))))));
            var_21 |= ((/* implicit */signed char) arr_10 [i_1] [i_3]);
        }
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
        {
            var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1 + 1])) ? (arr_6 [i_1 + 1]) : (arr_6 [i_1 - 1])));
            arr_17 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(short)0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_4]))) : (arr_14 [(signed char)5])))) ? (((/* implicit */int) arr_15 [i_1 - 1] [i_1 - 1] [i_1 - 1])) : (((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1))))));
            arr_18 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((arr_1 [(unsigned short)0] [(unsigned short)0]) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_4]))));
        }
        arr_19 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (((+(arr_6 [i_1]))) & (((/* implicit */unsigned int) 1792439996))))) ? (16026810216053870831ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)0)) == (((/* implicit */int) arr_7 [i_1] [i_1])))))))));
    }
}
