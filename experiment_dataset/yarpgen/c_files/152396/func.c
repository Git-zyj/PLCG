/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152396
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
    var_12 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 6; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) 879854208U)) + (var_8))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0]))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 2] [i_0])) > (((/* implicit */int) arr_0 [(signed char)0] [i_0]))))))))));
        arr_3 [i_0 + 3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) arr_0 [1LL] [i_0]))));
    }
    /* LoopNest 3 */
    for (short i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                {
                    var_13 += ((/* implicit */short) min((((/* implicit */long long int) (unsigned char)2)), (((arr_7 [3U] [i_2] [i_2]) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned char)11])))))));
                    var_14 += ((/* implicit */unsigned long long int) arr_9 [(short)4] [i_2]);
                    var_15 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_4 [(_Bool)1]))))));
                }
            } 
        } 
    } 
}
