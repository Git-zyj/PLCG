/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127471
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
    var_19 = ((/* implicit */short) var_2);
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)23511)) ? (var_2) : (var_10)))))) ? ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) == (var_11)))))) : ((-((+(((/* implicit */int) var_17))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) (_Bool)0);
                    arr_9 [i_1] = ((/* implicit */short) (-(max((((((/* implicit */_Bool) var_8)) ? (13ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned short) arr_0 [i_0])))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        for (int i_4 = 4; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) max((max((min((var_2), (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) || (arr_13 [i_0] [i_0] [i_2] [i_2] [(unsigned short)10])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [12ULL] [i_3 - 1] [i_4 - 1] [i_4 - 3])) ? (((/* implicit */int) var_0)) : (arr_12 [i_3] [i_3 - 1] [i_3 - 1] [i_4 - 3] [i_4 - 3]))))));
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) max(((unsigned short)2134), (((/* implicit */unsigned short) (_Bool)0))))) % (((/* implicit */int) (unsigned short)43648)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((unsigned short) var_3);
}
