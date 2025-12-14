/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1172
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) var_5)))) : (var_11)))) & ((~((~(4120732343U)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1213576407347531193ULL)))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (+((~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 1] [i_1 - 3] [i_0])))));
                                var_20 = ((/* implicit */long long int) (unsigned short)26931);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 -= ((/* implicit */int) var_13);
    var_22 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((var_2) + (((/* implicit */long long int) ((/* implicit */int) var_16))))) != (var_2)))) + ((+(((/* implicit */int) (short)-1))))));
}
