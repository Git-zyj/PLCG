/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144896
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
    var_18 += ((/* implicit */signed char) (unsigned short)25767);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) var_0)))))) + ((-(var_16))))) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5051211548930017346LL)) ? (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) (signed char)105)))))))) : (((/* implicit */int) ((unsigned short) arr_1 [i_0])))));
    }
    for (unsigned short i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_1 [i_1 - 1]), ((unsigned short)34158)))) / (((/* implicit */int) arr_0 [(unsigned short)6]))));
        arr_6 [i_1 + 2] = ((/* implicit */signed char) max((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? ((~(arr_5 [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_1 [i_1])))))))));
        var_20 = ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((max((var_15), (((/* implicit */long long int) (unsigned short)1629)))) >= (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_2))))))))) : (max((var_16), (((/* implicit */long long int) max(((unsigned short)53493), (var_11)))))));
        var_21 -= 920647910431064214LL;
        var_22 &= ((/* implicit */signed char) max((max((((/* implicit */int) arr_0 [(unsigned short)12])), ((+(((/* implicit */int) (unsigned short)289)))))), (((/* implicit */int) arr_4 [7LL]))));
    }
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            {
                var_23 = ((/* implicit */long long int) max((max(((unsigned short)286), ((unsigned short)44742))), (max((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)20794)) <= (((/* implicit */int) (unsigned short)44737))))), ((unsigned short)40065)))));
                arr_13 [i_2] [i_3] = ((((/* implicit */long long int) (((~(((/* implicit */int) var_3)))) & (((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) arr_8 [i_2])))))))) + ((~(arr_5 [i_2]))));
                arr_14 [i_2] [i_2] [i_3] = arr_10 [i_3];
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) var_3);
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) var_5))) % (-2050242520119523258LL))), (((/* implicit */long long int) ((((/* implicit */int) var_14)) <= (((/* implicit */int) var_0)))))))) ? (max((var_15), (((/* implicit */long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_14))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54998)))));
}
