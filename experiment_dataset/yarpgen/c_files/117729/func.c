/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117729
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
    var_15 = ((/* implicit */unsigned char) (signed char)89);
    var_16 = ((/* implicit */_Bool) ((unsigned short) ((short) ((unsigned int) (signed char)-90))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        arr_10 [i_2] [i_1] = ((/* implicit */unsigned int) 12481891448495254803ULL);
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_2]))) ? (((/* implicit */int) (unsigned char)255)) : (-5154696))))));
                        arr_11 [i_0] [3ULL] [i_2] [i_0] [i_0] = ((/* implicit */int) var_10);
                    }
                    arr_12 [i_2] [i_1] [(signed char)10] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_0] [i_1]))) ? (((/* implicit */int) (unsigned char)2)) : (max((398680379), (((((/* implicit */int) var_0)) & (((/* implicit */int) arr_3 [i_2] [i_1] [i_0]))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_11))))))));
}
