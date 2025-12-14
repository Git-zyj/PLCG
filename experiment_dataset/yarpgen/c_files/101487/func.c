/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101487
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((var_1), (var_1)))) ? (min((((/* implicit */long long int) (unsigned short)16383)), (268435455LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)202))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0])))) ? (((((/* implicit */int) var_3)) >> (((var_8) - (6633328816128704434ULL))))) : (((/* implicit */int) max(((unsigned short)16383), (var_2)))))))));
        var_12 = ((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) arr_0 [i_0])))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_13 &= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((var_0) | (((/* implicit */unsigned int) var_6))))))) ? (((/* implicit */long long int) var_6)) : (var_9)));
                        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 268435455LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)131)))), (((/* implicit */int) (unsigned short)49153)))))));
                        var_15 = ((/* implicit */short) arr_4 [i_1]);
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */short) var_1);
}
