/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153114
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2740127111U)))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1)) > (2017857739U)))), (arr_0 [i_0])));
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [14ULL] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(7491513334132192702ULL)))) ? (((((/* implicit */_Bool) 2068712757)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) : (14U)));
                        arr_13 [(unsigned char)10] [i_1] [i_1] [i_0] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)-23111)) : (((/* implicit */int) var_3))))) * (max((arr_5 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_9 [i_1] [i_3] [i_2] [i_1] [i_0] [i_1])))))), (((/* implicit */unsigned long long int) var_5))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_0 + 1] [i_0])) / (((/* implicit */int) (short)-12639))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_7 [i_0 - 1] [i_0 + 1] [i_0])), (arr_3 [i_0 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)12149)) : (((/* implicit */int) (short)-12639)))))));
    }
    for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) (+((((((~(((/* implicit */int) (unsigned short)19248)))) + (2147483647))) >> (min((var_6), (((/* implicit */unsigned int) 0))))))));
                    arr_25 [i_4] [i_5] [i_4] = ((/* implicit */unsigned char) ((unsigned short) (+(arr_21 [i_4] [i_4]))));
                }
            } 
        } 
        var_12 = max((((18446744073709551611ULL) & (arr_16 [i_4]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (arr_16 [i_4]))));
        arr_26 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_4] [(signed char)4])) > (((/* implicit */int) ((unsigned char) (~(arr_20 [i_4] [i_4])))))));
    }
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (short)12626)), (17897263868541241930ULL)));
    var_14 = ((/* implicit */long long int) var_6);
    /* LoopNest 3 */
    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                {
                    arr_35 [5ULL] [i_9] [(unsigned char)1] [(unsigned char)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((2068712762) << (((((/* implicit */int) (short)12626)) - (12626))))), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 4294967295U)))))))) ? (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_8))))))) : (min((arr_10 [i_7] [i_8] [i_8] [i_9] [i_9]), (((((/* implicit */_Bool) var_2)) ? (arr_16 [(short)15]) : (((/* implicit */unsigned long long int) 1091014456U))))))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)31)), (9223372036854775807LL)))) ? (((/* implicit */unsigned long long int) var_6)) : (((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_0);
}
