/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169946
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1 + 2] [i_1 + 2] = ((/* implicit */int) arr_0 [11LL]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_4] [i_3] [11ULL] = (_Bool)1;
                                var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (341755811534940810ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_1)))))))), (min((((/* implicit */unsigned long long int) min((var_8), (3643442098026230201LL)))), ((((_Bool)1) ? (9712918262850153478ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(var_9))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))) : (((var_3) + (((/* implicit */unsigned long long int) var_2))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (min((((/* implicit */long long int) min(((_Bool)0), (var_1)))), (max((((/* implicit */long long int) var_9)), (var_5)))))));
}
