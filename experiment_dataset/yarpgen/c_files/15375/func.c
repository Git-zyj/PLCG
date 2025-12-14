/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15375
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
    var_16 -= ((/* implicit */unsigned int) min((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))));
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)20041)))), (var_8))))));
    var_18 = ((/* implicit */unsigned int) var_3);
    var_19 = ((/* implicit */unsigned int) ((min((max((((/* implicit */long long int) (short)-4196)), (var_14))), (((/* implicit */long long int) max((var_13), (((/* implicit */int) var_9))))))) + (((/* implicit */long long int) (+(((/* implicit */int) ((var_7) < (((/* implicit */long long int) ((/* implicit */int) var_3)))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_20 = min((((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_0 [i_0 + 2] [i_0 + 2]))), (((/* implicit */unsigned int) var_1)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_0] [i_0] [(unsigned char)6] = max((((max((((/* implicit */long long int) 335522811)), (-8202636206340019068LL))) * (((/* implicit */long long int) max((-536870912), (536870899)))))), (min((((/* implicit */long long int) arr_2 [i_0] [i_0])), ((+(-8202636206340019086LL))))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0])) ? (max((var_15), (-8202636206340019081LL))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (8202636206340019068LL)))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -1171548320)) ? (-4217885074186039569LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) arr_11 [i_0 + 2] [i_0] [i_0] [i_0 - 1])) ? (arr_10 [i_1] [i_1 + 2] [i_1 - 3] [i_0 + 1] [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_1 + 1]))))));
                        var_22 = ((/* implicit */short) max((((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [15LL]))) : (arr_4 [i_3] [i_0]))) >= (((/* implicit */long long int) 68584470U))))), (max((((/* implicit */int) arr_5 [i_1 - 1] [i_1])), (((((/* implicit */_Bool) 274877775872ULL)) ? (((/* implicit */int) var_9)) : (arr_2 [i_1] [i_0])))))));
                    }
                    var_23 -= ((/* implicit */short) max((((((/* implicit */_Bool) ((arr_6 [i_2] [i_2] [i_2] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [16ULL] [i_1] [i_1 + 1] [i_0]))) : (arr_7 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 55915697)) ? (((/* implicit */int) arr_3 [(unsigned char)9] [(_Bool)1] [(unsigned char)9])) : (-945423551)))))), (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_0]))))));
                }
            } 
        } 
        var_24 = ((/* implicit */_Bool) min((((((/* implicit */long long int) arr_8 [i_0])) - (var_0))), (((arr_6 [i_0] [i_0] [i_0 - 1] [i_0]) ? (((/* implicit */long long int) arr_8 [i_0])) : (arr_4 [i_0] [i_0])))));
    }
}
