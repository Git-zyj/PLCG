/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113249
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
    var_20 &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)25))))) ? ((+(4721299142951343213LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)15612)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_0] = (i_0 % 2 == zero) ? (max(((((~(var_16))) >> (((((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) + (1543))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_19))))) ? (min((((/* implicit */long long int) arr_1 [i_0])), (var_12))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_4 [(_Bool)1] [i_1]))))))))) : (max(((((~(var_16))) >> (((((((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) + (1543))) - (31941))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_19))))) ? (min((((/* implicit */long long int) arr_1 [i_0])), (var_12))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_4 [(_Bool)1] [i_1])))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 + 3] [i_0] [i_1])) % (((/* implicit */int) arr_2 [19U] [i_0] [i_1]))))) ? ((-((+(((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) -4721299142951343213LL)))) == (((((/* implicit */_Bool) 9274357950333096103ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0]))))))));
                arr_7 [i_0] [i_0] = ((long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -4721299142951343241LL)), (9172386123376455513ULL))))));
            }
        } 
    } 
}
