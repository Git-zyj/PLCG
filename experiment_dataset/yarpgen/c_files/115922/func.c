/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115922
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (+(max((max((((/* implicit */unsigned int) (short)-11779)), (1637516952U))), (((/* implicit */unsigned int) ((unsigned short) (short)-22509))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_0]) : (((/* implicit */int) (signed char)-56)))), (min((arr_1 [i_0]), (arr_1 [i_0])))));
                                var_17 = ((/* implicit */unsigned int) ((short) (~(((/* implicit */int) arr_10 [i_4] [i_2] [i_2])))));
                                var_18 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (short)18788))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) max((((/* implicit */long long int) max(((-(((/* implicit */int) (short)10982)))), (var_5)))), (var_11)));
}
