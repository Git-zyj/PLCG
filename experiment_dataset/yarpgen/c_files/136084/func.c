/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136084
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
    var_12 = ((/* implicit */unsigned short) max(((((_Bool)1) ? (max((((/* implicit */unsigned long long int) (signed char)45)), (3751441922340459919ULL))) : (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))) != (min((((/* implicit */unsigned long long int) (unsigned short)49754)), (var_6))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_1] [(signed char)19] = ((/* implicit */unsigned int) (unsigned short)15782);
                                var_13 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_3 [i_0 - 1] [(signed char)13] [i_0 - 1])) : (((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_0 - 1] [i_3 + 1])))), (((((/* implicit */_Bool) var_11)) ? ((~(((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_0] [i_0 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0] [i_0]))) : (max((((/* implicit */unsigned long long int) arr_6 [i_0 - 1])), (14695302151369091682ULL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -7117364478442032159LL)) && (arr_8 [i_3] [i_3 + 1] [i_3] [i_3 - 3])))) : (((/* implicit */int) arr_8 [i_0 - 1] [i_2] [i_3 - 1] [i_4]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_5] = max(((+(min((3751441922340459934ULL), (((/* implicit */unsigned long long int) (signed char)-12)))))), (min((min((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])), (3751441922340459934ULL))), (((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))))));
                        arr_15 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) (!((!((!(((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 - 1] [i_1] [(signed char)23] [(signed char)23] [i_2] [i_5]))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                    {
                        arr_20 [i_1] [i_1] = ((/* implicit */unsigned int) var_11);
                        arr_21 [0] [i_1] [i_1] [i_1] = 14695302151369091682ULL;
                    }
                }
            } 
        } 
    } 
}
