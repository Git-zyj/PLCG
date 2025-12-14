/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182775
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_8 [i_0] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (-6469509008601506867LL));
            arr_9 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)112))) : (var_10))))));
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 14173843037376068396ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141))) : (13978368974410636338ULL))))));
                        var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) : (var_6)))) ? ((+(arr_10 [i_0] [i_3 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13)))));
                        var_16 = ((/* implicit */long long int) max((var_16), (((((/* implicit */_Bool) arr_4 [10U] [i_3 + 1] [10U])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65499))) : (arr_12 [i_3 - 1] [i_3 + 1])))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        {
                            arr_21 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_5] [i_6])) : (((((/* implicit */_Bool) arr_18 [i_6] [i_4] [i_1] [i_0])) ? (((/* implicit */int) arr_6 [2U])) : (((/* implicit */int) (unsigned char)140))))));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4432770836321139518LL)) ? (-8LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65523)))))) : (13997564025240428325ULL)));
                            var_18 = ((/* implicit */_Bool) ((arr_15 [i_0]) ? (((/* implicit */long long int) 7168)) : (arr_7 [i_0] [i_6])));
                            var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)54296)) ? (((/* implicit */unsigned long long int) -8508625143495959011LL)) : (arr_2 [i_5])));
                        }
                    } 
                } 
            } 
        }
        for (int i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            arr_25 [8U] &= ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) (unsigned char)6)) ? (var_6) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_7] [6])) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (short)-9941)))))));
            /* LoopNest 2 */
            for (unsigned short i_8 = 1; i_8 < 12; i_8 += 4) 
            {
                for (unsigned char i_9 = 1; i_9 < 12; i_9 += 3) 
                {
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_28 [i_9 + 1])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)123))))) : (((((/* implicit */_Bool) var_1)) ? (arr_28 [i_9 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                        arr_32 [i_0] [i_0] [i_0] [2] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_13 [i_0] [i_9] [i_9] [i_8] [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_8 + 1] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_4)))))))));
                    }
                } 
            } 
            var_21 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) arr_15 [i_0])))))));
        }
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [(short)10]))) : (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)226))))) : ((~(arr_2 [i_0]))))))));
    }
    var_23 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)148)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-29516))))))))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
}
