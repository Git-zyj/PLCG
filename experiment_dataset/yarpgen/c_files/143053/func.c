/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143053
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
    var_17 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_3))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0)))))))) ? (min((((long long int) 8925087163580858393ULL)), (((/* implicit */long long int) 1173026475)))) : (((/* implicit */long long int) ((var_10) >> (((((/* implicit */int) ((unsigned char) var_4))) - (89)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_18 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_1 [i_0 - 1]) : (((/* implicit */int) (unsigned char)255))))))));
                arr_5 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) 8925087163580858384ULL)))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) (~(var_1)));
                arr_7 [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */int) (short)-6)) + (2147483647))) << (((arr_1 [i_1]) - (1611711520))))))) ? ((+(var_4))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)0)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((((max((8925087163580858411ULL), (((/* implicit */unsigned long long int) (unsigned short)11)))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (9521656910128693245ULL))))) + (((/* implicit */unsigned long long int) (((+(-8894369030332891361LL))) + (((/* implicit */long long int) ((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))));
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 19; i_2 += 4) 
    {
        for (int i_3 = 1; i_3 < 19; i_3 += 3) 
        {
            {
                arr_13 [i_2] = ((/* implicit */unsigned short) (signed char)125);
                arr_14 [i_2] [i_2] = ((/* implicit */int) ((((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))) : (var_16))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2])) && (((/* implicit */_Bool) 3379766539U))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((var_4), (((/* implicit */unsigned int) var_1)))))))));
            }
        } 
    } 
    var_20 |= ((/* implicit */long long int) var_3);
}
