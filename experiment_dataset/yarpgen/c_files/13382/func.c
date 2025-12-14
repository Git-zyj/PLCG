/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13382
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_4))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) var_5);
                            var_15 = ((/* implicit */unsigned int) (-(7836110805658541587ULL)));
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (_Bool)1))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                var_18 = ((/* implicit */long long int) arr_2 [(signed char)7]);
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_11);
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)101))));
}
