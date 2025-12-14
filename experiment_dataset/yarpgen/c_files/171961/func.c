/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171961
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_8 [14] [i_1] [i_0] &= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) (-((~(((/* implicit */int) (unsigned char)253))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_0] [(unsigned short)3] [i_2] [i_3] [(unsigned short)3] = ((/* implicit */short) (((((~(((/* implicit */int) var_2)))) <= (((int) 4742573321827657432ULL)))) || (((/* implicit */_Bool) (+(((/* implicit */int) (short)0)))))));
                        arr_14 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)0)))))))) + (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) -1486026761)) : (4742573321827657432ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_2 - 1] [i_1])))))));
                        arr_15 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)0))))))));
                        arr_16 [i_0] [(unsigned short)14] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((unsigned int) var_13))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)0)))))));
                    }
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) var_5)))));
    var_17 = ((/* implicit */unsigned char) var_4);
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (short)12304))) ? (((/* implicit */long long int) var_13)) : (var_4)));
}
