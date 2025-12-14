/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15353
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_0))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (short i_3 = 2; i_3 < 8; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */short) max((var_1), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_12))))));
                        var_15 |= ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned short)52142), (min(((unsigned short)1365), (((/* implicit */unsigned short) var_12))))))) == (((/* implicit */int) arr_10 [i_2]))));
                        var_16 = ((((/* implicit */int) var_0)) > ((~(((/* implicit */int) (!(((/* implicit */_Bool) -1))))))));
                        arr_12 [i_0] [i_0] [i_1] [i_0 + 2] [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((short) ((((4964259202123425615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (var_2))))))));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_9))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_5 [i_0] [i_0 - 2])) >> (((((/* implicit */int) arr_5 [i_0] [i_0 + 1])) - (5972))))), (((/* implicit */int) ((var_0) && (((/* implicit */_Bool) ((signed char) var_5))))))));
    }
    for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        arr_18 [i_4] [i_4] = ((/* implicit */signed char) max((((/* implicit */int) max((var_7), (arr_17 [i_4] [i_4])))), (((((/* implicit */int) var_9)) / (max((-2127690920), (-1)))))));
        var_18 ^= (!(((/* implicit */_Bool) var_7)));
    }
    for (unsigned int i_5 = 2; i_5 < 20; i_5 += 4) 
    {
        arr_22 [i_5] = ((/* implicit */unsigned char) 9223372036854775807LL);
        arr_23 [i_5] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) <= (((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5 - 1] [1ULL]))) / (((arr_21 [i_5]) + (((/* implicit */long long int) 1725578590))))))));
        var_19 *= ((/* implicit */int) ((((/* implicit */int) max((arr_15 [i_5] [i_5 + 1]), (arr_15 [i_5] [i_5 - 2])))) < (max((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_12))))), (8)))));
        arr_24 [i_5] = (_Bool)1;
    }
    var_20 = ((/* implicit */int) (unsigned short)18820);
}
