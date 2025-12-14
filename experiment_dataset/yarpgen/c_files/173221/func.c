/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173221
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [(signed char)6] [i_1])) ? ((~(min((var_14), (((/* implicit */unsigned long long int) arr_5 [i_3])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) -9055271899540427837LL)) ? (arr_6 [(unsigned char)19]) : (((/* implicit */unsigned long long int) arr_15 [i_1] [i_3])))) != (((/* implicit */unsigned long long int) ((arr_3 [6U] [18]) ? (((/* implicit */int) arr_12 [i_0] [i_4] [i_4])) : (arr_9 [i_1]))))))))));
                                arr_17 [i_1] [i_3] [i_2] [i_1] [(unsigned char)8] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */signed char) arr_3 [i_0] [i_2])), (arr_1 [i_4])))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 1]))) : (var_9)))))) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                                arr_18 [i_0] [i_0] [(unsigned char)7] [i_3] [i_1] = (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))) < (((var_14) % (5787074162280224394ULL)))))));
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 5787074162280224391ULL))))), (((unsigned long long int) ((long long int) var_4)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            for (unsigned char i_7 = 2; i_7 < 20; i_7 += 1) 
            {
                {
                    var_21 += ((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))), (((arr_14 [i_7] [i_5] [i_5] [i_5]) % (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 2; i_8 < 20; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) & (((((/* implicit */_Bool) var_9)) ? (arr_14 [i_5] [i_9] [8LL] [i_8 + 1]) : (((/* implicit */unsigned int) arr_9 [i_5]))))))) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) / ((-(12659669911429327222ULL))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [7ULL]))) : (9223372036854775807LL))))))));
                                var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((int) arr_21 [10])))) ? (((((/* implicit */_Bool) arr_6 [(unsigned short)9])) ? (arr_6 [i_7 - 2]) : (arr_6 [i_5]))) : (((/* implicit */unsigned long long int) ((var_16) / (((/* implicit */long long int) arr_14 [i_8 - 2] [i_9] [0] [(short)0])))))));
                                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_11))) ? (((/* implicit */int) (unsigned short)11022)) : (((((/* implicit */int) (unsigned char)63)) % (((/* implicit */int) var_13))))))), (((((/* implicit */_Bool) max((12659669911429327224ULL), (((/* implicit */unsigned long long int) arr_29 [3ULL] [i_9]))))) ? (((long long int) (unsigned short)10624)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_24 [i_5] [i_6] [i_7])) : (((/* implicit */int) (unsigned short)54913))))))))))));
                                var_25 = ((/* implicit */long long int) var_18);
                                var_26 = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_26 [(_Bool)1] [20ULL] [i_9]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            {
                                arr_35 [(unsigned short)6] = ((/* implicit */unsigned short) ((((long long int) ((((/* implicit */int) arr_20 [4U] [i_6])) - (((/* implicit */int) arr_27 [i_5] [i_5] [15] [15] [i_11]))))) | (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (unsigned short)42623))))))));
                                var_27 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_10] [i_6]))) - (var_16)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)36))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_12 = 0; i_12 < 15; i_12 += 3) 
    {
        for (short i_13 = 0; i_13 < 15; i_13 += 3) 
        {
            {
                var_28 = ((/* implicit */unsigned short) var_4);
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 15; i_14 += 4) 
                {
                    for (signed char i_15 = 0; i_15 < 15; i_15 += 4) 
                    {
                        {
                            arr_47 [i_12] [i_12] [i_14] [i_14] [i_13] [i_15] = ((/* implicit */unsigned int) arr_22 [i_12] [i_12]);
                            var_29 |= (+(((/* implicit */int) arr_45 [i_12] [i_12] [i_12] [i_14] [i_14] [(_Bool)1])));
                            var_30 = ((/* implicit */unsigned long long int) var_16);
                            arr_48 [i_13] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_12 [i_12] [i_14] [i_15]))))));
                            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (~(((int) arr_5 [i_13])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
