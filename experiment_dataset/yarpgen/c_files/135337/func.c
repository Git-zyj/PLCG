/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135337
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
    var_18 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) (~(var_9)))) | ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) max(((unsigned short)0), ((unsigned short)0))))));
    var_19 = ((/* implicit */int) ((max((((/* implicit */long long int) (~(((/* implicit */int) var_4))))), (max((var_13), (((/* implicit */long long int) (unsigned short)65535)))))) ^ (((/* implicit */long long int) (((~(((/* implicit */int) var_0)))) >> ((((+(2696392372U))) - (2696392356U))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_7 [14LL] [14LL] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 1598574939U)) ? (1891912698) : (((/* implicit */int) var_0))))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) * (((arr_1 [i_0]) ? (arr_5 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) 6302312084396942529LL))))))));
                arr_8 [(unsigned short)3] = 1891912698;
                arr_9 [i_0] = arr_2 [i_1] [i_0];
            }
        } 
    } 
}
