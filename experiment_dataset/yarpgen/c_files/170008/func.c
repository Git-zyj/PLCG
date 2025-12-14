/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170008
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
    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(var_3)))), (max((var_17), (((/* implicit */unsigned int) max((((/* implicit */int) var_4)), (var_14))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */short) var_16);
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_0 [i_0])))) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) (!(arr_2 [i_0]))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_0])) / (arr_3 [i_0]))))) : (((/* implicit */unsigned long long int) var_7))));
                    arr_7 [i_0] [(unsigned char)14] [i_0] = ((/* implicit */_Bool) arr_3 [i_0]);
                    var_22 = ((/* implicit */unsigned short) (((-(var_8))) < (((/* implicit */unsigned long long int) arr_5 [i_2 + 1] [i_2] [i_2 + 2]))));
                }
                for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */int) arr_6 [i_3])) : (var_9))))));
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (var_8)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_4))))) : ((+(((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))))))));
                }
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [(signed char)3] [(short)12] [6ULL])) ? ((((-(var_16))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) ((arr_2 [i_0]) ? (((/* implicit */int) var_13)) : ((+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))))))));
                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((arr_1 [(unsigned short)10] [(unsigned short)10]) ? (max((arr_9 [10U] [10U]), (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) var_0)))) < (((((/* implicit */_Bool) ((arr_2 [2ULL]) ? (arr_5 [i_0] [i_1] [i_0]) : (((/* implicit */int) arr_1 [(signed char)12] [i_1]))))) ? (((((/* implicit */_Bool) var_5)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) var_3)))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) && (((/* implicit */_Bool) var_13)))))) : (var_17)));
}
