/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158771
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
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) min((var_13), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 455736997611047121LL)) ? (arr_1 [(short)2]) : (((/* implicit */long long int) arr_0 [i_0]))))) ? (((long long int) arr_0 [i_0])) : (((/* implicit */long long int) arr_0 [(short)7])))) : (((/* implicit */long long int) (((~(var_11))) << (((((/* implicit */int) ((short) arr_0 [i_0]))) - (4053))))))))));
        var_14 = ((/* implicit */unsigned char) ((min((((/* implicit */int) var_7)), (arr_0 [i_0 - 2]))) != (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) var_8))))));
        var_15 = ((/* implicit */unsigned char) max(((((_Bool)0) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1]))), (((/* implicit */long long int) ((max((((/* implicit */int) (short)-1)), (arr_0 [i_0 - 3]))) - (var_11))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_10 [i_1 + 1] [i_2 - 1]) / (arr_10 [i_1 - 1] [i_2 - 3])))) ? (max((arr_10 [i_1 + 1] [i_2 - 3]), (arr_10 [i_1 + 1] [i_2 - 2]))) : (((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4))) : (arr_10 [i_1 + 1] [i_2 - 2])))));
                            var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_5 [2LL] [i_2] [i_4 + 1])) ? (((/* implicit */int) (short)-10)) : (arr_0 [i_4 + 1]))))))));
                            var_18 ^= ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_6 [(short)8])), (arr_0 [(unsigned char)4])))), (min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (arr_9 [(unsigned char)10] [(short)4]))))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                            var_19 = ((/* implicit */signed char) arr_0 [i_0 - 1]);
                        }
                        arr_13 [i_1] [i_1] [i_1] [i_1] = (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((var_11) <= (((/* implicit */int) (_Bool)1))))), (arr_10 [i_2 - 3] [i_1 + 1])))));
                        var_20 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (short)0))))));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) var_2)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)21))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_6))))))));
    var_22 = (unsigned char)0;
    var_23 = ((/* implicit */_Bool) max(((~(6765556467130027864LL))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) (_Bool)0)) : (var_2)))), (var_4)))));
}
