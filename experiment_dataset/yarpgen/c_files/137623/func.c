/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137623
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
    var_19 = ((/* implicit */unsigned int) min((var_5), (((/* implicit */int) var_8))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)2)) << (((var_7) + (576898419)))))) && (arr_1 [i_0]))))));
        var_21 = ((/* implicit */_Bool) max((var_21), (arr_2 [i_0] [7])));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) ((765383654) < (var_5)))))));
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_18)), (var_17)))) ? ((~(((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))))));
        var_24 ^= ((/* implicit */signed char) min((((((((/* implicit */int) arr_2 [i_1] [i_1])) > (((/* implicit */int) var_3)))) ? (((/* implicit */int) min((var_3), (((/* implicit */signed char) arr_1 [i_1]))))) : (((arr_1 [i_1]) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) arr_2 [i_1] [i_1])))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1] [i_1])) & (((/* implicit */int) (signed char)84))))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) < (var_0))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */signed char) var_5);
        var_26 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (~(var_14)))))) ? (arr_4 [i_2]) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119))) : (((((/* implicit */_Bool) arr_6 [i_2] [(signed char)13])) ? (var_17) : (((/* implicit */unsigned long long int) var_7))))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        var_27 = ((/* implicit */signed char) var_11);
        arr_11 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_9 [i_3]))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            for (signed char i_5 = 3; i_5 < 11; i_5 += 3) 
            {
                {
                    arr_16 [(signed char)9] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_5 + 1])) ? (arr_13 [i_5 + 1]) : (((/* implicit */int) var_2))));
                    var_28 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
                    arr_17 [i_3] [i_4] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3]))) | (arr_0 [i_3])))));
                }
            } 
        } 
        var_29 |= ((/* implicit */unsigned long long int) ((arr_7 [i_3] [i_3]) <= (((/* implicit */long long int) ((/* implicit */int) var_6)))));
        arr_18 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) arr_15 [i_3] [(unsigned char)2] [i_3])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))))));
    }
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        for (int i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            {
                arr_25 [(signed char)11] [i_6] [i_6] = arr_7 [i_6 + 1] [i_7];
                arr_26 [i_7] [i_7] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */unsigned long long int) min((-1279758093), (((/* implicit */int) var_6))))), (((var_17) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6]))))))) : (((/* implicit */unsigned long long int) var_13))));
            }
        } 
    } 
}
