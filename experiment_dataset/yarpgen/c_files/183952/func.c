/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183952
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
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) (unsigned short)19602))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) == (((/* implicit */int) var_3))))) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((16383U), (((/* implicit */unsigned int) arr_3 [i_0] [9ULL])))))))) : (((/* implicit */int) arr_0 [(_Bool)1]))));
                arr_5 [i_1] [(_Bool)1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4829422582369796185LL)) ? (((/* implicit */int) arr_2 [i_0] [i_0 - 1] [i_1])) : (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 1] [i_0])))) << (((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0 + 3])) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_3 [i_0 + 3] [i_0 - 2])) : (((/* implicit */int) arr_3 [i_0] [i_1])))) - (14845)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 16; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_18 [i_6] [i_3] [i_4] [i_5] [i_2] = ((/* implicit */int) arr_12 [i_5 + 2]);
                                arr_19 [i_2] [i_6] [i_4 - 1] [i_6] [i_6] = ((/* implicit */unsigned int) (+(arr_7 [i_4] [i_5])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 3; i_8 < 17; i_8 += 1) 
                        {
                            {
                                arr_25 [i_8] = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) var_2)))));
                                arr_26 [i_2] [i_2] [i_4] [i_7] [i_8] = ((/* implicit */unsigned long long int) (+(3397319138U)));
                            }
                        } 
                    } 
                    arr_27 [i_2] [i_2] [i_3] [i_4 - 1] = max((((unsigned int) var_4)), (max((2041722846U), (((/* implicit */unsigned int) arr_11 [i_3] [(signed char)1])))));
                }
            } 
        } 
    } 
}
