/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156268
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
    var_15 = ((/* implicit */unsigned short) ((max((max((((/* implicit */long long int) 1450244266)), (var_14))), (((((/* implicit */_Bool) 3477521094U)) ? (5429859537583310426LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) << (((var_14) - (750122270985066267LL)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_16 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3 + 1] [(signed char)6] [i_3 - 1])) ? (arr_10 [i_3 - 1] [i_3 + 1] [(unsigned char)18] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)47782)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)70))) : (7483879226667842563LL)))) : (((((/* implicit */_Bool) max((8195577345159188354ULL), (((/* implicit */unsigned long long int) 0))))) ? (((((/* implicit */_Bool) arr_7 [(short)18] [(short)18] [14])) ? (10251166728550363274ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)168))))) : (((10251166728550363262ULL) - (((/* implicit */unsigned long long int) var_14)))))));
                                arr_16 [(unsigned char)8] [i_2] [(unsigned short)1] [i_2] [i_0] = ((/* implicit */unsigned short) var_3);
                            }
                        } 
                    } 
                    var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) ^ (arr_5 [i_0] [i_1]))) | (11557495991076544892ULL)))) ? (var_10) : (((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) arr_9 [i_0]))))));
                    var_18 += ((/* implicit */long long int) ((min((((((/* implicit */_Bool) (signed char)-120)) ? (4583106775968437065ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))))), (((/* implicit */unsigned long long int) var_5)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) var_10)) : (arr_1 [i_0]))))));
                }
            } 
        } 
    } 
    var_19 = max((((/* implicit */long long int) var_7)), (var_11));
}
