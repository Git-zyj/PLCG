/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180955
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 6; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (short i_4 = 4; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1 - 1] [i_2 + 4] [i_2 - 1] [i_3] [i_4 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_13 [i_0] [i_1 + 1] [i_0] [i_3] [i_4 - 3])))) : (((((arr_11 [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) ? ((~(arr_3 [i_0]))) : (((/* implicit */unsigned long long int) arr_14 [i_2 - 2] [i_2] [i_2 - 1] [i_2 - 1] [i_2] [(_Bool)1] [i_0]))))));
                                var_18 ^= ((/* implicit */int) ((unsigned long long int) 12857336928823129977ULL));
                                arr_16 [i_4 - 3] [i_3] [i_0] [2] [i_0] [(signed char)4] [(signed char)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_11 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (var_1))))) : (min((5589407144886421638ULL), (((/* implicit */unsigned long long int) 3476238736U)))))) : (5589407144886421621ULL)));
                                arr_17 [i_2 - 1] [i_0] [i_3] [i_2 - 1] [6] [i_0] [i_0] = ((/* implicit */short) 4294967286U);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        {
                            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~((-(5589407144886421638ULL)))));
                            arr_25 [i_0] [i_0] [i_5] [8U] [i_6] = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_1 - 1]))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (short)4924))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */int) var_11)), ((-(((/* implicit */int) var_10))))))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12857336928823129981ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))), (((5589407144886421642ULL) - (12857336928823129978ULL)))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) -1131053052)) ^ (430945099U))))));
}
