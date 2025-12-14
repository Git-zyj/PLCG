/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15600
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
    var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) var_4))));
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_6)) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) ((var_3) && (((/* implicit */_Bool) var_2))))))) : (var_18))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_21 |= ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_2))))))));
        var_22 = ((/* implicit */long long int) (+((((-(((/* implicit */int) arr_0 [i_0] [i_0])))) * (((/* implicit */int) var_9))))));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_2 [i_0] [i_0] [i_0]))) - (((/* implicit */int) max(((unsigned char)18), (((/* implicit */unsigned char) (_Bool)1)))))))) & (max((((/* implicit */unsigned long long int) ((short) var_5))), (13248347533711535678ULL)))));
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1])) + (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1])))) + (((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1])))))));
            /* LoopSeq 2 */
            for (long long int i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                var_25 += ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) 5198396539998015922ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_1] [i_0]))))) : (arr_7 [i_2 - 1] [i_2 + 2] [i_1 + 1]))));
                var_26 = ((/* implicit */long long int) (unsigned short)40222);
            }
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                var_27 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) arr_1 [i_1 + 1])))));
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) min((((unsigned char) var_0)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 5198396539998015937ULL)))))))) ? (((/* implicit */unsigned long long int) ((-2863363477177643661LL) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1 - 1])))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_10))))), (arr_12 [i_3] [i_1 - 1] [i_0] [i_0])))));
                var_29 = ((/* implicit */signed char) ((int) ((unsigned long long int) arr_11 [i_1 - 1] [i_1 - 1])));
            }
        }
        for (short i_4 = 1; i_4 < 18; i_4 += 1) 
        {
            var_30 *= ((/* implicit */int) var_17);
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    for (unsigned char i_7 = 2; i_7 < 15; i_7 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) 18446744073709551615ULL);
                            var_32 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((5198396539998015938ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) (-(2863363477177643660LL)))))))));
                        }
                    } 
                } 
            } 
        }
    }
}
