/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154288
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
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) ((unsigned short) 2626066084641626411ULL));
                var_18 ^= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned int) 3335998367U))), (((((/* implicit */_Bool) var_8)) ? (15820677989067925194ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_6);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_0 [i_1 - 1]))) >> (((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)16]))))))) + (106)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        arr_9 [(short)5] = ((signed char) (-(((var_6) & (var_10)))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_3] [2ULL] = ((/* implicit */signed char) (-(((/* implicit */int) arr_2 [12ULL] [i_3] [i_3]))));
            var_19 *= ((/* implicit */unsigned int) (~(arr_11 [i_2])));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_4 = 3; i_4 < 11; i_4 += 4) 
            {
                arr_18 [i_2] [i_3] [i_3] [(unsigned char)11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4 + 2])) ? (((/* implicit */unsigned long long int) 408726126U)) : (arr_8 [i_4 + 2])));
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)0)))))));
            }
        }
        arr_19 [i_2] [i_2] |= ((/* implicit */short) ((((/* implicit */_Bool) min((15820677989067925197ULL), (5ULL)))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) 1258287667U))))), (max((((/* implicit */unsigned long long int) var_12)), (5408513895371903307ULL))))) : (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) (_Bool)0)), (var_8))) * (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
        arr_20 [i_2] [i_2] = ((/* implicit */unsigned short) (short)32763);
    }
}
