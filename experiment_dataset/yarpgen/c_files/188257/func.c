/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188257
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) 4793580919883010207LL))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) min((arr_1 [i_2]), (((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */signed char) arr_0 [i_0] [i_2])), (var_3))))))))))));
                    arr_9 [i_0] = ((/* implicit */signed char) ((short) (+(((/* implicit */int) arr_0 [i_2] [i_1])))));
                }
            } 
        } 
        var_14 = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]);
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))) * (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) (unsigned char)189))))) < (arr_1 [i_0]))))));
        var_15 = ((/* implicit */unsigned short) (unsigned char)65);
        /* LoopSeq 2 */
        for (unsigned short i_3 = 2; i_3 < 24; i_3 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_4 = 2; i_4 < 23; i_4 += 2) 
            {
                for (unsigned short i_5 = 3; i_5 < 23; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */int) arr_2 [i_3] [i_5]))))) ? (((/* implicit */int) arr_2 [i_3] [i_5])) : ((-(((/* implicit */int) arr_2 [i_6] [i_5])))))))));
                            var_17 = ((/* implicit */int) min((((/* implicit */long long int) ((max((var_4), (((/* implicit */int) arr_5 [i_6] [i_0] [i_3])))) << (((((/* implicit */int) var_6)) - (41553)))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) var_3))))), (-4793580919883010207LL)))));
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (+(((int) (!(((/* implicit */_Bool) var_1))))))))));
                            var_19 = ((/* implicit */signed char) ((int) 1048448));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned char) ((unsigned short) arr_12 [i_0] [i_3] [i_0]));
            arr_24 [i_0] [i_0] = ((/* implicit */_Bool) (-(arr_1 [i_0])));
        }
        for (long long int i_7 = 1; i_7 < 23; i_7 += 4) 
        {
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (+(2463533071U))))));
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (-(((/* implicit */int) var_0)))))));
            /* LoopSeq 1 */
            for (int i_8 = 0; i_8 < 25; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 3; i_10 < 24; i_10 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((unsigned long long int) 2417283185264113084ULL))))) ? (((/* implicit */int) arr_7 [i_0] [i_7] [i_7])) : (((/* implicit */int) (short)-24358))));
                            var_24 = ((/* implicit */_Bool) (short)-19127);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_11 = 2; i_11 < 23; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((/* implicit */long long int) (~(var_4)))) : (arr_40 [i_8] [i_11])))) ? ((~(min((arr_12 [i_0] [i_7] [i_11]), (((/* implicit */int) arr_15 [i_0] [i_11])))))) : (2147483647))))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((var_8) * (min((4793580919883010227LL), (((/* implicit */long long int) arr_41 [i_11] [i_11])))))))));
                            var_27 = ((/* implicit */_Bool) arr_27 [i_0] [i_0]);
                            var_28 = min((((unsigned int) arr_29 [i_11 + 2] [i_11 - 1] [i_11] [i_11 + 2])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_11 + 1] [i_11 + 1] [i_11] [i_11 - 1])) ? (((/* implicit */int) arr_29 [i_11 + 1] [i_11 - 1] [i_11] [i_11 + 1])) : (((/* implicit */int) var_6))))));
                        }
                    } 
                } 
            }
            var_29 = ((/* implicit */signed char) (((~(((/* implicit */int) (short)-24384)))) ^ (((arr_41 [i_0] [i_0]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 25; i_13 += 3) 
            {
                for (long long int i_14 = 1; i_14 < 23; i_14 += 1) 
                {
                    for (unsigned char i_15 = 0; i_15 < 25; i_15 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) arr_21 [i_0] [i_7] [i_15] [i_14] [i_15]))));
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_15])) * (((/* implicit */int) var_10))))) * (arr_33 [i_0] [i_7] [i_13] [i_14] [i_15]))))))));
                        }
                    } 
                } 
            } 
        }
    }
}
