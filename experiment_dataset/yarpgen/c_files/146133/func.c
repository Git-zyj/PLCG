/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146133
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_17 ^= ((/* implicit */unsigned int) 9607112024402133523ULL);
        var_18 *= max((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */signed char) var_16))))), (max((6478238962291388919ULL), (((/* implicit */unsigned long long int) var_8)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 3; i_2 < 18; i_2 += 3) 
        {
            var_19 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_13)), (11968505111418162696ULL))), (max((((/* implicit */unsigned long long int) var_3)), (min((((/* implicit */unsigned long long int) var_6)), (9607112024402133523ULL)))))));
            var_20 = ((/* implicit */_Bool) max((11968505111418162690ULL), (6478238962291388928ULL)));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                var_21 = ((/* implicit */long long int) min((11968505111418162690ULL), (68719476735ULL)));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    for (int i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        {
                            arr_18 [i_6] [i_4] [i_4] [i_4] [i_1] = max((min((((/* implicit */unsigned long long int) (short)-25060)), (min((((/* implicit */unsigned long long int) var_6)), (11968505111418162677ULL))))), (((/* implicit */unsigned long long int) var_8)));
                            var_22 = ((/* implicit */unsigned long long int) var_13);
                            arr_19 [i_6] [(signed char)11] [i_4] [i_4] [i_3] [17LL] = ((/* implicit */signed char) max((((((/* implicit */int) var_7)) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) != (var_0)))))), (min((((/* implicit */int) max((var_9), (var_9)))), (var_14)))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -1459506931)) != (11968505111418162690ULL)));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (signed char i_7 = 1; i_7 < 18; i_7 += 3) 
            {
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (signed char)-1))));
                var_25 = ((/* implicit */short) 8839632049307418093ULL);
            }
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 19; i_9 += 4) 
                {
                    {
                        arr_29 [5ULL] [i_9] [10U] [i_8] [(signed char)4] = ((/* implicit */unsigned long long int) var_9);
                        /* LoopSeq 2 */
                        for (signed char i_10 = 0; i_10 < 19; i_10 += 3) 
                        {
                            var_26 += min(((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)72))) | (6478238962291388919ULL))))), (((/* implicit */unsigned long long int) 1248350171)));
                            var_27 = ((/* implicit */unsigned long long int) max((2301468706230014169LL), (((/* implicit */long long int) (unsigned char)103))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_34 [i_1] [i_1] [(unsigned short)8] [i_1] [i_1] [i_8] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) <= (min((((/* implicit */unsigned long long int) 3253071306U)), (max((68719476735ULL), (((/* implicit */unsigned long long int) var_12))))))));
                            var_28 ^= ((/* implicit */_Bool) min((var_6), (((/* implicit */int) min((max((var_2), (((/* implicit */signed char) var_1)))), (((/* implicit */signed char) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_13))))))))));
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) var_6))));
                            arr_35 [i_1] [i_8] [(signed char)17] [i_9] [i_11] = ((/* implicit */unsigned long long int) var_5);
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) min((max((var_11), (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) var_16)))))));
                        }
                    }
                } 
            } 
        }
        for (short i_12 = 2; i_12 < 18; i_12 += 4) 
        {
            /* LoopNest 3 */
            for (short i_13 = 0; i_13 < 19; i_13 += 1) 
            {
                for (unsigned char i_14 = 2; i_14 < 16; i_14 += 3) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 1) 
                    {
                        {
                            arr_45 [i_15] [i_14] [i_1] = ((/* implicit */unsigned long long int) var_16);
                            var_31 = max((((/* implicit */signed char) (!(((/* implicit */_Bool) 11968505111418162690ULL))))), (max((var_8), (min((((/* implicit */signed char) var_16)), (var_12))))));
                            var_32 = var_2;
                            arr_46 [i_14] [i_12 + 1] [i_13] = ((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (var_15))))) <= (min((7040707344869391936LL), (((/* implicit */long long int) var_10))))))), (min((var_5), (((/* implicit */signed char) ((((/* implicit */int) var_4)) != (((/* implicit */int) (unsigned short)3712)))))))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) max(((unsigned short)61840), (((/* implicit */unsigned short) var_12))))), (max((((/* implicit */unsigned int) var_6)), (var_11))))), (((/* implicit */unsigned int) var_2)))))));
        }
        arr_47 [i_1] [i_1] = ((/* implicit */_Bool) (((~(((11968505111418162684ULL) + (3099923859936387749ULL))))) << (((((/* implicit */int) var_8)) + (115)))));
    }
    var_34 -= max((6478238962291388902ULL), ((+(8484229719785930779ULL))));
    /* LoopNest 2 */
    for (unsigned short i_16 = 3; i_16 < 9; i_16 += 1) 
    {
        for (short i_17 = 0; i_17 < 11; i_17 += 3) 
        {
            {
                var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) (((-(max((var_3), (((/* implicit */int) var_7)))))) - ((+(((/* implicit */int) var_7)))))))));
                var_36 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) var_15))));
                /* LoopSeq 2 */
                for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_19 = 2; i_19 < 10; i_19 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((min((((/* implicit */int) (unsigned char)126)), (var_3))), (((/* implicit */int) (short)7168))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) != (var_3)))), (8839632049307418093ULL)))));
                        arr_58 [i_16] [i_17] [4LL] [i_17] = ((/* implicit */long long int) 9962514353923620826ULL);
                        /* LoopSeq 1 */
                        for (signed char i_20 = 0; i_20 < 11; i_20 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_13)), (var_6)))), (var_0))))));
                            var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) max((var_3), (((((/* implicit */int) min((var_4), (var_4)))) & (((/* implicit */int) var_4)))))))));
                        }
                    }
                    var_40 = ((/* implicit */signed char) max((min((((/* implicit */int) var_1)), (var_14))), (((((/* implicit */int) var_12)) / (var_6)))));
                }
                for (unsigned short i_21 = 0; i_21 < 11; i_21 += 3) 
                {
                    arr_64 [i_17] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned char)78)), (min((18446744004990074880ULL), (511ULL)))));
                    var_41 = ((/* implicit */unsigned long long int) max((var_41), (min((4788528972524726943ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)1)))))))));
                }
                var_42 = ((/* implicit */long long int) var_1);
                var_43 = ((/* implicit */unsigned short) (_Bool)1);
            }
        } 
    } 
}
