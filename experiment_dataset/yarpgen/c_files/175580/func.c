/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175580
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((unsigned short) (signed char)-122));
        var_11 = ((/* implicit */signed char) arr_0 [(signed char)0]);
        var_12 = ((/* implicit */int) var_8);
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 3; i_1 < 14; i_1 += 2) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [(unsigned short)10])) * (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6)))) : (var_0)));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_14 *= ((/* implicit */short) ((unsigned long long int) ((int) min((((/* implicit */int) (signed char)108)), (2147483647)))));
            arr_7 [i_1] |= ((/* implicit */unsigned char) ((unsigned short) var_10));
        }
        for (unsigned char i_3 = 3; i_3 < 15; i_3 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_1 - 3] [i_3 - 3] [i_3 - 1])) ? (((/* implicit */unsigned int) -1114317061)) : (var_8))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                var_16 = ((/* implicit */unsigned short) arr_9 [i_1]);
                var_17 = ((/* implicit */unsigned int) arr_5 [i_1 + 1]);
            }
            var_18 -= ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned short) min((((/* implicit */int) (_Bool)1)), (var_7))))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)-1618)) * (((/* implicit */int) var_1))))) ? (arr_9 [i_3]) : (((/* implicit */long long int) -1114317064))))));
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                var_19 &= ((/* implicit */unsigned int) var_7);
                arr_14 [i_1] [i_3] [i_1] = ((/* implicit */_Bool) ((((((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) ? (((int) (_Bool)1)) : (arr_12 [i_5] [i_3] [i_1])));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    var_20 = ((/* implicit */unsigned char) arr_3 [i_3 - 3]);
                    var_21 = ((/* implicit */unsigned short) var_4);
                    var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_16 [i_1] [i_1]))));
                    var_23 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_16 [i_1] [i_3])) : (((/* implicit */int) arr_4 [i_5]))))));
                    var_24 |= ((/* implicit */short) ((signed char) arr_10 [i_1 - 3] [i_3] [i_5] [i_6]));
                }
                var_25 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (((((/* implicit */long long int) ((/* implicit */int) var_3))) % (arr_9 [i_5])))));
            }
            for (int i_7 = 1; i_7 < 14; i_7 += 2) 
            {
                arr_19 [i_1] [(unsigned short)4] [i_1] |= ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
                var_26 = ((/* implicit */long long int) ((unsigned short) (~(((/* implicit */int) (signed char)126)))));
                arr_20 [i_1] [i_7] [i_7] [i_7] = ((/* implicit */int) var_1);
                var_27 += ((/* implicit */unsigned int) ((unsigned char) max((var_1), (var_3))));
            }
        }
        /* vectorizable */
        for (unsigned char i_8 = 3; i_8 < 15; i_8 += 4) /* same iter space */
        {
            arr_25 [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) (_Bool)1);
            arr_26 [i_1 + 2] &= ((/* implicit */unsigned char) ((_Bool) arr_22 [i_8 - 2]));
            arr_27 [i_1] = ((/* implicit */unsigned long long int) ((_Bool) arr_13 [i_1 - 1]));
            arr_28 [i_8] [i_8 - 3] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_1 - 2])) | (((/* implicit */int) var_1))));
        }
        /* LoopSeq 1 */
        for (signed char i_9 = 2; i_9 < 14; i_9 += 1) 
        {
            arr_32 [i_1 + 1] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 - 1])))))));
            arr_33 [i_1 - 3] [i_9 + 2] [i_9 - 2] = ((/* implicit */unsigned int) var_9);
        }
    }
    /* vectorizable */
    for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
    {
        arr_36 [i_10] = ((unsigned char) (!((_Bool)1)));
        var_28 = ((/* implicit */signed char) ((unsigned short) (unsigned char)107));
    }
    var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (3755692524U) : (var_8)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) : (var_6))))) : (((/* implicit */unsigned long long int) var_8)));
}
