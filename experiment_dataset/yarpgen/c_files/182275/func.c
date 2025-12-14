/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182275
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
                            {
                                var_11 = ((/* implicit */short) 2951518342U);
                                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) var_2))));
                                var_13 ^= ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_5] [i_3] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 875205995096425605ULL))));
                                arr_17 [i_0] [i_0] [i_1 - 4] [i_2] [i_3 + 1] [i_5] = ((/* implicit */unsigned long long int) (unsigned short)11292);
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)54248)) >> (((((/* implicit */int) (signed char)-115)) + (138)))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_9 [i_0] [i_1 + 2] [i_2] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54246)))));
                                arr_18 [i_0] [i_1] [i_0] [i_3 + 1] [i_5] [i_5] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_12 [i_0] [i_1 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)45399)) != (((/* implicit */int) (_Bool)1)))))) : (var_2)));
                            }
                            arr_19 [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) min((min((arr_10 [i_1 - 2] [i_1 - 3] [i_1 - 2] [i_3 + 2] [i_3 + 1] [i_3 - 1]), (((/* implicit */unsigned short) (signed char)19)))), (max((arr_5 [i_1] [i_2]), ((unsigned short)39949)))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) 3317556973U);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((((/* implicit */int) max((((((/* implicit */unsigned long long int) var_10)) <= (17571538078613126011ULL))), (((_Bool) (_Bool)1))))) << (((/* implicit */int) (_Bool)1))));
    var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65531))) * (var_10)))))) > (min((((/* implicit */unsigned long long int) min((var_10), (1343448955U)))), (var_9)))));
    var_19 = var_8;
}
