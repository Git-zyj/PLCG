/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157964
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
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 7; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) -1))));
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_0 [(unsigned short)2]))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) max(((unsigned short)52727), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 959390813U)) && (((/* implicit */_Bool) 2890997520U)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    var_19 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)43704))));
                    arr_15 [i_5] [i_3] [i_3] [i_3] = ((((_Bool) (!(((/* implicit */_Bool) (unsigned short)12))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_11 [i_3] [i_4])) ^ (((/* implicit */int) (unsigned short)1637)))))) : (((/* implicit */int) ((unsigned char) max((((/* implicit */int) (unsigned short)3894)), (arr_9 [i_5]))))));
                }
            } 
        } 
    } 
    var_20 += ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % ((-(var_8))));
    var_21 = ((/* implicit */long long int) min(((+(((/* implicit */int) (!(var_7)))))), (((/* implicit */int) ((short) ((_Bool) var_4))))));
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        for (int i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            for (short i_8 = 2; i_8 < 9; i_8 += 2) 
            {
                {
                    var_22 = ((/* implicit */long long int) max((((unsigned long long int) (+(arr_16 [i_6] [i_6])))), (((/* implicit */unsigned long long int) ((arr_7 [i_6 + 1] [i_8 - 2]) ? (arr_12 [i_6 + 1] [i_8 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1636))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_23 -= ((unsigned short) max((((unsigned int) var_14)), (((/* implicit */unsigned int) arr_14 [i_7] [i_7] [i_7] [i_8]))));
                        var_24 = 24;
                        var_25 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) -3565370690820964052LL)), (var_9)))));
                        var_26 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_6] [i_7] [i_8] [i_9])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) arr_14 [i_6 + 1] [i_7] [i_8 - 1] [i_6])) ? (((/* implicit */long long int) 797434812U)) : (arr_20 [i_6] [i_8 + 3])))))), (((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_6 + 1] [i_7] [i_8] [i_9] [i_7] [i_8 + 1])))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_10 = 3; i_10 < 11; i_10 += 4) 
                        {
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) var_12))));
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_6 + 1] [i_7] [i_8])) ? (797434813U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)107)))))))));
                            var_29 = ((/* implicit */unsigned char) arr_26 [i_6 + 1] [i_7] [i_8] [i_9] [i_10 + 1] [i_7]);
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_10] [i_10 - 2] [i_10] [i_10 - 3] [i_10] [i_10])) ? (((/* implicit */int) (unsigned short)0)) : (-25))))));
                        }
                        for (signed char i_11 = 0; i_11 < 12; i_11 += 3) 
                        {
                            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (~(arr_9 [i_6]))))));
                            var_32 = ((/* implicit */unsigned int) (~(max((((((/* implicit */_Bool) var_1)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6] [i_6]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)129)) ? (1537044569) : (1732544451))) >> (((((/* implicit */int) (unsigned char)48)) - (28)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_8] [i_7] [i_11]))) : (min((((arr_32 [i_11] [i_6] [i_8 - 1] [i_6] [i_6 + 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_6] [i_6] [i_7] [i_8] [i_9] [i_11]))))), (((/* implicit */long long int) arr_24 [i_6]))))));
                            var_34 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_16 [i_6] [i_7])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_22 [i_6] [i_9])) : (var_0))))))) : ((~(max((((/* implicit */int) arr_14 [i_6] [i_9] [i_8] [i_6])), (15)))))));
                        }
                    }
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        var_35 = ((/* implicit */signed char) ((unsigned long long int) arr_21 [i_8 - 1] [i_8 - 2] [i_6 + 1]));
                        arr_37 [i_6] [i_6] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_12 [i_6] [i_7])))) ? (arr_20 [i_6 + 1] [i_8 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_20 [i_6 + 1] [i_12]))))))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        arr_42 [i_13] [i_6] [i_6] [i_6] = ((/* implicit */long long int) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (var_2))) | (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 7340032)), (2477699377804471125LL))))))));
                        arr_43 [i_7] [i_7] [i_7] [i_7] [i_6] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) & (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (max((((/* implicit */unsigned long long int) var_12)), (var_8))) : (((/* implicit */unsigned long long int) ((unsigned int) var_14)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9)))) : (var_12)));
                    }
                }
            } 
        } 
    } 
}
