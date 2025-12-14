/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151419
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_1] [(signed char)9] [(signed char)12] = ((/* implicit */unsigned int) min((max((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_1]))), (((/* implicit */unsigned long long int) ((_Bool) arr_3 [i_0] [i_1])))));
                arr_7 [i_1] [i_1] = ((_Bool) (signed char)116);
                var_10 = ((/* implicit */_Bool) max((((/* implicit */int) (short)-21323)), ((-(((/* implicit */int) min((((/* implicit */signed char) var_2)), ((signed char)-116))))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_11 -= ((/* implicit */int) ((((long long int) arr_2 [i_2])) > (((/* implicit */long long int) ((/* implicit */int) max(((signed char)116), (arr_0 [i_2])))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [(signed char)10] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) 523549956U)) ? (var_4) : (((/* implicit */unsigned long long int) var_7)))) : (var_4)))) ? (((((_Bool) arr_8 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_2] [i_2] [i_3])) : ((~(13549502736747502273ULL))))) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (signed char)-116)))))))));
                        arr_13 [i_1] = (~(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_1])));
                        arr_14 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) ((signed char) max((var_7), (arr_4 [i_1]))));
                    }
                    arr_15 [i_0] [i_1] = ((/* implicit */_Bool) 1400420042171816031LL);
                    /* LoopNest 2 */
                    for (long long int i_4 = 3; i_4 < 17; i_4 += 3) 
                    {
                        for (long long int i_5 = 3; i_5 < 17; i_5 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) arr_0 [(unsigned short)1]))));
                                arr_22 [i_2] [i_1] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)14261), (arr_11 [7LL] [i_1] [(signed char)4] [i_1] [i_1]))))) & (((((/* implicit */_Bool) var_0)) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)51275)) > (((/* implicit */int) max((arr_17 [i_0] [i_0]), (var_2))))))))));
                                var_13 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) (signed char)-90)))));
                                arr_23 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (short)8204);
                            }
                        } 
                    } 
                }
                for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    arr_26 [i_0] [i_0] [i_1] [i_6] = ((signed char) ((unsigned long long int) arr_3 [i_0] [i_1]));
                    arr_27 [i_0] [i_1] [i_6] [i_1] = (signed char)127;
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)14338)) ? (((/* implicit */unsigned long long int) 2897913859351484367LL)) : (0ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                    arr_28 [(unsigned short)17] [i_1] [i_6] [i_1] = ((/* implicit */unsigned short) (-(min((arr_4 [i_1]), (arr_21 [i_0] [i_0] [i_6] [i_6] [i_1] [i_1] [i_6])))));
                }
                /* vectorizable */
                for (long long int i_7 = 1; i_7 < 16; i_7 += 1) 
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_7 + 4] [i_7 + 2] [i_7 - 1] [i_7] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_7 + 2] [i_7] [i_7] [i_7] [i_7 + 2]))) : (0LL)));
                    arr_31 [i_0] [i_1] [7] = ((short) arr_20 [i_0] [i_1] [i_0] [i_7 - 1] [i_7]);
                }
            }
        } 
    } 
    var_16 &= ((/* implicit */signed char) max((((((((/* implicit */int) (short)-27252)) | (var_6))) ^ ((~(((/* implicit */int) var_1)))))), ((+(((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 20; i_8 += 2) 
    {
        for (unsigned long long int i_9 = 2; i_9 < 22; i_9 += 1) 
        {
            {
                arr_38 [2ULL] [i_9] [i_9] = ((/* implicit */signed char) (~(2708637424U)));
                arr_39 [(unsigned short)14] [i_9] = ((/* implicit */signed char) (~(((/* implicit */int) arr_34 [i_9 + 2]))));
                arr_40 [i_9] = ((/* implicit */unsigned short) (signed char)67);
                /* LoopSeq 1 */
                for (unsigned int i_10 = 1; i_10 < 21; i_10 += 3) 
                {
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((max((arr_41 [i_8] [i_9]), (((/* implicit */long long int) (unsigned char)226)))) + (((/* implicit */long long int) ((/* implicit */int) ((arr_33 [i_8]) <= (((/* implicit */unsigned long long int) 4109420714000842922LL))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2))))))))) : (((((unsigned long long int) arr_42 [i_8])) >> (((((/* implicit */int) (signed char)80)) - (64))))))))));
                    var_18 *= ((/* implicit */_Bool) max(((((!(((/* implicit */_Bool) (signed char)90)))) ? ((~(8910686229611100486ULL))) : (((((/* implicit */_Bool) arr_36 [i_8 + 2])) ? (13040322024581820562ULL) : (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) max((arr_35 [i_9 + 2]), (((/* implicit */long long int) arr_42 [i_8])))))));
                    arr_44 [i_9] = ((/* implicit */signed char) arr_42 [i_9]);
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        for (signed char i_12 = 0; i_12 < 24; i_12 += 1) 
                        {
                            {
                                arr_52 [i_8] [i_8] [i_9] [(signed char)5] [i_8] [i_8] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_45 [i_10 - 1] [i_10 + 1] [i_9 - 2] [i_9])) ? (((((/* implicit */_Bool) var_5)) ? (arr_50 [i_9]) : (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((arr_36 [i_9 - 2]) + (((/* implicit */int) var_2))))))) % (((/* implicit */unsigned long long int) min((arr_41 [i_9] [i_9 - 1]), (((/* implicit */long long int) arr_45 [i_10 - 1] [i_9 + 2] [i_10] [i_10])))))));
                                arr_53 [i_8] [i_9] [i_12] = ((/* implicit */signed char) arr_48 [i_8] [i_8]);
                                arr_54 [i_9] [i_9] [i_10] [i_9] [i_11] [i_11] [i_12] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_45 [i_8] [i_8] [i_8 + 1] [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_9])) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) var_8))))) : (max((((/* implicit */unsigned long long int) 0U)), (arr_50 [i_9]))))), ((-(arr_33 [i_8 + 3])))));
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) min(((((!(((/* implicit */_Bool) 2586296988468735326LL)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5))))), (((/* implicit */unsigned long long int) (signed char)75)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
