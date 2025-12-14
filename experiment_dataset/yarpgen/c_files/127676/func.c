/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127676
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
    for (unsigned long long int i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned int) -3877094968371366555LL);
            var_11 = ((/* implicit */long long int) ((-3877094968371366555LL) != (var_5)));
        }
        for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_12 = ((/* implicit */signed char) var_10);
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_1 [(signed char)11]))) ? (((int) arr_2 [i_0 - 2])) : (var_7)));
            var_14 += ((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0]));
            arr_10 [i_2] [i_2] = arr_8 [i_2] [i_0 - 3] [i_0 - 3];
            /* LoopSeq 3 */
            for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                var_15 = ((/* implicit */unsigned long long int) ((var_7) / (var_4)));
                var_16 = (+(arr_4 [i_0 - 1]));
                arr_13 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 3] [i_0 + 1] [i_0 - 4]))) <= (var_9)));
                arr_14 [i_0 - 4] [i_2] [i_2] = ((long long int) arr_7 [i_0 - 2]);
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    for (long long int i_5 = 1; i_5 < 18; i_5 += 2) 
                    {
                        {
                            arr_21 [i_0] [i_4] [i_2] [i_4] [i_5 + 1] = ((/* implicit */signed char) ((arr_16 [i_0] [i_2] [i_5 + 1] [i_0] [i_0 - 2] [i_0]) / (arr_16 [(unsigned short)15] [i_2] [i_5 + 1] [i_2] [i_0 - 3] [i_4])));
                            arr_22 [i_2] = var_2;
                            var_17 = ((/* implicit */short) 3102159808237125399LL);
                            var_18 = ((/* implicit */unsigned long long int) ((_Bool) 281474976709632LL));
                        }
                    } 
                } 
            }
            for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                var_19 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_12 [i_0] [i_2] [(signed char)3])) : (var_2))) << (((arr_25 [i_0 + 2] [i_0 + 2] [i_6]) + (4878256606320406311LL)))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) ((unsigned char) arr_8 [i_2] [i_6] [i_6]))) : ((+(var_7)))));
            }
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                arr_28 [i_0] [i_0] [i_2] [i_0] = ((arr_24 [i_0] [i_0] [i_0 + 2]) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 2])) : (var_7));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */long long int) arr_26 [i_0 - 3] [i_0 + 1] [i_0 - 2] [i_0 - 2])) : (arr_9 [i_0 - 3] [i_0 - 3] [i_2])));
            }
        }
        arr_29 [2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0 - 4] [i_0] [i_0 - 4] [i_0 - 4])) ? (((/* implicit */unsigned long long int) arr_4 [i_0])) : (var_10)))) ? (((var_2) & (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) var_0)))))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            for (signed char i_9 = 3; i_9 < 17; i_9 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_11 = 0; i_11 < 20; i_11 += 1) 
                        {
                            arr_39 [i_0] [i_0] [i_0] [i_8] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) var_8));
                            var_22 |= ((short) arr_15 [10U] [10U] [i_9 - 2] [i_10] [i_11]);
                            arr_40 [i_0] [i_8] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 3]))) : (var_5)))));
                        }
                        for (int i_12 = 2; i_12 < 16; i_12 += 4) 
                        {
                            var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_8] [i_9] [i_12 + 3])) ? (var_10) : (((/* implicit */unsigned long long int) var_2))))) && (((_Bool) -3877094968371366569LL))));
                            arr_43 [i_10] [i_10] [i_10] [i_10] [i_10] [(signed char)4] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0 - 4])) || (((/* implicit */_Bool) (short)(-32767 - 1)))));
                        }
                        for (long long int i_13 = 3; i_13 < 16; i_13 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) ((var_0) != (((/* implicit */int) arr_45 [i_13] [i_13] [i_10] [i_10] [i_10] [i_0 + 2] [i_0 + 1]))));
                            var_25 = ((/* implicit */long long int) var_10);
                        }
                        var_26 += ((/* implicit */signed char) var_7);
                    }
                    var_27 = ((((/* implicit */long long int) var_3)) + (arr_20 [i_0 - 2] [i_0 - 1] [i_0]));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */long long int) var_2);
    var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (var_10)))) : (((/* implicit */int) ((signed char) (_Bool)1)))))) + (var_10)));
    var_30 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_7)) < (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (var_7)))), (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
}
