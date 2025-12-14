/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106836
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
    var_16 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */int) ((10363933866781630399ULL) | (((/* implicit */unsigned long long int) -6870575794072037755LL))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 24; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) (-(2147418112U)));
                    var_19 = (-(4041909014U));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                {
                    var_20 = ((/* implicit */int) (+(arr_2 [i_4] [i_3])));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7931321562460942597ULL)) && (((/* implicit */_Bool) (unsigned char)248))));
                    var_22 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_4] [(short)23]))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) var_15))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) var_8);
        var_25 += var_1;
        arr_15 [i_5] [i_5] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((signed char) arr_4 [i_5]))) ? (min((var_10), (((/* implicit */unsigned long long int) arr_2 [i_5] [i_5])))) : (min((((/* implicit */unsigned long long int) var_9)), (10363933866781630427ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234)))));
        var_26 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)239)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27888)) ? (((/* implicit */int) (_Bool)1)) : (-1658938147)))))))));
    }
    var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) ^ (((/* implicit */int) (unsigned char)96))))) ? (((/* implicit */unsigned long long int) var_3)) : (((var_5) ? (7931321562460942609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) ^ (((/* implicit */unsigned long long int) ((var_1) | (((var_1) << (((var_12) - (18281286609535646593ULL))))))))));
}
