/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123430
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
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */short) arr_1 [i_0]);
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (unsigned int i_3 = 3; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] = var_1;
                        /* LoopSeq 2 */
                        for (long long int i_4 = 2; i_4 < 15; i_4 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) ^ ((-((-(((/* implicit */int) (_Bool)1))))))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) arr_8 [i_0] [i_0 - 2]))))))));
                            arr_15 [i_4] [i_4] [i_2] [i_4] [i_0] = arr_1 [i_2];
                            var_21 -= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 1085608392U)) && (((/* implicit */_Bool) var_7))))) != (((/* implicit */int) (unsigned short)5799))))) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && ((_Bool)1))))))));
                            var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (min((arr_9 [i_1] [i_4]), (((/* implicit */int) var_5))))))) ? (arr_9 [i_2] [i_4]) : ((-(((/* implicit */int) (signed char)72))))));
                        }
                        for (long long int i_5 = 2; i_5 < 15; i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_1] [i_1] = max((((/* implicit */long long int) arr_16 [i_0] [i_1] [i_2] [i_3] [i_5])), (arr_3 [i_1]));
                            arr_19 [i_1] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */signed char) arr_17 [i_5] [i_3] [i_2] [i_1] [i_0]);
                            var_23 = ((/* implicit */_Bool) ((unsigned long long int) (~(1265751550U))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 2; i_6 < 12; i_6 += 1) 
                        {
                            var_24 |= arr_0 [i_0];
                            arr_22 [i_0] [i_0] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */long long int) arr_2 [i_0] [i_1]);
                            arr_23 [i_6] [i_3] [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_0 - 3] [i_1 + 2] [i_3 + 4] [i_6 + 4]))))), (max((((/* implicit */long long int) ((((((/* implicit */int) (signed char)-108)) + (2147483647))) >> (((arr_14 [i_2] [i_6]) - (197696392597082028LL)))))), (min((((/* implicit */long long int) (signed char)9)), (arr_3 [i_0])))))));
                            arr_24 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)23))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) var_15)) ^ (var_17)))))), (((((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((long long int) arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))));
                            arr_25 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0 + 2] [i_6]))))) || (((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0]))));
                        }
                        for (int i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            arr_28 [i_3] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_7))))) ? (var_18) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (arr_8 [i_0] [i_1])))))), (((/* implicit */long long int) min((min((var_13), (((/* implicit */unsigned short) var_12)))), (((/* implicit */unsigned short) max((var_10), (var_12)))))))));
                            arr_29 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1 + 2] [i_3 - 3])) ? (4371945228349105020LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14948)))))) ? (((((/* implicit */unsigned long long int) arr_8 [i_1 + 2] [i_0 + 2])) * (10766900560180849223ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))))))));
                            var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_14 [i_1] [i_0])) > (min(((~(var_0))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10)))))))));
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_7] = ((/* implicit */_Bool) (unsigned short)63768);
                            var_26 = (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                        }
                        var_27 = ((/* implicit */long long int) max((var_27), (((((/* implicit */long long int) ((min((((/* implicit */int) (signed char)108)), (var_11))) + (((/* implicit */int) ((_Bool) -1963735510)))))) + (((-1995060019955910833LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30639)))))))));
                    }
                } 
            } 
            arr_31 [i_0] [i_1] [i_1] = (signed char)-10;
        }
        for (short i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            var_28 -= ((((((/* implicit */int) var_16)) / (((/* implicit */int) ((_Bool) arr_14 [i_0] [i_8]))))) / (((/* implicit */int) var_8)));
            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (~(var_0))))));
            arr_34 [i_8] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) != (2537633299U)));
        }
        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((_Bool) (unsigned short)61961)))));
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
    {
        arr_37 [i_9] = ((/* implicit */_Bool) ((arr_35 [i_9]) ? (((/* implicit */int) arr_35 [i_9])) : (((/* implicit */int) arr_35 [i_9]))));
        var_31 ^= ((/* implicit */unsigned long long int) 309763025U);
        arr_38 [i_9] = ((/* implicit */long long int) var_2);
    }
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) 
    {
        var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_10] [i_10]))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_10]))) ^ (arr_13 [i_10] [i_10] [i_10] [i_10] [(unsigned short)4])))));
        arr_42 [i_10] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_26 [i_10] [i_10] [i_10] [i_10] [i_10]))));
    }
    var_33 -= ((/* implicit */signed char) ((var_12) ? (((/* implicit */int) var_5)) : (((var_10) ? (((/* implicit */int) var_5)) : (min((var_11), (((/* implicit */int) var_9))))))));
    var_34 = ((int) ((unsigned short) max((var_14), (var_14))));
}
