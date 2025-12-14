/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112610
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
    var_19 = ((/* implicit */unsigned int) min((var_19), (var_17)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) arr_1 [i_0]);
        arr_3 [(short)11] [(_Bool)1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [(unsigned char)11]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            arr_7 [i_0] = ((/* implicit */int) ((arr_5 [i_1 + 1] [i_1 + 1]) + (arr_5 [i_1 + 1] [i_1])));
            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)48)))))));
            var_22 += ((/* implicit */short) ((((/* implicit */unsigned long long int) var_5)) / (2818035627083380455ULL)));
            var_23 = ((/* implicit */short) ((arr_6 [i_1 - 2] [i_1 - 1]) == (arr_6 [i_1 - 2] [i_1 + 1])));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_0 [i_1 - 2]))));
                var_25 = ((unsigned long long int) arr_8 [(unsigned char)1] [(_Bool)1] [5U]);
                arr_11 [i_0] [i_0] [(signed char)11] = ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]);
                var_26 = ((/* implicit */unsigned int) ((short) (short)0));
            }
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-14))));
                var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)71))));
                /* LoopSeq 3 */
                for (unsigned short i_4 = 2; i_4 < 12; i_4 += 2) 
                {
                    var_29 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-79)) ? ((~(var_7))) : (10U)));
                    var_30 ^= ((/* implicit */signed char) var_7);
                }
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    var_31 = ((/* implicit */signed char) ((int) arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1]));
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned short) arr_20 [i_0] [i_0] [11] [i_0] [i_0] [i_0] [i_0]);
                        arr_23 [i_6] [i_5 - 1] [i_3] [i_3] [6U] [i_0] = ((/* implicit */short) arr_17 [i_0] [i_0] [(_Bool)1] [i_5 - 1] [8] [i_1 + 1]);
                        arr_24 [i_6] [(_Bool)1] [i_3] [i_5] [i_3] |= ((/* implicit */long long int) (+(arr_16 [i_0] [i_3] [i_3] [i_6] [i_6])));
                        var_33 = ((/* implicit */signed char) ((-21407307) * (((/* implicit */int) ((signed char) arr_8 [9] [i_3] [i_6])))));
                    }
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    arr_29 [i_3] [i_3] [(unsigned char)3] [(unsigned short)9] [i_3] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_28 [i_0] [i_1 - 1])) / (((/* implicit */int) arr_12 [i_0] [i_0])))) / (((/* implicit */int) ((((/* implicit */_Bool) (signed char)48)) && (((/* implicit */_Bool) -2081475480)))))));
                    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_3] [i_0]))))) : (((/* implicit */int) arr_28 [8LL] [i_1 - 1])))))));
                    var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) (signed char)4))));
                }
            }
        }
        for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
        {
            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_8])) ? (arr_6 [(signed char)1] [i_8]) : (arr_6 [i_0] [i_0])));
            arr_32 [4] [i_0] [11U] = ((/* implicit */int) arr_14 [i_0] [i_8]);
            arr_33 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((signed char) arr_9 [i_0] [i_8] [i_8]));
        }
        var_37 -= ((/* implicit */_Bool) ((unsigned int) arr_21 [i_0] [7U] [(signed char)1] [i_0] [i_0] [i_0] [i_0]));
        arr_34 [10U] = (-(var_15));
    }
}
