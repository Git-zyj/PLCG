/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185684
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
    var_14 = ((/* implicit */signed char) var_3);
    /* LoopSeq 4 */
    for (short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_2)))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (-303768765458289149LL) : (549722259456LL)))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) var_5))))))));
        var_15 *= ((/* implicit */unsigned short) ((9029195141936726830ULL) << (((((/* implicit */int) min((arr_2 [i_0 + 1]), (arr_2 [i_0 - 3])))) - (1797)))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) > (max((((/* implicit */long long int) (unsigned char)23)), (arr_1 [i_0 - 1])))));
        var_17 *= ((/* implicit */signed char) max((var_9), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 549722259456LL)) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))))))));
        arr_6 [i_1] = (-(min(((+(((/* implicit */int) var_12)))), (max((var_1), (((/* implicit */int) var_7)))))));
    }
    for (int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                {
                    arr_13 [i_2] [i_2] [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) -549722259438LL)), ((-(6463431644219045887ULL)))));
                    arr_14 [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) arr_9 [i_2])))));
                    arr_15 [i_2] [i_3] [i_3] &= ((/* implicit */long long int) var_9);
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+(min((arr_7 [i_2] [11U]), (min((((/* implicit */unsigned long long int) var_12)), (18160580200995518710ULL))))))))));
    }
    for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) 549722259440LL)))))));
        arr_18 [10] = ((/* implicit */_Bool) 9029195141936726835ULL);
    }
}
