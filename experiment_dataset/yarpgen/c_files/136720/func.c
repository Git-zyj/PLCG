/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136720
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) ? (576460752303423487ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            arr_5 [i_1] [(short)9] = ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
            var_13 = ((/* implicit */short) 0);
            /* LoopNest 2 */
            for (long long int i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                for (long long int i_3 = 2; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_14 -= ((/* implicit */short) (+(((int) (+(-1439494376))))));
                        var_15 = ((/* implicit */short) (-((~(0)))));
                    }
                } 
            } 
        }
    }
    for (short i_4 = 1; i_4 < 7; i_4 += 3) 
    {
        arr_14 [3] = ((/* implicit */long long int) var_2);
        var_16 = ((/* implicit */long long int) arr_1 [i_4] [i_4]);
        var_17 *= ((/* implicit */unsigned short) ((((((/* implicit */int) ((var_10) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4] [i_4 + 1])))))) == ((+(((/* implicit */int) var_9)))))) ? (1439494376) : (((((/* implicit */_Bool) arr_10 [i_4] [i_4 - 1] [i_4] [i_4] [(short)2] [i_4 + 2])) ? (((/* implicit */int) arr_10 [(signed char)3] [i_4 + 3] [i_4 + 3] [i_4] [i_4 - 1] [i_4 + 4])) : (((/* implicit */int) arr_10 [i_4] [i_4 + 4] [i_4] [i_4 + 2] [i_4] [i_4]))))));
        arr_15 [i_4] = ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_4 + 1])) : (((/* implicit */int) arr_13 [i_4 + 1])))) & ((((!(((/* implicit */_Bool) -1439494376)))) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) arr_12 [i_4])))))));
    }
    var_18 = ((/* implicit */short) (unsigned char)3);
    var_19 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((var_11) + (2147483647))) << (((((/* implicit */int) var_9)) - (59)))))) ? (var_11) : (((((/* implicit */int) var_0)) / (((/* implicit */int) var_4)))))), (((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (unsigned char i_5 = 1; i_5 < 19; i_5 += 3) 
    {
        arr_18 [i_5] = ((/* implicit */short) arr_17 [i_5]);
        arr_19 [i_5] = ((/* implicit */signed char) var_12);
        var_20 *= ((/* implicit */unsigned char) 1816173487);
        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) 18))));
    }
}
