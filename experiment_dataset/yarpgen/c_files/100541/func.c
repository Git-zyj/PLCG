/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100541
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
    var_11 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_0)), (var_1)));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) ((arr_3 [16U] [16U] [16U]) ^ (((/* implicit */unsigned long long int) 1565506018046043759LL))));
                var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (((((((/* implicit */unsigned long long int) var_5)) > (var_9))) ? (max((((/* implicit */unsigned long long int) var_0)), (8583844258119504497ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0])))))));
                var_14 = ((/* implicit */short) var_8);
                var_15 = ((/* implicit */unsigned int) arr_2 [i_0 + 4] [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                var_16 = ((/* implicit */short) var_7);
                arr_9 [i_2] [i_2] [0LL] = min((arr_8 [i_3] [i_3 - 1] [i_3 - 1]), ((+(arr_8 [i_2] [0] [i_3 - 1]))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        {
                            var_17 += ((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((unsigned short)59535), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4)))))))), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4831739979718698895ULL)))))) * ((~(2396681923U)))))));
                            arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)28565)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (2396681923U)))), (arr_15 [i_2] [(unsigned short)7] [3] [3] [i_4]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(1898285373U)))))))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (arr_3 [i_5] [i_3 - 1] [(unsigned short)20]) : (var_1))), (((/* implicit */unsigned long long int) arr_4 [i_2] [(_Bool)0]))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), ((~(var_1))))))));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_12 [i_4] [i_3 - 1] [i_4] [i_3 - 1])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
