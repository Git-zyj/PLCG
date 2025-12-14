/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150316
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_4 [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])))))) : ((+(arr_4 [(unsigned short)15] [i_1] [i_0]))))))));
                    var_20 = arr_3 [i_0] [(signed char)9];
                    var_21 = min((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) (short)-7687)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (signed char)-105)))));
                }
                for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) (((+(var_0))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-89)) : (var_4))))))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (arr_1 [i_3] [i_3]) : (arr_1 [(signed char)3] [i_1])))) : (var_3)));
                        arr_14 [i_0] = ((/* implicit */signed char) (-(arr_11 [i_0])));
                    }
                    for (int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        arr_17 [(short)8] [i_1] [i_3] = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) arr_2 [i_1]))), ((+(var_16)))));
                        arr_18 [i_0] [i_1] = ((/* implicit */int) ((signed char) ((arr_1 [i_3] [i_5]) / (arr_1 [i_3] [i_5]))));
                    }
                    var_24 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_5 [6] [6] [11U])), (max(((~((-2147483647 - 1)))), ((~(((/* implicit */int) arr_15 [i_0] [i_1] [i_1]))))))));
                    var_25 -= ((/* implicit */short) arr_2 [3U]);
                }
                arr_19 [14ULL] [12ULL] [i_1] = ((/* implicit */signed char) (!((!(min((arr_15 [i_0] [i_1] [i_1]), (arr_5 [i_0] [i_0] [i_1])))))));
            }
        } 
    } 
    var_26 = ((((/* implicit */_Bool) min(((+(var_15))), (max((((/* implicit */unsigned long long int) (signed char)62)), (0ULL)))))) ? (var_8) : ((+(((((/* implicit */_Bool) var_11)) ? (var_8) : (var_7))))));
    var_27 = ((max(((!(((/* implicit */_Bool) var_16)))), (((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_11)))))) ? (var_7) : (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)103))))))));
}
