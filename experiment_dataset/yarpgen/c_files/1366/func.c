/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1366
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) (_Bool)1);
        arr_3 [i_0 + 2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0 - 1] [i_0 + 2]) : (((/* implicit */int) arr_1 [i_0]))))) ? (arr_0 [i_0]) : (((/* implicit */int) (!(arr_1 [i_0 + 3])))))), (((int) ((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (arr_0 [i_0]))))));
        arr_4 [i_0] = max((((/* implicit */int) var_3)), (arr_0 [0ULL]));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2952615377U)) ? (((((/* implicit */_Bool) (signed char)86)) ? (arr_2 [i_0] [i_1]) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!((!(arr_1 [(_Bool)1]))))))));
            var_18 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (~(arr_2 [i_1 - 1] [i_0])))) ? (((unsigned int) arr_0 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2]))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (-3261767624815413771LL)))) ? (((/* implicit */long long int) min((arr_0 [i_0 + 3]), (((/* implicit */int) (unsigned char)191))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_12 [i_3] [(short)4])) : (arr_6 [i_0 - 1] [i_2] [i_0 - 1]))))) ^ (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_10 [i_0] [(signed char)5] [i_2] [i_0])) ? (arr_11 [i_3] [i_1] [i_1] [i_3]) : (((/* implicit */long long int) arr_12 [i_3] [i_3]))))))));
                        var_20 = (~(((/* implicit */int) (signed char)-122)));
                        /* LoopSeq 1 */
                        for (short i_4 = 2; i_4 < 10; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((min((arr_6 [i_0] [i_0] [i_3]), (((/* implicit */long long int) (signed char)123)))) - (((/* implicit */long long int) arr_12 [i_2] [i_1 + 1])))))));
                            var_22 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                            var_23 = ((/* implicit */_Bool) (((_Bool)1) ? (-9130915333604696477LL) : (((/* implicit */long long int) ((/* implicit */int) (short)8191)))));
                        }
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_11 [9ULL] [i_1 + 1] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34269))) : (arr_5 [i_0 + 2]))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0])))));
                    }
                } 
            } 
            var_25 = ((/* implicit */_Bool) arr_7 [i_0]);
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) arr_17 [i_0]);
            arr_18 [i_0] [i_0] |= ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) arr_13 [i_0] [5ULL] [i_0] [(unsigned short)5] [i_5]))), (((int) ((unsigned long long int) (short)8184)))));
        }
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_21 [i_6] = (unsigned short)14;
        arr_22 [(signed char)6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((6593846761055766191ULL) << (((/* implicit */int) ((_Bool) arr_20 [16U] [i_6])))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((signed char) arr_19 [i_6])), (arr_19 [(short)13]))))) : (((long long int) (unsigned char)82))));
    }
    var_27 = ((/* implicit */signed char) ((unsigned short) max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)109))))))));
}
