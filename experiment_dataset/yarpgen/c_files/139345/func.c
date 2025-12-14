/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139345
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
    var_11 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)21))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_4)))) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) (unsigned short)57131))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) (short)18))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                for (unsigned short i_3 = 3; i_3 < 14; i_3 += 2) 
                {
                    {
                        arr_11 [i_0 - 1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)23)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_3] [i_2 + 1])) || (((/* implicit */_Bool) (unsigned short)8427))))) : (((/* implicit */int) (signed char)19))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-20)) + (((/* implicit */int) var_7))));
        arr_12 [i_0 - 2] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (!(arr_5 [10ULL] [2LL] [2LL]))))));
    }
}
