/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126431
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_12 = (-(var_2));
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_10))))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_7)) << (((17916652219893825255ULL) - (17916652219893825240ULL))))))))));
    }
    var_14 -= ((/* implicit */signed char) var_0);
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_15 = var_2;
        /* LoopSeq 2 */
        for (int i_2 = 3; i_2 < 16; i_2 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-31376)), ((((_Bool)1) ? (4287954556272238216ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19719))))))))));
            arr_8 [i_1] = ((/* implicit */signed char) var_9);
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 4) 
                {
                    for (unsigned char i_5 = 3; i_5 < 16; i_5 += 1) 
                    {
                        {
                            arr_18 [i_1] [i_2] [i_1] [i_4] [i_5] = ((/* implicit */_Bool) min((max((arr_17 [i_1] [i_4 + 2] [i_1] [i_1] [(unsigned char)15]), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4287954556272238216ULL)))))));
                            var_17 *= ((/* implicit */unsigned char) arr_10 [i_1]);
                            var_18 = ((/* implicit */_Bool) min((4287954556272238216ULL), (14158789517437313404ULL)));
                        }
                    } 
                } 
            } 
            arr_19 [i_1] [i_1] = ((/* implicit */unsigned char) var_8);
            arr_20 [i_1] = ((/* implicit */long long int) min((var_6), (var_6)));
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 16; i_6 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) var_11))))));
            var_20 = ((/* implicit */int) arr_10 [i_1]);
            var_21 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_15 [i_1] [(unsigned char)0] [i_6] [(unsigned char)0])) : (((/* implicit */int) var_11))));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_11)) - (103)))));
        }
        var_23 -= min((var_11), (((/* implicit */unsigned char) (signed char)0)));
        arr_23 [12ULL] [i_1] &= (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)41)) || (((/* implicit */_Bool) (signed char)22))))));
    }
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_11))));
    var_25 = ((/* implicit */int) ((((((/* implicit */_Bool) (~(var_3)))) || (((/* implicit */_Bool) var_1)))) ? (max((max((var_3), (((/* implicit */unsigned long long int) var_1)))), (17059274254420676250ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
}
