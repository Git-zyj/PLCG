/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155735
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
    var_15 = ((/* implicit */long long int) var_9);
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 7361241897567259239LL)) ? (((/* implicit */int) (unsigned short)14130)) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) arr_2 [1LL] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [(unsigned short)14]))) : (-19LL)))));
        var_16 ^= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) arr_2 [i_0] [i_0 - 3])) % (((/* implicit */int) arr_2 [i_0 - 3] [i_0 - 3])))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 140737488355327LL)) && (((/* implicit */_Bool) 140737488355327LL))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        {
                            var_18 = ((((/* implicit */_Bool) ((min((((/* implicit */long long int) var_2)), (var_13))) & (max((140737488355333LL), (((/* implicit */long long int) (unsigned short)10085))))))) ? (((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0])) ? (((long long int) var_5)) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 1]))))) : ((((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) ((/* implicit */int) ((140737488355346LL) != (arr_8 [(unsigned short)5] [i_0]))))) : (((((/* implicit */_Bool) var_6)) ? (var_1) : (7570797121180491591LL))))));
                            arr_15 [i_0] [i_3] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((var_13) <= (((/* implicit */long long int) ((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_10 [i_0 - 2])) : (((((/* implicit */int) arr_10 [i_0 - 2])) & (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 1]))))));
                            var_19 = var_10;
                        }
                    } 
                } 
            } 
            var_20 = var_1;
        }
    }
    for (long long int i_5 = 3; i_5 < 14; i_5 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((((/* implicit */_Bool) -8897640176364403621LL)) ? (137438952448LL) : (9223372036854775807LL)))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)32450))))) ? ((-(((((/* implicit */int) var_3)) | (((/* implicit */int) arr_0 [i_5])))))) : (((/* implicit */int) ((unsigned short) var_0)))));
    }
    for (unsigned short i_6 = 1; i_6 < 9; i_6 += 1) 
    {
        var_23 = ((/* implicit */long long int) min((var_23), ((+(max((((/* implicit */long long int) (~(((/* implicit */int) var_6))))), ((-9223372036854775807LL - 1LL))))))));
        var_24 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) (unsigned short)7211)) ? (((/* implicit */int) arr_9 [i_6 + 2] [i_6])) : (((/* implicit */int) arr_9 [i_6 + 1] [i_6 - 1])))));
        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_17 [i_6]))));
    }
    var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)6))));
    var_27 = var_3;
}
