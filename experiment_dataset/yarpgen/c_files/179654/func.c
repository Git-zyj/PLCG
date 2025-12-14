/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179654
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(signed char)8] = ((/* implicit */unsigned long long int) ((min((18446744073709551615ULL), (arr_2 [i_0] [(signed char)8]))) == (min((max((18446744073709551606ULL), (160331904473435912ULL))), (arr_2 [i_0] [i_1])))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
                var_10 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((18446744073709551615ULL), (63ULL))) != (min((((/* implicit */unsigned long long int) (signed char)50)), (18446744073709551595ULL))))))) & ((+(var_5)))));
                arr_7 [i_0] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_0])))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) 1361978924U)) >= (arr_10 [i_1 + 3] [i_1 + 2] [i_1]))))));
                            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_11 [i_1] [i_1 - 2] [i_2 + 2])))) != ((-(((/* implicit */int) (short)-17196)))))))));
                            arr_14 [i_0] [i_2] [i_2] [i_0] [i_0] [i_0] = (-((-(11763660352300791450ULL))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) 1361978924U))))) ? (max((var_7), (((/* implicit */unsigned long long int) (short)11647)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
    var_14 = ((/* implicit */short) var_2);
}
