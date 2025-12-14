/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170749
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
    var_12 = var_7;
    var_13 = var_5;
    var_14 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_15 -= var_7;
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */_Bool) ((int) ((((_Bool) arr_1 [i_0] [i_0])) ? (var_4) : (((((/* implicit */_Bool) var_2)) ? (-868735476) : (((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((unsigned char) arr_0 [i_1 - 1]);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (int i_3 = 2; i_3 < 8; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) max((var_17), (var_9)));
                        /* LoopSeq 2 */
                        for (int i_5 = 4; i_5 < 8; i_5 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */int) max((var_18), (arr_1 [(unsigned char)2] [i_5])));
                            var_19 = ((((((/* implicit */int) (_Bool)1)) == (arr_14 [i_1 - 1] [i_2] [i_2] [i_2] [i_3]))) ? (((/* implicit */int) arr_16 [i_1] [i_4])) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_1])));
                            var_20 -= ((/* implicit */_Bool) ((unsigned char) var_5));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_3 - 2])))))));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_3 - 1] [i_5 - 4] [i_5 + 3])) ? (((/* implicit */int) ((unsigned char) (unsigned char)3))) : (((/* implicit */int) arr_15 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1])))))));
                        }
                        for (int i_6 = 4; i_6 < 8; i_6 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */int) max((var_23), ((~(arr_11 [i_3 + 1] [i_6 - 1] [i_6 - 1] [i_6 + 3])))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((unsigned char) arr_12 [i_6] [i_3 + 3] [i_2] [i_6])))));
                        }
                        arr_20 [i_1] [i_2] [i_3 + 2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_1 - 1] [i_3 - 2] [(unsigned char)9] [i_4])) ? (var_5) : (((/* implicit */int) var_6))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned char) ((((var_0) + (2147483647))) << (((arr_18 [i_1] [i_1] [i_1] [(_Bool)1] [i_1 - 1] [i_1]) - (551950115)))));
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((_Bool) 222851337)))));
    }
    var_27 = ((((/* implicit */_Bool) max((((var_6) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))), (var_4)))) ? (((/* implicit */int) var_3)) : (max((((var_1) ? (((/* implicit */int) var_6)) : (var_5))), (((var_11) ? (((/* implicit */int) var_8)) : (-868735476))))));
}
