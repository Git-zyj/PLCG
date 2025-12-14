/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166827
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 24; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-29385)), (5720625674409966932LL)))) ? (((1074205247U) / (1074205247U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_2])) & (arr_4 [i_0] [i_1]))))))) ? (((/* implicit */long long int) (-(max((((/* implicit */int) (_Bool)1)), (2136667514)))))) : (5720625674409966934LL))))));
                                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((((((/* implicit */_Bool) (unsigned short)25591)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_2])))) * (arr_4 [i_0 + 3] [i_0 - 1]))) / (((/* implicit */int) ((((((/* implicit */int) arr_3 [i_0] [i_2])) >> (((3220762049U) - (3220762041U))))) != (-2003103734)))))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */_Bool) max((((-5720625674409966933LL) - (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)27897)) % (((/* implicit */int) arr_10 [i_1] [i_1] [i_0] [i_0 + 4]))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 1])) - (((/* implicit */int) arr_6 [i_0 + 2])))))));
            }
        } 
    } 
    var_15 |= ((/* implicit */short) var_10);
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) 5720625674409966942LL)) + (var_6))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))))))) / ((-((+(var_11))))))))));
}
