/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179857
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
    var_12 = var_3;
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0 + 2] [i_0] = ((/* implicit */short) min((max((var_5), (var_7))), (var_11)));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                            {
                                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) ((short) var_4))) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)29913))) == (1048575ULL))))))))))));
                                var_14 -= ((/* implicit */short) (((~(arr_3 [i_0 - 1] [i_0 - 1]))) | (arr_3 [i_0] [i_0])));
                            }
                            arr_12 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 654291976084576215ULL)) ? (((((/* implicit */_Bool) min((var_8), (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-25494)) * (((/* implicit */int) (short)-25494))))) : (arr_9 [i_2] [i_3] [i_0] [i_3] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25499)))));
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)25516), (arr_6 [6ULL] [i_1] [i_2] [i_3]))))) <= (min((var_6), (arr_7 [i_0 - 1] [18ULL] [18ULL] [i_0 + 1]))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 1] [i_1] [i_1] [i_1])) ? (min((max((((/* implicit */unsigned long long int) (short)-24866)), (1136027711334093890ULL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) / (var_6))))) : ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)19728))) & (arr_1 [i_0]))))))))));
                var_17 -= ((/* implicit */unsigned long long int) var_2);
                var_18 -= ((/* implicit */short) var_5);
            }
        } 
    } 
    var_19 -= ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((((((/* implicit */_Bool) var_2)) ? (var_11) : (var_1))) ^ ((~(137438920704ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))));
}
