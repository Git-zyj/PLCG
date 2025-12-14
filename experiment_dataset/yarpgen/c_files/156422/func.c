/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156422
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 17; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (12912781293968905819ULL))) * (((/* implicit */unsigned long long int) (-(624184279U)))))), (((/* implicit */unsigned long long int) arr_1 [2]))));
                                var_17 += ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) min((arr_12 [i_1] [i_3] [i_2] [i_1] [i_1]), (((/* implicit */long long int) (short)30449))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [7LL] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) | (max((((/* implicit */unsigned int) max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), ((short)28349)))), ((~(624184279U)))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    for (int i_6 = 2; i_6 < 20; i_6 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((long long int) -501940148))))) ? (((((/* implicit */_Bool) -1147767231)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (short)26195)))) : (min((((/* implicit */long long int) var_12)), (-8228627275229401372LL))))) : (((((/* implicit */_Bool) (~(arr_3 [i_0] [i_0])))) ? (((/* implicit */long long int) -424723582)) : (((((/* implicit */_Bool) 1211011583)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_12 [i_6] [10LL] [i_1] [i_6] [i_6])))))));
                            arr_20 [i_6] [i_6] [i_6] [13LL] = (-((+(((/* implicit */int) arr_19 [i_6] [i_6] [i_6 - 1] [i_6 - 2] [i_0] [(_Bool)1])))));
                            arr_21 [i_1] [7LL] [i_6] [20] [i_1] = ((/* implicit */unsigned int) (+((-(12912781293968905800ULL)))));
                            var_19 = ((/* implicit */short) ((unsigned char) 624184279U));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (min((((/* implicit */unsigned long long int) (unsigned char)44)), (16111774199137365738ULL)))))) ? (max((((/* implicit */int) (short)28349)), (((((/* implicit */_Bool) 1871660813)) ? (2147483647) : (1959144071))))) : (((/* implicit */int) var_3))));
}
