/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174549
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 4; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_12 [(signed char)4] [8ULL] [i_2 - 4] [(signed char)4] [i_0 - 1] = ((/* implicit */int) ((short) ((unsigned short) arr_5 [i_0 + 1] [(short)2] [i_2 - 4] [i_3 - 1])));
                                arr_13 [i_0] [i_1] [i_3] [i_4] = ((/* implicit */short) min((3544419535879712439ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 35182224605184ULL)) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) (_Bool)1)))))));
                                var_14 ^= ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)15)) & (((/* implicit */int) (unsigned short)24242))))) || (((/* implicit */_Bool) ((((arr_7 [(unsigned char)6] [10ULL]) + (2147483647))) >> (((((/* implicit */int) var_0)) - (30831)))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (((unsigned long long int) (-(((/* implicit */int) (unsigned char)104))))));
                                var_15 = ((/* implicit */long long int) max((((unsigned int) arr_1 [i_0 + 1])), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                                arr_14 [i_3] = (~((~(((/* implicit */int) arr_4 [i_2 + 1] [1] [i_3 + 1])))));
                            }
                        } 
                    } 
                } 
                var_16 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])) & ((-(15544642462424539633ULL)))));
                var_17 = ((/* implicit */int) ((((arr_2 [i_0 + 1] [i_0 - 1] [0ULL]) & (arr_2 [(short)1] [i_0 + 1] [(short)1]))) >= (((/* implicit */unsigned long long int) (((-(1192803135))) - (((/* implicit */int) var_2)))))));
                var_18 = ((/* implicit */long long int) (unsigned short)24247);
                arr_15 [9] |= ((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)10)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)47)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_7);
    var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max(((unsigned char)41), (((/* implicit */unsigned char) var_2))))))), (((/* implicit */int) var_7))));
}
