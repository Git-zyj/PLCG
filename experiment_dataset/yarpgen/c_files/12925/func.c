/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12925
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
    var_15 = ((/* implicit */unsigned int) ((_Bool) var_8));
    var_16 += ((/* implicit */unsigned char) var_4);
    var_17 = ((/* implicit */short) var_9);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_18 *= ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)28)), (9223372036854775805LL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) * (arr_0 [i_0]))) : (min((((/* implicit */unsigned int) ((int) arr_0 [i_0]))), (941689430U))));
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) arr_2 [i_1] [i_1]))));
            var_20 = ((/* implicit */_Bool) (+(min((((/* implicit */long long int) ((arr_0 [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))), (((long long int) var_1))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_21 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)81))) : (arr_0 [(unsigned char)16])))));
            var_22 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) min((((/* implicit */int) var_11)), (var_7)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2] [5LL])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))) : (arr_5 [i_0])))));
        }
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            var_23 = var_5;
            var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775782LL)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (unsigned char)244))));
            var_25 = ((/* implicit */unsigned short) min((var_2), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 941689423U)), (9223372036854775782LL))))));
            var_26 |= ((/* implicit */_Bool) var_11);
        }
        for (short i_4 = 4; i_4 < 16; i_4 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
            {
                var_27 += min((var_7), ((-(((/* implicit */int) arr_4 [i_4 - 4] [1U])))));
                var_28 = ((/* implicit */unsigned char) var_9);
            }
            /* vectorizable */
            for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
            {
                var_29 = ((((/* implicit */_Bool) (-(var_7)))) ? (((((/* implicit */_Bool) arr_16 [(signed char)3] [i_4] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))));
                var_30 = ((/* implicit */unsigned short) var_9);
                var_31 = arr_6 [i_0];
                var_32 += ((/* implicit */signed char) 6866173712668002210LL);
            }
            /* vectorizable */
            for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
            {
                var_33 = arr_5 [i_4 - 1];
                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (arr_8 [i_7] [i_0]) : (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-53)) + (2147483647))) >> (((134217727U) - (134217726U))))))));
            }
            /* vectorizable */
            for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
            {
                var_35 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_8])) ? (((/* implicit */int) (short)32751)) : (((/* implicit */int) var_8)))))));
                var_36 *= arr_0 [i_4 - 1];
            }
            arr_24 [i_0] = ((/* implicit */unsigned int) 15538448635613493907ULL);
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                {
                    var_37 = ((/* implicit */unsigned int) var_6);
                    var_38 = ((/* implicit */signed char) arr_19 [i_0] [i_9] [i_9] [(unsigned short)12]);
                    var_39 = ((/* implicit */unsigned char) max((max((var_2), (((/* implicit */unsigned long long int) arr_23 [i_0] [i_0])))), (max((((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), (var_3))))))));
                }
            } 
        } 
    }
    for (signed char i_11 = 0; i_11 < 17; i_11 += 4) /* same iter space */
    {
        var_40 = ((/* implicit */_Bool) var_2);
        var_41 = max((var_10), (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) arr_26 [i_11])))))));
        arr_31 [(unsigned short)1] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_10)));
    }
}
