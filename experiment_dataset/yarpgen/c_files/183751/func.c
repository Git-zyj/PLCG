/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183751
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
    var_15 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) var_0)) + (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        arr_2 [(short)3] [(unsigned short)4] = ((unsigned short) (signed char)127);
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+((~(arr_1 [i_0])))))) ? (((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [(signed char)2] [11LL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)8] [i_0]))) ^ (arr_1 [i_0])))) : (((unsigned long long int) arr_1 [(unsigned char)0])))) : (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_1 [i_0]))) ^ (((((/* implicit */_Bool) arr_0 [(short)7] [1U])) ? (arr_1 [i_0]) : (arr_1 [i_0]))))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (min((arr_1 [(short)2]), (arr_1 [(short)1]))) : (((((/* implicit */_Bool) arr_0 [5LL] [i_0])) ? (arr_1 [(short)11]) : (arr_1 [(unsigned char)11])))))) ? (((arr_1 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)6168)) << (((((/* implicit */int) (signed char)127)) - (125))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned int) (_Bool)1));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_18 -= max((arr_5 [(_Bool)1] [(_Bool)1] [(signed char)4]), ((+(((arr_4 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1] [i_1]))) : (arr_5 [(signed char)5] [i_0] [i_1]))))));
            arr_6 [6ULL] = ((/* implicit */unsigned int) min((max((arr_1 [i_0]), (arr_1 [6LL]))), (arr_1 [i_0])));
        }
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((max((arr_4 [i_2]), (arr_4 [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [(signed char)9])) != (((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))) : (min((((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_2] [i_0])) != (arr_7 [i_0] [(signed char)3])))), (max((((/* implicit */int) arr_8 [i_0] [(signed char)4])), (arr_7 [i_0] [(_Bool)0]))))))))));
            arr_11 [i_0] [i_2] [(_Bool)0] |= ((/* implicit */signed char) ((unsigned short) max((arr_0 [i_0] [4ULL]), (arr_0 [i_0] [i_0]))));
            var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_0] [i_0]))) ? ((~(((/* implicit */int) arr_8 [i_0] [i_2])))) : (min((((/* implicit */int) arr_8 [i_0] [i_2])), (arr_7 [i_0] [i_2])))));
            var_21 = ((/* implicit */unsigned int) (!(((((/* implicit */int) min((arr_10 [i_0] [i_2]), (arr_10 [i_0] [i_2])))) != (((((/* implicit */int) arr_4 [i_2])) ^ (arr_7 [(signed char)12] [i_2])))))));
        }
    }
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
    {
        arr_16 [(unsigned char)9] [(unsigned short)0] &= (-(((unsigned int) arr_1 [i_3])));
        arr_17 [(signed char)7] = ((/* implicit */unsigned char) (!((((_Bool)1) || (((/* implicit */_Bool) (signed char)123))))));
        var_22 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (short)-7265)) : (((/* implicit */int) (_Bool)1))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((arr_12 [i_3]), (((/* implicit */unsigned int) arr_0 [(signed char)8] [i_3])))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (arr_7 [i_3] [i_3]) : (arr_7 [i_3] [i_3]))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_3] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [(signed char)1]))) : (max((arr_1 [i_3]), (((/* implicit */long long int) arr_8 [i_3] [(unsigned short)8])))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)110))))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
    {
        var_24 = ((((/* implicit */int) min((arr_19 [i_4] [(unsigned char)5]), (arr_19 [(unsigned short)7] [i_4])))) | (((/* implicit */int) min((arr_19 [i_4] [i_4]), (arr_19 [i_4] [i_4])))));
        arr_21 [(signed char)8] [i_4] = ((/* implicit */long long int) (+(arr_12 [(short)0])));
        arr_22 [i_4] &= ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-123)) ? (1109993614U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1))))))) ? (3080846205U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
        var_25 = ((/* implicit */_Bool) min(((short)21312), ((short)-23743)));
    }
}
