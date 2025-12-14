/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12972
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-18449))))) & (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)27))))), (max((var_15), (((/* implicit */unsigned long long int) var_8))))))));
    var_17 = ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) (unsigned char)162))))) ? (max((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) (unsigned char)94))))))) : (((/* implicit */unsigned long long int) (~(var_1)))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) 10747669835520001267ULL);
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (-(max(((((_Bool)1) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)93))))), (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_4))))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_0 + 1] [5U] [i_0 - 1]), (arr_5 [i_0 + 2] [i_0] [i_0]))))) : (((((/* implicit */_Bool) 8388607ULL)) ? (11272942739530999550ULL) : (11272942739530999573ULL)))));
                    arr_8 [i_2] [i_2] [i_2] [(short)9] = ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0 - 1] [i_1] [i_1] [(short)10] [i_4] [3] = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_8)))) ? (min((((/* implicit */long long int) arr_0 [i_0 + 1])), (arr_11 [i_2] [i_4 + 2] [i_4] [i_4]))) : (((/* implicit */long long int) min((var_13), (((/* implicit */unsigned int) (unsigned char)84)))))));
                                var_20 += ((/* implicit */long long int) max((((/* implicit */int) arr_4 [i_0] [(signed char)5] [i_0 + 3] [i_0])), (((((/* implicit */_Bool) max((arr_3 [i_1] [i_3 + 1] [11]), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) arr_13 [i_0 + 1] [i_0] [i_0] [i_0 + 2] [i_3 - 3] [i_4]))))));
                                var_21 = ((/* implicit */unsigned char) ((((_Bool) -497165448)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)115))))) : ((+(min((((/* implicit */long long int) arr_5 [i_4 - 1] [(_Bool)1] [i_0 + 3])), (4398046511040LL)))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_0 + 1] = ((/* implicit */signed char) (~(arr_11 [i_1] [(unsigned char)9] [(signed char)2] [i_1])));
                }
            } 
        } 
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 814895114))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (7699074238189550346ULL)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 3] [i_0 + 3] [i_0 - 1]))) : (arr_0 [i_0 + 2]))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) var_3)) : (-16))), (((((/* implicit */int) (unsigned char)35)) + (((/* implicit */int) arr_2 [i_0 + 2])))))))));
    }
    for (int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 4) 
                {
                    {
                        arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [(_Bool)1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (signed char)64)) - (((/* implicit */int) arr_16 [i_5]))))));
                        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (11272942739530999573ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned int) (unsigned char)121);
    }
    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 3) 
    {
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_9])) ? (arr_27 [i_9]) : (((/* implicit */unsigned long long int) var_11))))) || ((!(((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 3297075107044132239ULL))))))));
        /* LoopNest 2 */
        for (unsigned short i_10 = 1; i_10 < 18; i_10 += 3) 
        {
            for (unsigned int i_11 = 1; i_11 < 18; i_11 += 3) 
            {
                {
                    arr_33 [i_9] [i_10] [i_11] [i_11] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (max((263867796795945160LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)93)))))))));
                    var_26 = max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (0LL)))) <= (((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)144))) : (11272942739530999554ULL)))))), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) == (7173801334178552067ULL))))) - (max((arr_28 [(_Bool)1] [i_10]), (((/* implicit */long long int) (_Bool)1)))))));
                }
            } 
        } 
    }
    for (unsigned char i_12 = 1; i_12 < 16; i_12 += 4) 
    {
        arr_36 [i_12] [i_12] = ((/* implicit */unsigned long long int) ((int) ((unsigned short) 6571658869213507453LL)));
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 19; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 4) 
            {
                for (short i_15 = 1; i_15 < 17; i_15 += 2) 
                {
                    {
                        arr_45 [i_12] [i_12] [i_12] [5U] [5U] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_37 [i_15 + 1]), (((/* implicit */unsigned long long int) (unsigned char)111))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_15 + 2])) ? (((/* implicit */int) arr_31 [i_15 + 2] [i_13] [i_14])) : (((/* implicit */int) arr_31 [i_15 - 1] [i_13] [(_Bool)1])))))));
                        arr_46 [i_12] [(_Bool)1] [i_14] [i_15 + 1] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_12 + 1])) ? (arr_41 [i_12 + 1]) : (arr_41 [i_12 + 1])))), (max((7502543854903807109LL), (((/* implicit */long long int) arr_29 [i_12 + 1]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_16 = 4; i_16 < 18; i_16 += 4) 
        {
            for (unsigned char i_17 = 0; i_17 < 19; i_17 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_18 = 4; i_18 < 17; i_18 += 1) 
                    {
                        for (long long int i_19 = 3; i_19 < 18; i_19 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned short)50996)), (7173801334178552071ULL)));
                                var_28 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((2147483624) / (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */int) (unsigned char)114))))))), (16328454412476489742ULL)));
                            }
                        } 
                    } 
                    arr_58 [i_12] [i_16] [i_17] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) == (max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_34 [i_17]))))))));
                    var_29 = ((((/* implicit */_Bool) min((min((-483239109), (var_0))), (((((/* implicit */_Bool) arr_43 [i_12 + 2] [(unsigned char)10] [i_16 - 1] [i_17] [i_17])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127))))))) ? (((((/* implicit */int) (unsigned char)93)) & (((/* implicit */int) (short)11507)))) : ((~(((/* implicit */int) var_12)))));
                }
            } 
        } 
        arr_59 [i_12] [i_12 - 1] = ((/* implicit */int) (-(var_5)));
    }
}
