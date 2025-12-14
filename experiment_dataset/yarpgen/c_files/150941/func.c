/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150941
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((((/* implicit */int) var_2)) >> (((((unsigned long long int) 889921609)) - (889921597ULL))))) << (((var_4) - (2053061086))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) var_13);
        arr_2 [i_0 - 1] = ((/* implicit */signed char) arr_1 [(unsigned short)15]);
    }
    for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) max((arr_0 [i_1 - 1]), (((/* implicit */int) max(((!(((/* implicit */_Bool) var_17)))), ((_Bool)1))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_3 = 3; i_3 < 10; i_3 += 3) 
            {
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_13))));
                var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_8 [i_1]) : (var_5)))) ? ((-(var_15))) : (var_13)));
            }
            for (signed char i_4 = 1; i_4 < 12; i_4 += 2) 
            {
                var_24 -= ((/* implicit */signed char) var_13);
                var_25 -= ((/* implicit */unsigned long long int) (signed char)-118);
            }
            for (int i_5 = 1; i_5 < 12; i_5 += 2) 
            {
                var_26 = ((/* implicit */unsigned short) ((unsigned long long int) var_10));
                arr_15 [i_1] [i_2] &= ((/* implicit */unsigned long long int) -920469972);
                arr_16 [i_1] [3] [i_1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */int) (signed char)63)) >> (((arr_5 [i_1]) - (583979315)))))) : (((/* implicit */signed char) ((((/* implicit */int) (signed char)63)) >> (((((arr_5 [i_1]) - (583979315))) + (1400653736))))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 4) 
            {
                for (int i_7 = 4; i_7 < 12; i_7 += 2) 
                {
                    {
                        arr_24 [i_1] [0ULL] [i_6 + 3] [i_6 + 3] [i_6] [i_7] = ((/* implicit */unsigned short) (signed char)-117);
                        var_27 = ((/* implicit */int) (signed char)86);
                        var_28 = ((/* implicit */unsigned long long int) var_4);
                        var_29 -= ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
                    }
                } 
            } 
        }
        arr_25 [i_1] [i_1] = ((/* implicit */signed char) arr_20 [i_1 - 1] [i_1]);
        var_30 += ((/* implicit */signed char) ((int) ((signed char) (signed char)-99)));
        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((unsigned short) max((var_14), (arr_4 [6LL] [i_1 + 1])))))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 2; i_8 < 17; i_8 += 3) 
    {
        arr_29 [(unsigned short)2] |= ((/* implicit */signed char) (-(((/* implicit */int) var_12))));
        arr_30 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) && (((((/* implicit */_Bool) 13199890675319924432ULL)) && (((/* implicit */_Bool) (signed char)127))))));
        /* LoopNest 3 */
        for (signed char i_9 = 2; i_9 < 19; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 3; i_10 < 19; i_10 += 2) 
            {
                for (int i_11 = 3; i_11 < 20; i_11 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_12 = 1; i_12 < 20; i_12 += 1) 
                        {
                            var_32 = ((((/* implicit */_Bool) 233762587)) ? (var_15) : (((((/* implicit */_Bool) (unsigned short)56825)) ? (((/* implicit */int) var_2)) : (var_17))));
                            var_33 = ((/* implicit */int) arr_35 [i_8] [i_8] [i_8] [i_8] [16ULL]);
                        }
                        var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) arr_33 [i_8] [i_8] [i_8] [i_8]))));
                        arr_42 [i_8] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) & (arr_38 [i_8] [i_8] [i_8] [i_8] [i_8]))) >> (((/* implicit */int) arr_26 [i_8] [i_9 + 1]))));
                        var_35 = ((((/* implicit */int) ((unsigned short) var_15))) << (((((/* implicit */int) arr_27 [i_8])) >> (((var_5) + (1604656446633586953LL))))));
                    }
                } 
            } 
        } 
        var_36 -= (signed char)75;
    }
    for (signed char i_13 = 2; i_13 < 8; i_13 += 2) 
    {
        var_37 = ((/* implicit */signed char) arr_22 [i_13]);
        arr_47 [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */unsigned long long int) var_17)) : (5246853398389627165ULL)))) ? (((var_15) | (((/* implicit */int) arr_36 [i_13] [i_13] [i_13 - 1] [5] [i_13 + 3] [i_13])))) : (((/* implicit */int) ((signed char) var_8)))));
    }
    var_38 = ((((var_15) >> (((((/* implicit */int) var_12)) - (15728))))) >> (((((/* implicit */int) ((unsigned short) 1694361368))) - (59148))));
}
