/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142769
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_1)))) && (((/* implicit */_Bool) var_6)))))));
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_15 += (+(((unsigned int) (-(((/* implicit */int) var_4))))));
        var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_13)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14018)) ? (((/* implicit */int) (unsigned short)20526)) : (((/* implicit */int) (short)3489)))))))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 1])) >> (0ULL)))) ? (((/* implicit */unsigned long long int) 1447349168U)) : (0ULL)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_5 [i_1]) < (((3768090284996804341ULL) + (((/* implicit */unsigned long long int) 9223372036854775807LL))))))) >> (min((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) ((_Bool) var_11)))))));
        var_18 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) != (18446744073709551615ULL)));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned long long int) ((3768090284996804341ULL) >= (18446744073709551615ULL)));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) ((_Bool) ((long long int) var_2)));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)63)) < ((-2147483647 - 1))))) >> (((((/* implicit */int) (unsigned short)26999)) - (26985)))));
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_6 = 1; i_6 < 18; i_6 += 3) 
        {
            for (signed char i_7 = 2; i_7 < 17; i_7 += 3) 
            {
                for (unsigned int i_8 = 4; i_8 < 17; i_8 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_5)) * (((((/* implicit */_Bool) arr_0 [i_8 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_8 - 3]))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_15 [i_8])))))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) & (((/* implicit */int) arr_21 [i_7] [i_7] [i_7 - 2] [i_7]))));
                        arr_25 [i_5] [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (arr_15 [i_5])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)13))))) : (((((/* implicit */_Bool) 237334004)) ? (var_13) : (arr_15 [i_8 + 2])))));
                        var_23 = max(((~(0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_8] [i_6 - 1] [i_7 + 2] [i_6 + 1]))) - (var_8)))));
                    }
                } 
            } 
        } 
        arr_26 [i_5] = ((/* implicit */unsigned char) 2147483615);
        var_24 -= ((/* implicit */_Bool) var_9);
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) / (max((var_6), (((/* implicit */unsigned int) var_4))))))) * ((+(((((/* implicit */unsigned long long int) 8)) / (arr_23 [i_5] [(unsigned char)8])))))));
    }
}
