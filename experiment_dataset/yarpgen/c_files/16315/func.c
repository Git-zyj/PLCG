/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16315
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
    var_10 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */int) var_1))))) ? (((int) var_3)) : (((/* implicit */int) (unsigned char)181)))));
    var_11 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-21877))));
    var_12 = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)1)), (((((/* implicit */_Bool) (short)-21874)) ? (((int) -551689675)) : (((((/* implicit */int) (signed char)13)) * (((/* implicit */int) (unsigned char)255))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((unsigned short) arr_0 [i_0]));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            arr_5 [i_1] = min((((/* implicit */unsigned int) min((arr_3 [i_1] [i_1] [i_0]), (max(((short)1023), (arr_4 [i_0])))))), (4294967280U));
            arr_6 [i_1] [i_1] = ((/* implicit */int) ((unsigned char) 392362011U));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    for (long long int i_4 = 3; i_4 < 24; i_4 += 1) 
                    {
                        {
                            arr_14 [(unsigned char)12] [i_0] [i_1] [i_2] [i_3] [i_1] [(short)22] = ((/* implicit */unsigned char) (~(max((arr_12 [i_1] [i_3] [i_4 - 3]), (((int) (unsigned char)253))))));
                            arr_15 [i_3] [i_1] [i_1] [i_3] [i_4] [i_0] [i_2] = ((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_2] [i_3]);
                            var_13 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (short)-13647)) ? (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_1] [i_3]))))) : (((/* implicit */int) arr_10 [i_4 + 1] [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4 + 1]))))));
                        }
                    } 
                } 
            } 
            var_14 = min((((((/* implicit */_Bool) (short)32685)) ? (11U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62))))), (((max((((/* implicit */unsigned int) (unsigned char)255)), (3041033855U))) % (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)3)))))));
            var_15 |= ((/* implicit */unsigned char) max((max((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_1] [i_1])), (7297510804977938887LL))), (((/* implicit */long long int) (unsigned char)1))));
        }
        for (short i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), (arr_4 [i_0]))))));
            var_17 = ((/* implicit */int) min((var_17), ((~(-694077426)))));
        }
        var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) max((arr_3 [i_0] [i_0] [i_0]), ((short)-2169)))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
        /* LoopSeq 2 */
        for (short i_6 = 4; i_6 < 21; i_6 += 3) 
        {
            var_19 = ((/* implicit */unsigned short) ((signed char) (short)-32538));
            var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_13 [i_6 - 1] [i_6 + 2] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_13 [i_6 + 4] [i_6 + 1] [i_6] [i_6 - 4])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_6 - 1] [i_6 - 3] [i_6 - 1] [i_6 + 4])))))));
            var_21 = (unsigned char)128;
        }
        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            arr_23 [i_0] [i_7] = ((/* implicit */long long int) arr_12 [i_0] [i_7] [i_0]);
            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) arr_10 [16U] [i_0] [i_0] [i_7] [i_0])))));
            var_22 = ((/* implicit */signed char) min((((unsigned char) arr_21 [i_0] [i_0] [i_0])), ((unsigned char)15)));
            arr_25 [i_0] [i_7] [i_7] = ((/* implicit */short) arr_20 [i_0] [i_7] [i_7]);
            arr_26 [i_0] [i_7] = ((/* implicit */short) arr_17 [i_0] [i_0] [i_0]);
        }
    }
    for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        arr_29 [i_8] = ((/* implicit */_Bool) arr_9 [i_8] [i_8] [(unsigned char)0] [i_8]);
        arr_30 [i_8] = ((/* implicit */int) arr_18 [i_8]);
        arr_31 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) 1247043238U)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) (_Bool)0))));
    }
    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) 
    {
        var_23 = ((/* implicit */signed char) arr_0 [i_9]);
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) min((((((/* implicit */_Bool) (short)-27144)) ? (((/* implicit */int) min((((/* implicit */short) arr_18 [i_9])), ((short)10160)))) : (((/* implicit */int) ((signed char) arr_32 [i_9]))))), (((/* implicit */int) min((arr_0 [i_9]), (((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [i_9])) <= (arr_16 [i_9] [i_9] [i_9]))))))))))));
        arr_34 [14LL] [i_9] = ((/* implicit */int) (short)27147);
        /* LoopSeq 1 */
        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            arr_39 [i_9] [i_9] [i_9] = ((/* implicit */short) arr_1 [i_9]);
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_22 [i_9]), (arr_22 [i_9])))) ? (arr_16 [i_9] [i_9] [i_10]) : (((/* implicit */int) ((short) arr_8 [(unsigned short)16] [i_10] [(unsigned short)16])))));
            /* LoopSeq 2 */
            for (short i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_12 = 2; i_12 < 17; i_12 += 3) 
                {
                    for (int i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        {
                            var_26 = arr_18 [i_12];
                            var_27 = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_43 [i_11]))))), (arr_38 [i_13])));
                            arr_46 [i_9] [i_11] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) arr_40 [i_11]);
                            var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_12 - 2] [(unsigned char)15] [i_12] [i_12 - 1])))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */long long int) ((int) (unsigned char)255));
                var_30 = ((/* implicit */unsigned int) max((arr_35 [i_10] [i_10] [i_10]), (min((arr_35 [i_10] [i_10] [i_10]), (arr_35 [i_9] [i_10] [(unsigned char)0])))));
            }
            /* vectorizable */
            for (short i_14 = 0; i_14 < 20; i_14 += 3) /* same iter space */
            {
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-20222)) ? (((/* implicit */int) (short)-27166)) : (((/* implicit */int) (unsigned char)4))));
                var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_35 [i_9] [i_10] [i_14])))))));
                arr_51 [i_14] [i_14] [i_9] [i_9] = ((/* implicit */short) -1LL);
                arr_52 [i_9] [i_10] [i_14] [i_9] = ((/* implicit */int) (unsigned char)16);
                var_33 = ((/* implicit */unsigned char) arr_13 [i_9] [i_10] [i_9] [i_14]);
            }
        }
        var_34 = ((/* implicit */long long int) arr_7 [i_9] [i_9] [i_9] [i_9]);
    }
}
