/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128260
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
    for (long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) arr_2 [(signed char)15] [(signed char)15])) ? (arr_4 [i_0 - 1] [i_1]) : (arr_4 [i_0 + 1] [0ULL]))))) >= (max((((/* implicit */long long int) min(((short)-32007), ((short)32767)))), (((((arr_4 [i_0] [13U]) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_2 [i_0] [i_1 + 1])) + (71))) - (24)))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_11)) == (var_3))))));
                            var_16 ^= ((/* implicit */unsigned char) min((((((/* implicit */int) arr_9 [i_3] [i_2] [i_2] [i_2 + 1])) - (((/* implicit */int) arr_7 [i_0 - 2] [i_1 + 1] [i_1 + 1] [i_2 + 1])))), (arr_0 [i_0 - 2])));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_4 = 2; i_4 < 12; i_4 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            var_17 = ((/* implicit */unsigned char) 4092U);
            /* LoopNest 2 */
            for (unsigned char i_6 = 2; i_6 < 12; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_4 + 1])) ? ((~(((/* implicit */int) (signed char)-32)))) : (((/* implicit */int) ((var_6) > (arr_22 [i_4 - 1] [i_6 + 1] [i_6 + 1] [i_7]))))));
                        var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)49))) : (3510653746U))), (((/* implicit */unsigned int) arr_7 [i_4] [i_4 - 2] [i_6 - 1] [i_6 - 2]))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
        {
            for (int i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                for (signed char i_10 = 0; i_10 < 13; i_10 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) var_7);
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (((-(((/* implicit */int) arr_31 [i_4 - 1] [i_4 - 1] [i_4 - 1])))) != (((/* implicit */int) var_7)))))));
                        /* LoopSeq 2 */
                        for (signed char i_11 = 3; i_11 < 11; i_11 += 4) 
                        {
                            arr_41 [i_4] [i_11] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_40 [i_4] [i_4] [i_11] [i_9] [i_10] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4] [i_8] [i_8])))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) max(((signed char)-87), ((signed char)81))))));
                            var_22 *= ((/* implicit */short) arr_14 [i_4 - 1]);
                            var_23 = ((/* implicit */short) var_2);
                        }
                        for (unsigned long long int i_12 = 2; i_12 < 10; i_12 += 1) 
                        {
                            var_24 += ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_23 [i_4] [i_4 - 2] [i_12 - 2] [i_12] [i_12] [i_12 - 1])) ? (arr_23 [i_4] [i_4 + 1] [i_12 + 3] [11ULL] [i_12 + 1] [i_12 - 2]) : (arr_23 [i_4 - 2] [i_4 - 2] [i_12 + 1] [i_4 - 2] [i_4 - 2] [i_12 - 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_4 + 1] [i_8] [i_4 + 1])) & (((/* implicit */int) arr_21 [i_4] [(signed char)5] [i_4 - 2])))))));
                            arr_45 [i_4 + 1] [i_8] [i_9] [i_10] [i_12 + 2] = var_11;
                            var_25 = ((/* implicit */unsigned long long int) (~(min((((((/* implicit */_Bool) 538752778942906682LL)) ? (arr_4 [i_4] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_4 - 2]))))), (-1127912291349081821LL)))));
                        }
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_3))));
    var_27 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_12)), (var_6)));
}
