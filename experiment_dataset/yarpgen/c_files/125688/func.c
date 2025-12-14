/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125688
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
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) -1999095663);
                var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((var_5) && (((/* implicit */_Bool) arr_0 [i_1])))))) == (min((((/* implicit */unsigned int) arr_1 [i_0])), (var_0))))) ? (((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_0])), (var_0)))) / (arr_4 [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (arr_4 [i_0] [i_1] [i_1])))))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */short) (+(((var_1) >> (((var_0) - (3795314508U)))))));
                            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) (short)-847))))), (arr_4 [i_2] [i_2 - 1] [i_2 + 1])))) ? (((unsigned int) (_Bool)1)) : (min((max((var_8), (((/* implicit */unsigned int) 1999095663)))), (((((/* implicit */_Bool) arr_10 [(unsigned short)12] [i_2])) ? (var_0) : (((/* implicit */unsigned int) var_7))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 -= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_0))), (((/* implicit */unsigned int) min((((/* implicit */int) ((var_1) != (((/* implicit */unsigned long long int) var_0))))), ((-(var_7))))))));
}
