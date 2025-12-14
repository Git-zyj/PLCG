/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15419
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
    var_15 = ((/* implicit */short) (unsigned short)4550);
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) 2494529202U);
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (signed char)-57)) ? (1800438097U) : (((/* implicit */unsigned int) 427268204)))))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_17 *= ((/* implicit */short) (-(((/* implicit */int) (signed char)-42))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned int) 3254118245297745034LL);
                    var_19 ^= ((/* implicit */signed char) ((unsigned short) 5004368565401450464LL));
                    arr_11 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33557))) < (745145492614015473ULL)));
                }
            } 
        } 
        arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)4816));
    }
}
