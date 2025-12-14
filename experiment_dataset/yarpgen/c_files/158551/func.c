/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158551
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
    var_10 = var_4;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [(_Bool)1] [i_2] = ((/* implicit */_Bool) (short)23982);
                    arr_7 [i_2] [10LL] [i_2] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)46574)) ? (max((((/* implicit */unsigned long long int) -336654326)), (9051999324455507051ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 1])), ((~(((/* implicit */int) (_Bool)0)))))))));
                    var_11 = ((/* implicit */unsigned long long int) ((max((max((((/* implicit */long long int) var_6)), (3LL))), (((/* implicit */long long int) (!((_Bool)1)))))) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [10ULL])))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
    var_13 = var_3;
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_1))));
}
