/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17725
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
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_10 *= ((/* implicit */short) ((((/* implicit */int) var_5)) * (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)65)))) / (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-114)), (var_5))))))));
        var_11 = ((/* implicit */unsigned int) var_6);
        var_12 |= (+(max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) (short)-13370))))))));
    }
    for (short i_1 = 2; i_1 < 18; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */short) ((int) ((long long int) arr_1 [i_1 - 1])));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 3; i_2 < 17; i_2 += 1) 
        {
            arr_8 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
            arr_9 [i_1] [i_1] = ((/* implicit */signed char) (unsigned char)191);
        }
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (((/* implicit */int) var_4))));
        }
        arr_13 [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((var_2) + (((/* implicit */int) (unsigned char)120))))) ? (((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)233)))) : (((/* implicit */int) var_3))))));
        arr_14 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) (short)0))))), (((arr_12 [(unsigned short)17] [i_1 - 2]) / (((/* implicit */unsigned long long int) 172222106))))))) && (((/* implicit */_Bool) max((((/* implicit */short) min((var_1), (((/* implicit */unsigned char) var_6))))), (max((((/* implicit */short) var_5)), ((short)-32334))))))));
    }
    for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 61435066449554667LL)))) ? (((((/* implicit */_Bool) (unsigned char)66)) ? (arr_18 [7LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((1404375451U) < (1404375451U))))))))))));
        arr_19 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) max(((short)13105), (((/* implicit */short) (signed char)114))))) < (((((/* implicit */_Bool) arr_12 [i_4] [i_4])) ? (var_2) : (((/* implicit */int) var_4))))));
        var_16 += ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_3 [i_4] [i_4])), (((((((/* implicit */_Bool) arr_10 [(signed char)11] [(signed char)13] [i_4])) && (((/* implicit */_Bool) arr_7 [i_4])))) ? (((long long int) var_3)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))))));
    }
    var_17 = ((/* implicit */unsigned char) max((var_17), (max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))))), (var_9)))));
    var_18 = ((/* implicit */unsigned long long int) (signed char)-127);
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)190))))) ? (var_2) : (((/* implicit */int) var_4))));
}
