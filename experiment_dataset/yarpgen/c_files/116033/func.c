/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116033
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
    for (short i_0 = 2; i_0 < 12; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_17 = ((/* implicit */signed char) ((-2018730877585646790LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-117)))));
                        var_18 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1] [7]))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_4 = 2; i_4 < 12; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) min((arr_23 [(short)11] [i_4] [(short)8] [i_6] [i_5]), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)189)) % (-942623158))) / ((~(((/* implicit */int) arr_7 [i_6] [i_6])))))))));
                            var_19 = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) arr_15 [i_4 - 1] [i_0 + 1])))) + (2147483647))) << ((((((-(((/* implicit */int) (unsigned char)179)))) + (185))) - (6)))));
                            arr_26 [i_6] [i_7 - 1] = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0 - 1])), (((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_5] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30963))) : (arr_1 [i_5]))))), (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_7)))), (((/* implicit */int) (short)30943)))))));
                            var_20 = (+(min((max((((/* implicit */long long int) arr_6 [1LL] [i_4] [i_4])), (-2018730877585646794LL))), (((long long int) arr_19 [i_4] [i_4] [i_4] [i_0])))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))) & (max((arr_5 [i_5] [i_7]), (((/* implicit */unsigned long long int) var_9))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_9 [i_4] [i_7])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 7520425169913700035ULL)))))));
                        }
                        for (long long int i_8 = 4; i_8 < 10; i_8 += 2) 
                        {
                            arr_29 [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_16 [i_8 - 4])) ? (((/* implicit */unsigned long long int) 2018730877585646794LL)) : (7520425169913700011ULL)))))) ? (min((((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_8] [i_0] [i_8])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))), ((-(((/* implicit */int) var_14)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_5] [i_4] [i_4]))))))))));
                            var_22 = (+(((((/* implicit */_Bool) arr_14 [i_0 - 1])) ? (arr_14 [i_0 - 2]) : (arr_14 [i_0 - 1]))));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) -7796128658014100021LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [(unsigned char)8] [i_5])) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24251))) * (var_13)))))))) : (max((((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_8] [i_6] [i_6] [i_6] [i_5] [i_4] [i_0])) * (((/* implicit */int) (unsigned short)35427))))), (((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0 - 1] [i_0]))) & (2018730877585646790LL))))))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */signed char) var_9);
                            arr_32 [i_0] [i_4 - 2] [i_5] [i_4 - 2] [i_6] [i_9] [i_4] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) min((arr_18 [i_5] [i_5] [i_9]), (((/* implicit */int) (unsigned char)113))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)72))))) : (((/* implicit */int) (short)30943))))));
                        }
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_5] [i_4 - 1] [i_0 - 1])) + (((/* implicit */int) arr_13 [i_6] [i_4 - 1] [i_0 - 1]))));
                        var_26 &= ((/* implicit */int) (!(((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (signed char)-51)), (4149663390402816502ULL))), (((/* implicit */unsigned long long int) min((arr_8 [i_5] [(unsigned short)11] [i_0]), ((unsigned char)128)))))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) <= ((+(((((/* implicit */int) (unsigned char)94)) - (((/* implicit */int) (short)-30979))))))));
    }
    /* vectorizable */
    for (short i_10 = 2; i_10 < 12; i_10 += 2) /* same iter space */
    {
        arr_35 [i_10 - 1] = ((/* implicit */_Bool) arr_13 [i_10] [i_10] [i_10]);
        arr_36 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_10 - 2])) ? ((+(-2018730877585646791LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_12)) - (var_3))))));
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30943))) | (var_13)))) ? (((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */int) (unsigned char)195)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_30 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1]))));
        /* LoopNest 2 */
        for (long long int i_11 = 1; i_11 < 10; i_11 += 1) 
        {
            for (int i_12 = 0; i_12 < 13; i_12 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned char) arr_37 [i_11]);
                        var_30 = ((/* implicit */signed char) ((unsigned short) (short)30943));
                        /* LoopSeq 1 */
                        for (unsigned char i_14 = 0; i_14 < 13; i_14 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2018730877585646790LL)))))));
                            arr_48 [i_14] [i_11] [i_11] [i_11] [i_10 - 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_10] [i_10] [i_14]))));
                        }
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (long long int i_16 = 0; i_16 < 13; i_16 += 1) 
                        {
                            var_32 = ((/* implicit */signed char) arr_10 [i_11] [i_11 + 3] [i_11 + 3] [i_15] [i_16]);
                            var_33 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_10] [i_11] [i_11] [i_15] [i_11] [9LL] [i_15]))) : (var_11))));
                            var_34 = ((/* implicit */short) ((arr_43 [i_10] [i_10] [i_10 - 1] [i_11 + 3] [(unsigned char)6]) / (arr_43 [i_10] [i_10] [i_10 - 1] [i_11 + 3] [i_11])));
                        }
                        for (signed char i_17 = 1; i_17 < 12; i_17 += 2) /* same iter space */
                        {
                            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((-(-4949584088784092778LL)))));
                            var_36 = ((/* implicit */unsigned long long int) ((-2018730877585646790LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)55)))));
                        }
                        for (signed char i_18 = 1; i_18 < 12; i_18 += 2) /* same iter space */
                        {
                            var_37 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) var_4)) - (64))))))));
                            var_38 *= ((/* implicit */unsigned char) -4906749329959844176LL);
                        }
                        arr_62 [i_10] [i_10] [i_11] [i_10] [i_10] = ((((/* implicit */_Bool) arr_19 [i_10 + 1] [i_11 + 3] [i_11 + 1] [i_11 + 1])) ? (((/* implicit */unsigned long long int) (~(arr_46 [i_10] [(signed char)8] [i_12])))) : (var_11));
                    }
                    var_39 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_10 - 1] [i_11])) ? (arr_14 [i_10]) : ((+(((/* implicit */int) (signed char)99))))));
                    var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((unsigned char) arr_61 [i_11 + 1] [i_12] [i_12] [i_12] [i_12])))));
                    var_41 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_11] [i_11] [i_10]))) > ((~(4949584088784092777LL)))));
                }
            } 
        } 
    }
    for (short i_19 = 2; i_19 < 12; i_19 += 2) /* same iter space */
    {
        arr_65 [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14297080683306735094ULL)) || (((/* implicit */_Bool) (short)30945))));
        var_42 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) ((2018730877585646779LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-71)))))), (min((((/* implicit */unsigned short) arr_41 [i_19] [i_19] [i_19] [i_19])), (var_9))))))));
    }
    for (short i_20 = 2; i_20 < 12; i_20 += 2) /* same iter space */
    {
        arr_69 [(short)0] = ((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) var_14)))));
        var_43 = ((/* implicit */long long int) (~(((((/* implicit */int) arr_61 [i_20 - 1] [i_20 - 2] [i_20 + 1] [i_20 - 2] [i_20])) - (((/* implicit */int) arr_61 [i_20 - 2] [i_20 + 1] [i_20 - 2] [i_20 + 1] [i_20]))))));
        /* LoopNest 2 */
        for (signed char i_21 = 0; i_21 < 13; i_21 += 2) 
        {
            for (signed char i_22 = 1; i_22 < 12; i_22 += 4) 
            {
                {
                    arr_75 [i_20] [i_20 + 1] [1ULL] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */short) ((unsigned char) var_6))), (max((arr_4 [i_20] [i_20] [i_20 - 2]), (((/* implicit */short) arr_9 [i_21] [i_21]))))))) >> (((((/* implicit */int) arr_71 [(signed char)10])) >> (((((((/* implicit */long long int) ((/* implicit */int) (short)-30942))) | (-2018730877585646795LL))) + (24798LL)))))));
                    var_44 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) max((arr_51 [i_20] [i_20] [i_22]), (16146660046154568005ULL))))) % (((((((/* implicit */_Bool) (short)-30948)) ? (((/* implicit */int) arr_21 [i_20] [i_20] [i_20])) : (((/* implicit */int) arr_21 [i_20] [i_21] [i_22])))) % ((+(((/* implicit */int) arr_73 [i_21] [i_22 - 1]))))))));
                }
            } 
        } 
    }
    var_45 = ((/* implicit */signed char) (~(min((max((var_13), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16)))))))));
}
