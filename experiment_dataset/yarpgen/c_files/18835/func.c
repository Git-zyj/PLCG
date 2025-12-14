/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18835
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            {
                var_10 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_5 [i_1]) / (arr_5 [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1] [(unsigned short)12])) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (arr_4 [i_0] [10] [i_1 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_8))))) : (min((var_3), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 - 3]))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */_Bool) arr_6 [i_3] [6ULL] [i_0] [i_0]);
                            arr_11 [i_1] [10ULL] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) min((var_12), ((-(min((((/* implicit */long long int) var_4)), (-9223372036854775789LL)))))));
}
