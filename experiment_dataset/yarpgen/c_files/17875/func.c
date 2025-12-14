/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17875
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_14) << (((arr_0 [i_0] [i_0]) - (153016031U)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */long long int) var_4)) : ((-9223372036854775807LL - 1LL)))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_20 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0]))) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned int) ((arr_5 [i_0] [i_0] [i_0]) ^ (((/* implicit */int) (unsigned char)5))))))), (var_5)));
            var_21 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [(unsigned char)15] [i_0])), (var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_12))) & (((((/* implicit */_Bool) 134217727LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)251))) >= (134217734LL))))) : (((134217736LL) % (134217720LL)))))));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_17) + (9223372036854775807LL))) << (((((arr_1 [(unsigned short)9]) + (3339793318529070785LL))) - (10LL)))))) && (((/* implicit */_Bool) max((arr_4 [i_0] [i_0]), (var_11))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) max((max((arr_4 [i_0] [i_2]), (-134217701LL))), (min((-134217737LL), (((/* implicit */long long int) 306222869U))))));
            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_3 [i_0] [i_2]), (arr_3 [i_0] [i_2]))))));
            var_24 = ((/* implicit */long long int) max((var_24), (((min((-134217736LL), (((/* implicit */long long int) -194557729)))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)5)) || (((/* implicit */_Bool) arr_2 [i_0]))))))))));
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) 134217701LL))));
        }
        for (unsigned short i_3 = 1; i_3 < 14; i_3 += 2) 
        {
            var_26 = ((/* implicit */long long int) var_6);
            arr_12 [i_0] [i_0] [(unsigned short)16] = ((/* implicit */int) 4294966784U);
        }
    }
    /* vectorizable */
    for (long long int i_4 = 4; i_4 < 18; i_4 += 1) 
    {
        var_27 = ((var_3) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_1)));
        var_28 = ((/* implicit */short) (unsigned char)5);
        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_4] [i_4])) | (var_9))))));
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned short) ((((134217745LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) * (((/* implicit */long long int) 2835203097U))));
    }
    /* LoopSeq 1 */
    for (int i_5 = 3; i_5 < 22; i_5 += 2) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned char) arr_17 [i_5] [i_5]);
        /* LoopSeq 2 */
        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            var_30 *= ((/* implicit */unsigned int) max((((((/* implicit */int) arr_20 [i_5] [i_5 - 2] [12LL])) & (((/* implicit */int) arr_20 [i_5 + 1] [i_5 + 1] [14])))), (((/* implicit */int) arr_20 [i_5 + 1] [i_5 + 1] [6]))));
            arr_23 [i_5] [i_6] = ((/* implicit */long long int) var_8);
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            arr_28 [i_5 - 2] [i_7] [i_5] = ((/* implicit */unsigned char) 4392699911877825171LL);
            arr_29 [i_5] [i_5 - 1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_18))) + (arr_21 [i_5 + 1] [i_7] [i_5])));
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                var_31 -= ((/* implicit */unsigned char) ((unsigned int) arr_21 [i_5] [i_5] [i_7]));
                var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (~(((/* implicit */int) var_16)))))));
                var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_5] [i_7] [i_7])) ? (arr_30 [i_5 - 2] [i_7] [(unsigned short)21] [16U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_5])))))) ? (((var_7) + (arr_21 [6U] [6U] [i_7]))) : (((/* implicit */long long int) arr_22 [i_5 - 3])))))));
            }
            var_34 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (-4392699911877825181LL) : (((/* implicit */long long int) arr_22 [i_7]))));
        }
    }
}
