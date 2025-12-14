/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12454
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (signed char)122)), (2372872943U)));
                var_19 = ((/* implicit */signed char) var_3);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) min((arr_7 [i_2] [i_3]), (((/* implicit */unsigned short) (signed char)121))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-2455))))) : (((((/* implicit */_Bool) 10560526487102769668ULL)) ? (13210462272850753902ULL) : (((/* implicit */unsigned long long int) var_9))))))));
                arr_10 [i_3] = ((/* implicit */unsigned int) var_0);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    var_21 = ((/* implicit */signed char) var_2);
                    var_22 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_6))));
                    arr_14 [1ULL] [i_3] [i_4] = ((/* implicit */signed char) (+(arr_12 [i_2] [i_3] [i_4])));
                }
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 16; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (((((~(((/* implicit */int) (signed char)121)))) * (((/* implicit */int) ((signed char) var_16))))) + (min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_5 [(signed char)4])) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_2)))))))));
                            arr_20 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-66))) : (arr_11 [i_2] [i_2] [i_5 - 1] [i_5])));
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1437))))))))));
                            var_25 += ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_11 [i_5] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_11 [i_5] [i_5 - 1] [(short)10] [i_2])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        for (signed char i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            {
                var_26 = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_7])) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_7])) && (((/* implicit */_Bool) (signed char)-122)))))));
                var_27 = ((/* implicit */signed char) ((((((/* implicit */int) arr_15 [i_7] [i_8] [i_7] [i_8])) << (((((/* implicit */int) arr_3 [(short)19])) + (12))))) / (((/* implicit */int) ((arr_4 [i_7]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    arr_29 [i_7] [(unsigned short)5] [i_8] [i_7] = ((/* implicit */signed char) var_10);
                    var_28 &= ((/* implicit */long long int) 13210462272850753896ULL);
                }
                for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    arr_33 [i_7] [(_Bool)1] [i_7] = ((/* implicit */unsigned short) (short)-32766);
                    arr_34 [(signed char)11] [i_7] [(short)11] = ((((arr_31 [i_7]) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_16)) <= (((/* implicit */int) arr_6 [i_7])))))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3629001029U)) ? (((/* implicit */int) arr_27 [i_7] [i_7] [(unsigned short)5] [(unsigned short)5])) : (((/* implicit */int) arr_24 [i_7] [i_8] [i_7]))))));
                }
                for (unsigned int i_11 = 0; i_11 < 15; i_11 += 3) 
                {
                    arr_38 [i_7] [i_8] [i_7] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */int) arr_5 [i_7])) + (292))) - (10))))));
                    /* LoopNest 2 */
                    for (short i_12 = 1; i_12 < 14; i_12 += 4) 
                    {
                        for (short i_13 = 0; i_13 < 15; i_13 += 3) 
                        {
                            {
                                arr_45 [i_7] [i_8] [i_7] [i_7] [i_13] = ((/* implicit */signed char) arr_24 [i_7] [i_7] [i_7]);
                                var_29 ^= ((/* implicit */unsigned short) arr_25 [10U] [i_8] [(short)2] [12U]);
                                var_30 *= ((/* implicit */signed char) ((unsigned short) arr_30 [10U]));
                            }
                        } 
                    } 
                }
                var_31 = ((/* implicit */short) var_16);
            }
        } 
    } 
}
