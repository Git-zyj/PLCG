/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102541
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
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((unsigned int) var_12);
        var_15 = ((arr_1 [i_0] [i_0]) + (((unsigned int) max((var_3), (var_9)))));
    }
    /* LoopSeq 4 */
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_16 = min((max((((unsigned int) var_0)), (var_0))), (arr_6 [i_1] [i_1]));
        /* LoopSeq 4 */
        for (unsigned int i_2 = 2; i_2 < 10; i_2 += 2) 
        {
            arr_12 [i_1] [i_1] [i_1] = max((max((arr_0 [i_2 + 2] [13U]), (arr_6 [i_2 - 2] [i_2 + 2]))), (((arr_6 [i_2 - 2] [i_1]) % (arr_0 [i_2 - 1] [i_2 - 1]))));
            var_17 = arr_0 [0U] [13U];
        }
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
        {
            var_18 = max((((unsigned int) 18U)), (((unsigned int) ((4294967281U) & (4294967263U)))));
            var_19 = var_10;
        }
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_5 = 2; i_5 < 11; i_5 += 1) 
            {
                var_20 = var_13;
                var_21 = var_13;
                arr_23 [10U] [10U] [i_5] [i_5] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_5 - 2])))))));
                arr_24 [i_5] [8U] [i_5 + 1] [i_5 - 1] = ((13U) | (578452174U));
            }
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                var_22 = ((/* implicit */unsigned int) max((var_22), (((((((unsigned int) arr_26 [i_4] [i_4])) ^ (((var_3) ^ (arr_14 [10U] [10U]))))) & (((unsigned int) max((arr_18 [i_4] [i_4]), (arr_13 [i_1]))))))));
                var_23 = ((max((((arr_6 [i_6] [i_6]) * (arr_22 [i_4] [i_4]))), (((unsigned int) var_6)))) * (((unsigned int) var_5)));
            }
            var_24 = var_8;
            var_25 = ((/* implicit */unsigned int) max((var_25), (var_1)));
        }
        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            arr_32 [i_1] [i_7] [4U] = ((unsigned int) max((arr_11 [9U] [i_1]), (arr_11 [i_1] [i_1])));
            var_26 = max(((-(((unsigned int) var_13)))), (arr_21 [i_7] [8U] [i_7] [12U]));
        }
        arr_33 [i_1] = ((/* implicit */unsigned int) ((var_10) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [7U]))))))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
    {
        arr_36 [18U] |= ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_8])) || (((/* implicit */_Bool) 2263848773U)))))) - (1826857185U));
        arr_37 [i_8] = arr_34 [i_8];
        /* LoopSeq 3 */
        for (unsigned int i_9 = 1; i_9 < 19; i_9 += 3) 
        {
            var_27 += arr_38 [i_9 - 1] [12U] [i_9 + 1];
            var_28 += arr_35 [i_9 + 1];
            arr_40 [i_9 + 1] [i_9] [i_9 - 1] = var_3;
            var_29 = ((((var_13) ^ (var_13))) & (var_3));
            arr_41 [i_9] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_11)))) || (((/* implicit */_Bool) var_3))));
        }
        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            var_30 = ((unsigned int) ((unsigned int) arr_42 [i_8] [i_10] [i_8]));
            var_31 = (+(arr_42 [i_10] [i_10] [i_10]));
            var_32 = ((/* implicit */unsigned int) ((((unsigned int) arr_43 [i_8] [i_8])) > (arr_39 [i_10])));
        }
        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            arr_46 [i_8] [i_8] [i_8] = arr_42 [i_8] [i_11] [i_8];
            var_33 = ((4157251729U) / (((unsigned int) 42U)));
            arr_47 [i_8] = var_4;
            arr_48 [i_8] = (~(arr_42 [i_8] [i_11] [i_8]));
        }
        var_34 = ((/* implicit */unsigned int) min((var_34), (arr_44 [i_8])));
        /* LoopSeq 3 */
        for (unsigned int i_12 = 2; i_12 < 19; i_12 += 1) /* same iter space */
        {
            arr_51 [9U] [9U] [i_8] = arr_35 [i_12 - 2];
            var_35 = (+(arr_45 [i_8]));
        }
        for (unsigned int i_13 = 2; i_13 < 19; i_13 += 1) /* same iter space */
        {
            var_36 = arr_35 [i_8];
            var_37 = ((unsigned int) var_7);
            /* LoopSeq 1 */
            for (unsigned int i_14 = 1; i_14 < 16; i_14 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_15 = 0; i_15 < 20; i_15 += 3) 
                {
                    var_38 = ((unsigned int) var_6);
                    var_39 = arr_57 [i_14] [i_14] [i_13] [i_14 + 4] [5U];
                    var_40 = ((unsigned int) ((((/* implicit */_Bool) arr_53 [i_8] [i_13])) && (((/* implicit */_Bool) var_0))));
                    arr_61 [i_13] [7U] [i_13] [i_13] = ((unsigned int) arr_55 [i_8] [9U] [11U]);
                }
                arr_62 [i_13] = ((arr_44 [6U]) ^ (arr_58 [i_8] [i_8] [i_14 + 1] [i_8]));
            }
            arr_63 [i_13] = arr_60 [i_8] [i_8] [i_8] [4U] [i_8] [i_13];
        }
        for (unsigned int i_16 = 3; i_16 < 19; i_16 += 3) 
        {
            var_41 ^= ((unsigned int) arr_59 [i_16 + 1] [i_16] [i_16] [i_16] [i_16]);
            var_42 = ((unsigned int) var_1);
            arr_66 [i_8] [i_8] [i_16] = ((unsigned int) arr_56 [i_8] [i_16 - 1] [i_16]);
        }
    }
    for (unsigned int i_17 = 2; i_17 < 14; i_17 += 4) 
    {
        arr_71 [i_17] = ((unsigned int) arr_49 [i_17 - 2] [i_17 - 2] [i_17 - 2]);
        var_43 = (-(((unsigned int) arr_50 [i_17] [i_17])));
        var_44 = ((/* implicit */unsigned int) ((min((max((arr_57 [i_17] [i_17] [i_17] [i_17 - 1] [i_17]), (arr_34 [i_17 - 2]))), (max((var_6), (var_0))))) <= (max((arr_2 [i_17 - 2]), (arr_2 [i_17 - 2])))));
        arr_72 [i_17 + 1] = var_12;
    }
    for (unsigned int i_18 = 0; i_18 < 24; i_18 += 4) 
    {
        var_45 = ((/* implicit */unsigned int) ((var_10) != (arr_75 [i_18])));
        var_46 = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_2) % (var_7))))))), (max((((4294967292U) & (133169152U))), (min((arr_73 [i_18]), (var_5))))));
    }
    var_47 = ((/* implicit */unsigned int) ((max((max((var_5), (var_6))), (((unsigned int) var_12)))) == (var_12)));
}
