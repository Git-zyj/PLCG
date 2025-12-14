/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164881
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
    var_18 -= ((/* implicit */long long int) (+(var_13)));
    var_19 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)32767)), ((~(((/* implicit */int) ((unsigned short) var_6)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_3 - 1] [i_3 - 1])) && (((/* implicit */_Bool) (unsigned char)197))));
                        arr_14 [i_0 - 1] [i_0 - 1] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32766))) > (var_7));
                        var_21 |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) | (4100095859U)));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_4 = 3; i_4 < 20; i_4 += 4) /* same iter space */
                    {
                        arr_17 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_10)))))))), (((long long int) (unsigned short)32769))));
                        var_22 += ((/* implicit */signed char) (((_Bool)0) ? (16003552211409059577ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12366)))));
                        var_23 = ((/* implicit */long long int) (unsigned char)36);
                        arr_18 [19U] [i_1] [i_2] [i_4 - 1] = (((_Bool)1) ? (((2443191862300492039ULL) >> (((((/* implicit */int) (unsigned short)32769)) - (32713))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20717))));
                    }
                    for (long long int i_5 = 3; i_5 < 20; i_5 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
                        {
                            arr_25 [i_0 - 2] [i_0] [i_0 - 2] [i_1] [i_1] [i_5 - 3] [3LL] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255))));
                            var_24 ^= ((/* implicit */unsigned char) ((_Bool) 2047U));
                            arr_26 [8U] [i_0] = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32765))) : (arr_8 [i_0] [i_0 + 1]))) : (((/* implicit */unsigned long long int) (-(-4029647312976697837LL)))));
                        }
                        for (long long int i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
                        {
                            arr_29 [i_0] [i_1] [(unsigned short)2] [20ULL] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 902238170260762346ULL)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 175254813U)) : (arr_8 [i_5 - 3] [i_0 - 1]))) : (max((((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_5 - 2])), (arr_8 [9LL] [9LL])))));
                            arr_30 [i_2] [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) arr_21 [9U] [i_1] [i_1] [i_5] [(unsigned char)6] [i_1]);
                            var_25 = ((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))))), (arr_16 [3ULL]))));
                            arr_31 [i_7] [i_5] [i_1] = ((/* implicit */unsigned int) (~((-(var_5)))));
                        }
                        var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_16 [i_0 - 1])))) < (max((((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_1] [(unsigned short)4] [i_1])) ? (3085695999437747126LL) : (((/* implicit */long long int) 1932323811U)))), (((/* implicit */long long int) (+(var_9))))))));
                        arr_32 [i_5 - 2] [i_2] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_8)), (max((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 444093264U)))))))));
                        arr_33 [13U] = ((/* implicit */signed char) (~(((((/* implicit */long long int) ((unsigned int) arr_13 [i_1]))) % (((((/* implicit */_Bool) 162403388U)) ? (var_11) : (((/* implicit */long long int) 536870912U))))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        var_27 = ((unsigned long long int) (+(2233785415175766016LL)));
                        var_28 -= (-(3809255902U));
                        var_29 = ((/* implicit */unsigned long long int) arr_34 [(short)20] [i_1] [i_1] [11U]);
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        arr_38 [i_0 - 3] [(unsigned char)14] [13U] [(unsigned short)2] = ((/* implicit */long long int) 2764154318U);
                        /* LoopSeq 3 */
                        for (int i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15))));
                            arr_41 [17LL] [(unsigned char)1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 3] [i_1])) ? (var_17) : (((/* implicit */unsigned long long int) var_5))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) arr_0 [i_0 + 1] [i_9]))));
                            var_32 |= ((/* implicit */unsigned char) ((unsigned long long int) arr_19 [i_0 - 3] [i_0 - 3] [i_0 - 2] [(unsigned short)15]));
                            var_33 = ((/* implicit */long long int) max((var_33), ((+(var_16)))));
                        }
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                        {
                            var_34 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_0] [(unsigned char)11] [15ULL] [i_1] [(unsigned char)16] [i_9] [i_12 + 1])))))));
                            arr_48 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(2362643483U))))));
                        }
                        var_35 -= ((/* implicit */unsigned char) ((unsigned int) arr_5 [i_0 + 1]));
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (arr_40 [i_0 - 1] [i_0 - 1] [i_2] [i_2] [10U])));
                        arr_49 [i_0] [i_1] [(signed char)5] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 2233785415175766016LL))) ? (2362643484U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0 - 1])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_13 = 4; i_13 < 20; i_13 += 1) 
                    {
                        arr_52 [(short)18] = ((/* implicit */unsigned long long int) var_9);
                        arr_53 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_0);
                    }
                    for (long long int i_14 = 1; i_14 < 20; i_14 += 4) 
                    {
                        arr_57 [i_1] [i_14 + 1] = ((/* implicit */unsigned char) (+(max((2443191862300492038ULL), (((/* implicit */unsigned long long int) 2893408116U))))));
                        arr_58 [i_1] [i_2] = ((/* implicit */int) var_5);
                        arr_59 [i_0 - 1] [i_0 - 1] [i_2] [i_14 - 1] [i_14 + 1] = ((/* implicit */signed char) ((unsigned long long int) (+(arr_46 [i_0 + 1] [1U]))));
                    }
                    var_37 = ((/* implicit */unsigned char) ((((/* implicit */long long int) 567926831U)) > (((long long int) 1432495731U))));
                    /* LoopSeq 2 */
                    for (unsigned char i_15 = 3; i_15 < 19; i_15 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned int) var_5);
                        var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) max(((-(arr_54 [i_0 + 1]))), (((unsigned int) arr_54 [i_0 - 2])))))));
                        arr_62 [i_15] [i_15] = ((/* implicit */_Bool) ((unsigned int) 0ULL));
                    }
                    /* vectorizable */
                    for (long long int i_16 = 0; i_16 < 21; i_16 += 4) 
                    {
                        arr_67 [i_0] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))));
                        var_40 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) 3754869895U)))));
                        arr_68 [i_0 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_1] [i_0])) ? (2764154320U) : (((unsigned int) (unsigned short)32769))));
                        var_41 = (~(((/* implicit */int) (signed char)-48)));
                        arr_69 [19] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_12 [(_Bool)1] [(_Bool)1]))));
                    }
                }
            } 
        } 
    } 
}
