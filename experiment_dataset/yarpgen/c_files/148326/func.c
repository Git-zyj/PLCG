/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148326
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
    var_18 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((unsigned long long int) 6875835561284467277ULL))))) ? (min((((/* implicit */unsigned long long int) var_16)), (11570908512425084338ULL))) : (((/* implicit */unsigned long long int) ((var_17) - (((/* implicit */long long int) min((var_13), (((/* implicit */unsigned int) var_10))))))))));
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (signed char)-113)), ((-(((unsigned long long int) var_17))))));
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_5))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            var_21 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
            var_22 *= ((/* implicit */unsigned int) ((arr_4 [i_1 - 1]) + (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1 - 1] [i_0]))));
        }
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 4294967295U))) ? ((-(max((((/* implicit */long long int) var_12)), (-1LL))))) : (var_2)));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        /* LoopSeq 4 */
        for (signed char i_3 = 1; i_3 < 17; i_3 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_4 = 1; i_4 < 19; i_4 += 2) 
            {
                var_24 = ((/* implicit */_Bool) var_7);
                arr_17 [i_3] [i_3] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) 4294967286U)) ? (3780129698833443636ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3] [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_3])))))));
                var_25 = ((/* implicit */int) arr_8 [i_2] [i_2]);
                var_26 = ((/* implicit */long long int) ((var_1) && (((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3 + 3] [i_3]))));
                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) 16212249959463149221ULL))));
            }
            for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                arr_22 [i_2] [i_2] [i_2] |= ((/* implicit */int) var_11);
                arr_23 [i_3] [i_5] = ((/* implicit */signed char) arr_11 [i_2]);
            }
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                var_28 -= ((((/* implicit */_Bool) (unsigned char)255)) ? ((+(((/* implicit */int) arr_15 [i_2] [i_3] [i_2] [i_2])))) : (var_6));
                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & ((~(((/* implicit */int) (signed char)-56)))))))));
            }
            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
            /* LoopSeq 2 */
            for (int i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                var_31 = ((/* implicit */unsigned long long int) var_3);
                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2102784866)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (2458507588546118267ULL)));
                var_33 += ((/* implicit */_Bool) arr_24 [i_2] [i_2]);
            }
            for (signed char i_8 = 1; i_8 < 16; i_8 += 4) 
            {
                arr_31 [i_2] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) - (var_14)));
                var_34 = ((/* implicit */long long int) (+(arr_18 [i_2] [i_2] [i_2] [16U])));
                arr_32 [i_3] [i_2] [i_8] [i_2] = ((/* implicit */signed char) arr_29 [i_2] [i_8] [i_8]);
                arr_33 [i_8] [i_3] [i_3] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)55))) : (var_13)));
            }
        }
        for (unsigned char i_9 = 2; i_9 < 18; i_9 += 4) /* same iter space */
        {
            var_35 = (+((~(4635041401838885105ULL))));
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) (signed char)55))));
        }
        for (unsigned char i_10 = 2; i_10 < 18; i_10 += 4) /* same iter space */
        {
            var_37 *= ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_10 - 1] [i_10 + 2] [i_10 + 1] [i_10 - 2]))) == (arr_19 [i_10 + 1] [i_10] [i_10 - 1] [i_10 + 2]));
            arr_39 [i_2] [i_10] = ((/* implicit */unsigned long long int) 4294967295U);
        }
        for (unsigned char i_11 = 2; i_11 < 18; i_11 += 4) /* same iter space */
        {
            var_38 = ((/* implicit */unsigned char) var_7);
            var_39 = var_5;
        }
        arr_42 [i_2] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_24 [i_2] [i_2])) : (-8413039561347676346LL))));
    }
}
