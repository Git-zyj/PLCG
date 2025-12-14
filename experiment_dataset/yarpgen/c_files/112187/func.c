/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112187
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [(signed char)10])) - (((/* implicit */int) arr_3 [i_0]))))) == (((max((var_6), (((/* implicit */unsigned long long int) var_9)))) + (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [(signed char)8] [(signed char)8])))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) var_0);
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
        var_12 = ((/* implicit */signed char) var_5);
    }
    for (int i_1 = 2; i_1 < 11; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 3) 
        {
            for (signed char i_3 = 3; i_3 < 10; i_3 += 2) 
            {
                {
                    arr_14 [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((min((((((/* implicit */int) arr_7 [i_1])) * (((/* implicit */int) var_2)))), ((-(((/* implicit */int) (signed char)31)))))) * (max((((/* implicit */int) arr_8 [i_3 + 2] [i_1 + 1])), (((int) arr_6 [i_1] [i_3]))))));
                    arr_15 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_5)) << (((((/* implicit */int) var_4)) - (60))))) >> (((arr_9 [i_1] [i_1]) + (1245330200))))) <= (((/* implicit */int) (((_Bool)1) || ((_Bool)1))))));
                    arr_16 [i_1] [(_Bool)1] [i_3 - 3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_1] [5] [i_1] [i_3 + 2]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [1ULL] [i_2] [i_2 - 1]))))) : ((+(arr_12 [i_1] [i_2 + 1] [9] [i_1]))))) - (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (1781421191))))));
                }
            } 
        } 
        arr_17 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_7) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1 + 1])))))) >= (((((/* implicit */int) ((unsigned short) arr_6 [i_1] [i_1 - 2]))) - (((/* implicit */int) arr_7 [i_1]))))));
        var_13 = ((/* implicit */signed char) ((_Bool) max((arr_13 [i_1 - 2] [i_1 + 1] [i_1 - 2]), (arr_13 [i_1 - 2] [i_1 + 1] [i_1 - 2]))));
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((+(var_0))) == (((/* implicit */int) ((unsigned short) (_Bool)1))))))) | (((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_1] [i_1 - 1]))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_1 - 1])) >= (((/* implicit */int) arr_8 [i_1] [i_1])))))))))))));
        arr_18 [i_1] = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_11 [i_1 - 1] [i_1] [i_1] [i_1])))), (((((/* implicit */int) arr_6 [i_1] [i_1 - 2])) * (((/* implicit */int) arr_6 [i_1] [i_1]))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            var_15 = ((/* implicit */unsigned short) (~(var_7)));
            var_16 = arr_21 [i_4] [i_5];
            var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_21 [i_4] [i_5]) & (arr_21 [i_4] [i_5]))))));
        }
        arr_24 [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) min((arr_22 [(_Bool)1] [i_4] [i_4]), (arr_21 [i_4] [i_4])))) ? (((unsigned long long int) arr_19 [i_4])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_4] [i_4] [9ULL])) ? (var_0) : (((/* implicit */int) arr_23 [i_4] [i_4] [i_4]))))))) ^ (((min((arr_22 [i_4] [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_23 [i_4] [11ULL] [i_4])))) ^ (max((arr_20 [i_4]), (((/* implicit */unsigned long long int) var_9))))))));
    }
    var_18 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)0)) : (1767305354)));
}
