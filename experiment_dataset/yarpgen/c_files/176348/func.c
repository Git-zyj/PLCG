/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176348
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) / (arr_1 [i_0])));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)20558))) % (arr_0 [i_1]))))));
            arr_6 [i_0] [i_1] = ((/* implicit */short) ((unsigned long long int) arr_5 [i_0] [i_0]));
            /* LoopSeq 4 */
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) >> ((((~(((/* implicit */int) var_12)))) + (273))))))));
                /* LoopNest 2 */
                for (signed char i_3 = 1; i_3 < 8; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(2147483647))))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)46748)) | (((arr_8 [i_0]) & (((/* implicit */int) arr_7 [i_0] [i_1] [i_4])))))))));
                            var_24 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_2] [i_3] [i_2] [i_1] [i_0])) / (arr_2 [i_3])));
                        }
                    } 
                } 
                var_25 *= ((/* implicit */signed char) (unsigned short)18787);
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) == (arr_9 [i_0] [i_0]))))));
                var_27 = ((/* implicit */unsigned short) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_2]);
            }
            for (short i_5 = 1; i_5 < 9; i_5 += 4) 
            {
                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_15);
                var_28 = ((/* implicit */long long int) (+(339694531352434296ULL)));
                arr_19 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned int) ((unsigned long long int) var_0)));
            }
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                arr_22 [i_0] [i_0] [i_1] [i_6] = ((/* implicit */short) arr_9 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        {
                            var_29 -= ((/* implicit */_Bool) 879210905);
                            arr_29 [i_0] [i_1] [i_6 - 1] [i_7] [i_8] = ((/* implicit */unsigned char) arr_24 [i_0] [i_0] [i_6 - 1] [i_7] [i_8]);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_9 = 2; i_9 < 9; i_9 += 2) 
            {
                var_30 = ((/* implicit */signed char) ((((/* implicit */int) ((arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [0ULL]) >= (((/* implicit */unsigned long long int) arr_25 [i_0] [i_9] [i_0] [i_9]))))) << (((((((/* implicit */int) arr_26 [i_0] [(unsigned short)3] [(unsigned short)3] [i_0] [(unsigned short)3])) + (((/* implicit */int) (unsigned short)9483)))) - (9409)))));
                arr_34 [i_0] [i_0] [i_1] = ((/* implicit */int) arr_21 [i_0] [i_0] [i_9]);
            }
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                var_31 -= ((/* implicit */_Bool) (~(arr_11 [i_0] [i_0] [i_0] [i_0])));
                var_32 = ((/* implicit */unsigned long long int) (-(var_9)));
            }
        }
    }
    var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((9150963715318563369ULL) ^ (18107049542357117336ULL))))));
    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (+(var_6))))));
    var_35 = ((/* implicit */int) (unsigned char)0);
}
