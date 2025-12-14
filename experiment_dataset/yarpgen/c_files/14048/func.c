/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14048
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
    var_14 = ((/* implicit */long long int) var_13);
    var_15 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) ((10664225433320721413ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-13552)) > (-8)))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (arr_0 [i_0])))))))) - (((/* implicit */int) max(((short)-13552), ((short)-1))))));
        arr_4 [1U] [i_0] = ((/* implicit */_Bool) (unsigned short)0);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */short) -9223372036854775806LL);
            var_18 |= ((/* implicit */short) max((var_13), (min((arr_5 [i_1 - 3] [11ULL] [i_1 - 1]), (((/* implicit */int) (short)-13541))))));
            arr_7 [i_1] [i_0] |= arr_1 [i_0];
            var_19 ^= ((/* implicit */_Bool) arr_2 [i_0] [i_1]);
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                for (int i_3 = 2; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_13 [i_1] = ((/* implicit */long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) (short)-13551))));
                        arr_14 [i_1] [i_1] [i_2] [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_7) ? (min((((/* implicit */int) (short)-13552)), (arr_11 [i_0] [i_1] [i_2] [i_3]))) : (((/* implicit */int) (short)-13538))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13542))) : (max((max((((/* implicit */unsigned long long int) -1)), (10171208872913718793ULL))), (((/* implicit */unsigned long long int) arr_5 [(unsigned char)3] [i_1 - 2] [i_3]))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            arr_18 [(short)2] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */int) ((((min((((/* implicit */unsigned int) arr_16 [i_4] [i_4])), (3796174634U))) <= (min((((/* implicit */unsigned int) arr_12 [i_4] [i_3 - 1] [i_2 - 1] [i_1 - 1] [i_0])), (2700263983U))))) ? (max((max((((/* implicit */unsigned long long int) (short)-13520)), (12161297156281032903ULL))), (((/* implicit */unsigned long long int) (short)13544)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)65532)))))));
                        }
                        for (int i_5 = 3; i_5 < 10; i_5 += 2) 
                        {
                            arr_23 [i_1] [i_3 - 2] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (short)1826)), (max((((/* implicit */long long int) arr_12 [i_0] [i_5 - 3] [i_2] [i_1] [i_1])), ((~(var_12)))))));
                            arr_24 [i_5] [i_1 - 2] [i_1] [i_3] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_1] [5] [i_0] [i_5 - 1] [i_5]))));
                            arr_25 [i_1 - 2] [i_2] [i_1] = ((/* implicit */unsigned int) arr_21 [i_0] [i_5] [i_2] [i_3 - 1] [i_5] [i_3]);
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_6 = 3; i_6 < 11; i_6 += 2) /* same iter space */
        {
            arr_28 [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) var_0);
            /* LoopNest 2 */
            for (long long int i_7 = 1; i_7 < 10; i_7 += 3) 
            {
                for (unsigned short i_8 = 2; i_8 < 11; i_8 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) (+(var_13)));
                        var_22 = arr_8 [i_7] [i_8] [i_7] [i_7];
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 1; i_9 < 10; i_9 += 2) 
                        {
                            var_23 |= ((/* implicit */int) ((((/* implicit */_Bool) 369574620)) ? ((+(arr_30 [i_0] [i_6] [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_6] [i_7] [(unsigned short)1] [3] [i_9]))))))));
                            arr_36 [i_0] [i_9] [i_7] = arr_10 [i_9 + 2] [i_6] [i_6] [i_6] [i_9] [i_8 + 1];
                            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) 16776704U))));
                            var_25 = ((/* implicit */long long int) var_7);
                            var_26 = ((6285446917428518713ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_7] [i_7 + 2] [i_9] [i_9] [i_9]))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            arr_40 [i_7] [i_7 + 2] [i_7] = ((/* implicit */int) ((arr_1 [i_7 + 2]) / (((/* implicit */long long int) ((/* implicit */int) (short)13537)))));
                            var_27 = ((/* implicit */int) (unsigned short)50699);
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_43 [i_7] [i_7] [i_7 + 1] [6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */long long int) -100952640)) & (((((/* implicit */long long int) -2147483643)) / (arr_20 [i_0] [(unsigned short)7] [i_7] [i_8 - 2] [i_11])))));
                            arr_44 [i_0] [i_6] [i_7] [i_8 + 1] [i_7] [i_6] = ((/* implicit */unsigned long long int) arr_33 [i_6 - 2] [i_6] [i_6] [i_6]);
                        }
                    }
                } 
            } 
        }
        arr_45 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(arr_41 [i_0] [i_0] [i_0] [i_0] [(short)0] [i_0])))), (min((((/* implicit */unsigned long long int) -369574600)), (arr_2 [i_0] [i_0])))));
    }
    var_28 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_2)) <= (min((0ULL), (((/* implicit */unsigned long long int) min((var_12), (((/* implicit */long long int) -1962573029)))))))));
    var_29 = ((/* implicit */unsigned short) max((6285446917428518717ULL), (6285446917428518730ULL)));
}
