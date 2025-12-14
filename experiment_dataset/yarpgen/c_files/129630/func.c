/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129630
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        var_17 *= ((/* implicit */short) ((7984580649366712580LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-49)))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                arr_10 [i_2] [i_2] [i_0] [i_2] |= ((/* implicit */unsigned short) var_10);
                arr_11 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 - 1] [i_0 - 3])) ? (arr_5 [i_0 + 2] [i_0 - 1] [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-9)))));
                var_18 -= ((/* implicit */unsigned short) arr_5 [(short)3] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        {
                            arr_16 [i_0] [i_0 - 2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */long long int) ((/* implicit */int) (short)7930))) : (-1067740891987448984LL)));
                            var_19 ^= ((/* implicit */unsigned short) (+((((-2147483647 - 1)) * (((/* implicit */int) (_Bool)1))))));
                            var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_2] [i_0] [i_2]))) / (arr_0 [(unsigned char)7])))) && ((!(((/* implicit */_Bool) var_13))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    for (short i_7 = 3; i_7 < 16; i_7 += 1) 
                    {
                        {
                            arr_25 [i_0] [(unsigned char)4] [(unsigned char)4] [i_0] [i_7] |= ((/* implicit */signed char) ((var_16) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0 + 1])) * (((/* implicit */int) var_6)))))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_7 + 3] [i_7 - 2])) ? (arr_3 [i_1] [(unsigned short)9]) : (((/* implicit */int) ((unsigned char) var_2))))))));
                            arr_26 [i_7 - 2] [i_7] [i_7 + 1] [i_1] [i_7] [i_7] = ((/* implicit */signed char) ((arr_20 [i_1] [i_5] [i_6]) == (((/* implicit */long long int) var_13))));
                        }
                    } 
                } 
                arr_27 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((unsigned char) arr_24 [i_0] [(short)10] [i_5] [i_5] [i_0 - 3] [i_0 - 2] [i_5]));
                var_22 = ((/* implicit */_Bool) min((var_22), (((((var_2) ? (arr_5 [i_1] [i_1] [i_5]) : (((/* implicit */long long int) var_13)))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)175))))))))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                arr_31 [i_1] [i_0 - 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_1])) ? (arr_30 [i_0 - 1] [i_1]) : ((~(861857131)))));
                var_23 = ((/* implicit */signed char) ((arr_28 [i_0 - 2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) > (arr_5 [i_0] [i_0] [i_0])))))));
            }
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_35 [i_9] = ((/* implicit */signed char) arr_0 [i_0]);
            var_24 += ((/* implicit */unsigned long long int) (signed char)-24);
            /* LoopNest 2 */
            for (unsigned char i_10 = 2; i_10 < 18; i_10 += 2) 
            {
                for (signed char i_11 = 1; i_11 < 18; i_11 += 3) 
                {
                    {
                        var_25 ^= ((/* implicit */unsigned int) arr_21 [i_11 + 1] [i_11 + 1] [i_9] [i_9] [i_0]);
                        arr_41 [i_0] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_0 - 4] [i_10] [i_10 + 1] [i_11 + 1])) ^ (((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_0 - 1] [i_0])))));
                        arr_42 [i_9] [i_9] = ((/* implicit */unsigned short) (-(((int) var_1))));
                        arr_43 [i_0] [i_9] [i_9] [i_11 + 1] [i_11 + 1] = ((/* implicit */signed char) ((arr_30 [i_10 + 1] [i_11 - 1]) / (arr_30 [i_10 - 2] [i_11 + 1])));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned int i_12 = 0; i_12 < 19; i_12 += 2) 
        {
            for (signed char i_13 = 0; i_13 < 19; i_13 += 3) 
            {
                for (unsigned int i_14 = 0; i_14 < 19; i_14 += 2) 
                {
                    {
                        var_26 += ((/* implicit */unsigned char) (+(arr_0 [i_0 - 3])));
                        var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_0 - 1] [i_0 + 2] [i_0 - 3] [i_0])) ? (((/* implicit */int) arr_19 [i_0 - 2])) : (((/* implicit */int) arr_8 [i_12] [i_13] [0LL]))));
                        arr_51 [i_0] [i_0] [6U] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_0] [i_0 - 1] [i_0] [i_0 - 4])) ? (((/* implicit */int) arr_21 [i_0 - 3] [i_0 - 3] [i_14] [i_14] [i_13])) : (var_5)));
                        arr_52 [i_0] [i_12] [i_13] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-7919)) ? (4394308821844858234LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)73)))));
                    }
                } 
            } 
        } 
        var_28 *= ((/* implicit */unsigned char) ((long long int) arr_0 [i_0 - 1]));
    }
    for (unsigned char i_15 = 1; i_15 < 17; i_15 += 3) 
    {
        arr_55 [i_15] [i_15] = ((/* implicit */unsigned int) arr_46 [i_15] [i_15] [i_15] [i_15]);
        arr_56 [i_15] = ((/* implicit */unsigned char) (+((-(12186969708990387444ULL)))));
    }
    /* LoopNest 2 */
    for (signed char i_16 = 3; i_16 < 20; i_16 += 3) 
    {
        for (unsigned char i_17 = 1; i_17 < 22; i_17 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_18 = 0; i_18 < 23; i_18 += 4) 
                {
                    var_29 = ((/* implicit */int) max((var_29), (var_5)));
                    arr_66 [i_16] [i_16] [i_16] = ((/* implicit */long long int) arr_65 [i_18] [i_18] [i_17 - 1] [16]);
                }
                arr_67 [i_16] [i_17] = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((arr_60 [i_16 + 2]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_16 - 1] [i_17 + 1])))))), ((signed char)127)));
                var_30 = ((/* implicit */unsigned int) (short)-17428);
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), ((+(-1067740891987448982LL)))));
    var_32 = ((/* implicit */unsigned short) var_16);
}
