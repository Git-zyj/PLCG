/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130374
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
    var_10 &= ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) (signed char)14)))))) || (((/* implicit */_Bool) ((((((/* implicit */int) (signed char)6)) >= (((/* implicit */int) var_1)))) ? (2226020080U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) (+(((arr_0 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                for (unsigned short i_3 = 3; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_1))));
                        var_13 = ((/* implicit */short) var_0);
                        arr_12 [i_0] [(unsigned char)7] [i_2] [i_0] [i_2 - 3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))) | (((/* implicit */int) var_6))));
                        var_14 ^= arr_6 [4ULL] [i_1] [i_2 + 2] [i_3 - 3];
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_3 - 2])) ? (((/* implicit */int) (unsigned short)26258)) : (((/* implicit */int) (unsigned short)26258))))) - (((((/* implicit */_Bool) arr_3 [i_1])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */_Bool) max((var_16), (((_Bool) (signed char)6))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))));
    }
    for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        var_18 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) max((-1465593801815968993LL), (((/* implicit */long long int) -1629672967))))) ? (((((/* implicit */_Bool) -1487182874)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [(_Bool)1] [i_4] [i_4] [i_4]))) : (-7949488357070749693LL))) : (((/* implicit */long long int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_9)))))))));
        var_19 = ((/* implicit */unsigned char) (+(18446744073709551615ULL)));
        var_20 = ((/* implicit */unsigned char) max((min((arr_3 [i_4]), (((/* implicit */unsigned long long int) ((-1LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_4] [i_4] [(unsigned char)9])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) var_0))))) : (((((/* implicit */long long int) arr_10 [i_4])) | (4777878109236476742LL))))))));
    }
}
