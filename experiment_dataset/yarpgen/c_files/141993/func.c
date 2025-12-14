/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141993
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
    for (long long int i_0 = 3; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */int) arr_0 [i_0 + 2] [i_0]);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_12 = ((/* implicit */long long int) arr_5 [10LL] [13] [13]);
                        arr_9 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (((~(1563275289082090205LL))) & (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_6 [i_0])) ^ (arr_0 [i_0] [i_0]))))))) ? (var_2) : (((/* implicit */unsigned int) (~((~(var_7))))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            var_13 = ((/* implicit */unsigned int) arr_12 [10LL] [i_1] [10LL] [i_1] [12LL] [i_2] [i_0]);
                            var_14 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [22] [i_4] [12] [8U])) ? (2LL) : (((/* implicit */long long int) 504716544U))))) ? (arr_2 [i_0] [i_0]) : ((~(arr_8 [6] [i_0] [6])))))), (max(((-(arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) arr_6 [i_0]))))));
                            arr_13 [7U] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) 3931388254U)), (-2LL)))) ? (((((/* implicit */_Bool) 2448288070U)) ? (var_2) : (((/* implicit */unsigned int) arr_5 [0] [10LL] [i_2])))) : (((/* implicit */unsigned int) ((arr_3 [i_4] [i_3]) / (arr_5 [i_0] [i_0] [i_0])))))) > (((503316480U) * (93687257U)))));
                        }
                        var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [9LL] [9LL])) ? (((/* implicit */unsigned int) arr_6 [16LL])) : (arr_0 [i_0] [i_3])))), ((+(arr_11 [i_0] [i_1] [i_2] [i_3] [i_2])))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_6 [i_0])), (-7073963864018946411LL)))) ? (((var_1) | (((/* implicit */unsigned int) arr_5 [i_1] [12] [12])))) : (max((504716556U), (1501064250U))))) : ((~(max((arr_0 [i_3] [i_3]), (var_8)))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */int) arr_12 [i_0] [i_0] [4U] [i_0] [i_0] [22] [i_0]);
        /* LoopNest 3 */
        for (unsigned int i_5 = 1; i_5 < 22; i_5 += 1) 
        {
            for (unsigned int i_6 = 3; i_6 < 21; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) max((arr_12 [19] [19] [i_5] [19] [19] [19] [i_0]), (((/* implicit */long long int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_15 [20U])) ? (((/* implicit */unsigned int) arr_7 [22LL] [16] [i_0] [i_0] [i_0])) : (351487148U))) : (((/* implicit */unsigned int) (+(-410751908))))))));
                        var_17 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_6] [5LL])), (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_18 [i_0]) > (-1838688137))))) : (arr_19 [i_0] [i_0] [i_0] [9] [10U])))));
                        arr_22 [i_5] [i_0] [i_5] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_17 [0] [i_0] [i_6])) : (-3937471480597960436LL)))))) ? (((((/* implicit */long long int) arr_0 [i_0 + 3] [i_0])) - (arr_20 [i_6 - 3] [19LL] [i_6 - 1] [i_0]))) : (((/* implicit */long long int) -1617694119))));
                        arr_23 [18] [i_0] [i_0] [18] = ((/* implicit */unsigned int) arr_3 [i_5] [6]);
                        var_18 = ((((((/* implicit */_Bool) max((arr_18 [i_0]), (arr_1 [i_5] [18LL])))) ? (((((/* implicit */_Bool) arr_14 [22LL] [i_7])) ? (var_0) : (((/* implicit */unsigned int) arr_6 [i_5])))) : (max((((/* implicit */unsigned int) arr_6 [i_0])), (4201280031U))))) | (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [8U] [i_5])) || (((/* implicit */_Bool) var_0)))))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_8 = 3; i_8 < 20; i_8 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            for (unsigned int i_10 = 0; i_10 < 23; i_10 += 1) 
            {
                {
                    arr_30 [i_10] [i_8] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_8)) == (max((arr_11 [7] [i_9] [i_9] [i_9] [i_8]), (((/* implicit */long long int) arr_14 [i_8] [i_10])))))))) : ((~(arr_25 [i_8 - 3] [i_8 + 1])))));
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -430306285)) ? (-1262817246270643041LL) : (((/* implicit */long long int) 3790250770U))))) ? (((/* implicit */unsigned int) -1953915346)) : ((-(2943363241U)))))) ? (5U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1809634249U)) ? (-1803546716) : (-1067299926))))));
                        arr_34 [i_10] [8LL] [7LL] = max((((((/* implicit */_Bool) (~(2147483648U)))) ? (((/* implicit */long long int) (-(-1325118664)))) : (((((/* implicit */long long int) var_0)) / (8742202122818210399LL))))), (((long long int) (+(var_1)))));
                        var_20 = ((((/* implicit */_Bool) 3577764980U)) ? (((((/* implicit */_Bool) arr_1 [i_11] [i_8 - 3])) ? (arr_1 [i_8] [i_8]) : (-536870912))) : (var_7));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_12 = 0; i_12 < 23; i_12 += 3) 
        {
            for (unsigned int i_13 = 0; i_13 < 23; i_13 += 2) 
            {
                for (unsigned int i_14 = 0; i_14 < 23; i_14 += 1) 
                {
                    {
                        var_21 = arr_8 [6U] [i_13] [6U];
                        /* LoopSeq 2 */
                        for (int i_15 = 1; i_15 < 21; i_15 += 1) 
                        {
                            var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2883140624U)) ? (3113510987U) : (((/* implicit */unsigned int) 2147483647))))) ? (((((/* implicit */_Bool) -4002790671027589257LL)) ? (-7LL) : (((/* implicit */long long int) 4294967295U)))) : (((/* implicit */long long int) 2011158235)));
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) min((1092701410274531706LL), (-4611686018427387904LL)))) ? (min((((/* implicit */long long int) max((arr_18 [i_8]), (var_7)))), (var_10))) : (((/* implicit */long long int) min(((+(16777215U))), (var_0)))))))));
                            arr_45 [i_15] [i_12] [i_12] [7LL] = ((/* implicit */int) ((((arr_8 [i_8 + 3] [i_15] [i_8 - 1]) << (((((long long int) arr_42 [i_8] [18] [15LL] [3] [i_8] [i_15] [i_15])) - (1349628575LL))))) <= ((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) 1104440800)) : (var_2)))))));
                            arr_46 [i_15] [13U] [6] [i_15] = max(((+(((long long int) 1886178765U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_8] [i_8] [i_8 + 3] [i_8] [i_15] [i_8] [i_8])) || (((/* implicit */_Bool) arr_43 [18LL] [17U] [i_15] [i_12] [i_15] [i_12] [i_8]))))));
                            var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                        }
                        for (int i_16 = 0; i_16 < 23; i_16 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(arr_29 [1LL]))) | (((/* implicit */unsigned int) arr_18 [i_8 - 3]))))) || (((/* implicit */_Bool) (~(max((var_2), (var_2))))))));
                            var_26 += max((4294967295U), (1647681418U));
                            arr_49 [i_16] [18LL] [i_14] [i_13] [9U] [i_8] [i_8] = ((((((/* implicit */long long int) arr_14 [i_8] [i_8])) >= (arr_20 [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_13]))) ? (arr_4 [i_13] [i_16]) : (((((((/* implicit */_Bool) arr_26 [i_13] [19U] [i_13])) ? (((/* implicit */unsigned int) var_9)) : (arr_28 [i_16] [i_13] [3LL] [3LL]))) ^ (((/* implicit */unsigned int) var_7)))));
                        }
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */long long int) (-(((((((/* implicit */_Bool) arr_39 [i_8] [i_8])) ? (var_2) : (((/* implicit */unsigned int) arr_40 [i_8] [5U] [5U] [5U] [5U])))) - (max((arr_39 [i_8] [i_8]), (((/* implicit */unsigned int) arr_18 [i_8]))))))));
    }
    for (long long int i_17 = 3; i_17 < 20; i_17 += 2) /* same iter space */
    {
        var_28 += (((+(min((arr_8 [i_17] [12U] [i_17]), (arr_43 [i_17] [i_17] [i_17] [i_17] [4U] [i_17] [i_17]))))) * (((/* implicit */unsigned int) (-(arr_14 [i_17] [i_17])))));
        var_29 = (+(((long long int) var_0)));
    }
    var_30 = ((/* implicit */long long int) var_1);
}
