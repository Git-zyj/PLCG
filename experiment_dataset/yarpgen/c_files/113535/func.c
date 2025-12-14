/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113535
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) max(((-(arr_3 [i_1] [i_0] [8ULL]))), (((/* implicit */long long int) max((var_11), (((/* implicit */unsigned int) min((var_5), (((/* implicit */unsigned short) arr_0 [i_1])))))))))))));
                var_15 = ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? ((-(min((((/* implicit */long long int) var_0)), (arr_3 [i_1] [i_0] [i_0]))))) : (arr_3 [i_0] [i_1] [i_0]));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 9; i_2 += 2) /* same iter space */
                {
                    var_16 |= ((/* implicit */int) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)5)), (var_3))))) : (max((((/* implicit */long long int) var_12)), (-785571146260075307LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)171))) : (min((((/* implicit */unsigned int) (unsigned char)153)), (min((var_13), (((/* implicit */unsigned int) var_0))))))));
                    var_17 = ((/* implicit */_Bool) var_4);
                    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) arr_1 [i_1]))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) min((((((arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 1]) + (9223372036854775807LL))) >> (((4095U) - (4074U))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32640))) % (3250491825U))))));
                }
                for (unsigned short i_3 = 1; i_3 < 9; i_3 += 2) /* same iter space */
                {
                    var_19 *= ((/* implicit */_Bool) arr_6 [i_1] [i_0]);
                    arr_12 [i_0] [i_3 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 992U)) ? (1346930778U) : (((/* implicit */unsigned int) -2067628252)))) + (3U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157))) : (3526504541U)));
                    var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) arr_5 [i_0] [i_1] [i_0])) != (-2377021636521594006LL))) ? (((((/* implicit */_Bool) (-(129740067)))) ? (((((/* implicit */_Bool) 108238877U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)110))) : (arr_7 [i_0] [i_1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (2353794772U)));
                }
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned int) ((arr_14 [i_4]) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) var_3))));
        var_21 = var_0;
        var_22 *= ((/* implicit */unsigned char) ((var_7) >= (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_28 [i_8] [i_8] [i_7] [i_7] [i_8] [i_8] = ((/* implicit */unsigned short) (-(var_8)));
                        var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_25 [i_8] [i_8] [i_8 - 1]))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (~(((/* implicit */int) var_2)))))));
                        var_25 = ((/* implicit */unsigned int) ((long long int) var_7));
                        arr_29 [i_8] [(_Bool)1] [5U] [5U] [(_Bool)1] = ((((/* implicit */_Bool) arr_27 [i_8 - 1] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_27 [i_8 - 1] [i_8] [i_8 - 1] [i_8])) : (((/* implicit */int) arr_27 [i_8 - 1] [i_8] [i_8] [i_8])));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned char) arr_17 [i_5] [i_6]);
            arr_30 [i_6] [12U] [i_5] = ((/* implicit */unsigned int) ((_Bool) arr_20 [i_5] [i_5]));
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_6] [i_6])) ? (((/* implicit */int) (unsigned short)3366)) : (((/* implicit */int) (signed char)7))));
        }
        /* LoopNest 3 */
        for (unsigned int i_9 = 4; i_9 < 18; i_9 += 3) 
        {
            for (signed char i_10 = 2; i_10 < 17; i_10 += 2) 
            {
                for (long long int i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    {
                        arr_39 [i_5] [i_9] [i_10] [i_11] = ((/* implicit */int) ((3195202600U) >> (((var_12) + (108490137)))));
                        arr_40 [i_10] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (-(var_13)))))) > ((((-(arr_22 [i_11] [i_9]))) & (((((/* implicit */_Bool) var_8)) ? (arr_38 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
                        var_28 ^= min((((/* implicit */unsigned int) (~(((/* implicit */int) ((275221340) > (((/* implicit */int) var_5)))))))), (min((arr_33 [i_5] [i_9 + 1] [i_10]), (arr_33 [i_5] [i_9 - 4] [(short)18]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_12 = 0; i_12 < 23; i_12 += 3) 
    {
        var_29 = ((/* implicit */unsigned short) (-(3307683054U)));
        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) arr_41 [i_12] [i_12]))));
        arr_45 [i_12] [17U] = ((/* implicit */int) var_6);
        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) arr_43 [i_12]))));
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4186728418U)) ? (arr_42 [i_12] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_12])))));
    }
    for (long long int i_13 = 3; i_13 < 12; i_13 += 4) 
    {
        var_33 = (-(4186728412U));
        var_34 = ((/* implicit */_Bool) ((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : ((((+(arr_33 [i_13] [i_13] [i_13]))) + (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (arr_25 [i_13] [i_13 + 3] [i_13])))))))));
    }
}
