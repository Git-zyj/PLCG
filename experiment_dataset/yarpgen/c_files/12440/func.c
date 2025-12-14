/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12440
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned short) (_Bool)1);
        var_12 -= ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)7)) && (((/* implicit */_Bool) max((-1867767239), (((/* implicit */int) (short)17010)))))))) > (((/* implicit */int) var_2)));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_13 *= ((/* implicit */_Bool) var_5);
        var_14 = var_9;
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 18; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                var_15 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)17010))) * (6002789829439247030ULL)));
                var_16 = arr_1 [i_2 - 1] [i_2 + 1];
                var_17 = ((/* implicit */long long int) var_2);
                var_18 ^= ((/* implicit */short) ((11459063661650247226ULL) ^ (((/* implicit */unsigned long long int) arr_6 [i_3] [i_3]))));
                /* LoopSeq 3 */
                for (unsigned int i_4 = 1; i_4 < 19; i_4 += 3) /* same iter space */
                {
                    var_19 ^= ((((/* implicit */_Bool) arr_8 [(signed char)2] [i_4 - 1] [i_4 + 1] [i_3])) || (((23ULL) > (((/* implicit */unsigned long long int) var_10)))));
                    var_20 &= arr_12 [i_4 - 1] [14] [i_4 - 1] [i_4 - 1];
                    var_21 = ((/* implicit */_Bool) (+(11459063661650247226ULL)));
                }
                for (unsigned int i_5 = 1; i_5 < 19; i_5 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 1; i_6 < 18; i_6 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_6 - 1] [i_6 - 1] [(short)11] [i_2] [5LL])) | (((/* implicit */int) arr_16 [i_6 - 1] [i_6 - 1] [7U] [i_2] [i_6 + 1]))));
                        var_23 = ((/* implicit */int) 3132440253U);
                    }
                    for (unsigned short i_7 = 1; i_7 < 18; i_7 += 3) /* same iter space */
                    {
                        var_24 -= ((/* implicit */int) (signed char)(-127 - 1));
                        var_25 = ((/* implicit */unsigned long long int) var_9);
                    }
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_2 + 2] [i_2])) - (((/* implicit */int) (_Bool)0)))))));
                    arr_20 [(unsigned short)1] [(unsigned short)1] [(signed char)0] [i_2] = ((/* implicit */long long int) (+(arr_19 [i_5] [i_5 + 1] [i_5 + 1] [(unsigned short)12])));
                }
                for (unsigned int i_8 = 1; i_8 < 19; i_8 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) == (arr_21 [(short)16] [(short)16] [i_3] [i_3] [i_8 + 1]))))));
                    var_28 *= ((/* implicit */unsigned short) ((arr_5 [i_1] [i_1]) || (((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))));
                }
            }
            arr_23 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_2 + 2] [i_2 + 1] [(unsigned char)19] [i_2])) ^ (((/* implicit */int) arr_15 [i_2 + 1] [i_2 + 1] [3U] [i_2]))));
            arr_24 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1] [i_2 + 2]))));
        }
        var_29 *= arr_5 [(unsigned short)14] [(unsigned short)14];
    }
    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_9))))) * (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)8654)))), (var_6))))))));
}
