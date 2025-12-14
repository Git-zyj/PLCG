/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100734
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_4)) / (8728073)))) / (((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 2]))) : (arr_0 [i_1 + 2])))));
                    /* LoopSeq 3 */
                    for (int i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        arr_13 [i_2 - 1] [i_3] = ((/* implicit */unsigned short) min(((-(((-1592824654) & (((/* implicit */int) (_Bool)1)))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2])))))))));
                        var_11 = ((/* implicit */int) ((((14400515653237760437ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_3 + 3] [i_3] [i_3] [i_3] [i_3]))))) - (((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 851412989)) || (((/* implicit */_Bool) (unsigned short)38606)))))) : (((((/* implicit */_Bool) 14400515653237760427ULL)) ? (((/* implicit */unsigned long long int) arr_0 [i_2])) : (arr_6 [i_1] [i_1])))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        var_12 = ((/* implicit */long long int) (_Bool)1);
                        arr_16 [i_4] [16] = ((/* implicit */long long int) ((((var_0) ? (((/* implicit */int) (_Bool)1)) : (arr_9 [i_0] [(_Bool)1] [i_2] [i_0]))) >> (((arr_0 [i_4]) - (7899923407645079996LL)))));
                        arr_17 [(unsigned short)2] [16ULL] [16ULL] [16ULL] = (_Bool)1;
                    }
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_2 + 2] [i_5])), (min((var_8), (((/* implicit */unsigned long long int) (_Bool)1)))))))));
                        var_14 = ((/* implicit */long long int) min(((((-(((/* implicit */int) var_6)))) * (((/* implicit */int) (_Bool)1)))), ((+(((((/* implicit */int) arr_19 [5] [5] [8ULL] [i_5])) / (((/* implicit */int) var_7))))))));
                        var_15 = ((int) ((int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0])))));
                        arr_21 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned short) var_5);
                    }
                    var_16 &= ((/* implicit */unsigned long long int) var_2);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        arr_26 [i_6] [i_6] = ((/* implicit */int) ((((arr_18 [i_6] [i_6] [i_6] [i_6] [i_6]) * (((arr_22 [i_6]) << (((((/* implicit */int) var_3)) - (135))))))) % (((/* implicit */unsigned long long int) arr_0 [i_6]))));
        arr_27 [i_6] [i_6] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_20 [i_6] [(unsigned char)1] [i_6] [(unsigned char)7])) ^ ((+(arr_3 [i_6]))))), (((/* implicit */int) (unsigned char)193))));
    }
    var_17 = ((5628531672832265046ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) + (min((7603990593766963671LL), (((/* implicit */long long int) var_3))))))));
    var_18 = ((/* implicit */long long int) max((((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (6808976992920810267ULL))), ((!(((/* implicit */_Bool) var_6))))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min(((unsigned short)32752), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) var_1))))));
    var_19 = ((/* implicit */int) var_4);
}
