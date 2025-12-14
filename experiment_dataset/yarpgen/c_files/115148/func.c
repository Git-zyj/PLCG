/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115148
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
    var_15 = ((/* implicit */long long int) var_2);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_16 = ((33553408LL) >> (((((/* implicit */int) (signed char)90)) - (40))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((((/* implicit */_Bool) 168994590963981841LL)) ? (((/* implicit */long long int) 2603611180U)) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */_Bool) arr_1 [i_1]);
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_2 [i_1] [i_1] [i_1]);
        }
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((arr_2 [(signed char)6] [i_2] [i_2]), (((/* implicit */long long int) arr_4 [(signed char)2]))))) ? (((/* implicit */int) arr_4 [i_0])) : (((((/* implicit */_Bool) arr_0 [(unsigned short)4])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_2] [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775802LL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_8 [i_0]))))))))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (1099511627760ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (unsigned short)15872)))) : (((/* implicit */int) arr_8 [i_2]))));
            arr_10 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_0 [i_0]) : (((/* implicit */long long int) arr_9 [i_2])))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2])))));
        }
        for (signed char i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
        {
            arr_13 [(short)10] [i_3] = ((/* implicit */signed char) arr_9 [i_3]);
            arr_14 [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_10) ? (-168994590963981841LL) : (9223372036854775807LL)))) ? ((+(((/* implicit */int) arr_12 [i_0] [i_3] [i_0])))) : ((+(((/* implicit */int) arr_12 [i_0] [i_0] [(signed char)3])))))) <= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)118)) : ((~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))))))));
        }
        var_20 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) arr_1 [(unsigned short)1])), (((arr_7 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_8 [i_0]), (((/* implicit */unsigned short) var_14))))) >= (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))))));
    }
    for (signed char i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            arr_21 [i_5] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_7 [i_4])))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) min((arr_8 [i_5]), (((/* implicit */unsigned short) arr_1 [i_4])))))));
            arr_22 [i_4] [i_5] [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_17 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 12542193966913448678ULL)))))) : (((((/* implicit */_Bool) (signed char)-43)) ? (arr_7 [(_Bool)1]) : (((/* implicit */unsigned long long int) arr_15 [i_4])))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_4] [i_5] [i_5])) ? (((/* implicit */int) arr_3 [i_4] [i_5] [i_5])) : (((/* implicit */int) arr_3 [i_4] [i_5] [i_5])))))));
        }
        arr_23 [(_Bool)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_4])) ? (((arr_7 [i_4]) ^ (arr_7 [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_4]) <= (arr_7 [i_4])))))));
    }
}
