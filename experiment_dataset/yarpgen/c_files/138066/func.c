/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138066
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_13 ^= ((/* implicit */unsigned short) 12ULL);
                var_14 = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) (unsigned short)65535)), (((((/* implicit */_Bool) (unsigned char)62)) ? (31525197391593472ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-30)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? ((~(((/* implicit */int) (unsigned char)75)))) : (((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 2] [i_1 + 2])))))));
                    arr_8 [i_1] [i_1 + 1] [i_2] = ((/* implicit */_Bool) arr_2 [i_2] [i_1 - 1]);
                }
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_6))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) ? ((-(((/* implicit */int) (unsigned char)85)))) : ((+(((/* implicit */int) (_Bool)1))))));
}
