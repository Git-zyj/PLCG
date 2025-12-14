/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150277
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)(-127 - 1)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)127))))) ? ((+(var_3))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1 - 3] [i_0])))))))));
                                arr_14 [i_0] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (176146871904973418ULL))))))), (((short) var_8))));
                                var_20 = ((/* implicit */long long int) max((var_20), ((~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (((((/* implicit */_Bool) -1425996468422391359LL)) ? (3567736860768908345LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-83)))))))))));
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) max((min((var_12), (var_12))), (((/* implicit */short) (signed char)-83)))))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (signed char i_5 = 3; i_5 < 21; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_22 [i_2] [i_0] = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) var_17)))))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                                arr_23 [i_0] [i_2] [i_2] [i_2] [i_6] = ((((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_2 [i_5])))) - (((/* implicit */int) arr_5 [i_2 - 3])));
                                var_22 = ((/* implicit */long long int) var_16);
                                arr_24 [i_2] [i_1] [i_2] [i_5 - 2] [i_6] [i_6] [i_6] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(min((var_15), (((/* implicit */long long int) arr_3 [i_2]))))))), (max(((+(596071129838453271ULL))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_2 - 1] [i_5 - 1] [i_2]))))));
                            }
                        } 
                    } 
                    arr_25 [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_13 [i_0]))) || (((/* implicit */_Bool) (+(var_0))))));
                    arr_26 [i_2] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) (signed char)71))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)72)))) * (((unsigned long long int) var_9))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 4; i_7 < 9; i_7 += 4) 
    {
        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            {
                arr_34 [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_9 [i_7] [i_8] [i_7] [i_8]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)62))) : (var_0)))) || (((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (((((/* implicit */_Bool) arr_7 [i_7] [i_8] [i_7])) ? (arr_6 [i_7] [i_8] [i_8]) : (1466022207194975604LL))))))));
                var_23 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) max(((signed char)99), (((/* implicit */signed char) var_17))))) < (((((/* implicit */int) arr_19 [i_8])) - (((/* implicit */int) var_5))))))) : (((/* implicit */int) ((signed char) min((((/* implicit */int) (_Bool)0)), (arr_3 [i_7])))))));
            }
        } 
    } 
}
