/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120455
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_20 = (unsigned short)0;
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))))));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-16384))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 14; i_2 += 2) 
    {
        for (unsigned short i_3 = 1; i_3 < 14; i_3 += 2) 
        {
            {
                var_23 = ((/* implicit */int) var_8);
                var_24 *= ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_8 [i_2 + 2] [i_3] [i_3 + 1]))))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)43844)) ? (max((((/* implicit */unsigned long long int) var_14)), (var_12))) : (((/* implicit */unsigned long long int) (+(var_3)))))), (((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) 251658240)), (var_15))))))));
}
