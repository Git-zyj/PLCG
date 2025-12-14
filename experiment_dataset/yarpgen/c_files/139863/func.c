/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139863
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
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) ((signed char) arr_3 [i_0] [i_1]));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_9))))))) ? (((/* implicit */int) ((arr_1 [i_2 + 1] [i_0]) && (((((/* implicit */_Bool) 7948581785001387379LL)) && (((/* implicit */_Bool) var_6))))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10))))))));
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_3 [i_0 + 2] [i_2 - 1]))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [7LL] [i_3]))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                {
                    var_19 ^= ((/* implicit */long long int) arr_13 [i_4]);
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_20 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                                var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1360456620)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_5] [i_5]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_9))))) : (((long long int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            {
                                arr_26 [i_9] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_8 - 1] [i_8 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_8 - 1] [i_8 - 1]))));
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)156)) & (((/* implicit */int) (unsigned short)11745))));
                                var_24 = ((/* implicit */int) ((_Bool) arr_16 [i_3] [i_3] [i_3]));
                                arr_27 [(signed char)4] [i_4] [i_4] [i_3] = ((/* implicit */long long int) 59328947U);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */unsigned long long int) -1446779671831904931LL)), (14516050169332918704ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned char)4] [(unsigned char)4])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))))))))));
        arr_31 [i_10] [i_10] = ((/* implicit */_Bool) arr_19 [13U] [i_10] [i_10] [i_10] [i_10]);
    }
    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_12 = 4; i_12 < 8; i_12 += 2) 
        {
            for (unsigned char i_13 = 2; i_13 < 9; i_13 += 3) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) arr_9 [i_12 - 1] [i_12]);
                        var_27 = ((/* implicit */unsigned long long int) var_2);
                        var_28 = ((/* implicit */long long int) var_14);
                        var_29 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_7 [i_14] [i_12] [i_12] [i_12 - 3])) ? (arr_7 [i_13] [i_11] [i_11] [i_12 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                {
                    var_30 &= var_0;
                    var_31 = ((/* implicit */unsigned int) (-(var_8)));
                    /* LoopNest 2 */
                    for (signed char i_17 = 0; i_17 < 10; i_17 += 3) 
                    {
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            {
                                arr_53 [i_16] [i_16] [i_15] [i_16] [(unsigned char)4] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_46 [i_18] [i_16] [i_15] [i_11])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) arr_37 [i_15]))))));
                                arr_54 [i_16] [i_15] [i_16] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) arr_49 [i_11] [i_15] [i_16]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_55 [i_11] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_14)) ? (arr_0 [i_11]) : (arr_19 [i_11] [i_11] [i_11] [(_Bool)1] [(_Bool)1]))), (((/* implicit */int) var_7))))) | (((((/* implicit */_Bool) 3930693904376632911ULL)) ? (14516050169332918704ULL) : (((/* implicit */unsigned long long int) 1446779671831904931LL))))));
        arr_56 [i_11] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((((((/* implicit */_Bool) (unsigned short)4485)) ? (arr_43 [i_11] [i_11] [i_11] [i_11]) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_49 [i_11] [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_8))) - (74LL)))))), ((~(-1446779671831904932LL)))));
    }
    var_32 += ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned short i_19 = 0; i_19 < 20; i_19 += 3) 
    {
        for (unsigned int i_20 = 1; i_20 < 17; i_20 += 2) 
        {
            {
                var_33 = ((/* implicit */_Bool) (-(((/* implicit */int) ((9422813238397292373ULL) < (((/* implicit */unsigned long long int) -1446779671831904904LL)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_21 = 0; i_21 < 20; i_21 += 2) 
                {
                    var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 14166941354117877593ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8693833667713533316LL)));
                    arr_63 [i_19] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)18))) / (1446779671831904932LL)));
                    var_35 = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned long long int) arr_16 [i_20 + 1] [i_20 - 1] [i_20])), (max((9422813238397292373ULL), (((/* implicit */unsigned long long int) (unsigned short)65215)))))));
                    var_36 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_19] [i_20] [i_21] [i_20 - 1] [19U])) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))), ((-(arr_57 [i_21]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_20 + 1] [i_19])))));
                }
                var_37 = ((/* implicit */long long int) min((var_37), (-1446779671831904931LL)));
                var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) min((((/* implicit */int) ((_Bool) (_Bool)1))), (((((/* implicit */_Bool) (-(1517721643161064535LL)))) ? (((/* implicit */int) arr_62 [i_20] [i_20] [(unsigned char)0] [i_20])) : ((+(((/* implicit */int) var_6)))))))))));
                arr_64 [(unsigned char)15] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) (signed char)57)) : (((int) (_Bool)1))));
            }
        } 
    } 
}
