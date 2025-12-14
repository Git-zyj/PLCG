/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177810
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] = ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_8 [i_0] [i_0] = (-(((/* implicit */int) var_6)));
            arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((var_1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)16848)))) : (((/* implicit */int) var_5))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_14 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                        var_11 = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_2))))));
                    }
                } 
            } 
            arr_15 [i_0] [i_0] = ((/* implicit */short) var_3);
        }
        arr_16 [(unsigned char)8] [(unsigned char)8] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))) : (var_4)))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3683852032634711745LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))))));
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((int) (short)-16835)))))));
        arr_17 [i_0] = ((/* implicit */_Bool) ((unsigned char) var_1));
    }
    var_13 &= ((/* implicit */_Bool) max((min((min((((/* implicit */long long int) var_1)), (var_9))), (((/* implicit */long long int) (-(((/* implicit */int) (short)16848))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (var_9)))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) var_10)))))));
    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)212)), (var_2)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) max((((/* implicit */short) var_6)), (var_2)))))))));
    var_15 = ((/* implicit */unsigned char) (-(min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) var_3))))));
    var_16 &= ((/* implicit */_Bool) var_6);
}
