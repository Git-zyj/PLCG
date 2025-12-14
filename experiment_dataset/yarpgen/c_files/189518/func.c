/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189518
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
    var_14 = ((/* implicit */signed char) var_9);
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_1 - 1])))))));
                var_17 &= ((/* implicit */short) min((var_8), ((((+(var_8))) << (((min((9152577533950521934ULL), (((/* implicit */unsigned long long int) arr_2 [i_0])))) - (55595ULL)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (short i_4 = 1; i_4 < 16; i_4 += 4) 
            {
                {
                    var_18 = (+(arr_1 [(unsigned short)4] [i_4]));
                    var_19 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((9152577533950521924ULL), (min((((/* implicit */unsigned long long int) (short)10805)), (9294166539759029692ULL))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (-((((((_Bool)1) ? (12703401330338141803ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
}
