/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184387
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (_Bool)1)), (6401178343496262886ULL)));
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (short)255)) != (((/* implicit */int) var_9)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (var_0)))) ? (((arr_4 [i_0] [i_1 + 1] [i_1 + 1]) | (((/* implicit */int) var_3)))) : (((/* implicit */int) var_9))))) : (max((23U), (((/* implicit */unsigned int) (-(arr_4 [7U] [i_1] [i_2]))))))));
                    arr_10 [i_2] [18] [i_1] [i_2] = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) var_0)))));
                    var_12 = ((/* implicit */int) ((unsigned int) var_1));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) (((!((!(((/* implicit */_Bool) 0U)))))) && ((((_Bool)1) && (((/* implicit */_Bool) (unsigned short)65516))))));
    var_14 |= ((/* implicit */unsigned int) ((int) (-(((int) var_6)))));
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_9)))) : ((((_Bool)1) ? (((/* implicit */unsigned int) 917390728)) : (2659181241U))))))));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 8; i_3 += 3) 
    {
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (~(511U)));
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_2 [i_3] [i_3]))));
            }
        } 
    } 
}
