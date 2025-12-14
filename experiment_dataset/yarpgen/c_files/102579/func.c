/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102579
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (var_19))) << (((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_21 *= ((/* implicit */signed char) (-(((/* implicit */int) ((((140737488355327ULL) >> (((12410756592119649140ULL) - (12410756592119649121ULL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))))))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)63)) || (((/* implicit */_Bool) (short)20472))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            {
                var_23 = ((/* implicit */_Bool) ((arr_5 [i_2]) ? (((/* implicit */int) ((min((-687856524), (((/* implicit */int) arr_9 [i_3] [i_2])))) == (((/* implicit */int) ((signed char) arr_3 [i_3])))))) : (((((/* implicit */_Bool) 18446603336221196289ULL)) ? (((((/* implicit */_Bool) arr_8 [0ULL] [i_3] [i_3])) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) (short)32767)))) : (((/* implicit */int) arr_3 [i_3]))))));
                var_24 = ((/* implicit */unsigned long long int) ((signed char) arr_0 [i_2]));
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [11ULL]))) > (10196048847628985855ULL)))), (max((147311052U), (((/* implicit */unsigned int) (short)7009))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 140737488355356ULL)) || (arr_0 [i_3]))) ? (((/* implicit */int) arr_0 [i_3])) : (((((/* implicit */int) (short)17553)) << (((140737488355359ULL) - (140737488355355ULL)))))))) : (((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))) < (18446603336221196284ULL))))));
                var_26 = ((/* implicit */int) ((((((2712804587U) << (((9837615621974901668ULL) - (9837615621974901647ULL))))) | (((/* implicit */unsigned int) ((/* implicit */int) (short)17553))))) << (((((/* implicit */int) arr_0 [i_2])) >> (((arr_6 [i_2] [(unsigned short)9]) - (12007984869733931701ULL)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_4 = 1; i_4 < 19; i_4 += 4) 
    {
        var_27 = ((/* implicit */short) arr_10 [i_4 + 1] [i_4]);
        var_28 = ((/* implicit */long long int) arr_11 [i_4 - 1] [i_4 + 1]);
    }
}
