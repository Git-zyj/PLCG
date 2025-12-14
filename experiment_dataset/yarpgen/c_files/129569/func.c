/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129569
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
    var_15 = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) ((int) var_3))))));
    var_16 = ((/* implicit */unsigned char) var_14);
    var_17 = ((/* implicit */int) var_14);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_18 = (~(((/* implicit */int) arr_1 [i_0])));
        var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (16383U));
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            var_20 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (short)(-32767 - 1))))) ? (((/* implicit */int) arr_1 [i_0])) : ((-(((/* implicit */int) arr_4 [i_1 - 3] [i_1 - 2]))))));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) (~(16672657769113008372ULL)));
                            var_22 = ((/* implicit */signed char) (~(((int) var_13))));
                            var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)28)) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1 + 1] [i_2] [i_3 - 1] [i_4]))))))))));
                        }
                    } 
                } 
                var_24 = (((+(((/* implicit */int) var_9)))) > ((~((~(((/* implicit */int) (short)(-32767 - 1))))))));
            }
            var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)18)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_15 [(short)16] [(short)16] [i_5] = (short)1023;
                arr_16 [i_0] [i_0] [8] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0]))));
                var_26 = ((/* implicit */int) ((-1) != (((/* implicit */int) (short)32767))));
            }
            /* vectorizable */
            for (unsigned char i_6 = 1; i_6 < 21; i_6 += 3) 
            {
                /* LoopSeq 2 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    var_27 = (!(((/* implicit */_Bool) arr_9 [i_0] [i_6 - 1] [i_6] [i_7])));
                    /* LoopSeq 1 */
                    for (signed char i_8 = 4; i_8 < 22; i_8 += 3) 
                    {
                        var_28 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_6 + 3] [i_8 - 4] [i_1 - 3] [i_7 + 1]))));
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((arr_5 [i_1 - 3] [i_1 - 1] [i_1 - 2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_13)))))))));
                        var_30 += ((/* implicit */signed char) ((((/* implicit */unsigned int) -154560689)) ^ (2901577491U)));
                    }
                }
                for (unsigned int i_9 = 1; i_9 < 21; i_9 += 1) 
                {
                    var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_13 [i_0] [i_1 + 2] [i_1 + 4] [i_9 + 2]))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_0] [i_10])))))));
                        var_33 = ((/* implicit */_Bool) ((int) var_14));
                        arr_30 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0] [i_0] = ((/* implicit */short) ((arr_18 [i_6 - 1] [i_6 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32748)))));
                        var_34 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_10] [(short)21] [(unsigned char)19] [i_1] [13])))))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        arr_34 [i_0] [i_11] [i_0] [i_11] [i_0] = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))));
                        arr_35 [i_11] = ((/* implicit */unsigned char) (short)-25470);
                    }
                }
                var_35 |= ((/* implicit */unsigned char) (short)-32761);
                var_36 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_31 [i_6 + 1] [i_6] [i_6 - 1] [i_6] [i_6]))));
            }
            var_37 = ((/* implicit */short) (~((-(((/* implicit */int) arr_4 [i_1] [i_1 + 1]))))));
        }
        for (unsigned long long int i_12 = 3; i_12 < 23; i_12 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_13 = 4; i_13 < 21; i_13 += 2) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 1) 
                {
                    for (int i_15 = 0; i_15 < 24; i_15 += 4) 
                    {
                        {
                            var_38 = ((/* implicit */_Bool) var_12);
                            var_39 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_18 [i_12] [i_12 - 2])) ? (((/* implicit */int) ((signed char) (signed char)-37))) : (((/* implicit */int) arr_24 [i_15] [i_14] [i_0]))))));
                            var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) arr_19 [i_0]))));
                            arr_48 [(short)15] [(short)15] [i_13 - 3] [i_14] [i_12 - 2] [(unsigned char)13] [i_14] = ((/* implicit */signed char) ((short) var_3));
                        }
                    } 
                } 
            } 
            var_41 = ((/* implicit */short) arr_2 [14]);
            var_42 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((_Bool) var_9))), (((signed char) arr_10 [i_0] [i_12 + 1]))));
            arr_49 [i_0] [i_12] = ((short) ((unsigned char) (signed char)-18));
        }
        arr_50 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) ((unsigned int) arr_24 [12ULL] [i_0] [12ULL]))))));
    }
}
