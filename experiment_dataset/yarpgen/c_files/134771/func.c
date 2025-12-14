/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134771
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0] [i_1])), (1346613391)))))));
                    var_15 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (short)-32760))))) ? (((((/* implicit */unsigned long long int) -4760306122369944740LL)) - (arr_2 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1346613391))))))));
                    arr_6 [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0 + 3]))) ? ((+(arr_0 [i_0 + 3]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [i_0 - 2]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0 + 2] [i_0 + 2] [i_2] [i_3 + 1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_4 [i_4 + 1] [i_3 - 1] [i_0 + 3] [i_0 + 2])))) ? ((-(arr_4 [i_4 + 1] [i_3 + 2] [i_0 - 3] [i_0 - 1]))) : (((/* implicit */long long int) ((int) arr_13 [i_4 + 1] [i_3 + 2] [i_0 + 3] [i_0 - 2])))));
                                arr_15 [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_13 [i_0 - 1] [i_1] [i_4 + 1] [i_0 - 1]) + (2147483647))) >> (((-1346613392) + (1346613420)))))) ? (((/* implicit */int) (signed char)-112)) : (((((/* implicit */_Bool) 889882769914372996LL)) ? (((/* implicit */int) arr_10 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 - 1])) : (-1791036042)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = var_4;
    var_17 = ((/* implicit */long long int) 18446744073709551615ULL);
}
