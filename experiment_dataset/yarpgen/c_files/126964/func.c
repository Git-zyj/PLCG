/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126964
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_4) : (arr_1 [i_0]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 2])))))));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((long long int) arr_0 [i_0 + 1] [i_0 - 1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)45), (((/* implicit */unsigned char) var_1))))) ? (arr_1 [i_0]) : (min((arr_2 [i_0 + 1] [i_0]), (((/* implicit */int) (unsigned char)0)))))))));
        arr_5 [i_0] = (-(((int) var_7)));
        var_11 = ((/* implicit */long long int) (~(min(((-(((/* implicit */int) var_5)))), (var_4)))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) ((var_6) ^ ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
        arr_8 [(signed char)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(unsigned char)6])) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) var_7))))) / (max((((/* implicit */long long int) 10)), (9223372036854775807LL)))))) && (((((/* implicit */int) ((((/* implicit */int) (unsigned char)24)) >= (arr_1 [2LL])))) == (((arr_6 [4LL]) | (((/* implicit */int) (_Bool)0))))))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 9; i_2 += 4) 
        {
            for (signed char i_3 = 2; i_3 < 9; i_3 += 1) 
            {
                {
                    var_13 = (!(((arr_1 [i_3]) >= ((-(((/* implicit */int) var_1)))))));
                    var_14 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(signed char)10])) ? (((((/* implicit */int) arr_9 [i_2 - 3] [i_2 - 1] [i_2 + 2])) ^ (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */int) var_7)) : (arr_1 [8U])))) ? (((/* implicit */int) ((var_2) >= (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */int) var_1)), (arr_12 [i_1] [i_1] [i_3] [i_3])))))));
                    var_15 = ((/* implicit */int) min((var_15), (max((((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned char)189), (((/* implicit */unsigned char) (signed char)-108)))))))), ((~((+(11)))))))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        for (long long int i_5 = 4; i_5 < 21; i_5 += 3) 
        {
            for (long long int i_6 = 3; i_6 < 23; i_6 += 4) 
            {
                {
                    arr_21 [i_4] [i_5 + 3] [i_6 + 2] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)13)) / (((/* implicit */int) (unsigned char)229))));
                    arr_22 [i_4] [i_5 - 3] = ((/* implicit */int) arr_19 [i_5 - 2] [(unsigned char)1] [i_5] [(unsigned char)1]);
                    arr_23 [i_6] [i_5] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)232))))) < (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)74)), (-9223372036854775807LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)249)) >= (((/* implicit */int) arr_15 [i_4])))))) : ((~(-2413939186276457259LL)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_9)) ? ((-(var_4))) : (var_4))) : (((/* implicit */int) var_1))));
}
