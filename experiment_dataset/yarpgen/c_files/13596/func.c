/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13596
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
    var_17 |= ((/* implicit */unsigned int) (~(min((var_1), (((((/* implicit */_Bool) var_16)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(79224202)))) && (((/* implicit */_Bool) min((((/* implicit */int) var_12)), (1371026478)))))) ? (8582872656656230823ULL) : (((/* implicit */unsigned long long int) var_3)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */int) ((arr_5 [i_0] [i_0]) <= (arr_2 [i_0 - 2])));
                var_20 &= var_5;
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 4; i_2 < 18; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            arr_10 [i_2] [3] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_6 [i_2 - 2])) ? (((/* implicit */unsigned long long int) arr_8 [i_3] [i_2])) : (arr_7 [i_2]))), (((/* implicit */unsigned long long int) ((arr_8 [i_2] [i_3]) == (((/* implicit */int) (_Bool)1)))))));
            arr_11 [i_2 - 1] = ((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */unsigned int) var_2)) - (2698026914U))) <= (222647496U))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                for (int i_5 = 3; i_5 < 15; i_5 += 1) 
                {
                    {
                        arr_16 [i_2] [i_3] [i_4] [(signed char)4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((var_2) < (79224186)))), (max((var_7), (((/* implicit */long long int) 1876010107))))))) ? ((-((-(var_7))))) : (((/* implicit */long long int) (+(-79224210))))));
                        var_21 = var_1;
                    }
                } 
            } 
            arr_17 [i_2 + 1] = (-(((((/* implicit */unsigned int) arr_15 [6U] [i_2 - 4] [i_3] [i_2 - 3])) * (var_8))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                for (signed char i_8 = 3; i_8 < 18; i_8 += 4) 
                {
                    {
                        arr_25 [i_2] [7LL] [i_7] [i_8 - 3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2])) ? (arr_13 [18ULL] [i_6]) : (((int) ((var_3) ^ (var_8))))));
                        var_22 = ((/* implicit */unsigned int) ((int) ((int) ((((/* implicit */_Bool) 79224186)) ? (arr_6 [i_2 - 2]) : (((/* implicit */unsigned long long int) var_9))))));
                    }
                } 
            } 
            arr_26 [i_6] [i_6] [i_2] = ((/* implicit */int) arr_14 [i_6] [i_6] [i_6] [i_2 - 3] [i_6]);
            /* LoopSeq 3 */
            for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
            {
                var_23 = (+(((((((/* implicit */unsigned long long int) var_15)) % (arr_22 [i_2] [i_2 - 3] [i_2]))) << (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_2 - 1] [i_6]))) % (var_1))))));
                arr_30 [i_2] [i_9] [i_9] = ((((/* implicit */_Bool) arr_22 [i_9] [i_6] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((2813612556U) > (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) : (12795979435735332838ULL));
            }
            for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) arr_22 [i_2 - 1] [i_6] [i_10]))));
                arr_33 [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (((_Bool)1) || (((/* implicit */_Bool) arr_21 [i_10] [i_6] [i_6] [i_2])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1149471631)) ? (arr_9 [i_2] [i_6] [i_2 - 1]) : (arr_9 [i_2] [i_6] [i_2 - 2]))))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 2; i_11 < 15; i_11 += 3) 
                {
                    for (int i_12 = 1; i_12 < 18; i_12 += 1) 
                    {
                        {
                            arr_41 [i_12] [i_10] [i_10] [i_10] [i_2] = ((/* implicit */unsigned int) ((int) ((int) var_0)));
                            var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_18 [i_2])) ? (2147483647) : (arr_35 [i_2 - 3] [4] [i_2 - 1] [i_2])))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1876010107)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (signed char i_13 = 1; i_13 < 16; i_13 += 4) 
            {
                var_26 &= ((/* implicit */signed char) ((((/* implicit */_Bool) 79224202)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) arr_35 [i_2] [i_2] [i_2] [i_2])) : (1826504721U))))));
                arr_45 [i_13] [i_13 + 3] [17] [17] = ((/* implicit */unsigned int) arr_6 [i_6]);
            }
            var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_42 [i_6])) ? (((arr_22 [i_2] [i_2 - 2] [i_2]) + (((/* implicit */unsigned long long int) 662551874)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_14) > (((/* implicit */long long int) var_4)))))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 79224188)) ? ((-(var_8))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)47582))))))))));
            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) 2957889934U))));
        }
        /* LoopNest 3 */
        for (unsigned int i_14 = 1; i_14 < 18; i_14 += 2) 
        {
            for (int i_15 = 1; i_15 < 18; i_15 += 1) 
            {
                for (long long int i_16 = 2; i_16 < 16; i_16 += 2) 
                {
                    {
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-6)) ? ((-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_16))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_2] [i_2] [i_2 - 2])) % ((+(((/* implicit */int) arr_52 [i_2] [i_15] [i_14] [i_2])))))))));
                        var_30 = ((/* implicit */int) ((((unsigned int) ((var_14) / (((/* implicit */long long int) var_9))))) - (((/* implicit */unsigned int) (-((+(arr_50 [i_2] [i_14 + 1] [i_15 + 1] [i_16] [i_16]))))))));
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((((/* implicit */_Bool) max((15028155989249159845ULL), (var_13)))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_2]))))))))));
        var_32 = ((/* implicit */int) (signed char)-12);
        arr_54 [i_2] = ((/* implicit */long long int) (signed char)7);
    }
    var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned int) var_15))))))))));
}
