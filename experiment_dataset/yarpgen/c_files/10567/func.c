/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10567
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
    var_13 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (short)494)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) max((min(((unsigned short)4095), (((/* implicit */unsigned short) arr_1 [i_0])))), (((/* implicit */unsigned short) ((short) (unsigned char)255))))))));
        var_14 = ((/* implicit */unsigned char) ((unsigned short) (signed char)23));
        var_15 = ((/* implicit */_Bool) ((signed char) min(((-(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_0 [i_0])))));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */int) (+((~(arr_3 [i_1])))));
        var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_1] [i_1]))) ? (((/* implicit */int) (unsigned short)4095)) : (((/* implicit */int) min((arr_4 [i_1] [i_1]), (arr_4 [(unsigned short)8] [(unsigned short)8]))))))) <= (var_0)));
    }
    for (short i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_6 [(unsigned char)4]);
        var_18 = ((/* implicit */unsigned short) (signed char)-32);
    }
    for (short i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */unsigned short) ((int) ((long long int) ((((/* implicit */_Bool) 1831444011)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_5 = 3; i_5 < 14; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */short) arr_15 [i_5 + 4] [i_5 - 3] [i_5 + 1] [i_5 + 1]);
                            arr_22 [i_3] [i_4] [i_4] [i_6] [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                            var_20 = ((/* implicit */unsigned short) (short)-495);
                            arr_23 [i_3] [i_4] [i_5] [i_6] [i_3] [i_5 - 2] [i_5 + 2] = ((/* implicit */int) (signed char)-57);
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) (unsigned char)168);
                arr_24 [i_3] [15U] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (-(((/* implicit */int) (unsigned short)3223)))))) ? (((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_5] [i_5 + 2] [i_5])) ? (((/* implicit */int) arr_17 [i_4] [i_4] [i_4] [i_5 + 2] [i_5])) : (((/* implicit */int) arr_17 [i_5] [i_5] [i_5] [i_5 + 2] [(signed char)0])))) : (((/* implicit */int) (short)-11893))));
                arr_25 [i_5] [i_4] [i_3] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (signed char)23)) ? (min((((/* implicit */unsigned long long int) var_1)), (12309333880571364267ULL))) : (((/* implicit */unsigned long long int) ((int) (short)1845))))));
            }
            for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                arr_29 [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)15263)) ? (((/* implicit */int) (short)-11893)) : (((/* implicit */int) (unsigned char)255))))), (arr_26 [i_8] [i_3] [i_3] [i_3])));
                arr_30 [i_3] [i_3] = (short)11895;
                arr_31 [(signed char)3] [(signed char)3] [i_8] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((short) min((arr_16 [i_8] [i_8] [i_3] [i_3]), (var_0))))), (((max((((/* implicit */unsigned int) (unsigned short)50273)), (arr_20 [i_8] [i_8] [i_8] [i_4] [i_3] [i_3]))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) (short)494)) : (((/* implicit */int) var_4)))))))));
                arr_32 [i_3] [i_3] [i_3] = arr_15 [1U] [1U] [i_4] [i_3];
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) 2147483647);
                            var_23 = ((/* implicit */int) (~(max((((/* implicit */unsigned int) (signed char)-9)), (var_5)))));
                            var_24 = ((/* implicit */unsigned short) max((min(((-(((/* implicit */int) arr_34 [i_3] [i_4] [i_4] [i_9] [i_10])))), (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)11893)) - (11890))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-477))) : (arr_26 [i_3] [i_4] [i_8] [(signed char)10])))))))));
                            var_25 = ((/* implicit */unsigned short) 3656328833U);
                        }
                    } 
                } 
            }
            var_26 = ((/* implicit */unsigned char) var_9);
        }
    }
}
