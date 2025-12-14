/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166036
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_12 = ((/* implicit */signed char) (-(arr_2 [i_0])));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_0 [i_0] [i_0])) - (((/* implicit */int) var_8))))))) ? (min((arr_2 [i_0]), (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_2 [(unsigned short)7])))) ? (((((/* implicit */_Bool) arr_0 [i_0] [(unsigned short)4])) ? (((/* implicit */int) (unsigned short)26157)) : (((/* implicit */int) (unsigned short)26180)))) : (((/* implicit */int) min(((unsigned short)65535), (arr_0 [i_0] [i_0])))))))));
    }
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
    var_14 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [(short)1])));
        var_16 = ((/* implicit */long long int) (unsigned short)39383);
        var_17 = arr_4 [i_1] [i_1];
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((arr_4 [i_1] [i_2 + 3]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24)))));
                    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_9 [i_2 - 1] [i_2 + 3] [i_2 + 2] [i_2]))));
                    var_20 &= ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) 3656821595131660726ULL)))));
                }
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) arr_12 [i_4]))))), (var_5)))) ? (((((/* implicit */int) arr_14 [i_4])) * (((/* implicit */int) (unsigned short)3)))) : (((/* implicit */int) (((~(((/* implicit */int) (unsigned short)18)))) > (((/* implicit */int) (unsigned short)64564)))))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            for (unsigned short i_6 = 4; i_6 < 22; i_6 += 1) 
            {
                {
                    var_22 = ((/* implicit */signed char) (unsigned short)42285);
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_6 - 4]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)6)) || (((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_6] [i_6 - 1]))))) : (((((/* implicit */_Bool) arr_12 [i_6 - 1])) ? (((/* implicit */int) arr_18 [i_4] [i_5] [i_6] [i_6 - 2])) : (((/* implicit */int) arr_18 [i_4] [i_5] [i_6] [i_6 - 3]))))));
                    var_24 ^= ((/* implicit */long long int) (((-(arr_13 [i_6 - 3] [i_6 - 4]))) > (((((/* implicit */_Bool) arr_13 [i_6 - 2] [i_6 + 1])) ? (var_0) : (arr_13 [i_6 - 3] [i_6 - 1])))));
                }
            } 
        } 
        arr_20 [i_4] = max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_19 [21ULL] [i_4] [21ULL] [i_4]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39355)))))) + (((/* implicit */int) min(((unsigned short)13129), (arr_15 [i_4] [(unsigned short)4]))))))), (arr_19 [7U] [i_4] [i_4] [i_4]));
        var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4])) ? (1575385654U) : (1478900549U)))) ? (((((/* implicit */_Bool) (unsigned short)13129)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39369))) : (arr_17 [0U] [i_4] [(unsigned short)0]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))))) << (((((/* implicit */int) var_4)) - (52899)))));
    }
    var_26 = ((/* implicit */unsigned short) (-(var_5)));
}
