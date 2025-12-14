/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164654
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((int) var_9))), (var_6))))));
    var_16 *= ((/* implicit */unsigned int) var_13);
    var_17 = ((int) (!(((/* implicit */_Bool) var_12))));
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (-(((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) >= (arr_0 [15LL]))) ? (2147483647) : (((892885039) + (-1061022086)))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (int i_3 = 2; i_3 < 23; i_3 += 3) 
                {
                    {
                        arr_9 [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((1025473820) <= (-892885039))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) > (((/* implicit */long long int) 892885038)))))) : (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : ((((+(var_8))) + (((/* implicit */unsigned long long int) 67104768))))));
                        arr_10 [i_3] [i_2] [i_3] [i_2] [i_2] [i_0 - 2] = ((/* implicit */long long int) (~(((arr_6 [i_2] [(unsigned char)18] [i_3 - 2] [i_3]) + (arr_5 [i_0 - 3] [i_1] [i_3 + 1] [i_2])))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 4] [i_0 - 3] [i_0])) ? (min((var_4), (((/* implicit */long long int) arr_6 [i_0] [i_0 + 1] [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) >= ((-9223372036854775807LL - 1LL)))))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) min((-892885057), (((/* implicit */int) (unsigned short)43185))))) ? (((((/* implicit */_Bool) 892885038)) ? (1344673557U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) (-(1696628687)))))))));
        var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))) / (((((/* implicit */_Bool) 184701659U)) ? (18446735277616529408ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)480)))))));
    }
    var_20 = ((/* implicit */unsigned short) max((((unsigned long long int) ((var_4) + (var_6)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((535746026) != (((/* implicit */int) var_1))))), ((+(var_4))))))));
}
