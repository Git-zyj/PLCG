/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147259
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
    var_10 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) 401084023)) ? (((/* implicit */int) (unsigned char)213)) : (var_8))) != (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-5)) ? (401084023) : (401084023)))) ? (((((/* implicit */_Bool) (unsigned char)248)) ? (var_7) : (((/* implicit */unsigned long long int) 401084037)))) : (((((/* implicit */_Bool) var_3)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (unsigned char)142)))), (((var_8) < (((/* implicit */int) var_9))))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_11 *= ((/* implicit */unsigned char) var_4);
        var_12 -= ((/* implicit */unsigned long long int) ((((min((var_2), (((/* implicit */unsigned long long int) (unsigned short)32071)))) != (((/* implicit */unsigned long long int) ((8101561164477058914LL) << (((((/* implicit */int) var_1)) - (1)))))))) ? (((/* implicit */long long int) min((((/* implicit */int) ((var_8) <= (((/* implicit */int) var_3))))), (var_8)))) : (4770930430473440538LL)));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) (+(max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-98))))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) ((((/* implicit */int) var_6)) == (((/* implicit */int) (unsigned char)48)))))))) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) ((unsigned short) arr_3 [i_1] [i_1])))))));
        var_15 *= ((/* implicit */short) min((((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1])) ^ (((/* implicit */int) arr_4 [i_1])))))));
        arr_5 [i_1] [i_1] |= ((/* implicit */unsigned char) ((((((4770930430473440538LL) >> (((var_7) - (16135023100894041877ULL))))) != (((/* implicit */long long int) 1109227954U)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)0)))))) : (min((min((((/* implicit */long long int) (short)1536)), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (unsigned char)72)))))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 7; i_3 += 2) 
            {
                {
                    arr_12 [i_1] [i_1] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)50), ((unsigned char)233)))) ? (min((var_7), (((/* implicit */unsigned long long int) arr_11 [i_3 + 2] [i_3 - 3] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (arr_11 [i_3 - 2] [i_3 - 2] [i_1])))))));
                    var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) arr_10 [i_1] [i_3 - 1] [i_3] [4ULL]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (((((/* implicit */_Bool) -310707404)) ? (-5826825418013647069LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-37)))))));
                }
            } 
        } 
    }
}
