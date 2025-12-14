/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117039
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
    var_18 *= ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (253156162U)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */signed char) (+(4041811127U)));
            arr_9 [i_0] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0]))));
        }
        for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            arr_12 [(unsigned char)3] [i_2] [i_0] = ((/* implicit */unsigned short) ((unsigned char) arr_0 [i_0]));
            arr_13 [i_0] = ((int) arr_2 [i_2]);
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (~(4290249412U))))));
        }
        for (int i_3 = 1; i_3 < 18; i_3 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                arr_19 [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3])) ? (16777215U) : ((~(4041811134U)))));
            }
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                var_21 = ((/* implicit */unsigned int) var_5);
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 16777215U)) ? (3414143860U) : (4041811134U)));
            }
            for (int i_6 = 2; i_6 < 17; i_6 += 3) 
            {
                arr_25 [i_0] = ((/* implicit */long long int) var_9);
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_12)))) : (617038152U)));
                var_24 |= ((/* implicit */signed char) var_8);
            }
            for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                arr_29 [i_0] [i_3] [i_7] = ((/* implicit */unsigned char) var_17);
                var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) 4041811134U)) ^ (9223372036854775790LL)));
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((long long int) arr_16 [i_3 - 1] [i_3])))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                arr_34 [i_0] [i_3] [i_8] [i_0] |= ((/* implicit */unsigned int) arr_15 [15U] [15U] [15U]);
                var_27 = ((/* implicit */unsigned short) ((4041811133U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                /* LoopSeq 3 */
                for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    var_28 = ((/* implicit */_Bool) ((unsigned char) 4041811134U));
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) var_6))));
                }
                for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    var_30 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_30 [i_3 - 1] [i_3 + 1] [i_3 - 1])) : ((+(((/* implicit */int) var_1))))));
                    arr_40 [i_3] [i_8] |= ((/* implicit */unsigned int) var_8);
                    var_31 = ((/* implicit */unsigned long long int) (+(var_14)));
                }
                for (long long int i_11 = 1; i_11 < 17; i_11 += 4) 
                {
                    var_32 = ((/* implicit */unsigned char) arr_6 [i_3 + 1] [i_0]);
                    arr_43 [i_0] [i_3 + 1] [(unsigned short)15] [i_0] = ((/* implicit */unsigned short) ((unsigned char) arr_37 [i_3 + 1] [i_11 + 2] [i_11] [3LL]));
                    arr_44 [i_11] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) 4041811133U)))));
                }
                var_33 *= ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (253156163U)));
            }
        }
        for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
        {
            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(4041811134U)))) ? (4278190081U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_33 [i_0] [i_12]))))));
            var_35 = ((/* implicit */long long int) ((((_Bool) 4278190079U)) ? (((/* implicit */int) ((_Bool) var_2))) : (((/* implicit */int) arr_21 [i_0]))));
        }
        var_36 = ((/* implicit */unsigned char) var_7);
    }
    for (signed char i_13 = 3; i_13 < 16; i_13 += 3) 
    {
        var_37 = ((/* implicit */signed char) var_9);
        var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (1202894097U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    }
}
