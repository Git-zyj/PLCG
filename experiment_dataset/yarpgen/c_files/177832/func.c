/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177832
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
    var_19 = ((/* implicit */_Bool) (+(min((18446744073709551601ULL), (((/* implicit */unsigned long long int) (signed char)53))))));
    var_20 ^= ((/* implicit */unsigned short) min(((~((~(((/* implicit */int) (signed char)52)))))), (((/* implicit */int) var_16))));
    var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((0U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)1932)))))) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) (signed char)51)))), (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 23; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_22 ^= ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-38)) > (((/* implicit */int) (signed char)-72)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3 + 2]))) % (15450116670238377942ULL))), (((unsigned long long int) var_16))))));
                            var_23 = ((/* implicit */_Bool) min((min((((2996627403471173674ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32741))))), (((/* implicit */unsigned long long int) (signed char)-43)))), (5131936079431145817ULL)));
                        }
                    } 
                } 
                var_24 ^= ((/* implicit */signed char) (~(((((/* implicit */int) arr_3 [i_0 + 2])) | (((/* implicit */int) arr_3 [i_0 + 1]))))));
            }
        } 
    } 
}
