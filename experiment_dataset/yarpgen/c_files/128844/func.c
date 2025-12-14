/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128844
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_10 = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_0 + 1])), (var_1)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4041241079U)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_3))))) : (4041241093U))) : (((/* implicit */unsigned int) var_2)));
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0 + 1]);
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))))) ? (((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1])))) : (((/* implicit */int) arr_1 [i_0 + 1])));
        var_11 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (253726200U)))) ? (((/* implicit */int) arr_0 [i_0 + 1] [(short)3])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [(short)8])) : (((/* implicit */int) (short)32512))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 7; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned char) var_6)), ((unsigned char)77))))))) ? (var_2) : ((-(((/* implicit */int) var_9)))))))));
                        var_13 |= ((/* implicit */_Bool) max((arr_8 [i_2 + 1] [i_2 + 3] [i_0 + 1]), (((((/* implicit */_Bool) arr_0 [i_2 + 2] [i_0 + 1])) ? (arr_8 [i_2 + 3] [i_2 + 3] [i_0 + 1]) : (arr_8 [i_2 + 2] [i_2 + 2] [i_0 + 1])))));
                        arr_13 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_9 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_8))))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) arr_0 [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((var_0) ? (arr_8 [i_0] [(unsigned char)2] [(unsigned char)2]) : (((/* implicit */unsigned long long int) 134217726U))))));
                        arr_14 [i_3] [i_2] [i_2] [i_0 + 1] [i_2] [i_0 + 1] = ((/* implicit */signed char) var_3);
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1266551777)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_3] [i_2]))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max(((short)32516), (((/* implicit */short) var_4)))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))), (arr_8 [i_0] [i_0 + 1] [i_0 + 1])))));
                    }
                } 
            } 
        } 
    }
    var_15 = ((/* implicit */signed char) var_5);
    var_16 = var_1;
    var_17 &= ((/* implicit */unsigned long long int) ((((var_0) && (((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (4041241079U)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_1))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_4))))) : (var_2)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_2)) : (var_5)))));
}
