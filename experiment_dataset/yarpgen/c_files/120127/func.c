/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120127
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) max((arr_1 [i_0] [i_1]), (((/* implicit */long long int) var_6)))))) << (((/* implicit */int) ((((long long int) (short)13316)) < (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0] [i_0] [12U]))))))))));
                arr_4 [9LL] [i_1] = ((/* implicit */signed char) max((arr_0 [i_1]), (max((arr_1 [i_0] [i_1]), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_1 [(unsigned char)13] [i_1])) > (var_0))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 1; i_2 < 12; i_2 += 4) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 3) 
                        {
                            arr_18 [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((arr_5 [i_2]) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) arr_5 [i_2 + 3]))));
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_6))));
                            arr_19 [i_3] [i_3] [(unsigned short)0] [(short)11] [i_6] [i_6] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (unsigned short)63)))))));
                        }
                        var_18 = ((/* implicit */unsigned long long int) ((_Bool) arr_5 [i_2 + 2]));
                        var_19 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) < (arr_16 [i_3] [i_3] [i_4] [i_5] [i_4]))) ? (((((/* implicit */_Bool) (short)13316)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [(unsigned short)1] [(unsigned short)1] [9LL] [i_5]))) : (3245632132U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_17 [(signed char)10] [12U] [(unsigned short)11] [i_4] [12U]))))));
                        /* LoopSeq 3 */
                        for (int i_7 = 1; i_7 < 13; i_7 += 4) 
                        {
                            arr_22 [i_2] [i_3] [i_4] [i_3] [i_7] = ((/* implicit */unsigned short) var_13);
                            var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_3])) ? (arr_2 [i_2] [(_Bool)1]) : (((/* implicit */long long int) 3828162283U)))) < ((+(var_13)))));
                            var_21 = ((arr_16 [i_3] [i_7] [i_7] [i_7 + 1] [i_3]) <= (((unsigned int) var_0)));
                            arr_23 [i_2] [i_3] [i_3] [i_5] [i_2] = ((/* implicit */long long int) ((unsigned long long int) (~(arr_10 [i_7] [i_4]))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((385930999) != (((/* implicit */int) (signed char)126))));
                            var_23 = ((/* implicit */_Bool) (+(arr_9 [i_5])));
                            arr_28 [i_2] [i_3] [i_3] [i_8] [i_3] [i_3] = ((/* implicit */signed char) arr_14 [i_2] [i_3] [i_3] [i_5]);
                        }
                        for (int i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            arr_31 [i_2] [i_3] = ((/* implicit */unsigned long long int) (((_Bool)0) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
                            arr_32 [i_2] [i_2] [i_2] [(_Bool)1] [0U] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)57106))));
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) 2147483647))));
                        }
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_2] [i_3] [(short)1] [i_4] [i_10])))))) ? (((/* implicit */unsigned long long int) 1049335140U)) : (18446744073709551613ULL))) > (((/* implicit */unsigned long long int) max((min((var_13), (((/* implicit */long long int) (unsigned short)65535)))), (((/* implicit */long long int) max(((unsigned char)22), (((/* implicit */unsigned char) arr_34 [i_3] [i_4]))))))))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8429))) < (0ULL)))), (arr_16 [i_3] [(signed char)12] [i_2] [i_2] [i_3])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3245632137U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8429))) : (3425815270U)))) : (var_4)));
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 0; i_11 < 15; i_11 += 3) 
                        {
                            var_27 += ((/* implicit */long long int) max((((/* implicit */int) arr_5 [i_2])), ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_4] [(unsigned char)8] [i_4] [i_4] [i_4])))))))));
                            arr_37 [i_3] = ((/* implicit */signed char) var_13);
                            arr_38 [i_3] = ((/* implicit */unsigned int) arr_12 [i_3] [i_10]);
                        }
                        for (unsigned short i_12 = 0; i_12 < 15; i_12 += 1) 
                        {
                            var_28 -= ((/* implicit */unsigned short) min((((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (arr_9 [i_3])))))))));
                            arr_43 [i_3] [i_10] [i_4] [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_7 [i_4] [i_12]);
                        }
                    }
                    arr_44 [2ULL] [i_3] [i_3] [i_3] = ((/* implicit */signed char) arr_36 [i_3] [i_4] [i_3] [i_4] [i_4]);
                    var_29 = ((/* implicit */unsigned char) -1LL);
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */unsigned int) (~(var_10)));
}
