/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17259
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
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)38902))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (10ULL))))), (((var_18) * (max((((/* implicit */unsigned long long int) (unsigned short)62170)), (var_15))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [i_1] = ((/* implicit */unsigned long long int) min(((short)-32764), ((short)32750)));
                                arr_14 [i_1] [11] [i_2] [(_Bool)1] [i_2] = ((/* implicit */short) (unsigned short)22265);
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [i_1 - 1] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_2 [i_1 - 1]))));
                var_20 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned short)2)))) ^ (((((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1] [i_1])) ^ (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))));
                arr_16 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_3))));
                arr_17 [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)27851)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32737))) : (var_11)))));
            }
        } 
    } 
}
