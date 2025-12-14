/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133907
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
    var_18 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) ((var_12) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))), (var_5))), (((/* implicit */unsigned long long int) var_3))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) (~(var_14)))) : (min((9148585694816492417ULL), (var_1)))))));
                    var_20 = ((/* implicit */long long int) ((int) ((unsigned short) (unsigned char)249)));
                    var_21 -= ((/* implicit */unsigned int) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [19U]))))) < (((/* implicit */int) ((((/* implicit */_Bool) -453702867)) || (((/* implicit */_Bool) var_9))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1082)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [i_1] [i_1] [16ULL] [i_1]))))) != ((+(9298158378893059198ULL)))))) : ((~(((/* implicit */int) (short)3567))))));
                    arr_8 [i_0] [i_1] [i_0] [i_2 + 1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9148585694816492423ULL)))) ? (2395614325U) : (((/* implicit */unsigned int) (-2147483647 - 1))))) >> (((((/* implicit */int) arr_3 [i_2 + 1])) - (115)))));
                }
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((int) ((unsigned int) var_8)))), (var_1)));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_3);
}
