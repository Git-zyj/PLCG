/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134794
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
    var_17 = ((/* implicit */unsigned long long int) -1459055410);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) <= (3431429546U))) ? (max((((/* implicit */long long int) arr_6 [i_1 - 1] [i_1 - 3] [i_1 - 3])), (var_7))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                    arr_8 [i_0] [i_0] = ((/* implicit */int) (unsigned short)19782);
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) var_9);
                    var_19 = ((/* implicit */unsigned short) (short)0);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
    {
        arr_12 [i_3] [(unsigned char)2] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) (unsigned short)45741)))) + (2147483647))) << (((((/* implicit */int) ((var_2) > (((/* implicit */unsigned long long int) arr_6 [i_3] [i_3] [i_3]))))) - (1)))));
        arr_13 [i_3] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_3] [i_3]))));
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            arr_16 [i_3] [15U] = ((/* implicit */_Bool) ((short) arr_15 [i_4] [(_Bool)1]));
            arr_17 [i_3] = ((/* implicit */unsigned short) var_10);
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-14008))))) ? (((((/* implicit */int) var_6)) & (((/* implicit */int) var_8)))) : (((/* implicit */int) var_14))));
            arr_21 [i_3] [i_5] |= ((/* implicit */long long int) ((unsigned short) var_5));
        }
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_18 [i_3] [i_6]))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_3])))));
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_3] [i_3] [i_3])))))));
        }
        for (short i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            arr_27 [i_3] [i_7] [i_3] = ((/* implicit */_Bool) arr_14 [i_3] [i_7]);
            var_23 = ((/* implicit */long long int) 542923946);
            arr_28 [i_3] [i_7] [i_7] = ((/* implicit */unsigned int) arr_6 [(signed char)5] [(signed char)5] [15U]);
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                for (unsigned int i_9 = 4; i_9 < 19; i_9 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (int i_10 = 2; i_10 < 17; i_10 += 3) 
                        {
                            arr_36 [i_3] [i_3] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) arr_34 [i_9] [i_9 - 1] [i_9 - 3] [i_9 + 1] [i_9]);
                            var_24 -= ((/* implicit */_Bool) arr_23 [i_3]);
                            var_25 = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_3 [i_3]))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                        {
                            arr_40 [i_3] [i_7] [i_3] [i_3] [i_7] [i_8] [i_8] = arr_39 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9] [i_9] [i_8];
                            arr_41 [i_8] [i_3] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_8] [11LL])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_8] [i_9 - 3] [i_9 - 3] [i_9])))));
                            var_26 = ((/* implicit */signed char) (~(3771906152481340599ULL)));
                        }
                        for (long long int i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(3542496000U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_3])))) : (((long long int) arr_15 [(_Bool)1] [(_Bool)1])))))));
                            arr_45 [i_7] [i_12] [i_8] [i_12] [(_Bool)1] = ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
                            arr_46 [(_Bool)1] [i_7] [8ULL] [i_8] [i_7] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3372187567356943266ULL))));
                        }
                        for (long long int i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
                        {
                            arr_49 [i_3] [i_3] [i_8] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_9] [i_9 - 1]))) & (arr_10 [i_3] [i_7])))));
                            var_28 = ((/* implicit */short) (signed char)60);
                        }
                        arr_50 [i_3] [i_8] [i_8] [15ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_7] [i_8] [i_9 + 1] [i_9])) ? (arr_35 [i_3] [i_8] [i_9 - 1] [i_9]) : (arr_35 [i_3] [i_8] [i_9 - 3] [(unsigned short)0])));
                        var_29 = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_30 = ((/* implicit */int) arr_20 [i_9]);
                    }
                } 
            } 
        }
    }
}
