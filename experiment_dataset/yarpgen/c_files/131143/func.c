/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131143
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) -304217920413643899LL);
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7835))) / (-304217920413643904LL)))), (arr_2 [i_0] [i_0])))));
        arr_4 [(short)13] |= ((/* implicit */short) (-(((arr_2 [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 7; i_1 += 4) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) 304217920413643898LL))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (int i_3 = 1; i_3 < 8; i_3 += 4) 
            {
                {
                    var_17 -= ((((/* implicit */_Bool) (unsigned char)239)) ? (304217920413643873LL) : (304217920413643911LL));
                    arr_15 [i_1] &= ((/* implicit */int) ((304217920413643897LL) == (-304217920413643874LL)));
                    arr_16 [i_1] [i_3] [i_3] [(signed char)6] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_11 [i_3 - 1] [0ULL] [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) arr_8 [i_1 - 2] [(unsigned short)4] [i_1 - 2])) : (var_14)))) : (arr_0 [i_2]))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_9 [i_3] [i_2] [i_1 + 2])) <= (((/* implicit */int) (_Bool)1)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)54))))))))));
                    var_18 = max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_3 + 2] [i_1 + 1])) && (((/* implicit */_Bool) 4294967290U))))), (max((arr_7 [i_3 - 1] [i_1 + 3]), (arr_7 [i_3 + 1] [i_1 + 2]))));
                }
            } 
        } 
        var_19 *= ((/* implicit */_Bool) (unsigned char)0);
    }
    /* LoopNest 2 */
    for (unsigned short i_4 = 3; i_4 < 10; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            {
                var_20 = ((/* implicit */signed char) (((-(((((/* implicit */int) (short)15)) >> (((((/* implicit */int) (unsigned char)215)) - (186))))))) / (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_24 [i_5] [(unsigned short)9] [i_4 + 1]) : (((((/* implicit */_Bool) var_3)) ? (arr_24 [i_4] [i_5] [i_5]) : (arr_24 [i_4] [8U] [i_5])))))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 3; i_6 < 9; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) arr_21 [i_6 + 3] [i_6 + 3]);
                            arr_32 [i_4 + 1] [i_5] [(_Bool)1] [i_7] &= ((/* implicit */long long int) (-(arr_26 [i_4 + 2] [i_5] [i_6] [i_6 - 3])));
                            var_22 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max(((signed char)-48), (((/* implicit */signed char) (_Bool)0))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_21 [i_4 + 2] [i_6 + 1]) == (((((/* implicit */_Bool) (unsigned char)0)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4]))))))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)76))))), (((3077087867536208912LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)121)))))))));
                            /* LoopSeq 2 */
                            for (int i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
                            {
                                var_23 -= ((/* implicit */unsigned char) ((int) ((min((((/* implicit */unsigned long long int) (short)10644)), (arr_26 [(short)5] [(short)5] [(unsigned char)0] [i_5]))) + (min((((/* implicit */unsigned long long int) arr_31 [(unsigned short)10] [(unsigned short)10] [i_6 + 3] [i_7] [i_8] [i_7])), (3340305536881176059ULL))))));
                                var_24 &= ((/* implicit */long long int) ((unsigned long long int) (short)-12535));
                                var_25 -= ((/* implicit */unsigned long long int) min((arr_34 [i_4 - 2] [i_7] [i_6] [i_5] [i_4 - 2]), (((/* implicit */long long int) min((arr_24 [i_6] [i_6] [(_Bool)1]), (((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */int) (short)-10654)) : (((/* implicit */int) arr_28 [i_4 - 3] [i_5] [i_5] [i_4 - 3] [i_8])))))))));
                            }
                            for (int i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                            {
                                arr_38 [i_9] [i_5] = ((/* implicit */int) ((max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) (short)10657)))), (var_0))) >= (((/* implicit */int) max(((short)10644), (((/* implicit */short) arr_20 [i_4 - 1])))))));
                                var_26 *= ((/* implicit */short) (+(((/* implicit */int) (unsigned char)7))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) var_7))));
}
