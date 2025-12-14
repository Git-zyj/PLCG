/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149729
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) max((arr_5 [i_0]), (arr_1 [i_0])))), ((~(((/* implicit */int) (_Bool)1))))))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!((_Bool)1)))), ((((_Bool)1) ? (2800298238398393397ULL) : (((/* implicit */unsigned long long int) 261632))))));
                arr_8 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_11), (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)206)) : (150261299))) : (((/* implicit */int) (unsigned char)49)))) ^ (((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_1]))))));
                arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (max((((((/* implicit */int) (unsigned short)41371)) | (-1972315992))), (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)23947)))))) : (1929748712)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            {
                arr_15 [(unsigned short)7] [(unsigned short)7] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((var_4) <= (((/* implicit */int) arr_5 [i_2])))))));
                arr_16 [i_3] &= ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_12 [i_2] [i_3])))));
                arr_17 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_3] [i_2])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)238))))) : (min((min((0U), (((/* implicit */unsigned int) (unsigned short)7)))), (((/* implicit */unsigned int) (unsigned short)51955))))));
            }
        } 
    } 
}
