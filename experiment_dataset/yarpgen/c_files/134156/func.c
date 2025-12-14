/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134156
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
    var_17 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)42662))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-24939))) : (var_14)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        arr_2 [(unsigned char)7] [i_0] = ((/* implicit */unsigned short) ((arr_0 [17LL]) / (min((max((var_12), (((/* implicit */long long int) (signed char)-124)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1])))))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 23; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            arr_12 [i_0 + 2] [i_1] [i_2] [i_3] [i_3] [(short)4] = ((/* implicit */unsigned char) arr_3 [(_Bool)1] [i_4] [i_4]);
                            arr_13 [i_1] [i_3] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-124))))), (min((((/* implicit */unsigned long long int) (signed char)-39)), (252201579132747776ULL))))), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [(unsigned short)9] [i_0] [i_0] [i_0 - 4]))));
                        }
                        arr_14 [i_3] [i_0] = ((/* implicit */signed char) max(((unsigned short)2679), (((/* implicit */unsigned short) (unsigned char)147))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */_Bool) var_11);
}
