/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175660
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
    var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_0))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [(unsigned char)19])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) * (((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) * (((-3252722938387420724LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) * (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) var_0);
                    var_19 = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1] [i_1 - 1])) * (((/* implicit */int) (_Bool)1))))))));
                    var_20 = ((/* implicit */signed char) (_Bool)1);
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_17 [i_3] [17ULL] [i_3] [(signed char)2] &= ((/* implicit */unsigned int) ((unsigned long long int) (((+(((/* implicit */int) (short)13992)))) * (((/* implicit */int) var_2)))));
                        var_21 = ((/* implicit */unsigned long long int) arr_1 [i_4] [i_4]);
                    }
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (min((var_7), (arr_6 [i_3])))));
                }
            } 
        } 
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) arr_4 [15ULL]))));
    }
    for (long long int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) (+(min(((((_Bool)1) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max(((unsigned short)23130), (((/* implicit */unsigned short) arr_18 [i_6])))))))));
        var_25 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_18 [i_6])))), (((((/* implicit */int) var_4)) * (((/* implicit */int) arr_18 [i_6]))))));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)60814))))) ? ((~(((unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)60815)), ((+(arr_19 [i_6]))))))));
    }
    for (long long int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (signed char)-26)), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 7706587890178469781ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_0))))) * (1048575U)))));
        arr_22 [(short)6] |= ((/* implicit */unsigned long long int) arr_20 [i_7]);
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (7706587890178469798ULL)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            var_29 = ((/* implicit */signed char) arr_4 [i_8]);
            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) arr_16 [i_8] [1LL] [1LL] [19U] [1LL] [1LL]))));
            /* LoopNest 2 */
            for (unsigned int i_10 = 3; i_10 < 12; i_10 += 1) 
            {
                for (long long int i_11 = 3; i_11 < 14; i_11 += 1) 
                {
                    {
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_8])))))));
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11)))))));
                    }
                } 
            } 
        }
        for (int i_12 = 1; i_12 < 15; i_12 += 4) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_13 = 0; i_13 < 16; i_13 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_14 = 0; i_14 < 16; i_14 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_15 = 0; i_15 < 16; i_15 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_8] [i_8] [i_8] [(_Bool)1] [i_12 + 1]))) * (arr_36 [i_12 - 1] [i_12 + 1] [(_Bool)1])));
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_13] [(_Bool)1])) * (((/* implicit */int) arr_1 [i_8] [i_8]))))) * (arr_36 [i_13] [i_13] [i_12 + 1])));
                        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_12 - 1] [(signed char)10] [i_12 + 1] [i_12] [i_12 + 1]))) * (arr_9 [i_12 - 1] [i_12 + 1]))))));
                        var_36 = (-(arr_15 [i_8] [i_8] [(_Bool)1] [(_Bool)1] [i_12 + 1]));
                        var_37 = ((/* implicit */signed char) var_7);
                    }
                    var_38 = ((/* implicit */int) ((arr_10 [i_12 + 1] [i_12 + 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60815)))));
                }
                for (unsigned char i_16 = 0; i_16 < 16; i_16 += 4) /* same iter space */
                {
                    var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_12] [11]))) * (arr_13 [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_12] [i_12]))))));
                    var_40 += ((/* implicit */_Bool) (unsigned char)186);
                    var_41 = ((((/* implicit */int) (signed char)-82)) * (((/* implicit */int) (signed char)123)));
                }
                var_42 = ((/* implicit */signed char) (-(((/* implicit */int) arr_16 [i_12 + 1] [i_12 + 1] [i_12] [i_12 - 1] [(_Bool)1] [i_12]))));
            }
            /* vectorizable */
            for (unsigned int i_17 = 1; i_17 < 14; i_17 += 1) 
            {
                arr_51 [i_17 - 1] [i_12] [i_12] [i_8] = ((((/* implicit */int) (signed char)-101)) * (((/* implicit */int) arr_12 [i_8] [i_8])));
                var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_8] [i_12 - 1] [i_17] [(_Bool)1])) * (((/* implicit */int) (_Bool)0)))))));
            }
            for (unsigned char i_18 = 0; i_18 < 16; i_18 += 1) /* same iter space */
            {
                var_44 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (((_Bool)0) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (arr_13 [i_8] [i_8] [i_12] [i_12] [i_8]))) : (var_7))))));
                var_45 = ((/* implicit */short) arr_32 [i_18] [i_18]);
                var_46 = ((/* implicit */unsigned int) max((var_46), (((/* implicit */unsigned int) (~(max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65523))) * (-1LL))), (((/* implicit */long long int) min((var_0), (((/* implicit */short) arr_3 [i_8] [i_12] [i_18]))))))))))));
            }
            for (unsigned char i_19 = 0; i_19 < 16; i_19 += 1) /* same iter space */
            {
                var_47 |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((var_11), (var_11)))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_38 [i_12] [i_12 + 1] [i_12] [i_12 + 1])) : (((arr_29 [i_8] [i_8] [(signed char)10]) ? (((/* implicit */int) (unsigned short)53886)) : (((/* implicit */int) var_14))))))));
                var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) ((unsigned long long int) ((arr_9 [i_12 + 1] [i_12 + 1]) * (arr_9 [i_12 - 1] [i_12 + 1])))))));
            }
            var_49 += ((/* implicit */_Bool) ((-4954832187691170309LL) / (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (_Bool)1))))))));
        }
        for (int i_20 = 2; i_20 < 12; i_20 += 1) 
        {
            var_50 = ((/* implicit */unsigned int) min((var_50), (((/* implicit */unsigned int) (unsigned short)11655))));
            var_51 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((4093659533U) * (((/* implicit */unsigned int) arr_27 [i_8] [i_8]))))))))) * (max((max((((/* implicit */unsigned long long int) var_3)), (arr_10 [i_8] [(signed char)3]))), (((/* implicit */unsigned long long int) ((arr_13 [(unsigned char)20] [16] [8] [i_20 + 3] [i_20 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
            var_52 += ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_14)))));
        }
        /* LoopNest 3 */
        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
        {
            for (unsigned int i_22 = 4; i_22 < 15; i_22 += 1) 
            {
                for (short i_23 = 0; i_23 < 16; i_23 += 4) 
                {
                    {
                        arr_67 [i_8] [i_22 - 1] [i_21] = max(((+(((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_8] [i_21] [i_21]))) * (4954832187691170309LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_33 [i_21] [(_Bool)1] [(_Bool)1])))))));
                        var_53 = ((/* implicit */_Bool) max((((arr_10 [i_8] [i_8]) * (((/* implicit */unsigned long long int) -4954832187691170326LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32768))) * (var_7))))));
                        /* LoopSeq 1 */
                        for (short i_24 = 0; i_24 < 16; i_24 += 1) 
                        {
                            var_54 = ((/* implicit */signed char) min((((((/* implicit */int) arr_37 [i_23] [i_23] [i_22])) * ((~(((/* implicit */int) var_4)))))), (((/* implicit */int) (!(var_1))))));
                            var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) (unsigned short)11654))));
                        }
                    }
                } 
            } 
        } 
        var_56 |= ((/* implicit */unsigned int) (+(max((((/* implicit */long long int) (!((_Bool)1)))), (((-4954832187691170331LL) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
    }
    var_57 = ((/* implicit */_Bool) (unsigned char)57);
}
