/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145183
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) var_12);
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_0))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_8)) : (var_2)))))));
        var_21 = ((/* implicit */unsigned short) min((min((var_3), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_12))))) == (min((((/* implicit */unsigned long long int) var_8)), (var_4))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) >= (var_8))))))), ((-(var_2)))));
            var_23 = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) var_16)), (max((var_1), (((/* implicit */long long int) var_11)))))), (((/* implicit */long long int) max((((/* implicit */int) var_13)), ((~(((/* implicit */int) var_17)))))))));
        }
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            arr_10 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_13))))))) ^ (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_13)))))))));
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(-1719817627)))))) ? (((/* implicit */unsigned long long int) (-(max((var_1), (((/* implicit */long long int) var_12))))))) : (max((var_0), (((/* implicit */unsigned long long int) (~(var_8))))))));
        }
        var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) >= (-4846255422833739658LL)));
        arr_11 [1LL] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */signed char) var_17)), (var_18)))), (((var_11) << (((var_14) - (3833719341U)))))))) ? (((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_2)))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)22)) ? (-1) : (((/* implicit */int) (unsigned short)31))))), (((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            arr_16 [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))) : (max((((/* implicit */unsigned long long int) max((((/* implicit */signed char) var_17)), (var_7)))), (var_0)))));
            var_26 *= ((/* implicit */int) max((max((var_3), (var_2))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))));
            var_27 = ((/* implicit */unsigned int) (+((+(var_2)))));
        }
        var_28 *= ((/* implicit */int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned short) var_18))))) ? (min((min((((/* implicit */unsigned long long int) var_15)), (var_2))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_15), (((/* implicit */short) var_18))))))));
    }
    var_29 = ((/* implicit */_Bool) (+(((min((((/* implicit */unsigned int) var_18)), (var_16))) + (((((/* implicit */_Bool) var_15)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))));
    var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_8)) : ((-(var_0))))))));
    var_31 = var_16;
}
