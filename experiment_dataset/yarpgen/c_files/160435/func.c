/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160435
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_15) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1]))))));
        var_20 = ((/* implicit */signed char) 53033423857475843LL);
        var_21 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) : (((/* implicit */int) ((_Bool) var_1)))));
        var_22 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_6), (arr_0 [i_0 - 2]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            var_23 = ((/* implicit */long long int) max(((((!(((/* implicit */_Bool) 1125899906842623ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -53033423857475843LL)))) : (arr_6 [i_1] [i_1]))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) (!(arr_4 [i_1] [i_1])))), (arr_1 [i_1]))))));
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((((arr_3 [i_1] [i_1]) > (arr_3 [i_1] [i_2]))) ? (((((/* implicit */_Bool) 18446744073709551608ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) (signed char)54))))))))));
        }
        var_25 += ((/* implicit */unsigned long long int) var_3);
        var_26 = ((/* implicit */long long int) ((var_0) + (((/* implicit */unsigned long long int) ((var_3) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (min((1125899906842623ULL), (1125899906842618ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((18445618173802708989ULL) != (((/* implicit */unsigned long long int) -53033423857475852LL)))))))), (((unsigned long long int) arr_9 [i_5] [i_4])))))));
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) min(((!(((/* implicit */_Bool) arr_11 [i_1] [i_4] [i_5] [i_5])))), (((((((/* implicit */unsigned long long int) arr_11 [i_4] [i_4] [i_4] [i_4])) != (var_6))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_3] [i_1] [i_1] [i_3] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) -7735365103172591726LL)) : (arr_6 [i_4] [i_4])))))))))));
                            var_29 = min((((((/* implicit */_Bool) 18445618173802708974ULL)) ? (4611123068473966592ULL) : (((/* implicit */unsigned long long int) -7935410535765435375LL)))), (max((max((var_17), (((/* implicit */unsigned long long int) arr_7 [i_3])))), (((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_3 [i_5] [i_5])))))));
                            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) var_11))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            arr_18 [i_3] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-12)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) : (((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_15 [i_1] [i_1] [i_1] [i_3] [i_1] [i_3] [i_1]))))) : (((unsigned long long int) 4611123068473966590ULL))));
                            var_31 += ((/* implicit */signed char) min((((((/* implicit */_Bool) ((signed char) 36028797018963967ULL))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)0)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (signed char)-83))))))));
                        }
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) (signed char)44))))))));
            arr_19 [i_1] [i_1] [i_3] = ((/* implicit */long long int) (!(((((/* implicit */int) ((_Bool) 18429295056749036515ULL))) > (((/* implicit */int) max((var_4), (var_14))))))));
            arr_20 [i_1] [i_1] &= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))) > (min((((/* implicit */unsigned long long int) var_12)), (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_12)))))) : (((/* implicit */int) ((18446744073709551607ULL) > (((/* implicit */unsigned long long int) -4510962287537722083LL)))))));
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            arr_23 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_1] [i_8] [i_1] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (var_8)))) : (((/* implicit */int) (!(var_3))))));
            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 53033423857475839LL))))) : (((/* implicit */int) var_11))));
        }
        arr_24 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)43)) + (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
    }
    for (long long int i_9 = 3; i_9 < 14; i_9 += 1) 
    {
        var_34 = ((/* implicit */signed char) ((((/* implicit */int) max((arr_27 [i_9 + 2]), (arr_27 [i_9 + 2])))) != (((/* implicit */int) (!((!(((/* implicit */_Bool) 599624004400516795ULL)))))))));
        var_35 = ((/* implicit */long long int) min((((unsigned long long int) 0ULL)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned long long int) 7935410535765435363LL)) : (var_6)))))))));
        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 5079862461852893134LL)), (((((/* implicit */_Bool) 7988629513404484326ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (13835621005235585012ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (min((((/* implicit */unsigned long long int) (signed char)-3)), (4611123068473966594ULL)))))));
    }
    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (max((((/* implicit */long long int) min((var_10), (((/* implicit */signed char) var_14))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-7935410535765435375LL))))) : ((~(((((/* implicit */long long int) ((/* implicit */int) var_3))) & (-8032036875826037557LL)))))));
}
