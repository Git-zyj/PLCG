/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128063
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
    var_19 -= ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_16))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 2; i_4 < 14; i_4 += 3) /* same iter space */
                        {
                            arr_12 [i_4 - 1] [(unsigned short)13] [i_2] [i_1 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (short)24117))) ? (((-3938978622387329818LL) | (((/* implicit */long long int) ((/* implicit */int) (short)3116))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_4 - 1] [5LL] [i_2])) ? (((/* implicit */int) arr_4 [i_3] [i_1] [i_1])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))))));
                            arr_13 [(unsigned short)10] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_2)) ? (var_14) : (((/* implicit */long long int) 1528955315U)))));
                        }
                        for (unsigned int i_5 = 2; i_5 < 14; i_5 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned short) var_10);
                            var_21 = ((/* implicit */short) arr_14 [(short)13] [i_1] [i_1 + 1] [1LL]);
                        }
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))) : (-9LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) arr_1 [i_2] [i_2])) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_6)) ? (var_14) : (var_15)))));
                        arr_17 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 1519484332U)) && (((/* implicit */_Bool) (short)10675))));
                        var_23 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_5)) ? (-1416949950085919891LL) : (((/* implicit */long long int) var_10)))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned short) var_8);
    }
}
