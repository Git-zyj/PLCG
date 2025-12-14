/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182548
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
    var_20 *= ((/* implicit */_Bool) min(((+(((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_15)))))), (58720256)));
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_4))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = max(((+(((/* implicit */int) max(((unsigned char)11), (arr_1 [i_0])))))), (((/* implicit */int) ((unsigned short) arr_0 [i_0]))));
        arr_3 [i_0] [(_Bool)1] = ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_1 [i_0])))), (-1968296280)))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) ((var_3) < (((/* implicit */int) max(((unsigned short)43064), (((/* implicit */unsigned short) arr_0 [i_0])))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 7; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_15 [i_2] [i_2 - 1] [i_1] [i_2] = ((/* implicit */unsigned char) ((min((12582912), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))) + (max((((/* implicit */int) arr_12 [i_2 - 1] [i_2])), ((-(((/* implicit */int) var_13))))))));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (+(var_3))))));
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_0))));
                        arr_16 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_6 [i_2] [i_2] [i_2 + 2])))) || (((/* implicit */_Bool) ((int) arr_6 [i_0] [i_0] [i_0])))));
                    }
                } 
            } 
        } 
        var_24 += ((/* implicit */_Bool) -58720271);
    }
    var_25 *= ((/* implicit */unsigned char) var_14);
}
