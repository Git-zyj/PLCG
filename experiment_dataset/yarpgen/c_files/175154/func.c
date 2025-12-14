/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175154
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
    var_16 = ((/* implicit */long long int) ((int) ((_Bool) 16642930763991432677ULL)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)110)), (min((arr_0 [i_0]), (arr_0 [i_0])))));
        var_17 &= ((/* implicit */unsigned char) (-(var_4)));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_14 [i_3] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_3]) : (arr_2 [i_1] [i_1])))));
                        var_18 = ((/* implicit */unsigned int) (!(((_Bool) var_15))));
                        arr_15 [i_1] [3] [i_3] = ((/* implicit */unsigned short) var_10);
                        arr_16 [i_3] = ((/* implicit */int) (_Bool)1);
                    }
                } 
            } 
        } 
        arr_17 [i_0] [(unsigned short)9] = ((/* implicit */_Bool) var_6);
    }
    /* LoopSeq 1 */
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) 3959099653U))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        for (short i_8 = 2; i_8 < 22; i_8 += 4) 
                        {
                            {
                                arr_31 [i_4] [i_4] [i_5] [i_6 - 1] [i_7] [i_7] [i_6] = ((/* implicit */unsigned char) min(((((!(((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_7])))) ? (((((/* implicit */_Bool) (unsigned char)101)) ? (var_15) : (((/* implicit */unsigned long long int) arr_22 [i_4] [(_Bool)1])))) : (((/* implicit */unsigned long long int) (-(var_13)))))), (((((/* implicit */_Bool) arr_28 [i_6] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9151314442816847872ULL)))));
                                arr_32 [22] [22] [22] [i_7] [i_8 - 1] [i_8] [8LL] &= ((/* implicit */signed char) arr_24 [2U] [i_6 - 1] [i_8 + 1]);
                                var_20 = ((/* implicit */long long int) 1152921504606846976ULL);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) var_11);
                    arr_33 [11LL] [i_5] [i_6] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)105)) ? (var_10) : (arr_27 [i_4] [i_4])))) ? (((((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_5])) ? (arr_19 [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_6] [i_6]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_29 [i_6 - 1] [i_6])))))));
                }
            } 
        } 
        arr_34 [(short)3] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_25 [i_4] [(_Bool)1] [i_4]))))));
        /* LoopSeq 1 */
        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_10 = 3; i_10 < 23; i_10 += 2) 
            {
                arr_40 [i_4] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) ((short) arr_21 [i_4]))) ? ((+(var_4))) : (((/* implicit */unsigned long long int) min((-7401000492504657954LL), (((/* implicit */long long int) var_7))))))) | ((((!(((/* implicit */_Bool) arr_38 [i_9] [i_10])))) ? (arr_19 [i_9]) : (((/* implicit */unsigned long long int) arr_39 [(unsigned short)5] [i_9] [i_10] [(unsigned short)15]))))));
                arr_41 [i_10 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_10] [(unsigned char)8] [(unsigned char)8]))) : (var_0)))) ? (max((var_6), (((/* implicit */unsigned int) arr_18 [21LL])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))));
            }
            arr_42 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_23 [i_4] [i_9])) ? (((/* implicit */long long int) (~(0U)))) : (((long long int) var_1)))), (((/* implicit */long long int) arr_27 [4LL] [4LL]))));
        }
        arr_43 [i_4] [18U] = ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_20 [i_4])), (-9223372036854775803LL))) | (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_4] [i_4])))))) : ((-(max((17293822569102704639ULL), (var_15))))));
    }
}
