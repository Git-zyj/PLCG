/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163678
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_1] [i_1] [(signed char)2] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)64)) - (48)))))) ? (((/* implicit */int) (unsigned short)47109)) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)12))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        arr_14 [i_0] [i_0] [i_2] = arr_3 [i_1 - 1];
                        arr_15 [0U] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) 914067185)))));
                        arr_16 [i_2] = ((/* implicit */long long int) 246420649U);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 8; i_4 += 3) 
                    {
                        for (signed char i_5 = 2; i_5 < 9; i_5 += 3) 
                        {
                            {
                                arr_23 [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5 - 1] [i_1] [i_1 + 1] [i_4] [i_4 - 1]))) : (arr_1 [i_4 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 914067185)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_1])), (var_3))))) : (max((((/* implicit */unsigned int) (signed char)-54)), (arr_12 [i_0] [i_1]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_20 [i_0] [(_Bool)1] [i_2] [i_0] [(_Bool)1])))))));
                                arr_24 [i_2] [i_1] [i_1] [i_1 + 2] [i_1] [9] = ((/* implicit */unsigned char) -1884971594);
                                arr_25 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((134217696U) == (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (max((arr_2 [i_2]), (((/* implicit */unsigned short) (signed char)-106))))))))));
                            }
                        } 
                    } 
                    arr_26 [(unsigned short)0] [i_0] [i_2] = ((long long int) ((((/* implicit */_Bool) -914067186)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)31))))) : (-7212239029757411719LL)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_13)) ? (((long long int) 0U)) : (((/* implicit */long long int) (~(((/* implicit */int) var_1))))))));
    /* LoopSeq 1 */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        arr_29 [i_6] [i_6] = ((/* implicit */unsigned short) ((long long int) (~((+(((/* implicit */int) var_9)))))));
        arr_30 [i_6] [i_6] |= ((/* implicit */long long int) ((int) ((((/* implicit */int) (!((_Bool)1)))) + (((/* implicit */int) (_Bool)1)))));
    }
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    arr_40 [i_7] [i_9] = ((/* implicit */unsigned int) (+(min((((/* implicit */long long int) (signed char)80)), (0LL)))));
                    arr_41 [(unsigned short)12] [i_8] [i_7] = ((/* implicit */long long int) (_Bool)1);
                    arr_42 [i_7] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((int) (-2147483647 - 1)))) ? (arr_27 [i_7]) : (((/* implicit */long long int) ((var_14) ? (arr_36 [i_7] [i_8] [(unsigned char)14]) : (-1884971594)))))), (((/* implicit */long long int) (~(max((arr_36 [12LL] [i_8] [12LL]), (((/* implicit */int) var_0)))))))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    arr_45 [i_7] [(unsigned char)6] [i_10] = ((/* implicit */signed char) ((max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_32 [i_8] [i_8])))) >= (((/* implicit */int) (signed char)-50))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_51 [i_10] [(unsigned char)8] [i_12] = ((/* implicit */unsigned short) max((max((max((((/* implicit */int) var_0)), (arr_34 [i_7] [(_Bool)1] [i_7]))), (((/* implicit */int) ((signed char) arr_37 [i_7] [i_7] [i_7]))))), (914067185)));
                                arr_52 [i_7] [i_8] [i_10] [i_7] = ((/* implicit */signed char) arr_47 [i_12] [1] [i_10] [i_8]);
                            }
                        } 
                    } 
                    arr_53 [i_7] [i_8] [12] = ((signed char) ((arr_31 [i_7]) + (((/* implicit */int) arr_46 [i_10] [i_7] [i_8] [i_7] [(_Bool)1]))));
                    arr_54 [i_7] [(unsigned short)8] [14] [i_7] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)79))) <= (min((((/* implicit */long long int) (unsigned short)7670)), (9223372036854775807LL)))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    arr_58 [4LL] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) -9164995890175921097LL);
                    arr_59 [i_7] [(signed char)0] [i_8] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) 914067185)) >= (max((-8013952593464635287LL), (((/* implicit */long long int) (_Bool)1)))))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_57 [i_13] [i_8] [(signed char)6])), (min((-914067186), (-573089637)))))) : (max((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (min((-8013952593464635281LL), (((/* implicit */long long int) (unsigned short)7670))))))));
                    arr_60 [i_7] = (signed char)49;
                    arr_61 [i_7] [i_8] [i_7] [i_7] = ((/* implicit */unsigned int) (unsigned short)7262);
                }
                arr_62 [i_7] = ((/* implicit */_Bool) max((((unsigned int) ((signed char) (signed char)49))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_7] [i_8] [i_8] [i_8])) | (((/* implicit */int) (signed char)-50))))) ? (((/* implicit */int) ((unsigned char) -2359876589683331432LL))) : (((/* implicit */int) arr_35 [2] [i_8] [i_7])))))));
            }
        } 
    } 
}
