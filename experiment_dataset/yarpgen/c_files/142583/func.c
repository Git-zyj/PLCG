/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142583
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
    var_10 = ((/* implicit */unsigned long long int) max((-9117403881417545206LL), (((/* implicit */long long int) 1262878025))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_6 [5] [(signed char)18] [13LL] = ((/* implicit */_Bool) var_3);
                    var_11 = ((/* implicit */short) (((+(min((arr_4 [0ULL] [(short)11] [12ULL]), (((/* implicit */long long int) var_3)))))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [15])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [(short)4] [(signed char)0] [7U]))) : (-9117403881417545210LL))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_12 += ((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (((int) ((signed char) (signed char)120)))));
                                var_13 = (~(((((((/* implicit */_Bool) arr_4 [(signed char)14] [12U] [(short)10])) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [10] [(short)12]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                            }
                        } 
                    } 
                    arr_11 [(_Bool)1] [(short)0] [(short)12] [12] &= min((min((((/* implicit */unsigned long long int) arr_10 [(signed char)5] [(signed char)17] [0] [i_2 - 1] [(short)3])), (var_2))), (((((/* implicit */_Bool) (signed char)22)) ? (212105865357958671ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25833))))));
                    arr_12 [18] [(signed char)4] [(short)3] = (((+(arr_0 [i_1 + 1] [i_2 + 1]))) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (153))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) var_7);
}
