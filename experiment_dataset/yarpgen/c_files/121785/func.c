/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121785
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((max((((/* implicit */long long int) arr_1 [i_0])), (var_1))) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))))) + ((-((+(4503988668144344964LL)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
                        arr_11 [i_0] [(_Bool)0] [i_0] [i_3] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_3] [(unsigned short)1] [2LL] [i_0]))))) ? (((var_9) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                        var_15 = arr_1 [i_0];
                    }
                    var_16 = ((/* implicit */long long int) (+(((/* implicit */int) var_2))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_4 = 2; i_4 < 20; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)117)) > (((/* implicit */int) var_4)))))));
                        arr_16 [i_0] [(short)3] [(signed char)11] [(short)3] = ((/* implicit */short) ((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_7))))));
                        arr_17 [i_0] [i_0] [i_0] [i_4 + 1] [i_1] [i_4 - 2] = ((arr_14 [i_2] [i_0]) << (((arr_15 [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4 + 2] [17LL] [(unsigned short)10]))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_5 = 2; i_5 < 11; i_5 += 2) 
    {
        var_18 = ((/* implicit */long long int) arr_1 [i_5]);
        arr_21 [i_5 - 2] [i_5] = ((/* implicit */unsigned short) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_19 [(_Bool)1] [i_5])))) < (((((/* implicit */_Bool) var_2)) ? (arr_2 [i_5] [i_5 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
        var_19 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)73))))) ? (var_13) : (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) (short)-1))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-9)), (arr_19 [i_5] [i_5 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5] [i_5 - 1] [i_5]))) : (max((var_13), (((/* implicit */long long int) var_9))))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) var_10)) + (arr_14 [5LL] [i_5])))), (((((/* implicit */long long int) ((/* implicit */int) var_7))) + (var_8))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_5 + 1] [i_5 + 1] [i_5 + 1])))))));
    }
}
