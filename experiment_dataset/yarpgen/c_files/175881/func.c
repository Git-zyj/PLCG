/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175881
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (!((!(var_2)))))) == (((/* implicit */int) ((((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)-32759)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [(unsigned short)6] |= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min(((short)32767), (arr_2 [0LL] [0LL]))))) < ((~(arr_1 [i_1]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */short) (!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_11))))));
                        arr_12 [i_0] [i_0] [18U] [i_0] [i_0] &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [i_1])))) ? (arr_0 [i_0] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))));
                        arr_13 [i_0] [i_0] [i_0] [i_1] [i_1] = ((/* implicit */short) (unsigned short)24855);
                    }
                }
            } 
        } 
    } 
}
