/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168351
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
    var_11 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 1; i_3 < 13; i_3 += 2) /* same iter space */
                    {
                        arr_10 [i_0] [i_0] [i_2] = ((/* implicit */short) ((var_10) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224)))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            var_12 = ((/* implicit */int) ((((/* implicit */unsigned int) arr_5 [i_0 + 1] [i_1] [i_2 - 1])) > (380212139U)));
                            arr_14 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (-(arr_9 [i_2] [i_2]))))));
                            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (unsigned char)119))));
                            var_14 -= ((var_4) >> (((/* implicit */int) arr_6 [i_2 - 1] [(short)8] [(short)8] [i_0 + 3])));
                            arr_15 [i_2] [(_Bool)1] [12] [i_1 - 1] [i_2] = ((((/* implicit */int) var_2)) <= (arr_12 [i_1] [(unsigned char)3] [i_1 - 3] [i_2 - 1] [i_2] [i_3 + 2]));
                        }
                    }
                    for (int i_5 = 1; i_5 < 13; i_5 += 2) /* same iter space */
                    {
                        var_15 = ((/* implicit */int) (~(var_10)));
                        arr_18 [i_0] [i_2] [i_0] [(unsigned short)8] [i_0 + 1] = ((/* implicit */signed char) ((var_3) || (((/* implicit */_Bool) arr_5 [i_0 + 2] [i_1] [i_2]))));
                    }
                    for (int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        arr_21 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) var_7);
                        arr_22 [10ULL] [i_1] [i_2] [13] = ((/* implicit */unsigned long long int) (unsigned char)223);
                    }
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [(_Bool)0])) ? (arr_1 [i_0]) : (arr_1 [i_0 + 1]))))));
                    var_17 ^= ((/* implicit */long long int) (~(3914755168U)));
                }
            } 
        } 
        var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_7))) && (((/* implicit */_Bool) ((-1LL) * (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
        var_19 = ((/* implicit */unsigned long long int) ((_Bool) var_3));
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
    {
        arr_26 [i_7] [i_7] = ((/* implicit */long long int) 931310813);
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_0))));
    }
    var_21 = ((/* implicit */unsigned char) var_0);
}
