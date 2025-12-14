/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157698
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
    var_17 *= ((/* implicit */unsigned int) min((((((/* implicit */int) ((short) var_0))) % (((/* implicit */int) var_5)))), (min(((((_Bool)1) ? (var_11) : (((/* implicit */int) var_0)))), (max((268435456), (((/* implicit */int) var_3))))))));
    var_18 = ((signed char) min((((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (unsigned short)19201)))), ((-(((/* implicit */int) var_4))))));
    var_19 *= ((/* implicit */signed char) var_0);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 8; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_0] [7LL] = ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) -1980642705)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))))) ^ ((((+(((/* implicit */int) (short)13608)))) << (((((((((/* implicit */_Bool) (short)7879)) ? (-1980642731) : (((/* implicit */int) var_5)))) + (1980642749))) - (3)))))));
                                var_20 *= ((/* implicit */short) arr_4 [i_4]);
                            }
                        } 
                    } 
                    arr_14 [i_0] [3] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-18782))))) ? (((/* implicit */long long int) 203729946U)) : (max((((/* implicit */long long int) var_3)), (5319794463606383214LL)))))), (min((((/* implicit */unsigned long long int) arr_2 [5] [i_0])), (((((/* implicit */_Bool) (signed char)6)) ? (15593177006121911829ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
}
