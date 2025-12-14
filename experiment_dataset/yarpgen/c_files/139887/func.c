/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139887
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) 3477089282076196867ULL));
            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_15))) ? (arr_2 [i_1]) : (((/* implicit */int) arr_1 [i_1]))));
        }
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_6 [3LL])) && (((/* implicit */_Bool) var_8))))))));
            arr_8 [i_2] = ((/* implicit */unsigned char) ((short) ((3477089282076196867ULL) < (((/* implicit */unsigned long long int) var_12)))));
            var_18 = var_13;
        }
        /* LoopSeq 1 */
        for (long long int i_3 = 1; i_3 < 23; i_3 += 1) 
        {
            var_19 *= ((int) ((unsigned char) (_Bool)1));
            arr_12 [i_0] [i_3] [i_3] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) var_15)) > (((/* implicit */int) arr_1 [i_3 - 1])))))));
            /* LoopSeq 4 */
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                arr_16 [i_3] [10U] = ((/* implicit */short) ((((/* implicit */long long int) (-(var_11)))) / (var_14)));
                var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (((unsigned long long int) arr_9 [(short)5]))));
            }
            for (unsigned int i_5 = 2; i_5 < 21; i_5 += 1) 
            {
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_11 [i_5] [(short)9]))));
                var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) -285510357)) : (-3911151961754454546LL)))) || ((!((_Bool)1)))));
            }
            for (long long int i_6 = 1; i_6 < 20; i_6 += 1) 
            {
                var_23 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_3 - 1]))));
                arr_24 [i_3] [i_3] = ((/* implicit */long long int) ((_Bool) ((int) var_9)));
                arr_25 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_0] [i_3 + 1])) - ((-(arr_7 [i_0] [i_0] [i_0])))));
                var_24 = ((/* implicit */signed char) (((-(1966080))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
            }
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                var_25 = ((/* implicit */unsigned short) ((var_5) >= (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_17 [(unsigned char)16] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_18 [i_0] [i_3 + 1] [i_3] [(short)20]))))));
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) arr_19 [i_0] [i_3 + 1] [i_7]))));
                arr_28 [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_3 + 1]))));
            }
            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) <= (arr_3 [i_3 + 1] [i_3 - 1] [i_3 - 1]))))));
        }
    }
    var_28 *= ((/* implicit */short) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) ((1926806793) > (var_2))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))));
}
