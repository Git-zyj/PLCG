/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149586
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
    var_12 = ((/* implicit */unsigned short) ((int) var_2));
    var_13 = (~(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (unsigned char)255)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) (~((-(arr_3 [i_0 + 3] [i_0] [i_0 - 1])))));
                /* LoopSeq 2 */
                for (int i_2 = 3; i_2 < 22; i_2 += 4) 
                {
                    var_15 = ((/* implicit */unsigned char) 5091753322162065609LL);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_2] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_1 [i_4]))))) : (arr_2 [(signed char)19] [i_2] [1U]))));
                                var_16 = ((/* implicit */unsigned long long int) (~(((int) ((((/* implicit */int) arr_6 [19LL])) % (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_2 - 3] [i_2] [i_3] [i_4])))))));
                                var_17 = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) arr_9 [i_0 + 3] [i_0] [i_1] [i_2] [(unsigned short)6] [i_2 + 1] [i_4])))));
                                arr_12 [(short)12] [13U] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2 - 2] [i_2] [i_2 - 3] [i_2] [i_2 - 2] [i_2 + 2]);
                            }
                        } 
                    } 
                    var_18 = (~(((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_2 + 2])) ? (arr_0 [i_0 + 3] [i_2 + 2]) : (arr_0 [i_0 + 3] [i_2 + 2]))));
                }
                for (int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    arr_15 [i_1] [i_1] [i_5] [i_1] = ((/* implicit */unsigned long long int) arr_13 [i_0 + 3] [(unsigned short)20]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            {
                                arr_21 [7LL] [(_Bool)1] [20] [23] [23] [i_0 + 3] [9LL] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_19 [i_1] [i_5]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 - 1] [i_1] [i_5] [i_5] [i_7] [i_1] [i_1]))))))) >= (((unsigned int) arr_1 [(unsigned char)17])))))) < (((((/* implicit */_Bool) ((short) (unsigned short)57026))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_10 [16U] [(unsigned short)16] [i_5] [i_6] [21U] [8] [i_0]) : (((/* implicit */unsigned long long int) var_2))))))));
                                arr_22 [i_0 - 1] [i_0 - 1] [i_0 + 3] [i_0 + 1] [i_0 - 1] = ((/* implicit */unsigned short) ((((int) arr_13 [i_0 + 1] [i_0 + 1])) << (((((/* implicit */int) ((unsigned char) arr_2 [i_0 - 1] [i_0 + 3] [i_0 + 2]))) - (49)))));
                            }
                        } 
                    } 
                    var_19 = min((((/* implicit */long long int) (short)25082)), (0LL));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 23; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 3; i_9 < 22; i_9 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3388138362U)) ? (((((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)21] [i_5] [i_8 + 1] [i_8 + 1] [i_5] [i_5])) ? (5091753322162065629LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [(unsigned char)23] [10ULL] [i_8] [i_9 - 1] [(unsigned char)23] [i_9 - 3]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_9 - 2] [i_8 - 1] [i_9] [i_9] [i_1] [i_0 - 1] [i_0 - 1]))))))))) ? ((+(arr_16 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_8 + 1] [i_8 + 1] [i_9 + 2]))) : (((/* implicit */int) arr_8 [(unsigned short)13] [i_1] [i_5] [i_9] [i_8 + 1] [i_8 + 1] [i_9]))));
                                arr_28 [i_0] [(unsigned short)23] [i_9] = ((/* implicit */unsigned short) arr_20 [i_0 + 3] [i_5] [i_0 + 3] [(unsigned char)18]);
                                var_21 = arr_9 [i_5] [i_8 + 1] [i_0 - 1] [i_8] [i_5] [i_0 - 1] [i_8];
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
