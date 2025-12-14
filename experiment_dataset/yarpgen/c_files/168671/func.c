/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168671
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
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((var_3) ? (((/* implicit */int) (short)32766)) : (((((((/* implicit */int) (unsigned short)32372)) - (((/* implicit */int) (unsigned short)32372)))) & (((/* implicit */int) arr_5 [i_0]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) min(((unsigned short)32372), (arr_0 [i_0 + 1])))) - (((/* implicit */int) ((short) (+(((/* implicit */int) (_Bool)1))))))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
                            {
                                arr_14 [i_2] [i_4] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_9 [(signed char)1] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)54)))) + (2147483647))) >> (((((((/* implicit */int) var_9)) & (((/* implicit */int) var_7)))) - (258)))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0 + 1] [i_2 - 2] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)33163))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))) | (arr_10 [i_0] [(_Bool)1] [i_2] [i_3] [i_4]))))))));
                                arr_15 [i_4] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (+((+(((/* implicit */int) var_17))))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
                            {
                                var_20 = ((/* implicit */long long int) (+(min((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_5])) || (((/* implicit */_Bool) var_2))))), (min((((/* implicit */int) (short)9804)), (arr_6 [i_0] [i_1] [i_5])))))));
                                var_21 = ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)62695))) & (arr_8 [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5)))) : (((long long int) var_7)))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)-9811))))));
                            }
                            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
                            {
                                arr_21 [i_0 - 1] [i_0] [i_1] [i_1] [i_6] [0U] [2U] = min((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_3] [(short)6] [i_0 + 1])) <= (((/* implicit */int) var_7))))));
                                arr_22 [i_0] [i_1] [i_2] [i_0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] [i_6])), (4891756161347609014LL))), (((/* implicit */long long int) arr_12 [i_1] [(unsigned char)2] [i_2] [i_1] [i_1] [(short)1] [i_0]))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) arr_17 [i_0 - 1]))))));
                                arr_23 [i_6] [i_6] [i_6] [i_3] [i_6] [i_1] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (short)18309))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        for (unsigned short i_8 = 1; i_8 < 16; i_8 += 4) 
        {
            {
                arr_29 [i_8] = ((/* implicit */signed char) (~(1756898441274460973ULL)));
                arr_30 [i_8] [i_8] = ((/* implicit */unsigned short) ((short) ((unsigned int) (unsigned char)57)));
            }
        } 
    } 
    var_22 = 274476418U;
    var_23 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)24124))));
    /* LoopSeq 1 */
    for (signed char i_9 = 0; i_9 < 18; i_9 += 2) 
    {
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (((+(arr_33 [(unsigned short)5]))) | (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_9] [(short)13] [i_9]))))))));
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            for (short i_11 = 0; i_11 < 18; i_11 += 3) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) arr_34 [i_9] [i_10] [i_10]))));
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        for (short i_13 = 0; i_13 < 18; i_13 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_9] [i_11]))) : (1756898441274460973ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) : (((((/* implicit */_Bool) ((arr_34 [10ULL] [i_9] [i_9]) + (arr_31 [i_9])))) ? (((/* implicit */int) min((((/* implicit */short) var_4)), (var_13)))) : (((/* implicit */int) arr_37 [i_11] [i_11] [i_11]))))));
                                arr_42 [i_9] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */signed char) arr_28 [i_10] [i_10]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 ^= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (+(516516414U)))) + (((((/* implicit */unsigned long long int) arr_31 [(unsigned char)2])) * (0ULL))))) % (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_35 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))) : (3778450881U))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)10143)) * (((/* implicit */int) var_2))))))))));
    }
}
