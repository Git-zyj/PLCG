/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159729
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
    var_15 = ((/* implicit */unsigned char) var_6);
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((((/* implicit */long long int) var_6)), (var_12))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) + (arr_2 [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_5 [i_1]))));
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (short)32767)))))) && (((/* implicit */_Bool) (short)-11617))));
    }
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned int) arr_1 [(_Bool)1]);
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 18; i_4 += 3) 
            {
                {
                    arr_18 [i_3] [6] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_13 [i_4] [i_4] [i_4 - 1])) >= (((/* implicit */int) var_6))))) & (((/* implicit */int) max((arr_13 [i_2] [i_2] [i_4 + 2]), (arr_13 [i_4] [i_3] [i_4 + 1]))))));
                    var_19 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_2 [i_4])))) : (max((((/* implicit */unsigned int) arr_13 [i_2] [i_3] [i_4])), (arr_5 [i_4]))))))));
                    var_20 = ((/* implicit */long long int) ((var_0) ? (((/* implicit */unsigned int) ((int) (short)(-32767 - 1)))) : (((((arr_15 [i_4]) ? (2744867017U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) + (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_2])), ((unsigned short)6)))))))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) << (((((((/* implicit */int) var_8)) % (((/* implicit */int) var_1)))) - (20229))))) > (((((var_14) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) var_10)))) % (((/* implicit */int) var_13))))));
}
