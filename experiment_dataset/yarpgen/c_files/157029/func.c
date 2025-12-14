/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157029
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
    for (signed char i_0 = 4; i_0 < 7; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */long long int) var_1);
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 8; i_4 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_4] [i_2 + 1] [i_2 + 1] [i_4] = ((/* implicit */long long int) min((min((min((arr_4 [i_0 + 2] [i_1] [i_0 + 2]), (var_0))), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) arr_13 [i_0] [3LL] [i_0] [3LL] [7U] [i_0 - 3]))));
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3129146966U)) ? (((/* implicit */int) (unsigned char)171)) : (((/* implicit */int) (signed char)-7))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_5 = 1; i_5 < 21; i_5 += 2) 
    {
        var_17 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_10)) <= (var_0)))), (var_0)))) ? (((/* implicit */int) max((var_9), (((/* implicit */unsigned char) var_1))))) : (((/* implicit */int) arr_19 [i_5]))));
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned char) (-(min((min((((/* implicit */long long int) var_1)), (var_3))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
    }
    for (unsigned char i_6 = 2; i_6 < 15; i_6 += 4) 
    {
        arr_25 [i_6] = max((815982069U), (((/* implicit */unsigned int) (unsigned char)126)));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_13)))), (((var_12) + (((/* implicit */unsigned long long int) var_5)))))) << (((/* implicit */int) (!(((/* implicit */_Bool) 7322371271014934944ULL)))))))));
        arr_26 [i_6] [i_6] = ((/* implicit */signed char) arr_22 [i_6 + 1] [i_6 + 1]);
        arr_27 [i_6 + 1] [i_6] = ((/* implicit */unsigned char) var_4);
        arr_28 [i_6] = ((/* implicit */signed char) arr_18 [i_6]);
    }
    var_19 = ((/* implicit */signed char) ((long long int) ((var_12) > (((/* implicit */unsigned long long int) ((var_14) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_7 = 2; i_7 < 15; i_7 += 3) 
    {
        arr_31 [i_7 + 1] [i_7 - 2] = ((/* implicit */long long int) var_1);
        arr_32 [i_7 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_7 + 1])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_14)) >= (max((var_4), (arr_22 [i_7 + 1] [i_7]))))))) : (((arr_30 [i_7 - 2] [i_7 - 1]) - (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (var_10))))))));
        /* LoopSeq 1 */
        for (unsigned char i_8 = 2; i_8 < 15; i_8 += 4) 
        {
            arr_37 [i_7 + 1] = ((/* implicit */unsigned long long int) var_14);
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_18 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_11)) == (var_6))))) : (var_6))), (((/* implicit */long long int) ((((/* implicit */int) min((var_7), (((/* implicit */unsigned char) var_1))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))))))));
            var_21 = ((long long int) var_2);
            var_22 = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) max((var_6), (var_6)))) ? (((/* implicit */unsigned long long int) arr_21 [i_7 + 1])) : (((unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))));
        }
        /* LoopSeq 2 */
        for (long long int i_9 = 1; i_9 < 12; i_9 += 2) 
        {
            var_23 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (min((var_4), (min((var_4), (var_6)))))));
            var_24 |= ((/* implicit */signed char) min((((var_8) ? (max((var_14), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), ((~(max((var_14), (((/* implicit */unsigned int) var_9))))))));
        }
        for (unsigned long long int i_10 = 3; i_10 < 15; i_10 += 4) 
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (var_3)))) ? (max((((/* implicit */unsigned int) (unsigned char)240)), (30U))) : ((~(var_5)))))) ? (((7322371271014934947ULL) / (8775685764855847907ULL))) : (((/* implicit */unsigned long long int) min((var_10), (var_10))))));
            arr_43 [i_10] = ((/* implicit */signed char) ((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_33 [i_10 + 1]), (arr_33 [i_10 + 1])))))));
            arr_44 [i_7] [i_10 + 1] = ((/* implicit */unsigned int) var_9);
            /* LoopNest 2 */
            for (long long int i_11 = 4; i_11 < 14; i_11 += 4) 
            {
                for (unsigned long long int i_12 = 3; i_12 < 14; i_12 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -3753606645279560987LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)225))) : (-5672845190346520801LL))))));
                        var_27 = ((/* implicit */_Bool) min((var_27), (((((/* implicit */_Bool) (~(var_2)))) && (((/* implicit */_Bool) min((((var_0) + (((/* implicit */unsigned long long int) arr_18 [i_7])))), (((/* implicit */unsigned long long int) min((arr_19 [i_7]), (((/* implicit */unsigned char) (signed char)-106))))))))))));
                        arr_50 [i_12] = ((/* implicit */signed char) var_8);
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            for (unsigned char i_14 = 3; i_14 < 14; i_14 += 4) 
            {
                {
                    arr_58 [i_14] [i_14] [i_14 + 2] [i_14 - 2] = ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */int) var_8)), (((((/* implicit */int) var_8)) / (((/* implicit */int) var_8)))))));
                    arr_59 [i_7] [i_13] |= ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_9))))) <= (max((((/* implicit */long long int) arr_54 [i_7 - 1] [i_7 - 1])), (var_6))))))) : (var_12));
                    var_28 = ((/* implicit */signed char) ((var_4) / (max((((/* implicit */long long int) var_14)), (var_4)))));
                    arr_60 [i_7] [i_7] = ((/* implicit */long long int) ((((11124372802694616665ULL) % (((/* implicit */unsigned long long int) 869329628U)))) + (((/* implicit */unsigned long long int) var_4))));
                    arr_61 [3ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((var_11), (var_11)))), (min((((/* implicit */long long int) var_9)), (var_13)))))) ? (((/* implicit */long long int) arr_51 [i_14])) : (var_3)));
                }
            } 
        } 
    }
}
