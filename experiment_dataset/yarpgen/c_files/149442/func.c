/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149442
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
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_4] [i_4] [i_4 + 1] [(_Bool)1] [i_4 - 1] [(short)20]))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_3 + 1]);
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_2] [i_0] [i_2] [i_1 + 1] [i_2])) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) ((-5206388609585253666LL) > (((/* implicit */long long int) ((/* implicit */int) (short)32259))))))));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((var_8) ? (arr_16 [i_2] [i_1 - 1] [i_1 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_2])))))));
                    var_18 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0 + 1] [i_0 + 1]))));
                }
                var_19 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((arr_5 [i_0] [i_0 - 1]) != (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_0] [i_1 - 1] [i_1 - 1] [i_0]))))))));
                arr_19 [i_0] [(signed char)1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) == (var_5)));
            }
        } 
    } 
    var_20 = ((/* implicit */short) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */int) (short)-8316)))))))), (var_3)));
    var_21 = ((/* implicit */int) min(((~(14406897393931064910ULL))), (((/* implicit */unsigned long long int) var_6))));
    var_22 ^= ((/* implicit */long long int) (-((+(var_7)))));
}
