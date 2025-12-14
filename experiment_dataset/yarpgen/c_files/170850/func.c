/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170850
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            arr_8 [i_0] [i_0] [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) * (((/* implicit */int) (!(((/* implicit */_Bool) 2095104))))));
            /* LoopSeq 1 */
            for (long long int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                var_13 = 491520;
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 + 1])) ? (arr_6 [i_0] [i_1 + 1] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1 + 2])))));
                arr_11 [i_0] = ((/* implicit */int) ((arr_1 [i_1 - 1]) + (((/* implicit */long long int) ((/* implicit */int) (short)-28293)))));
            }
        }
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
        {
            var_15 |= ((long long int) ((((/* implicit */int) (short)-28279)) * (((/* implicit */int) (signed char)103))));
            /* LoopNest 2 */
            for (long long int i_4 = 2; i_4 < 22; i_4 += 1) 
            {
                for (long long int i_5 = 2; i_5 < 21; i_5 += 1) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (signed char)-96))));
                        var_17 = ((/* implicit */unsigned long long int) var_3);
                        arr_21 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (unsigned short)32768)))) <= ((((_Bool)0) ? (((/* implicit */int) (short)1536)) : (((/* implicit */int) var_8))))));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)51225)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)9345)))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
        {
            arr_26 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(_Bool)1])) ? (arr_1 [i_0]) : (((/* implicit */long long int) 1202497280U))))) ? (arr_22 [i_0] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((long long int) 15502377185085282369ULL)))));
            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((short) ((int) (signed char)124))))));
            /* LoopSeq 3 */
            for (short i_7 = 2; i_7 < 21; i_7 += 1) /* same iter space */
            {
                var_20 &= ((/* implicit */int) var_7);
                arr_29 [i_0] [i_7] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((long long int) var_12))));
                var_21 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) arr_3 [i_7]))));
            }
            for (short i_8 = 2; i_8 < 21; i_8 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (~(((((((/* implicit */int) arr_14 [i_0])) + (2147483647))) << (((arr_24 [i_0]) - (237654939630383525LL))))))))));
                arr_32 [i_0] [i_6] [i_8] = (short)-17184;
                var_23 = ((/* implicit */unsigned short) arr_7 [i_8]);
                var_24 = ((((arr_13 [i_6] [i_0] [i_8 + 2]) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)95))))));
            }
            for (short i_9 = 2; i_9 < 21; i_9 += 1) /* same iter space */
            {
                arr_35 [i_9] [i_6] [i_6] [i_0] = ((/* implicit */signed char) ((_Bool) arr_13 [i_9 + 1] [i_9] [i_0]));
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    for (long long int i_11 = 3; i_11 < 22; i_11 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_11 - 1] [i_6] [i_9 + 1] [i_0]))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_9 + 1] [i_9 - 1] [i_11 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_9 + 1] [i_9 - 1] [i_11 - 3]))) : (var_7)));
                        }
                    } 
                } 
            }
            var_27 = ((/* implicit */short) var_9);
        }
        /* LoopNest 2 */
        for (unsigned int i_12 = 4; i_12 < 22; i_12 += 1) 
        {
            for (signed char i_13 = 1; i_13 < 22; i_13 += 1) 
            {
                {
                    arr_46 [i_0] [i_12 - 2] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_12)) << (((((/* implicit */int) ((unsigned short) arr_36 [i_13] [(short)9] [i_13 + 1] [i_12]))) - (26)))));
                    var_28 = ((/* implicit */short) arr_6 [i_0] [i_0] [i_12 - 1]);
                    var_29 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-17184)) ? (438977999U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)105)))));
                }
            } 
        } 
    }
    var_30 = ((/* implicit */int) ((signed char) var_11));
    var_31 = ((/* implicit */unsigned int) ((var_7) > (((/* implicit */long long int) ((/* implicit */int) ((short) (short)-22413))))));
    var_32 = ((/* implicit */signed char) var_1);
    var_33 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) max(((signed char)-105), (((/* implicit */signed char) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((var_10), (((/* implicit */unsigned long long int) var_3)))))) | (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_7)) : (var_10))) >> (((((((/* implicit */long long int) 2013265920U)) & (var_0))) - (1476394976LL)))))));
}
