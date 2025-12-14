/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11346
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                arr_6 [(unsigned short)4] [13ULL] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))))) != (min((arr_3 [i_0]), (arr_3 [i_0]))))) ? (max((arr_1 [12U]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)43368)) ? (9536144964101699587ULL) : (5048202063410624506ULL))) < (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((3431809183U) - (((/* implicit */unsigned int) 274912661)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((max((max((4308830065969176809ULL), (((/* implicit */unsigned long long int) var_0)))), (min((((/* implicit */unsigned long long int) var_12)), (var_10))))) >= (((/* implicit */unsigned long long int) var_12))));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (unsigned short i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_12 [i_3 + 1] [8] [i_3]))) | (((/* implicit */int) min((arr_12 [i_3 - 1] [5ULL] [i_3]), ((short)-22816))))));
                arr_14 [i_2] = ((/* implicit */unsigned char) min((3417307767U), (((/* implicit */unsigned int) (unsigned char)82))));
                var_16 = ((/* implicit */unsigned int) var_11);
                arr_15 [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 8832460169397908588ULL))))))) | (min((((/* implicit */unsigned int) arr_2 [i_2] [(unsigned char)14])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_2]))) % (2771122466U)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */long long int) var_12)), (var_1))) : (((/* implicit */long long int) ((var_12) >> (((var_7) - (12899743541279278552ULL))))))))), (((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) var_9))))) ? (var_7) : (((/* implicit */unsigned long long int) var_2))))));
}
