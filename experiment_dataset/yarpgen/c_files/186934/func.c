/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186934
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
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)32695))));
                            var_17 *= ((/* implicit */short) arr_1 [i_0 - 2]);
                            var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_3]))));
                            arr_12 [i_0 - 1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (short)-1);
                        }
                    } 
                } 
            } 
            var_19 = (~(((((/* implicit */_Bool) arr_10 [(unsigned short)2] [7LL] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_0] [i_0] [i_0]))) : (var_7))));
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            var_20 = ((/* implicit */short) (-((~(arr_3 [0U] [(short)9])))));
            var_21 = ((/* implicit */int) max((var_21), (((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (arr_1 [(short)9]))))));
            var_22 ^= ((((/* implicit */_Bool) arr_11 [i_0 + 1])) ? (((((/* implicit */_Bool) arr_3 [(unsigned char)9] [i_5])) ? (var_14) : (var_14))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 - 2])) - (((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_0] [i_5] [5]))))));
        }
        arr_15 [i_0] = 0U;
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_14 [i_0] [i_0 - 2])) * (((/* implicit */int) arr_14 [i_0] [i_0 - 1])))), (((/* implicit */int) ((signed char) var_7)))))) ? (((((/* implicit */unsigned long long int) ((long long int) (short)1))) & (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((17855475683643185336ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0 + 2] [i_0]))))))) == (max((((/* implicit */unsigned long long int) var_10)), (arr_1 [2])))))))));
    }
    var_24 = ((/* implicit */unsigned char) var_10);
    var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_6))) - (((/* implicit */int) min((var_8), (((/* implicit */short) var_3)))))))), ((+(min((var_0), (3819960115U)))))));
}
