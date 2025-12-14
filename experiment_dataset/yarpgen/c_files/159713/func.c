/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159713
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
    for (signed char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_12 ^= ((/* implicit */unsigned char) ((unsigned int) (-(((/* implicit */int) var_1)))));
                arr_5 [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)41687)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))) : (11254753552431322394ULL)));
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23848))) | (var_10))) + (min((((/* implicit */unsigned long long int) (unsigned short)7350)), (7191990521278229222ULL)))))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_0 - 2] [i_0 + 1])), (18196791350828626507ULL))) : (((18196791350828626502ULL) & (((10434241936543611940ULL) & (((/* implicit */unsigned long long int) -1))))))));
            }
        } 
    } 
    var_14 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (+(((/* implicit */int) (short)16487))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) | (var_2)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (11254753552431322394ULL))))), (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (unsigned int i_4 = 1; i_4 < 11; i_4 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((249952722880925118ULL) - (18196791350828626498ULL)));
                    arr_14 [i_2] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)2))));
                }
            } 
        } 
        var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_8 [i_2] [i_2]))));
    }
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        var_17 += ((/* implicit */int) ((((/* implicit */int) max(((unsigned short)23849), ((unsigned short)64502)))) > (((/* implicit */int) min((((/* implicit */unsigned short) arr_16 [i_5])), (var_1))))));
        /* LoopSeq 1 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (18196791350828626480ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)138))))), (var_7)))))));
            arr_23 [i_6] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) < (2473747936U)))), (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) >> (min((((/* implicit */unsigned int) var_2)), (((unsigned int) var_8))))));
        }
    }
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_8))));
}
