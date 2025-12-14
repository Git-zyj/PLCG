/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1847
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
    var_15 = ((/* implicit */short) var_5);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (int i_3 = 1; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */long long int) max((((int) 0U)), (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_0])) : (16777215))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                        arr_9 [i_0] [i_1] [i_2] [i_2] [i_0] = (((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) 7680)));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) min((((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))) : (((((/* implicit */_Bool) -565455389)) ? (((/* implicit */unsigned long long int) 2068957019U)) : (13462730055185990436ULL))))), (((/* implicit */unsigned long long int) var_6)))))));
    }
    for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        arr_12 [i_4] [i_4] = ((/* implicit */signed char) arr_1 [i_4] [i_4]);
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)16)) % (((/* implicit */int) var_9))))), (144114913197948928ULL)))) ? (3602815090U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-58)) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)116)) & (482701459))))))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((var_14) - (3374978573U)))))) ? (((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4])) : (((int) var_11))));
    }
    for (short i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((565455389), (482701453)))) * (((var_3) % (var_3)))))) ? (((((/* implicit */int) arr_3 [i_5] [i_5])) ^ (((((/* implicit */int) var_11)) - (((/* implicit */int) var_4)))))) : (((var_12) % ((+(((/* implicit */int) var_5))))))));
        var_21 *= ((/* implicit */unsigned long long int) var_10);
    }
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) -2707551947993369911LL)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)57)) % (((/* implicit */int) (signed char)(-127 - 1)))))), (var_7)))) : (min((((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_9))))))))))));
}
