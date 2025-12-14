/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156093
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
    var_19 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_20 -= ((/* implicit */_Bool) ((unsigned short) ((arr_1 [i_1 + 2]) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 - 1])))));
                var_21 -= ((/* implicit */unsigned char) min((((long long int) arr_0 [i_0])), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)255)) : (((/* implicit */int) (unsigned short)262))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_2 = 1; i_2 < 22; i_2 += 4) /* same iter space */
    {
        var_22 *= ((/* implicit */short) (+((((((_Bool)1) ? (((/* implicit */int) var_4)) : (arr_0 [i_2]))) + (var_9)))));
        var_23 = ((/* implicit */long long int) var_16);
        var_24 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned int) arr_5 [i_2 - 1])), (arr_3 [i_2 + 1] [i_2] [i_2 - 1])))));
    }
    for (signed char i_3 = 1; i_3 < 22; i_3 += 4) /* same iter space */
    {
        arr_9 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_13))) && (((/* implicit */_Bool) ((var_3) ? (arr_8 [i_3 + 2]) : (arr_8 [i_3 - 1]))))));
        var_25 = ((/* implicit */unsigned int) arr_1 [i_3]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_4 = 4; i_4 < 20; i_4 += 4) 
        {
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) var_15))));
            var_27 = ((/* implicit */short) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) ((unsigned char) arr_0 [(signed char)4])))));
            var_28 = ((/* implicit */signed char) ((((int) (_Bool)1)) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (135)))));
        }
    }
    for (signed char i_5 = 1; i_5 < 22; i_5 += 4) /* same iter space */
    {
        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_5] [(unsigned char)16])) ? ((~(((/* implicit */int) (signed char)127)))) : (((var_2) ^ (var_15)))))) ^ (min((9223372036854775807LL), (((/* implicit */long long int) arr_2 [i_5 + 1] [i_5])))))))));
        /* LoopNest 2 */
        for (unsigned int i_6 = 1; i_6 < 21; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                {
                    var_30 = var_12;
                    arr_22 [i_6] [i_5 - 1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_15))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (signed char)-107)))) : (((((/* implicit */_Bool) arr_15 [i_7] [i_6 + 1] [i_5])) ? (var_15) : (((/* implicit */int) var_7))))))) : (((((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */unsigned int) var_2)) : (arr_3 [i_5] [i_6] [i_7]))) + (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                }
            } 
        } 
        var_31 = ((/* implicit */int) var_11);
    }
}
