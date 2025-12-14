/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166446
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
    var_11 ^= ((/* implicit */unsigned int) max((var_3), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_3)))) : (var_3)))));
    var_12 *= ((/* implicit */_Bool) ((unsigned long long int) var_10));
    var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-60))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8191)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)0))))) ? ((~((~(var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) max((((/* implicit */int) var_5)), (var_6)))))))))));
        arr_3 [i_0] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_8) : (var_3)))) ? (((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                for (int i_4 = 1; i_4 < 23; i_4 += 4) 
                {
                    {
                        arr_15 [i_1] [i_2] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) ((int) ((var_7) << (((var_4) - (2477400524U))))));
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : ((+(-1257207858))))))));
                        var_16 = ((/* implicit */signed char) ((var_3) >> (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_8)))));
                        arr_16 [i_4 - 1] [i_2] [i_3] [i_4] [(_Bool)1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                    }
                } 
            } 
        } 
        arr_17 [i_1] = ((/* implicit */short) ((unsigned long long int) 1477419464604863704ULL));
    }
    for (int i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
    {
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) max((var_1), (var_5)))))))));
        arr_23 [i_5] [i_5] = ((/* implicit */signed char) var_10);
    }
}
