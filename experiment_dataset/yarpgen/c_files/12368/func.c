/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12368
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_5 [i_1 + 3] [i_0])) : (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))));
                                var_15 = ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_5 [i_0] [i_3])))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_4])) ? (var_9) : (2097151ULL))) : (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1 + 2] [i_1 + 3] [i_1] [i_1]))));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_1 + 3] [i_1] [i_2] [i_3])) * (((/* implicit */int) arr_12 [i_1] [i_1 + 1] [i_1] [i_1] [i_1]))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) (short)13138);
                    var_18 = ((/* implicit */unsigned long long int) (unsigned char)249);
                    var_19 += var_8;
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58561)) ? (-5133631786560207615LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((((/* implicit */int) (short)9)) * (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_4 [i_1 + 3] [i_1 - 1]))));
                }
            } 
        } 
        var_21 = ((/* implicit */int) (_Bool)1);
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)31546)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
    }
    var_23 = ((/* implicit */_Bool) min((var_13), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_2)))))));
    var_24 *= ((/* implicit */unsigned char) var_2);
    var_25 = (unsigned char)5;
}
