/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115313
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                var_18 = ((((/* implicit */_Bool) arr_0 [i_1])) ? (max((arr_0 [i_0]), (arr_0 [i_0 + 1]))) : (((int) arr_0 [i_1 + 1])));
                var_19 &= ((/* implicit */unsigned short) 0);
            }
        } 
    } 
    var_20 *= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((unsigned short) 14571875642792656131ULL))) ? (((/* implicit */int) ((short) -593512755826274080LL))) : (((/* implicit */int) (short)27625)))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (unsigned char)97))));
                arr_11 [i_2] [i_2] = ((((/* implicit */_Bool) 4242998746291897720ULL)) ? (14203745327417653874ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))));
                var_22 &= ((/* implicit */int) ((signed char) min((((unsigned long long int) arr_6 [i_2] [i_2])), (((/* implicit */unsigned long long int) ((int) -1))))));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */int) ((short) arr_7 [i_3 + 1] [i_3 + 1]))) : ((~(((int) arr_7 [i_2] [i_2]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)153)), (var_2)));
}
