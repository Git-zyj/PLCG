/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126690
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */signed char) 2425049323U);
                    var_14 = ((/* implicit */int) ((var_0) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        var_15 += ((/* implicit */signed char) ((-8500571124122294962LL) > (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0])))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_2]);
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min((var_10), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)142)) || (((/* implicit */_Bool) var_12))))))))));
                        var_17 = ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) (unsigned short)1536)))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) (short)25679)) : (((arr_8 [i_0] [i_1] [i_2] [i_3]) ^ (((/* implicit */int) arr_3 [i_0]))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_19 -= ((min((8500571124122294962LL), (((/* implicit */long long int) arr_7 [i_4] [i_4] [i_4])))) <= (((/* implicit */long long int) ((int) ((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
        var_20 -= ((/* implicit */signed char) max((-8500571124122294990LL), (((/* implicit */long long int) ((unsigned char) ((unsigned short) (signed char)60))))));
    }
    for (unsigned char i_5 = 2; i_5 < 8; i_5 += 2) 
    {
        arr_18 [i_5] [9ULL] = ((/* implicit */short) (-((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_2)) : (arr_10 [(signed char)1] [(signed char)1] [i_5])))))));
        /* LoopSeq 4 */
        for (short i_6 = 2; i_6 < 10; i_6 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                for (short i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (+(((arr_24 [i_9 - 1] [i_9 - 1] [i_6 - 2] [i_5 + 3]) | (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_4 [i_5]))))))))));
                            arr_28 [i_5] [i_5 - 1] [0LL] [i_7] [i_7] [i_8] [i_9] = ((/* implicit */_Bool) ((unsigned int) -8500571124122294962LL));
                            var_22 = ((/* implicit */unsigned int) (~(((arr_8 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_5]) ^ (arr_8 [i_9] [i_9] [i_9 - 1] [i_8])))));
                        }
                    } 
                } 
            } 
            var_23 += ((/* implicit */unsigned char) max((min((8500571124122294955LL), (((/* implicit */long long int) arr_15 [i_5 + 2])))), ((+(-8500571124122294990LL)))));
            arr_29 [i_5] [i_6] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-24))));
            arr_30 [i_6] [i_6 - 2] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) 5621518500806716596ULL)))) & (((((/* implicit */_Bool) (short)1536)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)44))) : (-8500571124122294962LL))))));
        }
        for (short i_10 = 2; i_10 < 10; i_10 += 2) /* same iter space */
        {
            arr_33 [i_10] = ((/* implicit */unsigned int) 660209270431088223LL);
            /* LoopNest 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 4; i_12 < 10; i_12 += 4) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_41 [i_13] [i_12 + 1] [(signed char)3] [i_11] [i_10] [i_10] [i_13] = (+(5621518500806716589ULL));
                            var_24 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_35 [i_5 - 1] [i_10 - 2] [i_12 + 1])) : (((/* implicit */int) arr_35 [i_5 + 2] [i_10 - 1] [i_12 + 1]))))));
                            arr_42 [i_5] [i_5] [i_13] [i_5 - 1] [i_5] = ((/* implicit */short) ((long long int) (-(((/* implicit */int) (unsigned short)65535)))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((short) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5 - 2]))) : (var_6)))))))));
        }
        for (short i_14 = 1; i_14 < 9; i_14 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                for (unsigned long long int i_16 = 1; i_16 < 9; i_16 += 3) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) arr_22 [i_16]);
                        arr_50 [i_5 - 2] [i_14] [i_14] [i_16] = ((/* implicit */int) (+(((((/* implicit */_Bool) (~(12825225572902835020ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_14] [i_15] [i_16]))) : (max((8500571124122294979LL), (((/* implicit */long long int) (_Bool)1))))))));
                    }
                } 
            } 
            arr_51 [i_5] [i_14] [i_14] = ((/* implicit */unsigned long long int) (+(min((var_2), (7936)))));
        }
        for (unsigned int i_17 = 1; i_17 < 10; i_17 += 2) 
        {
            arr_56 [i_5] [i_5] [(signed char)0] = ((/* implicit */unsigned short) arr_0 [i_5] [i_5]);
            /* LoopNest 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (signed char i_19 = 1; i_19 < 10; i_19 += 4) 
                {
                    {
                        var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1138855549U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (9223372036854775552ULL)))) ? (((/* implicit */unsigned long long int) ((long long int) (signed char)15))) : (((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5]))))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_45 [2] [4ULL] [i_18] [i_19])))), (((/* implicit */int) ((signed char) 8500571124122294962LL))))))));
                        var_28 = ((/* implicit */unsigned char) ((((var_8) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) | (var_2)))))) & (min((var_0), (((/* implicit */unsigned long long int) arr_39 [i_17 + 1] [2] [i_18] [i_17] [i_19] [2]))))));
                        var_29 -= ((/* implicit */unsigned char) max((min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_54 [i_18])), (var_6)))), (min((var_1), (((/* implicit */long long int) var_6)))))), ((+(min((((/* implicit */long long int) arr_58 [i_5] [i_5] [i_18])), (660209270431088223LL)))))));
                    }
                } 
            } 
        }
    }
    /* LoopNest 2 */
    for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
    {
        for (unsigned char i_21 = 0; i_21 < 16; i_21 += 3) 
        {
            {
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_9 [8U] [i_20 + 1]) - (arr_9 [20U] [i_20 + 1])))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-75))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 3; i_22 < 14; i_22 += 2) 
                {
                    for (signed char i_23 = 0; i_23 < 16; i_23 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned long long int) ((-7936) * (((/* implicit */int) (signed char)41))));
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), (953817485)))) && (((/* implicit */_Bool) (+(-8500571124122294990LL)))))))));
                            var_33 = ((/* implicit */unsigned char) arr_0 [i_21] [(unsigned short)20]);
                        }
                    } 
                } 
                var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (((+(9223372036854776048ULL))) / (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_11))))) ? (5237583976063385118ULL) : (((/* implicit */unsigned long long int) min((-7291203301516595422LL), (((/* implicit */long long int) (short)27477))))))))))));
                var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_3 [i_20 + 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_20 + 1])))))) : (((((/* implicit */_Bool) arr_3 [i_20 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_20 + 1]))) : (var_6))))))));
                /* LoopNest 2 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (unsigned char i_25 = 1; i_25 < 14; i_25 += 3) 
                    {
                        {
                            arr_76 [i_20 + 1] [0U] [i_20] [i_20] &= ((/* implicit */signed char) (-((-(((/* implicit */int) arr_73 [i_20 + 1] [i_25 + 1]))))));
                            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))) - (((/* implicit */int) ((signed char) var_10)))))), ((-(13209160097646166498ULL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
