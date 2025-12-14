/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180324
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
    for (signed char i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        {
                            arr_14 [i_2] [i_1] = ((/* implicit */unsigned char) var_9);
                            arr_15 [i_1] [i_3] [i_3] [i_3] [i_3] [i_1] = ((/* implicit */long long int) arr_13 [i_0] [i_0]);
                            var_15 = ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 + 4] [i_0]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_5 = 3; i_5 < 19; i_5 += 3) 
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7025429172816136738LL)) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) ((unsigned char) -4488241367259768906LL)))));
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_2] [i_5]))));
                    arr_18 [i_5] [i_2] [i_1] [i_1] = arr_16 [i_0] [i_2];
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_5])) ? (((/* implicit */long long int) var_8)) : (-5207977332615800161LL)));
                }
            }
            for (short i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        {
                            arr_25 [i_0] [i_1] [i_6] [i_7] [i_1] [i_1] = ((/* implicit */unsigned char) (~(arr_9 [i_0 - 3] [i_1 + 1] [i_8] [i_1 + 1])));
                            var_19 = ((/* implicit */signed char) arr_6 [i_0 - 2] [i_0 - 1] [i_1 + 1] [i_7]);
                            var_20 = ((/* implicit */int) ((short) arr_17 [i_0 - 2]));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 7025429172816136750LL)) ? (((((/* implicit */_Bool) (short)11314)) ? (3458764513820540928ULL) : (((/* implicit */unsigned long long int) 1995811062401682282LL)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)6)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_13))));
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) arr_22 [i_0 + 2] [i_0] [i_0 + 2] [i_0]))));
                }
                arr_29 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (unsigned short)31523);
                arr_30 [i_0 - 2] [i_1] [i_0 - 2] = ((/* implicit */unsigned int) arr_24 [i_1]);
            }
            for (long long int i_10 = 1; i_10 < 20; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (long long int i_12 = 1; i_12 < 22; i_12 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) arr_1 [i_10] [i_12]))));
                            var_25 = ((/* implicit */long long int) arr_28 [i_1 - 1] [i_0 - 2]);
                        }
                    } 
                } 
                arr_41 [i_0] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 8385044256892774639LL)) && (((/* implicit */_Bool) (signed char)0)))))));
            }
            arr_42 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_1 + 1])) ? (arr_33 [i_1] [i_1] [i_1] [i_1]) : (arr_33 [i_1] [i_1] [i_1] [i_1])));
            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)63880)))))));
            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) -1))));
        }
        var_28 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) -1846650159)))) && (((/* implicit */_Bool) ((1044480) >> (((var_2) - (4106871900U))))))));
        arr_43 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_0] [i_0 + 4] [i_0 + 4] [i_0] [i_0])) + (((/* implicit */int) (short)23709))));
        var_29 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1792)))))) >= (773748440U)));
        var_30 = ((/* implicit */int) ((((unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)45153)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 - 1] [i_0]))))))));
    }
    for (long long int i_13 = 2; i_13 < 19; i_13 += 3) 
    {
        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((((/* implicit */unsigned int) (~(((/* implicit */int) (short)24527))))) + (2732075127U))) << ((+(max((((/* implicit */int) arr_40 [i_13] [i_13])), (arr_38 [i_13] [2] [i_13] [2] [i_13]))))))))));
        /* LoopNest 2 */
        for (unsigned int i_14 = 0; i_14 < 20; i_14 += 1) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    var_32 += ((/* implicit */long long int) arr_50 [i_14]);
                    var_33 += ((/* implicit */signed char) min((arr_8 [i_13 + 1] [i_13] [i_13] [i_13 - 1]), (max((arr_8 [i_13] [i_13] [i_13] [i_13 + 1]), (arr_8 [i_13] [i_13] [i_13] [i_13 - 2])))));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        for (int i_17 = 0; i_17 < 20; i_17 += 3) 
                        {
                            {
                                arr_62 [i_13] [i_14] [i_13] [i_13] [i_17] = ((/* implicit */_Bool) (unsigned short)50607);
                                var_34 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117))) > (9160045057976122105ULL))))) : (((6674704182020260954ULL) << (((((/* implicit */int) arr_11 [i_13 + 1] [i_13 - 2] [i_13] [i_13 + 1] [i_13 + 1] [i_13 - 2] [i_13 - 2])) - (60608)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_63 [i_13] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (max((((/* implicit */long long int) var_2)), (8385044256892774639LL))))))));
        arr_64 [i_13] [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))));
    }
    for (int i_18 = 0; i_18 < 22; i_18 += 4) 
    {
        arr_67 [i_18] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+((+(((/* implicit */int) (_Bool)1))))))), ((-(min((3521218875U), (((/* implicit */unsigned int) (_Bool)1))))))));
        var_35 &= ((/* implicit */long long int) arr_8 [i_18] [i_18] [i_18] [i_18]);
        /* LoopNest 3 */
        for (long long int i_19 = 0; i_19 < 22; i_19 += 2) 
        {
            for (long long int i_20 = 2; i_20 < 18; i_20 += 1) 
            {
                for (long long int i_21 = 0; i_21 < 22; i_21 += 1) 
                {
                    {
                        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) (~(((unsigned long long int) var_1)))))));
                        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((int) ((((_Bool) 8ULL)) ? ((+(((/* implicit */int) arr_2 [i_18] [i_19] [i_20])))) : (((/* implicit */int) arr_12 [i_18] [i_19] [i_20] [i_19] [i_19] [i_20]))))))));
                        var_38 &= ((/* implicit */int) ((long long int) ((_Bool) -7589071156540163907LL)));
                        var_39 = ((/* implicit */int) arr_39 [i_18] [i_19] [i_18] [i_20] [i_18] [i_21]);
                    }
                } 
            } 
        } 
    }
    var_40 = ((/* implicit */short) (unsigned char)2);
}
