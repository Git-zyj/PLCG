/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105665
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
    var_10 ^= var_2;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) var_6);
        var_11 = ((/* implicit */unsigned long long int) 1529778571U);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [1LL] [i_1])))))) == (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)140))) : (arr_5 [i_0] [i_0])))));
            var_13 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)223))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_2 = 1; i_2 < 16; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 1; i_3 < 14; i_3 += 4) 
            {
                for (unsigned int i_4 = 2; i_4 < 16; i_4 += 4) 
                {
                    {
                        arr_13 [i_2] [i_2] [i_2] [10ULL] [i_3 - 1] [i_4] = ((((/* implicit */_Bool) (unsigned char)251)) ? (18446744073709551608ULL) : (15ULL));
                        arr_14 [i_4] |= ((/* implicit */unsigned char) var_8);
                        arr_15 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)33))) >= (arr_3 [i_4 - 1] [3U] [i_4 - 2])));
                    }
                } 
            } 
            arr_16 [i_0] [i_2] = ((/* implicit */unsigned char) 46ULL);
            var_14 = ((/* implicit */unsigned short) ((unsigned char) ((3738588988U) - (420586193U))));
        }
        var_15 *= ((/* implicit */long long int) ((0ULL) % (((/* implicit */unsigned long long int) 3738589003U))));
    }
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_18 [i_5])) ? (min((((/* implicit */unsigned long long int) var_0)), (0ULL))) : (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (24U) : ((+(arr_18 [i_5])))))))))));
        var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((arr_18 [i_5]), (169996049U)))) ? (((((/* implicit */_Bool) 3810150602509694436ULL)) ? (arr_18 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)33))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_17 [6ULL])))))), (((((/* implicit */_Bool) arr_17 [i_5])) ? (arr_17 [i_5]) : (((((/* implicit */_Bool) arr_17 [i_5])) ? (arr_17 [i_5]) : (arr_18 [i_5])))))));
        var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_3)), (max((0ULL), (((/* implicit */unsigned long long int) ((arr_18 [i_5]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)223))))))))));
        var_19 = ((/* implicit */unsigned char) (~(arr_17 [i_5])));
    }
    var_20 ^= ((/* implicit */long long int) ((unsigned short) max((max((var_7), (var_9))), (((/* implicit */unsigned int) var_1)))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_8) ^ (((/* implicit */unsigned long long int) var_6)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_9))))))) ? (((unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))))) : (((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_8))))));
    var_22 = ((/* implicit */unsigned long long int) var_5);
}
