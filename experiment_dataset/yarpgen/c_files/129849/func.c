/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129849
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
    var_19 = ((/* implicit */signed char) (-((+(var_11)))));
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_18))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_7 [(signed char)13] [(signed char)13] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (arr_6 [i_1 - 1] [i_1] [i_2] [i_1]) : (var_10)))) ? (arr_3 [i_1 + 1]) : (arr_4 [i_1 - 1]));
                    var_21 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(max((arr_4 [i_1]), (((/* implicit */long long int) (signed char)92))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((var_16), (arr_0 [i_1] [10LL]))))) <= (arr_6 [i_2] [i_0] [i_0] [i_0])))) : (((/* implicit */int) var_4))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_22 = var_5;
                                arr_15 [i_3] [15LL] [19LL] = ((/* implicit */long long int) (signed char)70);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 *= ((/* implicit */signed char) var_10);
        /* LoopSeq 2 */
        for (signed char i_5 = 2; i_5 < 16; i_5 += 3) 
        {
            arr_18 [i_0] [(signed char)16] = ((/* implicit */signed char) min((-8400315282025186698LL), (((/* implicit */long long int) (signed char)-92))));
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(signed char)3]))))) > (((/* implicit */int) ((signed char) arr_17 [i_0] [i_5] [17LL])))))) / (((/* implicit */int) var_5)))))));
            var_25 *= ((/* implicit */signed char) (-(((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [4LL]))) == (arr_4 [i_5])))) / (((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) (signed char)93))))))));
            var_26 &= ((/* implicit */signed char) var_10);
        }
        for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (-(max((4433230883192832LL), (((/* implicit */long long int) (signed char)-77)))))))));
            arr_22 [i_0] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) (signed char)11)))))))) >> ((((-(((/* implicit */int) arr_0 [(signed char)9] [(signed char)12])))) - (95)))));
            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) var_9))));
            arr_23 [i_6] = ((/* implicit */signed char) min((((4433230883192832LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-39))))), (((((/* implicit */_Bool) (signed char)-78)) ? (-4232964894555566620LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)75)))))));
        }
        arr_24 [i_0] [i_0] = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_0] [i_0]);
    }
    for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
    {
        arr_28 [i_7] [i_7] = ((/* implicit */signed char) min((((var_13) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-13))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) (signed char)87)))))));
        /* LoopSeq 1 */
        for (long long int i_8 = 4; i_8 < 15; i_8 += 2) 
        {
            arr_33 [i_8] = ((/* implicit */signed char) (-(((((4444285231318415752LL) < (-5645002743494602899LL))) ? (-8569899663938208623LL) : (max((((/* implicit */long long int) (signed char)-77)), (974903827451232825LL)))))));
            arr_34 [i_8] [i_7] [i_7] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_27 [i_8 - 3])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_27 [i_8 - 3]))))));
            var_29 = max((((((/* implicit */_Bool) var_16)) ? (299949220172699069LL) : (arr_11 [i_7] [i_7] [i_7] [i_8] [i_8] [i_8]))), (((/* implicit */long long int) ((arr_11 [i_7] [i_7] [i_7] [i_8] [i_8] [i_8 - 1]) < (-299949220172699069LL)))));
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                var_30 = (~(max((arr_20 [i_8 + 1]), (arr_20 [i_8 + 1]))));
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                {
                    for (long long int i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        {
                            arr_44 [i_7] [i_7] [i_7] [(signed char)10] [i_7] [i_7] [i_7] = ((/* implicit */signed char) arr_9 [i_7] [i_9] [i_9] [i_9]);
                            arr_45 [i_7] [i_7] [i_7] [i_7] [i_10] [i_7] = ((/* implicit */signed char) ((((((/* implicit */int) arr_29 [(signed char)12] [i_8 - 3])) <= (((/* implicit */int) arr_29 [i_8] [i_8 - 3])))) || (((/* implicit */_Bool) arr_29 [i_8] [i_8 - 3]))));
                            var_31 = arr_0 [i_10] [i_10];
                            var_32 = min((((((/* implicit */_Bool) arr_35 [(signed char)1] [i_8 - 4] [i_8 - 4] [i_10])) ? (arr_35 [i_7] [i_8 - 1] [(signed char)13] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)28))))), (((long long int) arr_35 [i_7] [i_8 - 3] [0LL] [4LL])));
                            var_33 &= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_27 [i_11])) ? (((/* implicit */int) arr_27 [i_11])) : (((/* implicit */int) arr_27 [i_8 - 4]))))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_17))) >= (((-5645002743494602911LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-43))))))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_7])) : (((/* implicit */int) arr_31 [i_8]))))) ? ((+(arr_12 [i_7] [i_7]))) : (arr_3 [i_7])))));
            }
            arr_46 [i_8] = ((((/* implicit */_Bool) (signed char)121)) ? ((+(var_14))) : (-5645002743494602899LL));
        }
        arr_47 [i_7] [i_7] = ((/* implicit */long long int) var_8);
    }
    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_13)));
}
