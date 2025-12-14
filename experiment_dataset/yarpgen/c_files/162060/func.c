/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162060
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        arr_2 [(_Bool)1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) arr_1 [i_0] [i_0])))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (unsigned short i_3 = 2; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_12 |= ((/* implicit */unsigned char) var_9);
                        arr_10 [i_1] [i_1] [i_2] [i_3 + 1] [i_2] [i_3] &= ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_3 + 1])) ? (((/* implicit */int) (unsigned char)161)) : (450668047));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        arr_14 [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_11 [(short)1]), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)40586)) || (((/* implicit */_Bool) (unsigned short)23))))))))));
        arr_15 [i_4] = ((/* implicit */short) (unsigned short)3);
    }
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (18446744073709551615ULL)))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189))) - (18446744073709551605ULL))) + (((/* implicit */unsigned long long int) max((7862007932882787137LL), (((/* implicit */long long int) var_2))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)65533), (((/* implicit */unsigned short) (unsigned char)189))))))));
}
