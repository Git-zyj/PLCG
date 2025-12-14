/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108867
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
    var_10 = ((/* implicit */short) ((((min((var_1), (((/* implicit */long long int) var_5)))) + (9223372036854775807LL))) >> (((max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)20347)))), (((/* implicit */int) var_6)))) - (39591)))));
    var_11 |= max((var_7), ((unsigned short)58648));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) << (((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [(unsigned short)9])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) - (13112)))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [(unsigned short)11])) - (((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32704)) ? (((((/* implicit */_Bool) (unsigned char)5)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-1)))))))))))));
            arr_5 [i_0] [(signed char)2] [i_1] = ((/* implicit */unsigned short) arr_0 [i_0]);
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_14 = min((max((((unsigned short) arr_1 [i_1] [i_1])), (min((((/* implicit */unsigned short) (short)3333)), ((unsigned short)240))))), (((/* implicit */unsigned short) ((signed char) (short)0))));
                        var_15 = ((/* implicit */long long int) max(((unsigned short)3856), (((/* implicit */unsigned short) (unsigned char)251))));
                        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [(unsigned short)16])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_8 [(short)6] [i_3] [(short)6] [i_3] [i_3 - 2] [i_3 + 1])))) < ((((+(((/* implicit */int) (signed char)0)))) & (((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_2] [i_3] [i_3 + 1] [i_1]))))));
                    }
                } 
            } 
        }
        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1])) ? (((/* implicit */int) arr_8 [i_4] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) arr_8 [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) >> (((((/* implicit */int) (signed char)-1)) + (11)))))) ? (((((/* implicit */int) arr_3 [(unsigned short)2])) * (((/* implicit */int) (signed char)9)))) : (((/* implicit */int) ((unsigned char) (unsigned short)65535))))) : (((((/* implicit */_Bool) ((unsigned short) arr_11 [i_0] [i_4 - 1]))) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0])))))))));
            var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_6 [i_0] [i_4 + 1] [i_4 + 1] [i_4 + 1])) : ((~(((/* implicit */int) (signed char)-1)))))), ((~(((/* implicit */int) arr_6 [i_4 + 1] [i_4 - 1] [i_4 - 1] [(_Bool)1]))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            for (unsigned int i_6 = 2; i_6 < 16; i_6 += 3) 
            {
                {
                    var_19 = ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_6 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6])))), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_6 [i_6 - 2] [i_6 + 1] [i_6 - 2] [i_6 - 2]))))));
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)247)) ? (4214341777063808126LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5] [i_5])))))) ? (max((300338625U), (((/* implicit */unsigned int) arr_0 [i_7])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [i_5] [i_6] [i_6 + 1]))))) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11905)))));
                        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */int) arr_3 [i_5])) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)39350)))))));
                    }
                    for (long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (short i_9 = 2; i_9 < 16; i_9 += 1) 
                        {
                            arr_24 [i_5] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_15 [i_5] [i_5] [i_5]))))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_6 + 1])) * (((/* implicit */int) arr_3 [i_6 - 1]))))), (((((/* implicit */_Bool) arr_20 [i_8])) ? (17340570478830438607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_9 + 1] [i_6 + 1] [i_8]))))))))));
                            var_23 ^= ((((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)36))) : (167349114U))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [(unsigned char)2] [i_0] [i_0])))))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_9 - 1] [i_9] [i_9]))) > (4214341777063808126LL))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 2; i_10 < 15; i_10 += 2) 
                        {
                            arr_27 [i_0] [i_5] [(short)9] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_6 - 1] [i_10 + 1])) && (((/* implicit */_Bool) ((unsigned long long int) (short)-31)))));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_5] = arr_7 [i_0] [i_6 + 1] [i_8];
                            var_24 = ((/* implicit */signed char) arr_23 [i_5] [i_5] [i_6 - 2] [i_10 - 1] [i_10 - 2] [i_10] [i_10 - 2]);
                        }
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 17; i_11 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned int) max((var_25), ((~(4294967265U)))));
                            arr_31 [i_0] [i_5] [i_6 + 1] [i_5] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_20 [i_5]))));
                        }
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                        {
                            var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_22 [i_12 + 1] [i_12 + 1] [i_6 - 2]), (((/* implicit */unsigned short) (short)-1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_12 + 1] [i_12 + 1] [i_6 - 2]))))) : (((/* implicit */int) max((arr_22 [i_12 + 1] [i_12 + 1] [i_6 - 2]), (arr_22 [i_12 + 1] [i_12 + 1] [i_6 - 1]))))));
                            var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_19 [i_6 - 1] [i_5] [i_6 - 1] [i_12 + 1])) == (((/* implicit */int) arr_7 [i_12] [i_6 - 2] [i_0])))))));
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_1 [i_12 + 1] [i_6 - 2])) ? (arr_21 [i_6 + 1] [i_5] [i_6 + 1] [i_6 + 1] [i_12 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_12 + 1] [i_6 - 1])))))))));
                        }
                        var_29 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (unsigned short)65535)), ((~(max((arr_14 [(signed char)8] [i_0]), (((/* implicit */unsigned long long int) arr_26 [i_5] [i_5]))))))));
                    }
                }
            } 
        } 
    }
    var_30 = ((/* implicit */_Bool) var_0);
}
