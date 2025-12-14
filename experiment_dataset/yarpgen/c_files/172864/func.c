/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172864
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
    var_18 = ((/* implicit */int) (unsigned short)0);
    var_19 = ((/* implicit */int) max((var_19), (min((((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (max((((/* implicit */int) (unsigned short)65535)), (var_7))) : (min((var_17), (((/* implicit */int) (signed char)-6)))))), (((var_17) - (((/* implicit */int) var_0))))))));
    var_20 = ((/* implicit */unsigned short) var_4);
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (unsigned short)29697))))) ? (var_11) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_10)))))))) || (((/* implicit */_Bool) var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (short i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_11 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (unsigned short)65535);
                            arr_12 [i_0] [i_2] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_2])) + (max((((/* implicit */int) (unsigned short)1)), (((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_9 [i_0] [i_2] [i_2]))))))));
                            arr_13 [i_1] [i_0] [i_1] [i_2] = ((/* implicit */long long int) var_3);
                            arr_14 [i_2] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_2]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_4 = 4; i_4 < 21; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        for (short i_6 = 2; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_22 = (+(((/* implicit */int) arr_4 [i_5] [i_0] [i_0])));
                                arr_24 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_6] [i_6 + 3] [i_6])) || (((/* implicit */_Bool) arr_22 [i_5] [i_6] [i_5] [i_5] [i_6] [i_5]))));
                                arr_25 [i_0] [i_0] [i_4] [i_6] [i_1] [i_6] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) (unsigned short)0))));
                                var_23 = ((/* implicit */int) ((arr_21 [i_6] [i_6 + 3] [i_4]) > (arr_19 [i_4 - 3] [i_6 + 1])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 20; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */int) var_3);
                                arr_32 [i_8] [i_8] [i_4] [i_8] [i_8] = (~(var_4));
                                arr_33 [i_0] [i_1] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) 1746726680343785155LL)) ? ((-(14758315398473097840ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7213)))));
                            }
                        } 
                    } 
                    arr_34 [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) ((long long int) (unsigned short)65535));
                    var_25 = ((/* implicit */int) var_13);
                    var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_4] [i_0])) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_4])) : (((/* implicit */int) (unsigned short)59161)))) > (((arr_29 [i_4] [14] [i_0]) - (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_1] [i_4] [i_0]))))));
                }
                for (int i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    arr_39 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) min(((unsigned short)15), (((/* implicit */unsigned short) arr_17 [i_0] [i_0] [i_0] [i_0]))))) ? (var_4) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_9])))), (((((/* implicit */_Bool) arr_38 [i_9] [i_0])) ? (arr_38 [i_0] [i_0]) : (((/* implicit */int) var_3))))));
                    arr_40 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) min((var_14), (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) - (((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned int) var_9))))));
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_16) < (-2752056752120520961LL))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535))))) : (arr_23 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))) ? (((long long int) (unsigned short)65528)) : ((((+(2752056752120520968LL))) >> (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_7)) : (var_6))) - (3382795135U)))))));
                    var_28 |= ((/* implicit */short) (unsigned short)6374);
                }
                /* LoopNest 3 */
                for (unsigned char i_10 = 1; i_10 < 19; i_10 += 3) 
                {
                    for (int i_11 = 0; i_11 < 22; i_11 += 3) 
                    {
                        for (unsigned int i_12 = 3; i_12 < 18; i_12 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */int) arr_41 [i_10] [i_10] [i_10] [i_10]);
                                var_30 = ((/* implicit */unsigned short) ((max((((int) arr_15 [i_0] [i_0] [i_12])), (max((var_1), (var_14))))) + (((max((134201344), (((/* implicit */int) (unsigned short)65535)))) - (((/* implicit */int) arr_18 [i_0] [i_10 - 1] [i_12 + 2] [i_12 + 3]))))));
                            }
                        } 
                    } 
                } 
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_8)) : (1006309023))), (max((var_10), (arr_15 [i_0] [i_0] [i_0])))))) && (((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) var_0))))));
                var_32 = ((/* implicit */signed char) (short)-17);
            }
        } 
    } 
}
