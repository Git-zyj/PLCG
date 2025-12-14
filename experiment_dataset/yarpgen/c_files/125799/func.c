/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125799
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) arr_0 [i_0] [i_1])), (-4322140194860633089LL)));
                var_11 ^= ((/* implicit */signed char) max((arr_4 [i_0] [i_1]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) 1718522704U))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_12 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                            var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_8 [i_0] [i_1] [i_1] [i_3]))) - (var_6)))) < (5375195364577359385ULL)));
                            var_14 = ((/* implicit */signed char) 1718522700U);
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((((/* implicit */int) (signed char)31)) != (((/* implicit */int) (unsigned short)65516)))))))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned char) var_2))), (((((/* implicit */unsigned long long int) var_2)) + (var_7)))))) && (((/* implicit */_Bool) var_1))));
    var_17 &= ((/* implicit */long long int) min((((/* implicit */int) (unsigned short)2763)), ((~(((/* implicit */int) ((unsigned short) var_4)))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) % (var_7)));
}
