/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184205
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
    var_16 = var_7;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)39012)), (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_13)))), (((((/* implicit */int) (unsigned short)0)) << (((((/* implicit */int) (unsigned short)55579)) - (55574)))))))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_5), (arr_0 [i_0] [i_0])))))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) min((var_18), (min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_1 - 2]))))), (min(((unsigned short)0), (arr_2 [i_1 - 1])))))));
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)44862))))))));
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) max((((/* implicit */int) var_9)), (((((/* implicit */int) ((((/* implicit */int) (unsigned short)26516)) > (((/* implicit */int) var_11))))) * (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0])) > (((/* implicit */int) var_11))))))))))));
            arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)41878)) <= (((/* implicit */int) (unsigned short)17412))))) <= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_0 [i_1 - 3] [i_1]))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 2; i_2 < 14; i_2 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14)))) ^ (((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                arr_15 [i_0] [i_0] = ((unsigned short) var_12);
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)48717)))))));
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)65528)))))));
            }
            arr_16 [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (unsigned short)39019))));
        }
    }
}
