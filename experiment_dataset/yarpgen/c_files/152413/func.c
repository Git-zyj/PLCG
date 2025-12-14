/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152413
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
    var_14 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_5 [i_2] [i_1] [i_0])))))))) * (((((/* implicit */_Bool) ((signed char) arr_4 [i_0]))) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_4 [i_1])), (arr_6 [i_0])))))))))));
                    var_16 = ((/* implicit */unsigned int) (~((~((-(var_9)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((var_5) ^ (((var_7) >> (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_9)))))))))));
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [i_4]) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_4] [(short)11])))))) ? (((/* implicit */unsigned long long int) (+((+(arr_9 [(short)0])))))) : ((((+(var_6))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(max((arr_7 [i_3] [i_3] [i_4]), (arr_7 [i_4] [i_4] [i_4]))))))));
                arr_14 [i_4] = ((/* implicit */signed char) arr_12 [i_4]);
                arr_15 [(_Bool)1] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_3 [i_3])) || (((/* implicit */_Bool) arr_10 [i_3]))))))), (min((var_2), (((/* implicit */unsigned long long int) arr_1 [i_3]))))));
            }
        } 
    } 
}
