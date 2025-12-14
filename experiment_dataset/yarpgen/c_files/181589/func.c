/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181589
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
    var_12 = ((/* implicit */unsigned long long int) var_9);
    var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), ((~(((/* implicit */int) var_0))))))) ? (((((/* implicit */int) min(((short)0), (((/* implicit */short) (_Bool)1))))) * (((/* implicit */int) var_5)))) : (min((((((/* implicit */int) var_4)) & (((/* implicit */int) (signed char)-122)))), (((((/* implicit */int) (signed char)122)) / (((/* implicit */int) var_11))))))))));
    var_14 = ((/* implicit */short) 6493516494833406544ULL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) % (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? ((~(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_1 + 3] [(unsigned char)5]))))));
            arr_6 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_1] [i_0 - 3]))));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                var_15 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1] [i_2]))))) ? (((/* implicit */int) arr_7 [i_1 + 3] [i_0 - 2] [i_2] [i_2])) : (((/* implicit */int) var_4)));
                var_16 = ((/* implicit */long long int) ((signed char) (_Bool)1));
                arr_9 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)122))));
                arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((int) var_6));
            }
            /* LoopSeq 2 */
            for (long long int i_3 = 1; i_3 < 8; i_3 += 3) 
            {
                var_17 = ((arr_11 [i_0] [i_0] [i_0] [(short)8]) ^ (((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (3614517381488557148LL))));
                var_18 = (~(((((/* implicit */_Bool) var_10)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0 + 3]))))));
            }
            for (unsigned char i_4 = 3; i_4 < 9; i_4 += 1) 
            {
                arr_16 [i_0] [i_0] [i_1] = ((/* implicit */int) (-(((((/* implicit */_Bool) (unsigned short)49224)) ? (-8872282053639077686LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-127)))))));
                var_19 ^= ((/* implicit */signed char) ((arr_11 [i_0 - 2] [i_1] [i_4 + 1] [(_Bool)1]) == (arr_4 [(short)0] [i_1])));
                /* LoopSeq 2 */
                for (unsigned short i_5 = 2; i_5 < 6; i_5 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        arr_23 [i_6] [i_1] [(signed char)9] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_5)))));
                        var_20 = (short)0;
                    }
                    for (short i_7 = 2; i_7 < 9; i_7 += 4) 
                    {
                        arr_26 [i_1] [i_5] [i_4 - 2] [i_1] [i_1] = 0;
                        arr_27 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) ((-8872282053639077686LL) / (((((/* implicit */_Bool) (short)9)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (5022875183141982336LL)))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_32 [i_5] [i_5] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_0]))));
                        arr_33 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((((int) arr_0 [i_5] [i_1])) + (2147483647))) << (((long long int) (signed char)0))));
                        arr_34 [i_1] [i_5] [i_4] [i_1] [i_1] = (((~(((/* implicit */int) var_8)))) * (((/* implicit */int) (signed char)123)));
                        arr_35 [i_0 + 1] [i_0] [i_1] [i_1] [i_4 + 1] [i_5] [i_8] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)7765))));
                    }
                    arr_36 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((short) arr_14 [i_5 - 2] [i_1] [i_4] [i_5 - 2]));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_21 -= ((/* implicit */short) ((long long int) 11953227578876145045ULL));
                    /* LoopSeq 2 */
                    for (short i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        var_22 += ((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_10] [i_4] [i_4] [i_4 - 3] [i_10] [i_4 + 1])) & (((/* implicit */int) arr_38 [i_10]))));
                        var_23 = ((/* implicit */unsigned char) (short)3584);
                    }
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        arr_45 [i_0] [i_1] [(_Bool)1] [i_9] [i_1] = ((/* implicit */_Bool) arr_3 [i_1]);
                        arr_46 [i_11] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1])) & (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-3584))))));
                        var_24 ^= ((/* implicit */_Bool) arr_4 [(_Bool)1] [(_Bool)1]);
                    }
                    var_25 -= ((/* implicit */signed char) ((_Bool) (_Bool)1));
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((unsigned char) arr_12 [i_0 + 3] [i_1 + 1])))));
                }
                arr_47 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_13 [i_1]))) & (((/* implicit */long long int) (-(3954727458U))))));
            }
            /* LoopNest 2 */
            for (long long int i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                for (long long int i_13 = 4; i_13 < 9; i_13 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) 8872282053639077685LL)))));
                        var_28 = ((/* implicit */long long int) (!(var_0)));
                    }
                } 
            } 
        }
        arr_53 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (arr_52 [i_0] [i_0] [i_0])))) ? (arr_2 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    }
}
