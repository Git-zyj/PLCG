/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143925
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [(short)12] [i_1] [(short)12] = ((/* implicit */signed char) arr_2 [i_0]);
                arr_7 [i_1] = (!((!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1 - 1])))));
                var_14 = ((/* implicit */unsigned short) max((-1614008427), (((/* implicit */int) (signed char)-115))));
                var_15 = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [8]))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21740))) | (arr_2 [i_0 + 1])))))));
                var_16 = ((/* implicit */unsigned long long int) max((0LL), (((/* implicit */long long int) (+((-(((/* implicit */int) arr_3 [i_1])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 3; i_3 < 8; i_3 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max(((~(max((9933128380338413572ULL), (((/* implicit */unsigned long long int) (unsigned short)43795)))))), ((~(arr_10 [i_2] [i_2] [i_3 + 4])))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    for (signed char i_5 = 3; i_5 < 11; i_5 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) (short)-10909)))));
                            arr_17 [i_2] = ((/* implicit */unsigned int) (-((-(arr_2 [i_3 + 4])))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 3) 
                            {
                                arr_20 [i_4] [i_6] [i_4] [i_6] [(signed char)8] = ((/* implicit */int) min(((signed char)101), (((/* implicit */signed char) (((_Bool)1) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                                var_19 = ((/* implicit */short) min((((/* implicit */long long int) ((var_3) <= (((/* implicit */long long int) arr_1 [i_3 + 2] [i_3 + 1]))))), (min((arr_13 [i_3 - 1] [i_3 + 4] [i_3] [i_3 - 3]), (arr_13 [i_3 - 3] [i_3 + 1] [i_3 + 2] [i_3 - 1])))));
                            }
                            arr_21 [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)45086))));
                        }
                    } 
                } 
                arr_22 [i_2] [(signed char)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_3 - 1] [i_3] [i_3 + 1]))))) ? (((/* implicit */int) min(((unsigned short)38436), ((unsigned short)21741)))) : (((/* implicit */int) arr_11 [i_3 - 1] [i_3] [i_3 + 1]))));
                arr_23 [i_2] [i_2] [i_2] |= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 2] [i_3 - 2]))))) ? (((/* implicit */unsigned long long int) (~(arr_19 [i_3 - 2] [(_Bool)0] [i_3 - 3] [i_3 + 3] [(_Bool)0] [i_3 - 3])))) : (max((((/* implicit */unsigned long long int) arr_5 [i_3 + 1] [i_3 - 1] [i_3])), (((((/* implicit */_Bool) -1234593450)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_4)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
    {
        for (int i_8 = 3; i_8 < 12; i_8 += 3) 
        {
            for (long long int i_9 = 4; i_9 < 13; i_9 += 2) 
            {
                {
                    arr_33 [i_7] [i_7] [i_7] [i_7] |= max((((/* implicit */unsigned long long int) ((_Bool) arr_32 [i_9 - 3] [i_8 + 2] [i_8] [i_7]))), (var_0));
                    var_20 = var_0;
                }
            } 
        } 
    } 
}
