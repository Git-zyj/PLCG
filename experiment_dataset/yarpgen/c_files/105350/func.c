/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105350
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
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_13 [i_0] = ((/* implicit */_Bool) ((var_3) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [9] [i_0])) ? ((+(((/* implicit */int) (short)992)))) : ((-2147483647 - 1)))))));
                                var_10 = (!((!((_Bool)1))));
                                arr_14 [i_0] = (!((!(((/* implicit */_Bool) (short)992)))));
                            }
                            for (signed char i_5 = 1; i_5 < 15; i_5 += 2) 
                            {
                                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65523)) ? (((((/* implicit */_Bool) (+(arr_11 [i_0 - 1] [i_1] [i_1] [i_2] [i_0] [i_5] [i_5])))) ? (arr_11 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102)))));
                                var_12 += ((/* implicit */short) (~(min((((/* implicit */int) min((var_6), (arr_0 [i_1])))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)61536)) : (((/* implicit */int) var_7))))))));
                                var_13 = ((/* implicit */_Bool) min(((short)24360), (((/* implicit */short) (signed char)98))));
                            }
                            var_14 = arr_4 [i_0] [i_0];
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_6 = 2; i_6 < 16; i_6 += 4) 
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) < (var_3)));
                    var_16 += ((/* implicit */signed char) (short)31084);
                }
                for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 1; i_9 < 14; i_9 += 1) 
                        {
                            {
                                arr_29 [i_0] [i_8] [i_7] [i_7] [(_Bool)1] [i_0] = ((/* implicit */signed char) (_Bool)1);
                                arr_30 [i_0] [15] [i_1] [i_0] [i_7] [i_0] [i_9] = ((((/* implicit */int) arr_24 [i_0] [i_1] [i_1])) <= (((((((/* implicit */int) (unsigned short)16)) >= ((-2147483647 - 1)))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) arr_24 [i_0] [i_7] [i_7])))))));
                                var_17 = ((/* implicit */signed char) (-(((/* implicit */int) (((~(((/* implicit */int) var_1)))) >= (((/* implicit */int) max(((signed char)93), (var_5)))))))));
                                arr_31 [(_Bool)1] [(_Bool)1] [i_7] [i_7] [i_0] = (+(min(((~(var_9))), (((((/* implicit */_Bool) 2369113042U)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_18 ^= ((/* implicit */short) var_9);
                                var_19 = (-(min((((/* implicit */unsigned int) ((var_1) && (((/* implicit */_Bool) var_8))))), (var_4))));
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_6))));
                            }
                        } 
                    } 
                }
                for (signed char i_12 = 0; i_12 < 17; i_12 += 2) 
                {
                    arr_40 [i_0] = ((/* implicit */short) var_9);
                    arr_41 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) var_0)) ? (-127555817) : (((/* implicit */int) var_5)))) * ((-(((/* implicit */int) (_Bool)0))))))));
                    var_21 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (var_9)))));
                }
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    var_22 = ((/* implicit */signed char) (~(1925854242U)));
                    var_23 += ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) -1285419692)))))))) : (((((((/* implicit */_Bool) (unsigned short)4000)) && (((/* implicit */_Bool) (short)-4877)))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15166)))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_14 = 1; i_14 < 14; i_14 += 4) 
    {
        for (short i_15 = 0; i_15 < 16; i_15 += 3) 
        {
            {
                arr_53 [i_14] [i_14] = ((/* implicit */int) 17350518500330826294ULL);
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 16; i_16 += 4) 
                {
                    for (signed char i_17 = 0; i_17 < 16; i_17 += 1) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 16; i_18 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */short) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)0)) : (-1871750062)))))), ((_Bool)1)));
                                arr_62 [i_14] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)39519))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1925854277U)))))) : (min((arr_35 [i_14] [i_14] [i_14] [(_Bool)1] [i_14] [i_14] [i_14]), (((/* implicit */unsigned int) (short)-15700)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-(var_3)))) && (((/* implicit */_Bool) ((arr_48 [i_14]) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) (signed char)0)))))))))));
                                var_25 = ((/* implicit */int) var_8);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_19 = 0; i_19 < 16; i_19 += 4) 
                {
                    arr_65 [i_14] [i_14] = ((/* implicit */signed char) var_2);
                    arr_66 [i_14] [i_14] [i_14] = ((/* implicit */_Bool) var_6);
                }
                /* vectorizable */
                for (int i_20 = 3; i_20 < 15; i_20 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_21 = 0; i_21 < 16; i_21 += 1) 
                    {
                        for (int i_22 = 0; i_22 < 16; i_22 += 1) 
                        {
                            {
                                var_26 |= ((/* implicit */signed char) (-((+(((/* implicit */int) arr_12 [i_14 - 1] [i_14] [i_14] [(signed char)8] [i_14]))))));
                                var_27 = ((/* implicit */short) 8175426923371952102ULL);
                                var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_23 = 0; i_23 < 16; i_23 += 1) 
                    {
                        for (unsigned int i_24 = 0; i_24 < 16; i_24 += 2) 
                        {
                            {
                                var_29 += ((/* implicit */signed char) (unsigned short)12);
                                var_30 = ((/* implicit */_Bool) var_4);
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-1669351355)))) ? (((((/* implicit */_Bool) 1669351355)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4000))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_25 = 0; i_25 < 11; i_25 += 1) 
    {
        var_32 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1669351351)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) 13252836419023824769ULL)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_25] [i_25] [11U])))))))) ? ((~(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_38 [i_25] [i_25] [(unsigned short)12] [i_25])))))) : ((-(((((/* implicit */int) var_0)) - (((/* implicit */int) var_5)))))));
        arr_83 [i_25] [i_25] = ((/* implicit */int) var_5);
    }
}
