/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174642
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
    var_19 -= ((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)19278)) < (((/* implicit */int) (unsigned char)150)))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13)))))))));
    var_20 = ((/* implicit */int) ((unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (var_11)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            var_21 = ((/* implicit */int) arr_0 [(short)14]);
            arr_5 [i_0] [i_0] = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
            arr_6 [i_0] [12] = ((/* implicit */_Bool) ((int) 15U));
            arr_7 [i_0] [i_0] [(unsigned short)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (unsigned char)136))));
        }
        for (int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            arr_11 [i_0] [7] [i_0] = ((/* implicit */unsigned int) (~(((int) (unsigned char)13))));
            arr_12 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((((/* implicit */int) arr_9 [i_0])) + (2147483647))) << (((arr_1 [i_2]) - (2550532397U)))))) ? (((/* implicit */unsigned long long int) ((int) arr_1 [i_0]))) : (((unsigned long long int) -365074242)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) (unsigned short)37169)))))))));
        }
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
        {
            arr_15 [i_0] = ((/* implicit */long long int) arr_9 [i_0]);
            arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((arr_2 [i_0]), (arr_8 [i_0] [i_0] [i_0])))))) ? ((+(((((/* implicit */_Bool) 1301998039)) ? (((/* implicit */int) (unsigned char)7)) : (arr_4 [i_0] [(short)2]))))) : ((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) != (-9223372036854775783LL))))))));
        }
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
        {
            var_23 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (arr_2 [i_0])))) ? (((/* implicit */int) ((unsigned short) (unsigned char)64))) : (((/* implicit */int) arr_13 [i_0])));
            var_24 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0]);
        }
        var_25 = ((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_0]);
    }
}
