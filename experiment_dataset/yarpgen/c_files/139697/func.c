/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139697
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
    var_20 = ((/* implicit */int) min((((/* implicit */long long int) var_9)), (max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) >= (var_10)))), (((var_4) & (var_4)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned char)26), ((unsigned char)230)))) == (((/* implicit */int) max((arr_8 [i_0] [i_1 - 2] [i_2 + 3]), (max((arr_4 [i_0] [i_0] [i_2]), (arr_8 [i_0] [i_0] [i_2]))))))));
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) max((min((arr_1 [i_0]), (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))), (max((min((((/* implicit */int) arr_6 [i_1])), (arr_5 [i_1]))), (((/* implicit */int) arr_6 [i_1])))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_0] [i_2 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((min((((/* implicit */int) min((((/* implicit */short) arr_11 [i_0] [(short)12] [i_0] [i_3])), (arr_8 [i_0] [(signed char)7] [i_2 + 1])))), (min((((/* implicit */int) arr_14 [i_4] [i_0] [i_3] [i_2 + 1] [i_0] [i_0])), (arr_1 [i_1]))))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) > (max((-1), (((/* implicit */int) (unsigned char)212)))))))));
                                var_23 = min((max((-5127328359686649776LL), (((/* implicit */long long int) (short)-32767)))), (((/* implicit */long long int) max((min((arr_0 [i_2]), (((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_1] [i_2 - 1] [(unsigned char)12] [i_0])))), (((((/* implicit */int) arr_8 [i_2] [i_1] [i_3])) * (((/* implicit */int) arr_13 [4] [4] [i_1] [i_2] [(short)2] [(short)17] [i_0]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
