/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130853
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
    var_12 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (_Bool)1)), (8966028691836412763ULL)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((int) var_5)))));
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) 492116242U)) && (((/* implicit */_Bool) arr_5 [i_3] [i_2 + 1] [i_1] [i_0]))));
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_5 [i_3] [i_2] [i_1] [i_0])))) ? (((arr_7 [i_2]) ? (1981378678952303803LL) : (((/* implicit */long long int) arr_1 [i_3])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)41619)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_2])))))));
                        var_16 -= (-(8966028691836412763ULL));
                    }
                } 
            } 
            var_17 = ((/* implicit */long long int) arr_3 [i_0 - 2] [i_0 - 1] [i_0 - 1]);
            var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_13 [i_4] [i_4] = min((((arr_9 [i_0 - 1] [i_0 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4]))) : (var_1))), (((/* implicit */unsigned long long int) arr_1 [8])));
            var_19 = ((/* implicit */int) (((~(max((((/* implicit */unsigned long long int) var_6)), (var_1))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0])))));
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_16 [i_0 - 2] [i_5] = ((/* implicit */unsigned char) arr_11 [i_5]);
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((15826414196440112017ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
            var_21 ^= ((/* implicit */long long int) ((arr_15 [i_0 + 1] [i_0 - 2]) / (arr_15 [i_0 - 2] [i_0 - 1])));
        }
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 18014398509481984LL))) ? (((((/* implicit */_Bool) ((18014398509481957LL) / (-82952932931978482LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) min((-7552380648510202285LL), (((/* implicit */long long int) (~(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-12949674) : (766037236)))))))))));
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_7)))))))) ? (min((((((/* implicit */_Bool) 3458764513820540928ULL)) ? (((/* implicit */unsigned long long int) -12949663)) : (3759678588679233107ULL))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (1152921487426977792ULL))))) : ((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 0)) : (var_0)))))));
}
