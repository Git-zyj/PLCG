/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14636
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                var_17 = max((max((arr_2 [i_1 - 1] [i_1 - 2]), (max((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (arr_2 [(unsigned short)15] [i_0]))))), (((/* implicit */unsigned short) max((arr_1 [i_1 - 2]), (arr_1 [i_1 - 1])))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_4] [i_4])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2] [i_3 - 1] [i_3 - 1] [i_4])))), ((~(((/* implicit */int) var_7))))))), (arr_9 [8] [i_1] [i_1] [i_1] [i_1] [i_3] [(unsigned short)4])));
                                arr_11 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_7 [13LL] [i_3] [i_2] [i_4 + 2] [18])) ? (max((((/* implicit */long long int) arr_9 [i_0] [i_2] [i_0] [i_3] [i_4] [i_1 - 1] [i_3])), (0LL))) : (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3 - 2] [i_4]))))));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_9 [i_1] [i_1] [i_1] [i_4] [i_4 + 2] [i_4 - 1] [(unsigned short)0])))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)211)))));
                                var_20 = ((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_2] [i_0] [i_4]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_6);
}
