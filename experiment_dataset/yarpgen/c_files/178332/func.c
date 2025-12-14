/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178332
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_11 += ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [(unsigned char)0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [i_0] [i_0]), ((short)13332))))))), (((/* implicit */unsigned int) min((arr_2 [(signed char)1] [i_0]), (arr_2 [i_0] [i_0]))))));
        var_12 *= ((/* implicit */short) arr_1 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */long long int) (short)-197);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */signed char) ((int) arr_1 [i_0] [i_0]));
                    arr_10 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_1 [i_1 + 3] [i_1 - 2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)206)))))) : (max((min((var_0), (((/* implicit */long long int) arr_2 [i_0] [i_1 + 3])))), (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_0]))))));
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_7 [i_1 - 1] [i_1 + 3] [i_1 - 1]))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    {
                        var_14 &= ((/* implicit */unsigned char) arr_6 [i_0] [i_3] [i_4]);
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [2ULL] = ((var_0) >= (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                        var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (arr_15 [i_3])))) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((arr_15 [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0]))))))))));
                        var_16 = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) (short)196)))));
                        arr_20 [i_5] [i_4] [i_3] [i_0] = ((/* implicit */int) var_7);
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) var_4))))) ? (((/* implicit */unsigned long long int) var_7)) : (((unsigned long long int) (short)-180)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
}
