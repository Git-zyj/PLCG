/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163551
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-31658))))) * (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / (1347860114)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (1773512489))))) : (((((/* implicit */_Bool) (unsigned short)65516)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2147483647U))))))))));
        var_14 += ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_1 [(short)2])), (max((((/* implicit */unsigned long long int) (unsigned char)16)), (18446744073709551615ULL))))) == (arr_2 [i_0])));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_15 += ((/* implicit */short) ((((((/* implicit */_Bool) (short)-30265)) ? (((/* implicit */int) arr_1 [8ULL])) : (-2147483640))) == ((~(var_1)))));
            var_16 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])));
            arr_5 [i_0] = (_Bool)0;
        }
        for (unsigned short i_2 = 2; i_2 < 10; i_2 += 3) 
        {
            arr_10 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) (!((_Bool)1)));
            var_17 += ((/* implicit */unsigned long long int) min((var_4), (((((/* implicit */_Bool) arr_8 [8ULL] [8ULL] [(unsigned short)10])) ? (((/* implicit */int) arr_9 [i_2 - 2] [(unsigned short)7] [i_2 + 1])) : (((/* implicit */int) var_9))))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (short i_4 = 2; i_4 < 12; i_4 += 3) 
                {
                    {
                        var_18 += (+(((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_3)))) ? (min((arr_12 [i_0] [i_2] [i_0] [6]), (((/* implicit */unsigned long long int) arr_0 [i_3])))) : (((/* implicit */unsigned long long int) (-(var_1)))))));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_8 [6LL] [6LL] [i_4]))));
                        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 169403255))));
                    }
                } 
            } 
            arr_16 [i_0] = ((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(var_4)))) >= (((((/* implicit */_Bool) var_7)) ? (arr_12 [i_0] [i_0] [i_2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))))))));
            var_21 += ((/* implicit */_Bool) (-(((unsigned long long int) (-(((/* implicit */int) arr_7 [(unsigned char)8])))))));
        }
    }
    var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7))))))))));
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) && ((!(((/* implicit */_Bool) 1567169015))))));
}
