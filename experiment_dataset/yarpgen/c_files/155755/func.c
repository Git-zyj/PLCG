/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155755
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
    var_19 = ((/* implicit */signed char) var_4);
    var_20 = ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 4287253927731548311ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)38))))))) ? (((/* implicit */unsigned long long int) var_14)) : (14159490145978003305ULL));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (+((~(((/* implicit */int) var_13))))))), (max((((/* implicit */long long int) (~(((/* implicit */int) var_15))))), (min((((/* implicit */long long int) var_15)), (arr_1 [i_2])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [(unsigned short)7] [i_0] = max((arr_5 [i_0 - 4] [i_1] [0ULL] [i_3]), (min((arr_3 [i_4 + 1] [i_0 + 4] [i_0 + 1]), (arr_3 [i_4 + 1] [i_0 + 1] [i_0 + 1]))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_17) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (5032486994765768940LL) : (((/* implicit */long long int) max((arr_2 [i_0 - 3]), (arr_2 [i_0 + 4]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (long long int i_6 = 2; i_6 < 9; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0 - 3] [i_1] [i_2] [i_5] [i_6 + 3] = ((/* implicit */short) max((var_0), (((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_0 [i_0] [i_1])))), (((/* implicit */int) var_2)))))));
                                arr_20 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((short) min((var_3), (((/* implicit */short) var_18)))))), (14159490145978003304ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
