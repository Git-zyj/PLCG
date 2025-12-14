/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11880
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
    var_18 = var_5;
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 6; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            arr_4 [9U] [(unsigned char)6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 2] [i_1])) - (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) arr_1 [9U] [i_1]))));
            arr_5 [(_Bool)1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1] [i_1] [i_0 + 2]))))) ? ((+(((unsigned int) var_2)))) : (max((arr_0 [i_0 - 3]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)21)))))))));
            var_19 = ((/* implicit */unsigned char) min((min(((-(1794266624))), (((/* implicit */int) max((arr_2 [i_0 - 2] [i_0 - 1] [3U]), (((/* implicit */unsigned short) arr_3 [i_0 + 1] [i_0 + 1] [(_Bool)1]))))))), (((/* implicit */int) ((_Bool) var_5)))));
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((((/* implicit */unsigned int) (signed char)62)), (max((((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (arr_0 [(_Bool)1]))))))))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(-1794266625)))) || (((/* implicit */_Bool) (-(3251659205U))))));
            arr_9 [i_2] = ((/* implicit */long long int) ((4294967295ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2569)))));
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                var_22 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))));
                arr_13 [i_2] = ((/* implicit */_Bool) (+(1794266624)));
            }
            arr_14 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_2 - 1]))) % (arr_12 [i_0] [i_2] [i_0 + 1] [i_2 + 1])));
            var_23 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)-2569))) / (4611681620380876800LL)));
        }
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */int) arr_2 [i_0 + 3] [i_0 - 3] [i_0 - 3])), (2141904501))), (((/* implicit */int) min(((short)-4580), (((/* implicit */short) (_Bool)0)))))))) ? (((/* implicit */int) arr_8 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_15 [i_0]))));
            arr_17 [i_4] [i_4] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_6 [i_0 + 3] [i_0 + 1])) : (((/* implicit */int) var_16)))))))), (max((((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4121674251U)))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    {
                        arr_22 [i_0 + 1] [i_0] [8U] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_0 + 2] [i_0 - 3] [i_0 - 3] [i_0 - 1])))))));
                        var_25 |= ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0 - 2]);
                    }
                } 
            } 
            var_26 |= ((/* implicit */unsigned int) ((min(((+(16962136696082446494ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [5U] [i_4] [i_4]))) % (arr_10 [i_0 - 2] [5U] [(short)5] [(unsigned short)2])))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_15))))))))));
            var_27 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 757543577U))))), ((+(1787151068850863275ULL)))));
        }
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            arr_26 [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-3439)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [2ULL] [i_7] [i_7]))) : (arr_20 [i_0] [6U]))))))));
            arr_27 [i_0 + 4] [i_7] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) arr_2 [i_0 - 3] [i_0 - 1] [i_0 - 1])), (arr_16 [i_0 - 2] [i_0 - 3]))) - (((/* implicit */unsigned long long int) arr_20 [i_0] [4]))));
        }
        arr_28 [i_0] [i_0 - 3] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)120))))) ? (((/* implicit */int) (unsigned char)218)) : (((((/* implicit */_Bool) (unsigned short)52357)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))));
    }
}
