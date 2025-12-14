/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141938
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
    var_20 = ((/* implicit */_Bool) var_4);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((/* implicit */int) (short)-17670)), (arr_2 [i_2 + 2] [(unsigned short)2])))) <= (((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (signed char)114)), (15020469118339565777ULL)));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [(signed char)10] [i_2] [2U] [i_4] &= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_3] [(_Bool)1])) && (((/* implicit */_Bool) max((var_2), ((signed char)114))))))), (((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)178)), ((short)-23244)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_11 [i_0]))))) : (min((-7239394240810624636LL), (((/* implicit */long long int) arr_4 [i_0] [(unsigned char)0] [(unsigned char)0]))))))));
                                arr_18 [(unsigned short)0] [i_1] |= ((/* implicit */short) (-((+(-7239394240810624636LL)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) arr_5 [i_2 + 2]);
                }
            } 
        } 
    } 
}
