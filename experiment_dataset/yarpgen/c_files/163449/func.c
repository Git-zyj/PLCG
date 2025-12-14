/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163449
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
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) || (((/* implicit */_Bool) arr_0 [i_1 + 2]))))) | (((/* implicit */int) (!(arr_3 [i_1 + 1]))))));
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (((((-(((/* implicit */int) var_9)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))) & (((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (11196480395327463464ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (-(var_18)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_3] [i_1] [i_1] [i_0]))))) : (((-1466408347826453074LL) % (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_3])))))) : (((/* implicit */long long int) ((arr_7 [i_3] [i_3 + 1] [i_3 + 3]) / (arr_7 [i_3] [i_3] [i_3 - 1]))))));
                            arr_13 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(arr_9 [i_3] [i_3] [i_1 - 1] [i_1 - 1] [i_1])))) >> (((min((((/* implicit */int) (unsigned short)33881)), (-1114331643))) + (1114331649)))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) (((-(((var_0) << (((262143) - (262142))))))) % (((arr_3 [i_0]) ? (((/* implicit */unsigned long long int) var_4)) : (var_0)))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_19 [i_0] = ((/* implicit */long long int) ((((((((/* implicit */int) var_13)) * (var_7))) << (((arr_0 [i_0]) - (526038928))))) >= (((((((/* implicit */int) var_14)) > (arr_15 [i_0] [i_0]))) ? ((-(((/* implicit */int) (unsigned short)63620)))) : ((+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                            arr_20 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-37)) & (((/* implicit */int) (unsigned short)11))));
                            arr_21 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) -304326801)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)118)) > ((-(((/* implicit */int) (signed char)-68)))))))) : (3541662228205723184LL)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    var_22 += ((/* implicit */unsigned short) (+(((((arr_12 [i_6] [i_8] [i_8 - 1] [i_8 - 1]) + (2147483647))) << (((((arr_12 [i_8] [i_8] [i_8 - 1] [i_8 - 1]) + (1141823953))) - (11)))))));
                    var_23 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1]))))) ? (((/* implicit */int) min((min(((unsigned short)65535), (((/* implicit */unsigned short) arr_3 [i_8])))), (((/* implicit */unsigned short) arr_17 [i_8 - 1] [i_8] [i_8] [i_8 - 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -262143))))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (signed char i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_31 [i_8 - 1] [i_10] [i_8 - 1] [i_10] [i_10] [i_10])), (((((/* implicit */_Bool) arr_31 [i_8 - 1] [i_10] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_31 [i_8 - 1] [i_9] [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_31 [i_8 - 1] [i_9] [i_9] [i_9] [i_10] [i_9])))))))));
                                var_25 = ((/* implicit */int) arr_26 [i_7] [i_7]);
                                var_26 *= ((/* implicit */int) (((-(var_16))) > (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)2)) ? (2147483647) : (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) (unsigned short)31654)))))));
                                var_27 -= ((/* implicit */long long int) max((max((arr_32 [i_10] [i_10] [i_10] [i_10] [i_8 - 1]), (arr_32 [i_10] [i_10] [i_10] [i_10] [i_8 - 1]))), (((((/* implicit */int) (unsigned short)10)) << (((-2759603877400753354LL) + (2759603877400753371LL)))))));
                                arr_33 [(_Bool)1] [i_8] [i_8] [i_9] [i_10] [i_9] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-92)) + (2147483647))) >> (((/* implicit */int) var_14))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7] [i_8 - 1]))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65534)) / (arr_32 [i_8] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            {
                var_28 |= ((/* implicit */int) ((((((/* implicit */_Bool) ((arr_3 [i_12]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_16)))) ? ((-(((/* implicit */int) var_9)))) : (arr_2 [i_12]))) != (((((/* implicit */_Bool) 1258204638)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))))));
                /* LoopNest 3 */
                for (long long int i_13 = 0; i_13 < 22; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        for (int i_15 = 0; i_15 < 22; i_15 += 2) 
                        {
                            {
                                arr_46 [i_15] [i_14] [i_13] [i_12] [i_11] = max((((/* implicit */int) ((483062583) >= (((/* implicit */int) (unsigned short)29435))))), (var_2));
                                var_29 = min((var_4), (((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_15] [i_14] [i_13] [i_12] [i_11])), ((unsigned short)63488)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_16 = 0; i_16 < 23; i_16 += 2) 
    {
        for (signed char i_17 = 1; i_17 < 20; i_17 += 2) 
        {
            for (signed char i_18 = 0; i_18 < 23; i_18 += 2) 
            {
                {
                    arr_58 [i_16] [i_16] [i_16] = arr_17 [i_16] [i_17 + 3] [i_17 + 3] [i_18];
                    arr_59 [i_16] [i_16] = ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) arr_1 [i_17] [i_16])) <= (arr_11 [i_16] [i_16] [i_16] [i_16] [i_16]))));
                    /* LoopNest 2 */
                    for (long long int i_19 = 0; i_19 < 23; i_19 += 4) 
                    {
                        for (signed char i_20 = 1; i_20 < 22; i_20 += 2) 
                        {
                            {
                                var_30 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((-(arr_52 [i_19] [i_20 + 1]))) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (min((var_0), (((/* implicit */unsigned long long int) var_3))))));
                                var_31 ^= ((/* implicit */signed char) (-(((((/* implicit */int) arr_4 [i_17 + 2] [i_17 + 2] [i_17 + 2])) % (((/* implicit */int) arr_4 [i_17 + 1] [i_17 + 2] [i_17]))))));
                                arr_66 [i_18] [i_16] [i_18] [i_20] [i_20] [i_20] [i_17] = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) - (var_12)));
                                var_32 = ((/* implicit */long long int) (+(arr_12 [i_20 + 1] [i_18] [i_18] [i_17])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_21 = 0; i_21 < 23; i_21 += 1) 
                    {
                        for (signed char i_22 = 0; i_22 < 23; i_22 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(var_16)))) % (((((/* implicit */unsigned long long int) arr_14 [i_16] [i_17 + 2] [i_18] [i_22])) | (arr_11 [i_22] [i_21] [i_18] [i_17] [i_16])))));
                                var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */int) ((arr_8 [i_17] [i_17 + 2] [i_17 + 2] [i_17]) || (((/* implicit */_Bool) arr_67 [i_16] [i_16] [i_21] [i_22]))))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_35 = min((((/* implicit */int) var_10)), (((((var_7) % (((/* implicit */int) (_Bool)1)))) % ((-(((/* implicit */int) var_9)))))));
}
