/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107195
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
    var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
    var_17 = ((/* implicit */short) var_6);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) (~((~(min((((/* implicit */unsigned long long int) (_Bool)1)), (9125903956586600545ULL)))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_6 [i_0] [(unsigned char)10] = ((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) 2040545365U)) : (6172900722895008386LL)));
            arr_7 [i_0] [(unsigned short)4] [i_1] = ((/* implicit */long long int) ((int) max((var_10), (((/* implicit */long long int) ((short) (_Bool)1))))));
            arr_8 [i_0] [i_1] [(_Bool)1] = ((/* implicit */signed char) arr_5 [(signed char)0]);
        }
        arr_9 [i_0] [i_0] = ((/* implicit */signed char) ((long long int) (_Bool)1));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            arr_12 [i_2] = ((/* implicit */_Bool) var_7);
            arr_13 [i_0] = ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57062))) : (((unsigned long long int) 404334282)));
            arr_14 [7LL] = ((/* implicit */unsigned int) var_9);
            arr_15 [i_0] [i_2] [12ULL] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0]);
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            arr_19 [i_0] [i_0] [i_3] = min((((((/* implicit */_Bool) arr_5 [0U])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_1))), (((/* implicit */long long int) var_3)));
            arr_20 [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
            arr_21 [i_3] [i_3] [i_0] = ((/* implicit */int) (_Bool)1);
            arr_22 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) max((((var_5) ? (((/* implicit */int) var_6)) : (arr_11 [i_3] [i_3]))), (((/* implicit */int) ((_Bool) 1082744418)))))) : (((((/* implicit */unsigned long long int) arr_11 [i_0] [(short)3])) * (arr_1 [i_3])))));
        }
        arr_23 [(_Bool)1] = ((/* implicit */short) var_8);
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_27 [(unsigned char)12] [(unsigned char)12] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
        arr_28 [i_4] = ((/* implicit */unsigned short) (short)-10067);
        arr_29 [i_4] = ((/* implicit */signed char) 1197370617);
        arr_30 [i_4] = -404334283;
    }
    for (short i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        arr_34 [12LL] = ((/* implicit */_Bool) max(((+(arr_5 [(signed char)2]))), (((int) max((var_3), (arr_0 [(signed char)3]))))));
        arr_35 [(short)6] = ((/* implicit */int) var_2);
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                {
                    arr_40 [i_5] [i_6] [i_7] = ((/* implicit */int) var_2);
                    arr_41 [i_7] = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_1)))))));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        arr_44 [i_5] [i_5] [i_7] [i_8] = ((/* implicit */unsigned int) arr_10 [4U] [i_6] [i_6]);
                        arr_45 [0LL] [i_7] [i_8] = (unsigned char)55;
                        arr_46 [i_5] [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) arr_31 [11ULL] [(short)14]);
                        arr_47 [i_7] [i_7] [i_6] [i_7] = ((/* implicit */unsigned char) min(((-(12554196941121930714ULL))), (((/* implicit */unsigned long long int) var_6))));
                        arr_48 [i_7] = ((/* implicit */long long int) arr_42 [i_5] [i_5] [i_5] [i_6] [i_7] [i_8]);
                    }
                    arr_49 [8ULL] [i_7] = ((/* implicit */short) ((((404334282) & (arr_11 [i_5] [(unsigned short)1]))) >= (((((/* implicit */_Bool) min((arr_43 [(short)4] [i_5] [i_7] [i_6] [(unsigned short)14] [i_7]), (((/* implicit */unsigned long long int) 4190200442939768327LL))))) ? ((((_Bool)0) ? (((/* implicit */int) arr_39 [11ULL] [11ULL] [i_7])) : (((/* implicit */int) (short)0)))) : (((int) arr_1 [i_5]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_52 [i_9] [(_Bool)1] = ((/* implicit */unsigned int) (!((_Bool)1)));
        arr_53 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_9])) ? (((((/* implicit */int) (unsigned short)8473)) % (((/* implicit */int) (short)448)))) : (((/* implicit */int) (signed char)12))));
    }
}
