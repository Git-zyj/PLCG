/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167415
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)2047)) / (((/* implicit */int) var_6))))) ? (arr_1 [i_0 + 1] [i_0]) : (((/* implicit */unsigned int) -1936695160))));
        arr_3 [i_0] = ((short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned char)247))))) ? (((/* implicit */int) ((short) arr_1 [i_0] [i_0]))) : (((/* implicit */int) ((short) (short)7)))));
        arr_4 [i_0] = ((/* implicit */short) max(((-(min((-7140820652721297706LL), (((/* implicit */long long int) var_11)))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)17372)))) / (arr_1 [i_0 + 1] [i_0 - 1]))))));
        arr_5 [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)232)))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (unsigned char i_3 = 2; i_3 < 11; i_3 += 1) 
            {
                {
                    arr_15 [i_1] [i_2] [i_2] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_3]))));
                    arr_16 [i_2] = ((/* implicit */unsigned char) var_9);
                }
            } 
        } 
        var_14 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
    }
    for (long long int i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) (-(((/* implicit */int) (short)-22))))) | (max((((/* implicit */long long int) (_Bool)1)), (3145792916192752486LL)))))));
        var_16 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_4] [i_4]))))))))));
    }
    for (long long int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) ((short) arr_17 [i_5]));
        arr_22 [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)48))));
    }
    /* LoopSeq 1 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((((((var_11) > (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_6] [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_6])))))) : (((var_7) << (((2497587107556864299ULL) - (2497587107556864279ULL))))))) / (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_4)) ? (1768678903U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_6])) / (((/* implicit */int) var_8)))))))));
        arr_26 [i_6] = ((/* implicit */long long int) ((unsigned int) ((unsigned char) arr_21 [i_6] [i_6])));
        arr_27 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (~(arr_1 [i_6] [i_6]))))) ? ((-(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)5722)) : (((/* implicit */int) (unsigned char)44)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-26677)) / (((/* implicit */int) var_5))))))))));
        arr_28 [i_6] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_25 [i_6]))) >= ((-(((/* implicit */int) arr_18 [i_6]))))))), (min((9223372036854775807LL), (((/* implicit */long long int) (short)-28620))))));
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_29 [i_6] [i_6] [i_7]))));
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), ((short)785)))))))));
            var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_23 [i_6] [i_6]))));
            var_22 *= ((/* implicit */_Bool) (-((~(((/* implicit */int) (short)480))))));
            arr_31 [i_7] = ((/* implicit */int) (((~((~(8589934591LL))))) >= (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_17 [i_6])) : (((/* implicit */int) arr_18 [i_7])))) - (((/* implicit */int) var_12)))))));
        }
        for (short i_8 = 0; i_8 < 14; i_8 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    for (long long int i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) arr_36 [i_11] [i_9] [i_8])))));
                            arr_42 [i_6] [i_8] [i_9] = ((/* implicit */unsigned char) var_11);
                            arr_43 [i_6] [i_6] [i_8] [i_9] [i_9] [i_10] [i_11] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) min((arr_17 [i_11]), (((/* implicit */unsigned char) (signed char)-68))))) <= (((((/* implicit */_Bool) arr_1 [i_6] [i_11])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_40 [i_6] [i_8] [i_9] [i_10] [i_11])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 14; i_12 += 1) 
                {
                    for (short i_13 = 2; i_13 < 11; i_13 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) arr_32 [i_6] [i_8]);
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_20 [i_6]))) ? ((-(((/* implicit */int) ((short) var_7))))) : (((/* implicit */int) var_12))));
                            var_26 = ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_12] [i_9] [i_8] [i_6])) ? (((/* implicit */long long int) arr_48 [i_6] [i_6] [i_6] [i_6])) : (4574114704385524852LL)))) ? (((/* implicit */int) max(((short)26478), (((/* implicit */short) arr_21 [i_13] [i_8]))))) : (((/* implicit */int) var_10))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((_Bool) (short)-22452)) ? (((/* implicit */int) (!(((((/* implicit */int) arr_24 [i_8])) >= (((/* implicit */int) arr_24 [i_6]))))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)7)) : (1558989815))))))))));
            }
            var_28 = ((/* implicit */unsigned int) (!((!(((var_11) != (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
            var_29 -= ((/* implicit */short) (_Bool)1);
        }
    }
}
