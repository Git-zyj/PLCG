/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149999
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-107)))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_14 = (short)8134;
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((signed char) 6915169002830299206ULL))) && (((/* implicit */_Bool) min((arr_5 [i_3]), (var_4))))))))))));
                                arr_12 [(signed char)10] [10ULL] [8ULL] [(short)10] [(short)10] [(short)9] |= ((10783738580543634544ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)73))));
                                var_16 = ((/* implicit */short) max((var_16), ((short)-1377)));
                                arr_13 [i_0] [(short)4] [(short)4] [(short)4] [(signed char)3] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_3]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
