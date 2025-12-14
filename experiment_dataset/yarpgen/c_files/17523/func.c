/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17523
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
    var_12 = ((/* implicit */short) var_0);
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) < (var_4)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    arr_7 [(short)6] [(_Bool)1] [i_2] [(short)6] = ((short) ((((/* implicit */_Bool) (unsigned short)19362)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) : ((((_Bool)0) ? (arr_6 [i_2] [(signed char)9] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                    var_14 = ((/* implicit */long long int) var_11);
                }
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_3 [i_1] [i_1] [i_0])))), (((((/* implicit */_Bool) 6975077434275087187ULL)) ? (((/* implicit */int) (unsigned short)43691)) : (((/* implicit */int) (short)-9441)))))))));
                arr_8 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned short) (short)9441)), ((unsigned short)14870)));
                var_16 = ((/* implicit */unsigned int) ((((1317909967U) == (134217728U))) ? (((/* implicit */int) ((short) (unsigned short)65535))) : (((((/* implicit */_Bool) (-(var_6)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [4ULL] [i_0])) : (((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) arr_0 [i_1] [i_0]))))));
                arr_9 [(signed char)1] [(signed char)1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_0])) - (88)))))) / (var_6)));
            }
        } 
    } 
}
