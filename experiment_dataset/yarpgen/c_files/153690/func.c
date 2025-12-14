/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153690
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
    var_10 = ((/* implicit */int) max(((+(min((var_3), (((/* implicit */long long int) (short)3)))))), (((/* implicit */long long int) (-(((/* implicit */int) ((var_1) != (var_3)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (!((!(((/* implicit */_Bool) 549755813887LL)))))))));
        arr_4 [(signed char)1] = ((/* implicit */long long int) var_2);
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) min((arr_2 [i_0] [10ULL]), (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_4))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 4) 
        {
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (short)22535)) ? (((/* implicit */unsigned int) (-(2004681873)))) : (arr_3 [i_2 - 2])));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                for (unsigned char i_4 = 1; i_4 < 7; i_4 += 4) 
                {
                    {
                        var_15 |= ((/* implicit */long long int) (signed char)-1);
                        var_16 *= ((/* implicit */signed char) (-((~(((/* implicit */int) var_4))))));
                    }
                } 
            } 
            var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2 - 2] [i_2 - 2]))));
        }
        /* LoopSeq 3 */
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                var_18 = ((/* implicit */short) 911706566);
                var_19 = ((/* implicit */int) (+(arr_8 [i_6 - 1] [i_6 - 1] [i_6 - 1])));
                var_20 += ((/* implicit */unsigned short) ((399102783U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38094)))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -549755813887LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20485))) : (arr_10 [i_5])))) ? (((/* implicit */long long int) (~(arr_3 [i_1])))) : (arr_20 [i_6] [i_6 - 1] [i_6 - 1] [i_6])));
            }
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                arr_24 [(unsigned char)1] [(unsigned char)1] &= var_2;
                var_22 = ((/* implicit */unsigned char) ((unsigned int) var_3));
                var_23 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) arr_13 [(unsigned short)6] [i_5] [i_5] [i_5] [i_1])) << (((/* implicit */int) arr_22 [i_1] [i_1] [i_1])))));
                var_24 = ((/* implicit */signed char) var_6);
            }
            var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)45050))) - (arr_16 [i_1]))))));
        }
        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            arr_27 [i_1] [(signed char)8] [i_8] = ((/* implicit */int) (~(492374385U)));
            arr_28 [i_1] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) (unsigned char)103)))));
            var_26 = ((/* implicit */unsigned short) var_4);
        }
        for (unsigned int i_9 = 2; i_9 < 10; i_9 += 2) 
        {
            var_27 = (!(((/* implicit */_Bool) arr_25 [i_1] [i_1])));
            arr_31 [i_1] [i_9] = ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_26 [i_9 - 2] [i_9 - 1])));
            arr_32 [i_1] = ((/* implicit */signed char) (+(((((/* implicit */int) arr_5 [i_1])) - (((/* implicit */int) arr_26 [i_1] [i_1]))))));
            /* LoopSeq 1 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_35 [i_10] [i_10] = ((/* implicit */unsigned int) var_6);
                arr_36 [i_10] [i_9] [i_10] &= ((/* implicit */signed char) (~(((/* implicit */int) arr_29 [i_9] [i_9]))));
                arr_37 [i_1] [i_1] [i_1] [i_10] = ((/* implicit */signed char) (~(((arr_2 [i_1] [i_9 + 1]) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                arr_38 [i_10] [i_9] [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) 435529724U)))));
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)45069))))) | (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_10] [i_1] [i_1] [i_1]))) + (-5407274258178312038LL)))));
            }
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                for (long long int i_12 = 2; i_12 < 8; i_12 += 1) 
                {
                    for (unsigned short i_13 = 3; i_13 < 10; i_13 += 2) 
                    {
                        {
                            var_29 = ((((/* implicit */_Bool) ((unsigned long long int) arr_43 [i_1] [i_9 - 2] [i_12] [i_9 - 2]))) ? (var_6) : (arr_7 [8LL] [i_9]));
                            var_30 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_9))))));
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((arr_30 [i_9 - 2]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                            var_32 = ((/* implicit */unsigned long long int) var_3);
                        }
                    } 
                } 
            } 
        }
    }
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
    {
        arr_51 [i_14] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
        arr_52 [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)45050)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-67))) : (-15LL)));
        arr_53 [i_14] = arr_49 [i_14 - 1];
    }
}
