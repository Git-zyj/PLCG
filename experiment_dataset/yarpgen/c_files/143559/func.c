/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143559
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
    var_17 = max((((((/* implicit */unsigned long long int) -1821613501)) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) -1821613501)) : (var_10))))), (((/* implicit */unsigned long long int) (short)-24081)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) max((14809798654420397425ULL), (((arr_4 [1ULL] [i_0 - 2] [i_0 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned short)1] [i_0 - 1] [i_0 - 2]))) : (268435328ULL)))));
                            arr_11 [i_2] = ((/* implicit */unsigned long long int) var_5);
                            var_19 = max(((((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3 + 1] [i_1] [i_1]))) : (arr_8 [i_0] [i_1]))))), ((~(arr_5 [i_0 + 2] [i_3 + 1] [i_0 + 2]))));
                            arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [(_Bool)0] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_3 + 1] [i_0 - 2])))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_0 + 2] = max((max((arr_8 [i_0] [(signed char)9]), (arr_1 [i_0]))), (((3636945419289154191ULL) / ((-(var_2))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        {
                            arr_18 [i_0] = ((/* implicit */_Bool) var_6);
                            arr_19 [i_0] [i_1] [(_Bool)1] [i_5] = ((/* implicit */short) (+(((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (arr_17 [i_5] [i_1] [i_0])))) * (((/* implicit */int) arr_3 [i_0 + 2]))))));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), ((-(max((min((((/* implicit */unsigned long long int) var_13)), (3636945419289154190ULL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (arr_1 [i_0])))))))));
                        }
                    } 
                } 
                arr_20 [i_0] [i_0] = ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0 - 1] [i_1] [(unsigned short)5] [i_1])) : (((/* implicit */int) arr_9 [2ULL] [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 2]))))) ? (((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_1] [i_0 + 1] [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0 - 1] [i_1] [i_0] [i_1])) : (((/* implicit */int) var_8)))) : (((/* implicit */int) max((arr_9 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [(unsigned char)14]), (arr_9 [(unsigned short)0] [(unsigned short)0] [i_0 + 1] [i_0 + 2] [i_1] [i_1])))));
                var_21 = ((max((arr_5 [i_0 + 2] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_6)))) / (((arr_5 [i_1] [i_1] [i_1]) * (arr_5 [i_0 + 1] [i_1] [i_0 + 1]))));
            }
        } 
    } 
}
