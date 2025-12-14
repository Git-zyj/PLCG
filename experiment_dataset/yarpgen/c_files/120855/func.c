/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120855
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_8))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned short)61642)))), (((/* implicit */int) (unsigned short)65535))))) ? (max((((/* implicit */unsigned long long int) var_10)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)61642)), (var_2))))));
        var_17 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) max((((unsigned short) (unsigned short)65535)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)61642)))))))), (((((/* implicit */_Bool) ((1811003993) * (((/* implicit */int) (unsigned short)1))))) ? (((/* implicit */int) max(((unsigned short)3893), (((/* implicit */unsigned short) var_5))))) : (((((/* implicit */int) var_13)) / (((/* implicit */int) var_13))))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (var_6) : (((/* implicit */int) var_8))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_10))))), (min((((/* implicit */unsigned int) var_6)), (var_2)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_19 += ((/* implicit */long long int) (+(((/* implicit */int) var_11))));
        arr_4 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65508)) ? ((+(((/* implicit */int) arr_2 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_3]))));
                    arr_11 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        for (signed char i_5 = 1; i_5 < 20; i_5 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) 166744549);
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~(var_0))))));
                            }
                        } 
                    } 
                    var_22 -= ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_6 [i_1] [i_1])))) % (((/* implicit */int) (_Bool)1)));
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2])))))));
                }
            } 
        } 
        var_24 = (_Bool)0;
        arr_18 [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(var_5)))) < (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((arr_0 [(short)16]) ^ (((/* implicit */int) var_9)))) != (((/* implicit */int) arr_2 [i_6])))))));
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_29 [(_Bool)1] [i_7] [i_7] [i_7] = ((/* implicit */short) (+(((/* implicit */int) var_9))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_10 - 1] [i_10 - 1] [i_10 - 1])) ? (((/* implicit */int) arr_14 [i_10 - 1] [i_10 - 1] [i_10 - 1])) : (((/* implicit */int) (unsigned short)65508))));
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)1)) || (((/* implicit */_Bool) ((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                            }
                        } 
                    } 
                    var_28 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_6] [i_7] [i_8] [20LL] [i_7])) / (((/* implicit */int) arr_17 [i_6] [i_7] [i_7] [i_7] [i_6]))));
                    var_29 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    }
}
