/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130356
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
    var_20 = ((/* implicit */int) 9223372036854775807LL);
    var_21 |= var_19;
    var_22 -= ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) var_7)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_23 |= ((/* implicit */unsigned int) max((9223372036854775807LL), (-9223372036854775795LL)));
                var_24 = arr_5 [i_1 + 1] [4U] [i_0];
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) << (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) ^ (((((/* implicit */_Bool) var_4)) ? (arr_1 [(signed char)11]) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    arr_9 [i_2] [i_1] [i_1] [i_2] |= ((/* implicit */unsigned long long int) var_4);
                    var_25 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)32767)) == (((/* implicit */int) var_3)))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)32767)) / (489944423)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32750)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) : (var_15)))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (-4198073651736793273LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))))));
                    var_26 = ((/* implicit */unsigned short) var_9);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_13 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 + 3] [i_1 + 1])) ? (((/* implicit */int) arr_8 [i_1 + 3] [i_0])) : (((/* implicit */int) arr_11 [i_1 + 3] [i_0] [i_1 + 1]))))) ? (((var_13) ? (((/* implicit */int) arr_8 [i_1 + 1] [i_0])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_0 [i_3]))));
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (arr_7 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_8 [i_1 + 2] [i_0])), (var_14)))) ? (((((/* implicit */int) arr_11 [i_0] [i_0] [i_3])) & (arr_5 [i_1] [i_0] [i_3]))) : ((-(((/* implicit */int) arr_3 [i_3] [i_1] [i_0])))))))));
                    arr_14 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */signed char) ((long long int) ((((_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [(_Bool)1]))) : (var_9))));
                }
                arr_15 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_1])) & (((/* implicit */int) var_3))))) ? (arr_10 [i_0] [(_Bool)1] [i_1] [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (489944427))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(-9223372036854775796LL)))) ? (((var_19) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))) : (((((/* implicit */int) (signed char)112)) ^ (((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1])) ? (((/* implicit */long long int) ((int) arr_4 [i_0] [i_1]))) : (((((/* implicit */_Bool) (signed char)-106)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_19)))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned short) var_12);
}
