/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173983
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
    var_10 = ((/* implicit */long long int) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0]) : (((/* implicit */long long int) var_0)))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) != (((/* implicit */int) arr_3 [i_0]))))))));
        var_11 = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_2 [i_0] [i_0])) >> (((-4754732662557745493LL) + (4754732662557745524LL)))))));
        var_12 = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_13 = ((/* implicit */int) arr_1 [i_1] [(_Bool)1]);
        var_14 = ((/* implicit */_Bool) ((((_Bool) -739289848)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_1 [(_Bool)1] [i_1]))));
    }
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            {
                arr_12 [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))))), (max((min((((/* implicit */unsigned int) arr_10 [i_2 - 1] [i_2 - 1])), (var_6))), (((/* implicit */unsigned int) min((var_2), ((_Bool)1))))))));
                var_15 = ((/* implicit */_Bool) ((((((/* implicit */int) var_8)) & (min((((/* implicit */int) var_4)), (var_1))))) >> (((var_1) - (1589121881)))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) min((((((/* implicit */int) (signed char)85)) >> (((((/* implicit */int) var_4)) + (105))))), (((((/* implicit */int) arr_2 [i_2] [3])) >> (((((((/* implicit */int) (_Bool)1)) + (var_1))) - (1589121871)))))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))))));
                            arr_17 [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_9))));
                            var_18 = ((/* implicit */long long int) min(((~(((arr_6 [i_4]) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) var_8)))))), (((/* implicit */int) min((min((var_7), (((/* implicit */unsigned char) var_4)))), (((/* implicit */unsigned char) min(((signed char)29), ((signed char)85)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_25 [i_2] [i_7] [i_7] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) min((arr_15 [i_2 - 1] [i_2] [i_2 - 1]), (arr_15 [i_2 - 1] [i_2] [i_2 - 1])))) : ((+(((/* implicit */int) arr_18 [i_2 - 1] [i_2] [i_2 - 1]))))));
                            var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (((var_6) >> (((4754732662557745493LL) - (4754732662557745477LL)))))));
                            var_20 = ((/* implicit */_Bool) (+(min((((/* implicit */long long int) (signed char)-85)), (arr_0 [i_2 - 1])))));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (((((~(((/* implicit */int) var_9)))) & (((/* implicit */int) var_8)))) & ((~((+(((/* implicit */int) arr_11 [i_2] [i_3] [i_7])))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2 - 1] [i_3] [i_3] [i_9])) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_3] [i_9]))) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -1932356536))))))) ? (((((/* implicit */_Bool) -1190638122880865947LL)) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-86))) : (4754732662557745493LL)))) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) var_9))))));
                            var_23 += ((/* implicit */_Bool) var_6);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 1) 
    {
        for (long long int i_11 = 0; i_11 < 18; i_11 += 3) 
        {
            {
                var_24 = ((/* implicit */_Bool) ((min((((/* implicit */long long int) (_Bool)0)), (arr_0 [i_10]))) + (((((/* implicit */_Bool) arr_0 [i_11])) ? (arr_0 [i_11]) : (arr_0 [i_10])))));
                var_25 = var_1;
                var_26 = ((/* implicit */_Bool) var_3);
                /* LoopNest 3 */
                for (long long int i_12 = 2; i_12 < 17; i_12 += 3) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (long long int i_14 = 0; i_14 < 18; i_14 += 3) 
                        {
                            {
                                var_27 = (i_10 % 2 == zero) ? (((((((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (min((((/* implicit */long long int) (_Bool)1)), (4551849740065329196LL))))) + (9223372036854775807LL))) >> (((((min((arr_34 [i_14] [i_10] [i_10] [i_10]), (((/* implicit */int) var_2)))) - (((/* implicit */int) var_7)))) + (192))))) : (((((((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (min((((/* implicit */long long int) (_Bool)1)), (4551849740065329196LL))))) + (9223372036854775807LL))) >> (((((((min((arr_34 [i_14] [i_10] [i_10] [i_10]), (((/* implicit */int) var_2)))) - (((/* implicit */int) var_7)))) + (192))) + (206602272)))));
                                var_28 -= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_33 [i_10] [i_10] [i_12 + 1])) ? (arr_39 [i_10] [i_13] [i_12 + 1] [i_13]) : (arr_39 [i_10] [i_10] [i_12 - 1] [i_13])))));
                                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (+(((long long int) ((4754732662557745493LL) / (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))));
                                var_30 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                                var_31 = ((/* implicit */unsigned char) ((_Bool) (_Bool)0));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
