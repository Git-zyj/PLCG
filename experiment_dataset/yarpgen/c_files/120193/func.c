/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120193
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((max((((/* implicit */int) (unsigned char)239)), (1935224072))), (((/* implicit */int) (short)28911)))))));
    var_20 = ((/* implicit */unsigned char) var_17);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */short) arr_6 [i_2] [i_1] [i_2]);
                    arr_8 [i_2] = ((/* implicit */_Bool) max(((+((+(((/* implicit */int) (short)28911)))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_2])), (4927699305815572469ULL)))))))));
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */_Bool) min((min((13519044767893979143ULL), (((/* implicit */unsigned long long int) (short)-3320)))), (((arr_3 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 8468862603556363661ULL)) || (((/* implicit */_Bool) arr_0 [i_0])))))) : (((18446744073709551613ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(signed char)3])))))))));
    }
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 9; i_3 += 3) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */_Bool) ((arr_12 [i_3]) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_12 [i_3]))));
        var_21 = ((((unsigned long long int) -437637991)) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3])))))));
        arr_14 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_10 [i_3]))));
    }
    /* vectorizable */
    for (signed char i_4 = 1; i_4 < 9; i_4 += 3) /* same iter space */
    {
        arr_17 [i_4] [i_4 + 1] = ((/* implicit */long long int) (!(((((/* implicit */int) (unsigned short)0)) != (arr_2 [i_4 + 1])))));
        /* LoopSeq 1 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)249)))))) * (((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (1917292743005797990LL) : (arr_1 [i_4])))));
            var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_4]))));
        }
        arr_20 [i_4] [(unsigned char)0] = ((/* implicit */unsigned char) ((long long int) (unsigned char)17));
    }
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_5)) >> (((/* implicit */int) var_5)))))) ? (min((max((var_18), (((/* implicit */unsigned long long int) (unsigned char)247)))), (((/* implicit */unsigned long long int) var_1)))) : (((unsigned long long int) ((((/* implicit */_Bool) (short)-32023)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-9223372036854775789LL))))));
}
