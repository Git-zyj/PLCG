/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170217
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
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((short) var_6)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_19 ^= ((/* implicit */short) ((unsigned long long int) min(((unsigned short)20503), ((unsigned short)4132))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((max(((unsigned short)61403), (((/* implicit */unsigned short) (short)0)))), ((unsigned short)33859))))));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) 1207653298U))));
                                var_22 ^= ((unsigned short) max((((/* implicit */unsigned short) (short)18)), ((unsigned short)1792)));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_1] [i_1] |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) 879962885)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39006))))), (((/* implicit */unsigned long long int) ((short) 4858801397695360318ULL)))));
            }
        } 
    } 
}
