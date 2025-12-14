/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144766
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
    var_11 &= ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */short) (-(((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [22LL]))) & (arr_5 [i_1] [i_0] [i_0]))))));
                var_12 = (+((+(arr_5 [i_1] [i_1 - 3] [i_1 - 3]))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(668459002)))))))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (short i_3 = 1; i_3 < 13; i_3 += 3) 
        {
            {
                var_14 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 0LL)) ? (236193158U) : (236193150U))))), (((/* implicit */unsigned int) -1153399344))));
                arr_11 [i_3] [i_2] [i_3] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_2 [i_3] [i_3])) || (((/* implicit */_Bool) var_6)))));
                /* LoopSeq 2 */
                for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */long long int) min((var_1), (((/* implicit */unsigned int) (short)-8663))))) - (((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1])) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) var_5)) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) (short)-8681))))))))));
                    var_16 = ((/* implicit */unsigned short) max((max(((~(var_9))), (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_3] [i_2]))) | (var_9))))), (((long long int) var_4))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 12; i_6 += 4) 
                        {
                            {
                                arr_20 [i_6 - 2] [i_5] [i_5] [i_5] [10] [10] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)31)) ? (var_5) : (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) (_Bool)1)))))));
                                var_17 &= ((/* implicit */int) ((arr_7 [i_2] [i_2]) > (((/* implicit */unsigned int) -1412363137))));
                                arr_21 [i_3] [(short)11] [i_3 + 1] [(short)11] [i_6] = ((/* implicit */_Bool) 2199023239168LL);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (((~(2898293949847434860ULL))) & (((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_13 [i_4] [3] [3])) >> (((/* implicit */int) arr_4 [i_4] [i_3] [i_2]))))))))))));
                }
                for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) -2923626549814946710LL);
                                var_20 = ((/* implicit */unsigned int) ((236193145U) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)-28))))))));
                                arr_31 [i_2] [i_3] [0ULL] [i_8] [i_3] = ((/* implicit */short) 2050349074);
                                arr_32 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)14558)) >= (((/* implicit */int) (_Bool)1))))) >> ((((~(1773462535))) + (1773462538)))));
                            }
                        } 
                    } 
                    arr_33 [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) > (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)8706)))) <= (arr_15 [i_2] [9] [i_3] [i_7] [i_7]))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        arr_36 [4U] [i_3] [i_7] [i_10] [i_3] = ((/* implicit */unsigned short) arr_2 [i_7] [i_2]);
                        var_21 = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_3 - 1] [i_3 - 1]))));
                    }
                    for (int i_11 = 0; i_11 < 14; i_11 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_4) : (((/* implicit */int) var_6))))) ? ((~(var_2))) : (((/* implicit */unsigned long long int) (~(arr_15 [i_2] [i_2] [i_7] [i_3 + 1] [i_3])))))))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-526808583) + (2147483647))) >> (((var_5) - (1579744111)))))) ? (((/* implicit */unsigned long long int) max((((arr_24 [13U] [i_7] [i_3] [i_2]) & (arr_24 [i_7] [i_7] [i_7] [i_7]))), (((/* implicit */long long int) arr_27 [i_3] [i_3] [0LL] [i_3] [(short)7]))))) : (max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-99)) + (2147483647))) << (((((((/* implicit */int) arr_2 [i_3 + 1] [i_2])) + (12820))) - (27)))))), ((~(var_2)))))));
                    }
                    for (int i_12 = 0; i_12 < 14; i_12 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */signed char) (((~(var_4))) > ((+(((/* implicit */int) arr_4 [i_3 - 1] [i_3 - 1] [i_3 + 1]))))));
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (+((~(((var_1) ^ (4116622910U))))))))));
                        var_26 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) ? (-2147483642) : (1773828356)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 14; i_14 += 1) 
                        {
                            {
                                arr_48 [0U] [i_3] [i_3] [i_3] [i_3] [i_13] [(signed char)6] = ((/* implicit */short) ((((/* implicit */_Bool) (((~(var_1))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65533)))))) ? (((/* implicit */long long int) ((arr_19 [7] [i_3 - 1] [7] [i_3 - 1] [i_14]) / (var_4)))) : (0LL)));
                                arr_49 [i_13] |= ((/* implicit */short) (!(((/* implicit */_Bool) min((((var_5) >> (((arr_3 [i_3]) - (14330975171788560464ULL))))), (((((/* implicit */_Bool) 1851330201)) ? (var_3) : (((/* implicit */int) arr_16 [i_2] [i_3] [i_7] [i_2] [i_7] [i_2])))))))));
                                arr_50 [i_3] = ((/* implicit */unsigned int) ((((((int) (~(((/* implicit */int) (short)8651))))) + (2147483647))) << (((((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_0)))))) - (1)))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (long long int i_15 = 2; i_15 < 11; i_15 += 4) 
                {
                    for (short i_16 = 0; i_16 < 14; i_16 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */short) ((((((/* implicit */int) (short)19533)) << (((arr_18 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_15 - 1] [i_15 + 2] [i_15 + 2] [i_15 - 1]) - (3286399903U))))) ^ (((((/* implicit */int) arr_28 [i_3 + 1] [i_3 + 1] [i_3 - 1])) | (1851330201)))));
                            var_28 = ((/* implicit */short) ((long long int) ((short) (_Bool)1)));
                            arr_57 [i_3] [(_Bool)1] [i_3] [i_2] [i_3] = ((/* implicit */long long int) max((((((536870911) > (((/* implicit */int) (short)6363)))) ? (2875764326U) : (4294967295U))), ((~(arr_5 [i_3 - 1] [i_3] [i_3 + 1])))));
                            var_29 = min(((~(var_9))), (min((((/* implicit */long long int) var_1)), (arr_24 [(_Bool)1] [6ULL] [i_15 + 2] [i_15]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) (~(var_3)))) : (((var_1) << (((var_4) - (703127458)))))))));
}
