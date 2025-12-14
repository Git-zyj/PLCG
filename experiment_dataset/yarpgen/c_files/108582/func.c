/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108582
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
    var_11 = ((/* implicit */signed char) ((((((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))))) || (((/* implicit */_Bool) ((unsigned long long int) ((long long int) var_5))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                for (long long int i_3 = 3; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_12 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 54491669U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL))) / (((unsigned long long int) arr_7 [i_0 - 3] [i_0 - 2]))));
                        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)-130)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) var_5)) - (17850))))) : (((((/* implicit */int) (signed char)35)) + (((/* implicit */int) (short)124))))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_1] [i_2 + 3]))) << (((/* implicit */int) ((_Bool) arr_3 [i_0] [i_3]))))))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */_Bool) ((((((/* implicit */int) ((signed char) (-9223372036854775807LL - 1LL)))) >> (((((/* implicit */int) var_7)) + (19))))) | (((((/* implicit */int) (unsigned char)182)) << (((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0 - 4] [i_0] [i_0])) - (15277)))))));
    }
}
