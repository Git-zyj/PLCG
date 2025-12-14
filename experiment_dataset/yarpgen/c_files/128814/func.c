/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128814
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
    var_11 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) max((var_8), (7076490899389399083ULL)))) ? (max((var_2), (7076490899389399083ULL))) : (min((var_6), (((/* implicit */unsigned long long int) var_3)))))));
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_13 |= ((((((/* implicit */_Bool) var_0)) ? (arr_14 [i_0] [i_2] [i_2] [i_2] [i_4]) : (((/* implicit */unsigned long long int) 4161536)))) / (arr_10 [i_0] [i_0] [i_0] [i_0]));
                                arr_15 [i_0] = ((/* implicit */unsigned long long int) (!(((min((arr_10 [i_0] [i_2] [0ULL] [i_0]), (((/* implicit */unsigned long long int) arr_9 [i_4] [2ULL] [18ULL] [i_2] [i_1] [i_0])))) == ((+(arr_11 [i_3])))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_2] = max((15444627916708492395ULL), (((/* implicit */unsigned long long int) (short)32767)));
                }
                arr_17 [i_0] [18ULL] = ((/* implicit */short) ((max((((((/* implicit */_Bool) arr_2 [i_0])) ? (7315750326085346448ULL) : (var_5))), (((((/* implicit */_Bool) arr_3 [i_1] [8])) ? (15444627916708492415ULL) : (((/* implicit */unsigned long long int) 1726906411)))))) | ((~(max((var_8), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0]))))))));
                var_14 = ((/* implicit */unsigned long long int) var_9);
            }
        } 
    } 
}
