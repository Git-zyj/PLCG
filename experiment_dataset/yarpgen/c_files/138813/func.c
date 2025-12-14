/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138813
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_3 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((10971762404710449132ULL), (((/* implicit */unsigned long long int) -9223372036854775787LL)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : ((-(((((/* implicit */_Bool) 6833963250059883063LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (10971762404710449132ULL))))))))));
                                arr_10 [i_4 - 2] [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */long long int) 799158647);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            {
                                arr_18 [i_0] [i_1] [12] [i_6] [i_1] = ((/* implicit */int) max((arr_14 [i_5] [i_5] [i_5 - 1] [i_5]), (((/* implicit */short) var_10))));
                                arr_19 [i_1 + 2] = var_10;
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_29 [i_0] [i_10] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((var_6) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) >= (((/* implicit */unsigned int) (+(var_7))))))) & (((/* implicit */int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */int) var_0))))) && (((/* implicit */_Bool) (-(arr_4 [i_0] [i_1 + 2])))))))));
                                var_12 = ((/* implicit */unsigned long long int) max((((long long int) arr_5 [i_8] [i_1] [i_1 - 2] [i_10])), (((/* implicit */long long int) max((((/* implicit */int) var_8)), (arr_27 [i_0] [i_1] [i_1 - 2] [i_9]))))));
                                arr_30 [i_0] [i_1] [i_8] [i_10] [i_10] [(unsigned short)18] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-58)) - ((((_Bool)1) ? (((/* implicit */int) arr_28 [(unsigned char)10] [i_9] [i_8] [i_1] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_11 = 0; i_11 < 20; i_11 += 1) 
    {
        for (unsigned int i_12 = 3; i_12 < 18; i_12 += 3) 
        {
            for (signed char i_13 = 3; i_13 < 17; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 20; i_14 += 2) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 20; i_15 += 1) 
                        {
                            {
                                arr_45 [(signed char)10] [15] [i_13 + 2] [i_14] = ((/* implicit */int) arr_38 [i_13 + 1] [i_13 + 1] [i_13]);
                                var_13 = ((/* implicit */unsigned short) max((max((((/* implicit */int) (_Bool)1)), (arr_4 [i_13 + 3] [i_14]))), (((/* implicit */int) var_0))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (signed char i_17 = 0; i_17 < 20; i_17 += 4) 
                        {
                            {
                                var_14 *= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_5)))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (3ULL)))))) || ((((_Bool)1) && ((_Bool)1))));
                                arr_51 [i_17] [i_16] [i_12] [i_12] [i_11] = (+(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_5 [i_13 - 3] [i_12 - 1] [18ULL] [(unsigned char)8])))));
                                var_15 *= ((/* implicit */short) (-(18446744073709551612ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 0; i_18 < 20; i_18 += 2) 
                    {
                        for (signed char i_19 = 0; i_19 < 20; i_19 += 3) 
                        {
                            {
                                arr_59 [i_19] [i_18] [i_19] [i_12] [i_19] = min(((+(((/* implicit */int) (!(var_6)))))), (((/* implicit */int) (_Bool)1)));
                                var_16 = ((/* implicit */short) ((((max((var_4), (((/* implicit */long long int) (unsigned char)0)))) | (2094907025873465875LL))) << (((/* implicit */int) ((((/* implicit */int) ((var_7) > (-492006661)))) >= (((/* implicit */int) arr_57 [i_11] [i_11])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_20 = 2; i_20 < 18; i_20 += 1) 
                    {
                        for (int i_21 = 3; i_21 < 18; i_21 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? ((+(((/* implicit */int) arr_33 [i_11])))) : (((((219170155) + (((/* implicit */int) (unsigned short)58714)))) - ((+(-219170155)))))));
                                var_18 = ((/* implicit */_Bool) var_0);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_22 = 1; i_22 < 17; i_22 += 1) 
                    {
                        for (unsigned short i_23 = 0; i_23 < 20; i_23 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) var_6);
                                var_20 &= ((/* implicit */long long int) var_2);
                                var_21 = ((/* implicit */unsigned int) (short)25061);
                                arr_71 [i_11] [i_22] [i_13] [i_12 + 2] [(_Bool)1] [i_11] [i_11] = max((((/* implicit */int) (_Bool)1)), (1669041350));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
