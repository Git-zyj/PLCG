/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15077
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned char) var_4);
                var_13 |= ((/* implicit */signed char) min((((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)14)))) * (((/* implicit */int) ((unsigned char) (_Bool)1))))), (var_11)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((short) var_8)))));
                /* LoopSeq 2 */
                for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    var_15 = ((/* implicit */short) (signed char)-119);
                    var_16 = ((/* implicit */short) min(((((+(((/* implicit */int) var_9)))) == (((/* implicit */int) arr_11 [i_2 - 1] [i_3] [i_4])))), (((((((/* implicit */_Bool) (short)17610)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 - 2]))) : (36028797018963968LL))) == (arr_9 [i_4] [i_3] [i_3] [i_2 + 2])))));
                }
                /* vectorizable */
                for (short i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        for (long long int i_7 = 1; i_7 < 22; i_7 += 2) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_7] [i_7 - 1] [i_6] [i_7 + 1] [i_6])) < (((/* implicit */int) arr_15 [i_7] [i_7 + 1] [i_5] [i_7 + 1] [i_5]))));
                                var_18 = ((/* implicit */_Bool) arr_8 [i_5] [i_3] [i_2]);
                                arr_19 [i_7] [i_6] [i_5] [i_3] [i_7] = ((/* implicit */short) (signed char)5);
                            }
                        } 
                    } 
                    arr_20 [i_2 - 2] [i_2] [i_2] [i_2 - 1] = ((/* implicit */short) arr_15 [i_2] [i_2] [i_5] [i_3] [i_3]);
                    arr_21 [i_2 + 2] [i_2] [i_2] [i_2 - 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)146))) : (arr_8 [i_2 + 1] [i_3] [i_5])))) ? (((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2])) ? (arr_8 [i_2] [i_3] [i_5]) : (arr_7 [i_2] [i_2]))) : (arr_17 [i_5] [i_3]));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2]))) / (arr_7 [i_2] [i_2 - 1])));
                }
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) min(((+(min((((/* implicit */long long int) (signed char)-34)), (134217696LL))))), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-14)))))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((((arr_10 [i_2 - 1] [i_2 - 1] [i_2] [i_2]) & (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)10612))))))), ((-(arr_17 [i_2 + 1] [i_3]))))))));
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 23; i_9 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_2] [i_2])) && (((/* implicit */_Bool) 7245626608524484463LL))));
                        var_23 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) arr_12 [i_2] [i_2 + 2] [i_2 + 3])), (var_7))), (arr_14 [i_2] [i_8] [i_9])));
                        arr_26 [i_2] [i_2] [i_8] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_9] [i_8] [i_3] [i_3] [i_2])) - (((/* implicit */int) (_Bool)1))))) >= (min((-134217695LL), (((/* implicit */long long int) var_5))))))) >> (max((arr_12 [i_2 - 2] [i_2 + 2] [i_2 + 2]), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) >= (1847658043))))))));
                    }
                    for (int i_10 = 0; i_10 < 23; i_10 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */signed char) ((-134217695LL) | (134217696LL)));
                        var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)14)))) && (((/* implicit */_Bool) ((unsigned char) arr_18 [i_2 - 2])))));
                    }
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) min(((unsigned char)130), (((/* implicit */unsigned char) (signed char)-50))));
}
