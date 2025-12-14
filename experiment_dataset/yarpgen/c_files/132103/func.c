/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132103
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
    var_16 = ((/* implicit */int) (~(((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) var_5)))))));
    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_18 = (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
        var_19 = ((/* implicit */unsigned char) ((_Bool) var_12));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) var_14))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
        {
            arr_8 [(_Bool)0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_2]))));
            arr_9 [i_1] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) arr_5 [i_2])))));
        }
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 21; i_3 += 4) /* same iter space */
        {
            var_21 += ((/* implicit */_Bool) (-(((/* implicit */int) var_15))));
            var_22 += ((/* implicit */short) (-(((/* implicit */int) var_14))));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1])))));
        }
        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            var_24 = ((/* implicit */_Bool) min((var_24), ((!((_Bool)0)))));
            var_25 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((-7029990131578552062LL) + (9223372036854775807LL))) >> (((/* implicit */int) var_10))))) ? ((+(9064681128279593398ULL))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_2 [i_1])) : (1491158616347253659ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_11 [i_1] [i_4] [6])), (arr_4 [i_1])))))))));
            var_26 = ((/* implicit */unsigned char) var_10);
            arr_15 [i_1] [(_Bool)1] |= ((/* implicit */unsigned int) (+(((/* implicit */int) var_15))));
        }
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
            var_28 = ((/* implicit */_Bool) ((((/* implicit */int) (!(arr_12 [i_5])))) ^ (((/* implicit */int) var_12))));
            var_29 = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (18290819056002572804ULL) : (((/* implicit */unsigned long long int) 2516569713771342491LL)));
            var_30 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) 14398071326885936670ULL)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_2)))));
        }
        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (_Bool)0))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        var_32 -= ((/* implicit */unsigned char) (_Bool)1);
        arr_20 [i_6] = ((/* implicit */unsigned short) min((max(((-(((/* implicit */int) var_1)))), ((-(((/* implicit */int) arr_17 [i_6] [i_6])))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_6] [i_6])) || (((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))))));
        arr_21 [i_6] = ((/* implicit */unsigned int) (!(var_10)));
    }
    var_33 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -978249308)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) * (((((/* implicit */int) min(((_Bool)0), ((_Bool)0)))) / (((/* implicit */int) ((_Bool) var_5)))))));
    /* LoopSeq 3 */
    for (int i_7 = 1; i_7 < 14; i_7 += 3) 
    {
        arr_26 [i_7] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (max((((/* implicit */unsigned long long int) (unsigned char)57)), (18290819056002572804ULL)))));
        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (((+(((/* implicit */int) arr_4 [i_7 - 1])))) & (((/* implicit */int) (signed char)17)))))));
    }
    for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        var_35 ^= ((/* implicit */unsigned int) arr_6 [15U] [i_8]);
        var_36 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_15))) + (arr_16 [i_8] [i_8])))) ? (min((((/* implicit */unsigned int) var_6)), (var_3))) : (max((arr_14 [i_8]), (((/* implicit */unsigned int) (_Bool)1)))))) + (((((((/* implicit */int) arr_13 [i_8] [i_8] [i_8])) > (((/* implicit */int) var_11)))) ? (var_9) : (max((((/* implicit */unsigned int) var_6)), (arr_14 [(unsigned short)15])))))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_33 [i_9] [(signed char)6] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (-395613834)));
        var_37 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_12))))) ? (var_6) : (((/* implicit */int) arr_25 [(_Bool)1]))))));
    }
}
