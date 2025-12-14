/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163321
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [3U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((3012386571365920762ULL) / (((/* implicit */unsigned long long int) 9223372036854775807LL))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) var_0))))) ? (var_1) : (((/* implicit */int) (signed char)27)))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        arr_12 [i_3] = ((/* implicit */unsigned long long int) ((long long int) (unsigned char)137));
                        arr_13 [i_0] [(short)4] [i_2] [(unsigned char)7] = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) ((-1LL) <= (arr_6 [i_0] [i_1] [6] [(unsigned short)11])))), (arr_6 [i_2 - 1] [i_3 + 1] [i_2 - 1] [i_3 + 1]))) < (((/* implicit */long long int) (~(((/* implicit */int) var_6)))))));
                        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((1204104462) / (-1547740444))) << (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_10 [i_1] [i_2])) : (arr_11 [2ULL] [2ULL] [i_2] [9])))) <= (arr_1 [i_1] [(short)6])))) : (max((((/* implicit */int) arr_5 [(unsigned char)0] [i_2 + 2] [i_3 + 1])), ((-(((/* implicit */int) arr_5 [8LL] [9LL] [4LL])))))))))));
                        arr_14 [i_2] = ((/* implicit */int) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)32768)) ? (752777550U) : (((/* implicit */unsigned int) 1204104461))))))) * (((((((/* implicit */long long int) ((/* implicit */int) var_0))) >= (arr_1 [i_1] [i_3]))) ? (((arr_1 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) var_2))))));
                        arr_15 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) (~(min((arr_8 [(signed char)3] [i_2 - 1] [i_3 + 1]), (arr_8 [i_2] [i_2 - 1] [i_3 + 1])))));
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */long long int) (~(3012386571365920746ULL)));
    }
    var_13 |= ((/* implicit */long long int) (((~(3012386571365920759ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
}
