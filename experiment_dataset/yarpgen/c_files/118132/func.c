/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118132
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])) % (var_10))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1])) | (((/* implicit */int) var_17)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] [i_1] [i_2 - 1] [i_1] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_1))));
                                var_19 = (!(((/* implicit */_Bool) 204234940)));
                                var_20 = ((/* implicit */unsigned int) (-(arr_11 [i_0] [1ULL] [i_2 - 1] [i_3] [i_2] [i_2])));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 4 */
        for (int i_5 = 3; i_5 < 11; i_5 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */long long int) var_14);
            var_22 = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_5 - 3]))));
            /* LoopNest 3 */
            for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        {
                            var_23 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-14892)) ? (((/* implicit */int) arr_2 [i_5 - 2])) : (((/* implicit */int) (unsigned short)480))));
                            arr_25 [i_0] [9U] [i_5] [i_0] [i_5] [i_6] [i_0] = ((/* implicit */unsigned int) 204234940);
                        }
                    } 
                } 
            } 
        }
        for (int i_9 = 3; i_9 < 11; i_9 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_9] [i_9] [i_9 - 1] [i_9] [i_9 - 3] [i_9 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_0] [11ULL] [i_0] [i_0]) && (((/* implicit */_Bool) (short)-9060)))))) : (((unsigned long long int) var_4))));
            /* LoopNest 2 */
            for (long long int i_10 = 2; i_10 < 11; i_10 += 4) 
            {
                for (int i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    {
                        var_25 |= ((/* implicit */int) arr_8 [i_0] [i_9] [i_10 + 2] [i_11]);
                        arr_34 [i_0] [i_10] [i_9] [i_0] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_30 [i_11] [i_10] [i_9] [i_0])))) + (arr_29 [i_9 - 1] [i_9 - 1])));
                    }
                } 
            } 
        }
        for (int i_12 = 3; i_12 < 11; i_12 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned long long int) ((_Bool) var_15));
            var_27 = ((/* implicit */unsigned short) 5528354062518064638LL);
        }
        for (int i_13 = 3; i_13 < 11; i_13 += 4) /* same iter space */
        {
            arr_39 [i_13] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_13 - 3] [i_13 - 3]))) * (1345779313U)));
            var_28 = ((/* implicit */short) (_Bool)0);
        }
    }
    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_8)) - (19894)))));
}
