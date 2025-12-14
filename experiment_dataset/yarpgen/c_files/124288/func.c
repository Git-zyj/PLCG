/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124288
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */int) (unsigned short)12288)) : (((/* implicit */int) ((unsigned short) min((var_2), (((/* implicit */int) (short)-20732))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) max(((-(arr_3 [i_0] [i_0]))), (0ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-20727))))) : (((((/* implicit */_Bool) (short)20743)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (var_3) : (var_7)))) : (max((((/* implicit */unsigned long long int) var_0)), (arr_1 [i_1] [(short)5])))))));
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) 3781663621631681559ULL);
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)43922)), (4707134085280957547ULL)));
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((int) ((unsigned short) (+(((/* implicit */int) (short)20721))))));
                    var_14 = ((/* implicit */unsigned short) ((short) arr_12 [i_2] [i_2] [i_2]));
                    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) (unsigned short)11766)))))), (((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)17975)))))));
                    var_16 = ((/* implicit */unsigned short) ((min((var_1), (var_1))) & (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-20744))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)17975), (var_6))))) : (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) var_7))))))));
                }
            } 
        } 
    } 
}
