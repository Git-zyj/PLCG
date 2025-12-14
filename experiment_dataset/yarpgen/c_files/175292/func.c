/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175292
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
    var_11 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? ((-((+(((/* implicit */int) var_2)))))) : (((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned short) ((arr_6 [i_1]) ? (((/* implicit */unsigned int) (+(((var_2) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_2))))))) : (max((var_6), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) < (arr_1 [(unsigned char)10] [(unsigned char)10]))))))));
                        arr_9 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((min((arr_4 [i_3] [i_3 - 2] [i_3] [i_3]), (arr_4 [i_3] [i_3 - 1] [i_3] [i_3]))) - (min((arr_1 [i_1 - 1] [i_0 + 3]), (((/* implicit */int) arr_2 [i_0 + 1] [i_1 - 1] [i_3 - 3]))))));
                        var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) min((arr_3 [i_0 - 2]), (((/* implicit */unsigned short) var_4))))) != ((~(((/* implicit */int) arr_0 [i_1])))))))));
                    }
                    for (unsigned short i_4 = 1; i_4 < 9; i_4 += 4) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_4 + 3] = ((/* implicit */_Bool) ((((arr_6 [i_0 - 3]) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) ((unsigned short) arr_3 [i_4]))))) - (((/* implicit */int) var_5))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            var_14 -= ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) 4194303U)) ? (-1LL) : (-13LL))));
                            arr_15 [i_1] [i_1] = ((/* implicit */long long int) var_1);
                        }
                        arr_16 [i_1] [i_1] [i_2] [i_4] [i_0] = ((/* implicit */short) arr_0 [i_0]);
                    }
                    arr_17 [i_0 + 2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_0]) << (((((((/* implicit */_Bool) ((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 4])))))) ? (((arr_13 [i_0] [i_1] [i_0] [i_1] [(unsigned short)4] [1] [i_1]) + (((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) min((((/* implicit */short) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])), (var_7)))))) - (357898979)))));
                    arr_18 [i_0] [i_1] [i_2] [6] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2146435072U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)119))) : (-13LL)))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_6 [(unsigned char)1])), (arr_0 [(_Bool)1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2])))))))) ? (max((arr_4 [i_0] [i_1 - 1] [i_0] [i_0]), (((/* implicit */int) arr_2 [i_1 + 1] [i_0 + 4] [i_0 - 3])))) : (((/* implicit */int) var_3))));
                    arr_19 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((var_2) ? (arr_1 [(unsigned char)4] [i_1 - 1]) : (((/* implicit */int) var_4)))), (((/* implicit */int) arr_2 [i_0] [i_0] [i_2]))))) == (var_0)));
                    arr_20 [i_0] [i_1] [i_1 + 1] [i_1] = ((unsigned int) (!(((/* implicit */_Bool) (-(var_0))))));
                }
            } 
        } 
    } 
}
