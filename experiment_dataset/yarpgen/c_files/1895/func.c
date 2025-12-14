/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1895
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
    var_10 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) arr_4 [i_0]))));
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) min((arr_2 [i_1]), (arr_2 [i_0]))))));
            }
        } 
    } 
    var_12 -= ((/* implicit */int) -438449975530265306LL);
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) arr_8 [(_Bool)1]);
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 438449975530265303LL)) * (max((((/* implicit */unsigned long long int) ((808264983009062433ULL) < (((/* implicit */unsigned long long int) -1966331096))))), (arr_10 [i_2] [i_3] [i_2])))));
                }
            } 
        } 
    } 
}
