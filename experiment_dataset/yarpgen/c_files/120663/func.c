/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120663
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_5)), (-4941762738408955697LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) var_5)))))))) ? (4321317079395909256LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)59)) > (((/* implicit */int) (unsigned char)157))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_4 [i_2 + 1] [i_2 + 2] [i_2 - 1]) : (arr_4 [i_2 - 1] [i_2 - 1] [i_2 + 1])))) ? (16095176589698783026ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_6 [i_2 + 2] [i_2 + 2] [i_2 + 2]))))))));
                    var_15 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (4294967286U))));
                    arr_8 [i_1] [i_2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 625951280228550486ULL)) ? (((/* implicit */int) arr_0 [i_2])) : ((~(((/* implicit */int) var_7))))));
                    var_16 = ((/* implicit */_Bool) ((long long int) (unsigned char)15));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) (((+(min((((/* implicit */unsigned long long int) var_2)), (18446744073709551615ULL))))) < ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124))) : (6888664509374923922ULL)))))));
        var_18 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)195)))), (((/* implicit */int) (!(((/* implicit */_Bool) 17874584562444985541ULL))))))) >= (((((/* implicit */int) (signed char)25)) << (((1344156128U) - (1344156128U)))))));
    }
    /* vectorizable */
    for (long long int i_4 = 1; i_4 < 9; i_4 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_10)))) ? (((unsigned int) arr_9 [i_4 + 1])) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            arr_16 [i_4] [i_5] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-25)) ? (888161541461112085LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
            arr_17 [i_4] [i_4] [i_5] = ((/* implicit */long long int) (!(((_Bool) var_8))));
        }
        arr_18 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_4 + 1] [i_4 - 1])) ? (-9043712182683530869LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    }
    for (long long int i_6 = 1; i_6 < 9; i_6 += 2) /* same iter space */
    {
        arr_23 [i_6 - 1] = (((!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) >> (((/* implicit */int) var_5))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((long long int) (unsigned short)8627)) <= (((arr_5 [i_6] [i_6]) | (((/* implicit */long long int) var_11))))))));
        var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)255)) ? (((unsigned long long int) 1675365562)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) == (-3267514061256550924LL)))))))));
        var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_11) <= (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
    }
    for (long long int i_7 = 0; i_7 < 20; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                {
                    var_22 = ((/* implicit */int) ((unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))) - (var_11))))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 1; i_10 < 19; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 1; i_11 < 19; i_11 += 1) 
                        {
                            {
                                arr_37 [i_7] [i_8] [i_9] [(unsigned char)9] [3U] [i_11 + 1] = ((/* implicit */_Bool) (+(arr_25 [i_10] [i_11])));
                                arr_38 [i_7] [i_8] [i_9] [17U] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((var_0) ? (((/* implicit */int) arr_34 [i_9])) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7586))) : (9043712182683530859LL))))))));
                                arr_39 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((long long int) var_12));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)247)) != (((/* implicit */int) (short)2436))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (var_10)))) ? (((arr_28 [i_7]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120)))))));
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) max(((~((~(var_11))))), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) 3267514061256550924LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)14762))) : (-9043712182683530893LL)))))));
        arr_40 [i_7] = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) -9043712182683530906LL)) ? (arr_36 [i_7] [(short)10] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_33 [i_7]))))))), (((/* implicit */unsigned long long int) ((signed char) var_2)))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) arr_11 [i_7] [i_7])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_7] [i_7] [i_7]))) : (57863943U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_6))))))));
    }
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 4237103355U))))))) : (((/* implicit */int) max(((signed char)24), (((/* implicit */signed char) var_8)))))));
}
