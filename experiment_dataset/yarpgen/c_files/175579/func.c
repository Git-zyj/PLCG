/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175579
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) ((unsigned short) ((((var_13) - (((/* implicit */unsigned long long int) 8753148234600661218LL)))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) + (var_13))))));
                var_18 = max((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_16))) ^ (arr_3 [i_1 + 1]))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))))), (min(((+(3473430517707951543ULL))), (((/* implicit */unsigned long long int) (unsigned char)32)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            for (long long int i_4 = 2; i_4 < 18; i_4 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)10824)) < (((/* implicit */int) arr_9 [i_4 - 1] [i_4 - 1] [i_4 + 1])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_20 = (+((~(arr_3 [i_2]))));
                                arr_17 [i_2] [i_3] [i_4] [i_4 - 1] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_3] [i_3]))) : (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7011566453942011072ULL)) || (((/* implicit */_Bool) (unsigned char)233)))))) : (arr_16 [i_5 + 1] [8LL] [(unsigned short)13] [i_5] [(unsigned short)7] [i_6])))) ? (((((/* implicit */_Bool) ((signed char) 3473430517707951543ULL))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_15 [i_4] [i_3] [5]))) : (arr_16 [i_3] [i_3] [i_4 - 1] [i_5 - 1] [i_6] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_4 - 1] [i_5 + 1]) >= (((/* implicit */unsigned long long int) var_4))))))));
                                var_21 = ((/* implicit */short) var_5);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)54720)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_12))))) ^ (min((((/* implicit */long long int) ((((/* implicit */_Bool) 14973313556001600073ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)59360))))), (var_4)))));
    var_23 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)10815)))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_4))));
    var_24 = ((/* implicit */unsigned long long int) var_7);
}
