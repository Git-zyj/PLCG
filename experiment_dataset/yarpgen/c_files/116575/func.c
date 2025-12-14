/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116575
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
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [(_Bool)1]))) < (((long long int) arr_1 [i_0 + 1] [i_0]))));
                        var_17 = ((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) var_3))) + (var_1)))));
                        arr_10 [i_1 + 1] [(unsigned char)4] [5U] [(unsigned short)8] [i_0] = ((/* implicit */_Bool) min((((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) (~(arr_1 [i_0 - 3] [i_0]))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */short) (+(max((var_1), (((/* implicit */long long int) arr_7 [i_0 - 3] [i_0 - 1] [i_0 - 3] [i_0] [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 15; i_4 += 4) 
        {
            for (unsigned short i_5 = 1; i_5 < 13; i_5 += 1) 
            {
                for (unsigned short i_6 = 1; i_6 < 13; i_6 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (((-(((/* implicit */int) arr_6 [i_4 - 1] [6] [(short)14] [i_6 + 2] [i_6])))) >= (max((((/* implicit */int) arr_6 [i_4 - 1] [(signed char)4] [i_4] [i_6 + 1] [i_6])), (arr_1 [i_4 - 1] [(unsigned char)6]))))))));
                        var_20 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) var_2)) == (arr_3 [i_4 - 1] [i_0 + 1]))));
                        var_21 = ((/* implicit */int) arr_6 [i_0] [i_0] [1LL] [i_5] [i_0]);
                        arr_19 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_14 [i_0] [i_4 + 1] [i_6])), (arr_1 [i_0] [i_0])))) ? (arr_18 [(short)0] [i_5 + 3] [i_6 - 1]) : (((/* implicit */unsigned long long int) arr_2 [i_0 - 3] [i_6 + 3]))))) ? (max((max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_4])), (arr_15 [i_0] [i_4] [i_5] [(unsigned short)4]))), (((/* implicit */unsigned long long int) arr_2 [i_5 - 1] [i_6])))) : (((/* implicit */unsigned long long int) ((long long int) arr_11 [i_4 + 1] [i_4 + 1])))));
                    }
                } 
            } 
        } 
    }
    var_22 ^= var_10;
    var_23 = ((/* implicit */short) max(((~(((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_14))))))), (((/* implicit */int) var_6))));
}
