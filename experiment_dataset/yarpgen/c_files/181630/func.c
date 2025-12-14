/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181630
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 8; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (_Bool)1)), (max((((/* implicit */unsigned int) var_5)), (min((((/* implicit */unsigned int) arr_1 [i_2])), (var_1)))))));
                                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */unsigned short) var_5))))) ? (((((/* implicit */_Bool) (short)-32747)) ? (7854753439705163388LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32763))))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)953))))))) : (((/* implicit */long long int) ((3533399687U) * (((/* implicit */unsigned int) arr_0 [i_0])))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */int) arr_10 [i_1] [i_1] [i_1 + 1] [(signed char)0] [i_1 + 1]);
                var_14 ^= arr_7 [i_0] [i_0];
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_7 = 4; i_7 < 20; i_7 += 1) 
                {
                    for (long long int i_8 = 1; i_8 < 19; i_8 += 2) 
                    {
                        {
                            var_15 ^= max((((max((((/* implicit */unsigned int) arr_14 [4ULL])), (arr_15 [(short)1] [i_6] [(_Bool)0]))) ^ (min((((/* implicit */unsigned int) arr_14 [8U])), (var_9))))), (((/* implicit */unsigned int) ((min((arr_19 [i_5] [i_5] [i_5] [i_5] [10U] [10U]), (((/* implicit */int) arr_13 [i_5] [10LL])))) ^ (((/* implicit */int) (short)-954))))));
                            /* LoopSeq 1 */
                            for (int i_9 = 2; i_9 < 20; i_9 += 4) 
                            {
                                var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)953))) : (2097151U)));
                                arr_24 [i_5] [i_5] [i_5] [i_5] [i_6] [i_5] = ((/* implicit */short) var_4);
                                arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) max((1073741823U), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((((/* implicit */int) var_4)) < (((/* implicit */int) (short)953))))), (((unsigned short) arr_14 [i_5])))))));
                            }
                        }
                    } 
                } 
                arr_26 [i_5] [i_5] = ((/* implicit */unsigned int) 701527705);
                /* LoopNest 2 */
                for (long long int i_10 = 1; i_10 < 20; i_10 += 1) 
                {
                    for (int i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        {
                            arr_32 [(unsigned char)8] [i_5] [(short)10] = ((/* implicit */signed char) ((((/* implicit */int) (short)-953)) & (((/* implicit */int) (_Bool)1))));
                            /* LoopSeq 1 */
                            for (unsigned short i_12 = 0; i_12 < 22; i_12 += 1) 
                            {
                                var_17 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1073741823U)) ? (((/* implicit */int) arr_28 [(short)2] [i_10] [i_10])) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((arr_19 [i_5] [i_5] [i_5] [12ULL] [i_5] [i_12]) >= (((/* implicit */int) var_6)))))))) ? (((((/* implicit */_Bool) ((var_11) - (arr_33 [i_5] [i_5] [i_10])))) ? (((/* implicit */int) arr_20 [i_5] [i_5] [i_10 + 1] [i_5] [i_5] [14LL])) : (((((/* implicit */_Bool) arr_33 [i_12] [i_6] [i_5])) ? (((/* implicit */int) (short)32746)) : (var_11))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_2))))) ? (((((/* implicit */int) var_0)) | (var_11))) : (((/* implicit */int) ((signed char) var_9))))));
                                arr_35 [i_5] [i_5] [i_5] [7U] [i_6] [i_5] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_20 [i_5] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [9LL])) || (((/* implicit */_Bool) arr_34 [i_5] [i_5] [i_5] [16ULL] [i_12] [i_5] [i_5])))));
                            }
                            arr_36 [i_11] [i_5] [i_5] [1] [i_5] [1] = ((/* implicit */_Bool) max((max((arr_23 [i_5] [i_6] [i_5] [(unsigned char)1] [i_5]), (((/* implicit */short) arr_22 [i_5] [i_5] [i_6] [i_5] [20])))), (((/* implicit */short) ((unsigned char) 694402451440022934ULL)))));
                            /* LoopSeq 1 */
                            for (unsigned int i_13 = 0; i_13 < 22; i_13 += 1) 
                            {
                                var_18 = ((/* implicit */short) (-(((/* implicit */int) arr_20 [i_5] [i_5] [i_11] [(unsigned short)12] [(unsigned short)12] [i_5]))));
                                arr_39 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) 4294967295U))) <= (((/* implicit */int) (signed char)32))));
                                arr_40 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) min((2989987789U), (((/* implicit */unsigned int) (short)-25422))));
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    for (long long int i_15 = 3; i_15 < 20; i_15 += 3) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 2) 
                        {
                            {
                                arr_51 [i_5] [i_5] [i_5] = 1073741809U;
                                var_19 ^= ((/* implicit */signed char) ((short) ((long long int) arr_33 [i_5] [17] [i_15 - 1])));
                                arr_52 [i_5] [i_5] [i_5] [i_5] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1073741829U)) ? (4891233509497813706LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63)))));
                                arr_53 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) arr_48 [(_Bool)1] [i_6] [i_6] [(_Bool)1] [i_6] [i_6])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_5]))) : (min((max((((/* implicit */long long int) 1235839592)), (arr_46 [i_5] [9LL] [i_5]))), (((/* implicit */long long int) var_7))))));
                                arr_54 [i_5] [i_5] [17] [17] [17] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1946623402)) ? (2989987789U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [(_Bool)1] [i_5] [20LL] [i_5])))))) || (((/* implicit */_Bool) min((1619719135), (((/* implicit */int) (short)-32747)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))));
}
