/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101115
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) (_Bool)0))))));
    var_11 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_1)))) ? (((/* implicit */int) ((unsigned char) var_7))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 9; i_1 += 2) /* same iter space */
        {
            var_12 = ((/* implicit */_Bool) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) ((short) arr_2 [0LL]))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) var_7))))));
            var_13 = ((/* implicit */int) (signed char)125);
            arr_4 [i_1 + 1] [i_1] [8U] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((arr_3 [3LL] [i_1 - 1]), (((/* implicit */unsigned short) var_5))))), (max((var_1), (((/* implicit */unsigned long long int) var_5))))));
        }
        for (short i_2 = 1; i_2 < 9; i_2 += 2) /* same iter space */
        {
            arr_9 [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) | (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */int) (signed char)-124)))))) & (((/* implicit */int) (!(((((/* implicit */_Bool) -5229244055889435860LL)) && (((/* implicit */_Bool) var_9)))))))));
            /* LoopSeq 1 */
            for (long long int i_3 = 1; i_3 < 7; i_3 += 2) 
            {
                var_14 |= ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0]))))), (max((((/* implicit */unsigned int) var_5)), (arr_6 [i_0]))))), (((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0]))))))));
                var_15 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)0)), (var_1)))) ? (((unsigned int) var_6)) : ((~(var_0)))))));
            }
        }
        arr_12 [i_0] [i_0] = ((/* implicit */int) 9344323863258550469ULL);
        var_16 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        var_17 = ((/* implicit */short) ((var_0) <= (((/* implicit */unsigned int) (+(((/* implicit */int) var_3)))))));
        var_18 = ((/* implicit */unsigned short) var_1);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) var_9);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 20; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 19; i_9 += 2) 
                        {
                            {
                                var_20 &= ((/* implicit */unsigned short) ((var_2) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_20 [i_8] [i_5]))))), (arr_22 [i_8 + 1] [i_8 + 1] [i_9 + 1] [(signed char)9]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7] [i_8]))) : (arr_19 [i_5] [i_6] [(_Bool)1] [1ULL])))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) var_7)) & (((/* implicit */int) var_7)))))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) || ((!(((/* implicit */_Bool) (signed char)58))))));
                            }
                        } 
                    } 
                    arr_27 [i_5] = ((/* implicit */short) var_9);
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 25; i_10 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            for (short i_12 = 0; i_12 < 25; i_12 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 2) 
                    {
                        for (short i_14 = 4; i_14 < 24; i_14 += 2) 
                        {
                            {
                                arr_40 [(unsigned short)1] [i_13] [i_12] [i_12] [i_11] [i_10] [i_10] = ((/* implicit */signed char) arr_28 [i_10]);
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-2702)) ? (((/* implicit */int) (short)-24597)) : (((/* implicit */int) (_Bool)0))));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_11 - 1] [i_11 - 1] [i_12] [i_14 + 1] [i_14] [i_14 - 1] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_11 - 1] [i_11 - 1] [22] [i_13] [i_14]))) : (9102420210451001148ULL)));
                            }
                        } 
                    } 
                    var_24 &= (~(((/* implicit */int) var_9)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 1; i_15 < 24; i_15 += 2) 
        {
            for (unsigned char i_16 = 0; i_16 < 25; i_16 += 2) 
            {
                {
                    arr_46 [1LL] [(signed char)7] [i_16] = (+(((unsigned int) var_3)));
                    var_25 = ((/* implicit */short) arr_45 [i_10] [i_10] [i_15 - 1] [(short)9]);
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)63)), ((unsigned short)43839)));
    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_9)), (0U))), (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (var_0)))))) ? (((1030720377U) & (((/* implicit */unsigned int) ((/* implicit */int) (!(var_2))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
}
