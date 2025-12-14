/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137952
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
    var_20 = ((/* implicit */unsigned int) (((((~(((var_4) ? (3177297100439988454LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) (+(1881785371)))) ? (var_5) : (((/* implicit */unsigned long long int) ((int) (unsigned char)51))))) - (5676835648230507222ULL)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (-(max((((/* implicit */unsigned int) ((signed char) arr_1 [i_0]))), (arr_1 [i_0])))));
        var_21 += ((/* implicit */int) (!(((/* implicit */_Bool) max(((+(arr_1 [7U]))), (((((/* implicit */_Bool) -1881785369)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) 32767)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */int) ((unsigned long long int) var_2));
                    arr_7 [i_0] [(signed char)0] [(short)5] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) ((var_4) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))))) >> (((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_6 [i_0] [(signed char)1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [7] [i_1] [i_2]))) : (arr_0 [8] [(_Bool)1]))))) + (136)))));
                    arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_15))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_5 [i_0] [i_1] [i_1] [i_2]) : (((/* implicit */int) var_17))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) : (var_19)))))));
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_16)), (arr_0 [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))) : (arr_0 [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_0]))))))))));
                }
            } 
        } 
        var_24 ^= ((/* implicit */short) (_Bool)0);
    }
}
