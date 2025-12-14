/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105107
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
    var_16 = var_13;
    var_17 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned char) var_3);
                        var_19 = ((/* implicit */signed char) (-(arr_2 [i_0] [i_0])));
                        var_20 += ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_8 [i_3] [i_2] [i_1] [i_0]))))));
                    }
                    for (unsigned int i_4 = 2; i_4 < 21; i_4 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((long long int) var_13)))));
                    }
                    for (signed char i_5 = 2; i_5 < 21; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) arr_0 [i_5])) > (arr_11 [i_0] [i_0] [21LL] [i_5]))) ? (((4222315710122523294ULL) | (((/* implicit */unsigned long long int) 1358307153U)))) : (((/* implicit */unsigned long long int) var_3)))))));
                        var_24 += ((/* implicit */unsigned long long int) (unsigned char)158);
                        arr_17 [i_0] [i_0] [i_2] [i_5] = ((/* implicit */signed char) (unsigned short)38257);
                        arr_18 [i_0] [i_5] [i_2] [i_0] = ((/* implicit */short) ((unsigned long long int) var_13));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) ((arr_20 [i_0] [i_1] [i_2]) <= (arr_20 [i_1] [i_1] [i_1])));
                        var_26 = ((/* implicit */unsigned int) ((int) var_8));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) (signed char)-49))));
                        var_28 = var_1;
                    }
                    arr_21 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) arr_6 [i_0] [i_1] [i_0]));
                    var_29 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) > (((1858828002) + (((/* implicit */int) var_13))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 4; i_7 < 22; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            {
                                arr_26 [i_0] [i_0] = ((unsigned char) ((((/* implicit */int) arr_7 [i_2] [i_0] [i_2])) | (((/* implicit */int) var_14))));
                                var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-75)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)88)) - (57)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) > (var_7))))) : (arr_20 [i_0] [i_0] [i_0])));
        /* LoopNest 2 */
        for (unsigned short i_9 = 1; i_9 < 21; i_9 += 1) 
        {
            for (long long int i_10 = 4; i_10 < 22; i_10 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        for (unsigned short i_12 = 1; i_12 < 22; i_12 += 4) 
                        {
                            {
                                arr_37 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_10 + 1] [i_10 - 4] [i_10 - 1] [i_0])) != (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)38257)) : (((/* implicit */int) (unsigned char)50))))));
                                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (arr_25 [i_10] [i_0] [i_10 - 3] [i_10 - 2] [i_10 - 1])));
                                var_33 *= arr_1 [i_10];
                                var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_9 + 1] [i_10 - 2] [i_11] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_22 [i_9] [i_10 - 2] [i_12] [i_11])));
                                var_35 = ((/* implicit */unsigned short) ((unsigned long long int) arr_23 [i_12 - 1] [i_9] [i_10 - 4] [i_0]));
                            }
                        } 
                    } 
                    var_36 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)36415)) && (((/* implicit */_Bool) (unsigned char)167))));
                    var_37 = ((/* implicit */unsigned long long int) arr_31 [i_0]);
                    var_38 = ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_34 [i_9 - 1])));
                }
            } 
        } 
    }
    for (unsigned short i_13 = 0; i_13 < 23; i_13 += 3) /* same iter space */
    {
        var_39 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((2557049148079256171LL) / (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
        arr_41 [i_13] = ((/* implicit */unsigned long long int) ((long long int) (-(4061669803U))));
    }
    /* vectorizable */
    for (unsigned short i_14 = 0; i_14 < 23; i_14 += 3) /* same iter space */
    {
        var_40 = var_6;
        arr_44 [(short)13] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_14] [6U] [i_14]))) <= (22ULL)));
        /* LoopSeq 1 */
        for (short i_15 = 0; i_15 < 23; i_15 += 3) 
        {
            var_41 = ((/* implicit */unsigned long long int) (-(arr_0 [i_15])));
            arr_47 [i_15] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_22 [i_15] [i_14] [i_14] [i_15])) > (arr_12 [i_14] [i_15] [12ULL] [i_14])));
            var_42 *= ((/* implicit */unsigned long long int) var_1);
        }
        var_43 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_14] [i_14] [i_14])) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) (_Bool)1))));
    }
}
