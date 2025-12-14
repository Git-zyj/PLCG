/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102235
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
    var_16 = ((/* implicit */unsigned char) -3417014031170904418LL);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_17 = ((((3417014031170904409LL) == (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)0)), (arr_1 [i_1])))))) ? (arr_0 [i_2] [i_2 - 1]) : (((/* implicit */long long int) (~(((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) var_14)) + (14746)))))))));
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))) * ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (3417014031170904418LL)))))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) max((min((var_4), (((/* implicit */unsigned int) (unsigned char)239)))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((var_9) / (var_9)))) < (arr_5 [i_1] [i_1]))))));
            }
        } 
    } 
}
