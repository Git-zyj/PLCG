/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168263
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [20] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((var_4) & (var_5)))) <= (424969774U)))) <= (((/* implicit */int) (!(((((/* implicit */int) var_2)) >= (var_5))))))));
        arr_3 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(3594541940U)))), (((((7128443623518163684ULL) << (((var_11) - (1471461430))))) & ((~(var_6)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            arr_6 [i_0] [(unsigned short)12] [(unsigned short)12] = ((/* implicit */unsigned short) ((long long int) arr_1 [i_1 + 2]));
            arr_7 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)32)))))));
            arr_8 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
            arr_9 [i_0] = ((/* implicit */signed char) (+(var_6)));
        }
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_12 [i_0] = ((/* implicit */short) 258064748);
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
            {
                arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) 3142352452U);
                arr_16 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) var_0);
            }
            for (int i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
            {
                arr_20 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (12660493885109079237ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) != (((/* implicit */unsigned long long int) arr_19 [(_Bool)0] [i_4] [11U] [2]))))) <= (((/* implicit */int) ((max((((/* implicit */unsigned long long int) (short)7898)), (var_9))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_8)))))))));
                arr_21 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) (short)254)) / (-258064748)));
            }
            for (long long int i_5 = 4; i_5 < 22; i_5 += 2) 
            {
                arr_24 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)63)) | (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_10)))))));
                arr_25 [i_0] [i_2] [(_Bool)1] [(unsigned short)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (var_12))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) : ((~(var_9)))));
            }
            arr_26 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_3);
            arr_27 [i_0] [i_0] = ((/* implicit */long long int) var_9);
            arr_28 [16ULL] = ((/* implicit */short) 3408619398116548154ULL);
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            arr_31 [i_6] [i_6] = ((/* implicit */unsigned char) (-(var_12)));
            arr_32 [(short)9] [i_6] = ((((long long int) 424969774U)) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
            arr_33 [i_6] [i_6] = ((/* implicit */unsigned long long int) (unsigned char)151);
        }
        /* vectorizable */
        for (int i_7 = 2; i_7 < 21; i_7 += 1) 
        {
            arr_36 [i_0] = ((/* implicit */unsigned long long int) ((((var_11) - (((/* implicit */int) var_2)))) > (((/* implicit */int) (short)23109))));
            arr_37 [(_Bool)1] [(_Bool)1] [i_7 + 1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_5)) : (2502674902U)))));
        }
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 21; i_8 += 3) 
    {
        arr_40 [i_8 + 3] [i_8] = ((/* implicit */unsigned int) (-((+(var_5)))));
        arr_41 [i_8] = ((/* implicit */_Bool) var_2);
        arr_42 [i_8 - 2] = ((/* implicit */unsigned long long int) ((((7128443623518163684ULL) > (((/* implicit */unsigned long long int) 3869997521U)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_38 [i_8]))))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (arr_39 [i_8])))));
    }
    var_13 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_0)), (var_6)));
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 1) 
    {
        for (unsigned short i_10 = 0; i_10 < 25; i_10 += 3) 
        {
            {
                arr_48 [i_10] [i_10] [12] = ((/* implicit */unsigned int) ((((((781626928U) != (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) var_12)) : ((-(arr_44 [i_9]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) != (((/* implicit */unsigned long long int) arr_46 [i_9] [i_9])))))) > (min((((/* implicit */unsigned long long int) var_0)), (var_6)))))))));
                arr_49 [(short)24] [i_10] = ((/* implicit */unsigned short) max((var_4), (min(((~(((/* implicit */int) var_10)))), (((/* implicit */int) arr_43 [i_9]))))));
                arr_50 [i_9] = ((/* implicit */_Bool) (~(((((/* implicit */int) (short)-32109)) + (((/* implicit */int) arr_43 [i_9]))))));
            }
        } 
    } 
}
