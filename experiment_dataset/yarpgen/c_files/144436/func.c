/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144436
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
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((unsigned long long int) ((unsigned long long int) ((15779050904515045077ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)61738)) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) max((((/* implicit */int) max((var_1), (var_6)))), (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_2)))))))));
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (unsigned short)43226))));
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((max((((/* implicit */unsigned long long int) max((var_2), (var_6)))), (max((15779050904515045077ULL), (((/* implicit */unsigned long long int) (unsigned short)21)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1])))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_12 [i_1] [i_2] = min((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned short)120)))) != (((/* implicit */int) arr_1 [i_0]))))), (((arr_3 [i_0 - 1] [i_2 - 1]) & (arr_3 [i_0 + 1] [i_2 - 1]))));
                        var_13 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) var_1)) / (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7168))) < (arr_8 [i_0] [i_1] [i_2] [i_3])))))), (max((((/* implicit */int) var_7)), (((((/* implicit */int) var_1)) | (((/* implicit */int) var_2))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 1) 
                        {
                            arr_15 [(unsigned short)6] = ((/* implicit */unsigned short) arr_8 [i_4 + 1] [i_4] [i_2 - 1] [i_2 - 1]);
                            var_14 &= (unsigned short)61734;
                        }
                        for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 2) 
                        {
                            var_15 = min((1587782309429645753ULL), (((/* implicit */unsigned long long int) (unsigned short)6862)));
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_5 - 1] = ((/* implicit */unsigned short) (((+(((unsigned long long int) var_5)))) * (0ULL)));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 3) 
                        {
                            var_16 &= ((/* implicit */unsigned short) var_9);
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23533))) - (3178530278362983209ULL)))));
                        }
                        arr_22 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)0)), (18446744073709551615ULL)))) && (((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_2 + 1] [i_1] [i_2])))))), (min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 16858961764279905862ULL))))), (arr_1 [i_0])))));
                        arr_23 [i_0] [i_1] = min((max((((/* implicit */unsigned long long int) min(((unsigned short)22283), ((unsigned short)61734)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) % (arr_11 [i_0]))))), (arr_11 [i_3]));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_8 = 2; i_8 < 16; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                for (unsigned short i_10 = 1; i_10 < 17; i_10 += 3) 
                {
                    {
                        var_18 = ((((/* implicit */_Bool) 16164016129469996029ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43226))) : (0ULL));
                        arr_37 [i_10] [i_10] = ((/* implicit */unsigned short) arr_0 [(unsigned short)12]);
                        arr_38 [i_10] [i_8] [i_9] [i_9] [i_9] [i_10] = ((arr_31 [i_7] [i_8]) << ((((-(13186219898564381568ULL))) - (5260524175145170006ULL))));
                    }
                } 
            } 
        } 
        arr_39 [i_7] |= ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)22320));
        var_19 = ((/* implicit */unsigned long long int) var_2);
        var_20 = (+(var_8));
    }
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) arr_20 [i_11] [i_11] [18ULL] [i_11] [i_11])) - (5834))))))));
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 14; i_12 += 3) 
        {
            for (unsigned short i_13 = 1; i_13 < 11; i_13 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_33 [i_11] [i_13 + 2] [i_13 - 1] [i_13 + 2]))));
                    arr_48 [i_11] [i_12] [i_13] = ((/* implicit */unsigned short) ((3239417049325537570ULL) > (arr_14 [i_11] [i_11] [19ULL] [i_12] [i_13 + 3])));
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((arr_8 [i_11] [i_11] [i_11] [i_13]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65514))))))));
                }
            } 
        } 
    }
    for (unsigned short i_14 = 0; i_14 < 20; i_14 += 3) 
    {
        var_24 *= max((((((/* implicit */_Bool) ((unsigned short) (unsigned short)4530))) ? (((((/* implicit */_Bool) var_6)) ? (9607274846469636174ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43220))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65530))))))), ((+(((((/* implicit */_Bool) (unsigned short)5387)) ? (15363660686521667292ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_14] [i_14] [i_14] [i_14] [i_14]))))))));
        var_25 = ((/* implicit */unsigned short) (~(((18446744073709551615ULL) & (13704584096427332887ULL)))));
    }
    var_26 = ((/* implicit */unsigned short) var_8);
    var_27 = (~(var_9));
    var_28 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? ((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)22316)) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) var_0))));
}
