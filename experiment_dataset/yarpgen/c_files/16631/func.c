/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16631
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_20 -= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))))) ? (((((((/* implicit */long long int) arr_3 [i_0])) / (arr_4 [(signed char)4] [(signed char)4] [9U]))) ^ (((/* implicit */long long int) max((arr_3 [i_0]), (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_19))))))))));
                var_21 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 3; i_2 < 13; i_2 += 2) 
    {
        var_22 = (i_2 % 2 == 0) ? (((/* implicit */unsigned short) ((((unsigned int) (_Bool)1)) << (((max((((int) arr_8 [i_2])), (min((((/* implicit */int) arr_8 [i_2])), (arr_7 [i_2]))))) - (217)))))) : (((/* implicit */unsigned short) ((((unsigned int) (_Bool)1)) << (((((max((((int) arr_8 [i_2])), (min((((/* implicit */int) arr_8 [i_2])), (arr_7 [i_2]))))) - (217))) - (7))))));
        var_23 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
        var_24 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) arr_8 [i_2])) | (((/* implicit */int) (_Bool)1)))));
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 3) 
    {
        arr_12 [11ULL] = ((/* implicit */_Bool) var_4);
        arr_13 [i_3] |= ((/* implicit */short) (+(arr_7 [0])));
    }
    var_26 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((long long int) -3219633358472370274LL))) ? (((/* implicit */int) (_Bool)1)) : (((var_7) | (((/* implicit */int) (unsigned short)28265)))))) >> (((((((/* implicit */unsigned int) ((((/* implicit */_Bool) -24LL)) ? (var_17) : (((/* implicit */int) (_Bool)1))))) ^ (2381518541U))) - (999855888U)))));
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) || (((((/* implicit */int) max((((/* implicit */short) (signed char)-124)), ((short)-22986)))) != (((/* implicit */int) (_Bool)1))))));
    var_28 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 778047880U)) ? (((/* implicit */int) (unsigned short)11993)) : (((/* implicit */int) (unsigned char)235))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (var_3)))), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)21979))))), (((0ULL) >> (((1846561066U) - (1846561020U)))))))));
}
