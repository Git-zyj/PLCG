/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141245
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((11584238441701920141ULL) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (17718434793600094466ULL))))))) & (((((((/* implicit */_Bool) var_10)) ? (var_2) : (var_2))) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) << (((((/* implicit */int) (short)-11743)) + (11772))))))))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2396200816U)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (short)-5903))));
                            var_12 = min((arr_3 [i_2 - 1]), (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (var_10)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_7 [i_2] [i_0] [i_0]))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((728309280109457149ULL) % (427295931429162971ULL))) : (((/* implicit */unsigned long long int) ((var_9) | (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */int) var_6)))) != (((/* implicit */int) var_0))))) : (((var_4) << (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_5)) : (var_9))) - (3711271185U)))))));
                            arr_14 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) ((unsigned long long int) max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_7)) ? (var_8) : (var_5))))));
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (min((var_2), (var_2)))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) var_6))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */int) var_1))))))) - (((min((var_2), (((/* implicit */unsigned int) var_3)))) - (((var_9) | (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_0])))))))));
            }
        } 
    } 
    var_15 *= ((/* implicit */short) var_8);
    var_16 = ((/* implicit */unsigned long long int) var_6);
}
