/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18482
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
    var_12 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-84)) ? ((+(((unsigned long long int) -2649565763763167900LL)))) : (((/* implicit */unsigned long long int) -2649565763763167900LL))));
    var_13 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(-735879017096813311LL)))) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)126)), (12332441074112487170ULL)));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) (-(((((_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_0] [i_1]))))));
                            var_16 = ((/* implicit */short) (signed char)-39);
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (!(((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_2 + 1]))) < (((long long int) (_Bool)1)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) > (var_10)))))) | (var_6)));
}
