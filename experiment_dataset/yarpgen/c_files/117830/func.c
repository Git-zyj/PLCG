/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117830
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
    var_11 = ((/* implicit */unsigned long long int) var_8);
    var_12 = ((/* implicit */unsigned int) (-(max((var_8), (((/* implicit */int) ((-8416067207308174340LL) <= (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */signed char) (+(arr_0 [i_1 - 1] [i_0 + 3])));
                /* LoopNest 3 */
                for (unsigned short i_2 = 4; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (short i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0 + 3] [i_0] [i_1] [12ULL] = ((/* implicit */unsigned short) arr_9 [i_4 - 3] [i_3 + 3] [i_2] [i_2] [i_2 + 1] [i_0] [i_0]);
                                arr_13 [i_0 + 1] [i_0] [i_1] [(signed char)1] [8ULL] [i_4 - 2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) (unsigned short)65511)) <= (((/* implicit */int) var_10)))))), (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1] [i_1])) ? (max((arr_0 [i_1] [i_3 - 1]), (((/* implicit */unsigned long long int) (unsigned short)65511)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65488))) <= (arr_10 [i_0])))))))));
                                arr_14 [i_0] [11LL] [i_1] [i_2] [i_1] [i_3 + 3] [11LL] = (~((~(arr_5 [i_3 + 1] [i_1 + 1] [i_4 - 3]))));
                                arr_15 [i_1] [i_4] [i_4 - 1] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_9 [i_0 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2] [i_3] [i_4]);
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1] [i_0 - 1])) ? (arr_5 [i_1 - 1] [i_1 - 2] [i_0 + 3]) : (arr_5 [i_1 - 1] [i_1 - 1] [i_0 + 3])))), ((~(4711832888179917428ULL)))));
            }
        } 
    } 
    var_14 -= ((/* implicit */unsigned int) var_10);
    var_15 = ((/* implicit */short) var_10);
}
