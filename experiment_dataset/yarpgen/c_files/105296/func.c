/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105296
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
    var_19 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [(signed char)17] = ((/* implicit */_Bool) arr_1 [i_1]);
                arr_7 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 1754721658583926330ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (7206435078156292684ULL))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((var_15) | (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_17 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_16 [i_4 - 1] [i_3] [i_2] [i_2])) ? (arr_16 [i_3] [i_3] [i_3] [i_2]) : (arr_16 [i_2] [i_3] [(unsigned char)2] [i_4 - 1]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_22 [(unsigned short)14] [i_4] [i_4] [i_4] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) arr_21 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1] [i_6] [i_6 - 1] [i_4])))));
                                arr_23 [i_4] [i_4] [i_3] [i_4] [i_4] [i_6] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) 8637658211529144626ULL)) ? (-15) : (-13))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) != (var_3)))))));
                                arr_24 [i_2] [i_3] [i_4] [i_5] [i_6] = ((((/* implicit */_Bool) ((signed char) (unsigned short)50141))) ? (min((arr_2 [i_2] [5] [i_4 - 1]), (arr_2 [14ULL] [i_3] [i_6 - 1]))) : (((/* implicit */unsigned long long int) ((arr_4 [i_2] [i_3] [i_2]) ? (((/* implicit */int) arr_4 [i_2] [i_3] [i_4 - 1])) : (((/* implicit */int) arr_4 [i_2] [i_3] [16]))))));
                            }
                        } 
                    } 
                    arr_25 [i_3] [0ULL] [i_4] [0U] = ((((((/* implicit */_Bool) arr_20 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4 - 1] [i_4 - 1] [i_4 - 1]))) : (arr_19 [i_2] [i_2] [6U] [0LL]))) >= (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_11))))))));
                    arr_26 [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((unsigned char) -26));
                }
            } 
        } 
    } 
}
