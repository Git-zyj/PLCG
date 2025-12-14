/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129370
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
    var_19 = ((/* implicit */int) ((((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-88)), (var_8))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    var_20 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) (short)-22053)))), (((/* implicit */int) var_1)))) % (((((/* implicit */_Bool) ((int) var_5))) ? (151584741) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (var_17))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) 608804348)) : (arr_0 [i_0] [i_1])))) ? (((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */int) (short)3)) : (232735664))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)26486)) || (((/* implicit */_Bool) (unsigned char)110)))))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((-232735664), (((/* implicit */int) (signed char)-88)))) | (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_1]))))))) ? (((((/* implicit */unsigned int) 608804360)) - (max((((/* implicit */unsigned int) (short)26514)), (arr_0 [i_0] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) != (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-43))) ^ (3347708243U)))))))));
                var_23 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) >= (var_18))) ? (((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (14410919976000721173ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0])) ^ (((/* implicit */int) arr_3 [i_1])))))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)-26487)) ? (2778466139U) : (((/* implicit */unsigned int) 608804371))))))) ? (((unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)65)), ((unsigned short)65535)))) : (((/* implicit */unsigned long long int) 1783111436))));
            }
        } 
    } 
}
