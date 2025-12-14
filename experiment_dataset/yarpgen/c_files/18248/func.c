/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18248
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
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */_Bool) min((var_11), ((!(((/* implicit */_Bool) min((2103221100019553934ULL), (((/* implicit */unsigned long long int) (unsigned short)59913)))))))));
                arr_6 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_1])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1])))))) ? (max((18134004566434903342ULL), (((/* implicit */unsigned long long int) -1312119098018047328LL)))) : (arr_0 [i_0 + 1] [i_1]));
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((long long int) max((6147092062874956934LL), (min((arr_5 [i_0] [i_1]), (((/* implicit */long long int) arr_2 [i_1 - 1]))))))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    arr_9 [i_2] [i_1] = ((/* implicit */unsigned long long int) min((((((-2499806156547913382LL) + (9223372036854775807LL))) << (((((arr_5 [i_0] [i_1 + 1]) + (2161277870636373599LL))) - (57LL))))), ((-(var_3)))));
                    var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_10))))))), (max((max((arr_0 [i_1] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)65535)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_4 [i_1])))))))));
                }
                for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    var_14 = ((/* implicit */unsigned short) (short)-9231);
                    arr_12 [i_0] = ((/* implicit */signed char) var_10);
                    arr_13 [i_0] [i_0 + 2] [i_0] [i_0] = -8606194831098133358LL;
                    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)94))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 3; i_4 < 7; i_4 += 2) 
    {
        for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            {
                arr_20 [i_5] = ((/* implicit */long long int) arr_7 [i_4] [i_4] [i_4] [i_4]);
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_25 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_4 [i_4]);
                            arr_26 [i_5] [i_6] = min((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_4 + 1]))))), (((long long int) var_5)));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4 - 1])))))))) ? (((unsigned long long int) arr_17 [i_7])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_22 [i_4] [i_5] [i_6] [i_4]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
