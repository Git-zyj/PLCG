/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12415
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
    var_17 ^= ((/* implicit */int) max((var_12), (((/* implicit */unsigned long long int) var_7))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) max((arr_0 [i_0]), (arr_0 [i_0])))), (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_11))))), (((/* implicit */unsigned long long int) min((arr_4 [i_0 - 2] [i_1 - 2]), (((/* implicit */unsigned int) 528140532)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 2; i_3 < 7; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned char) arr_10 [i_2] [i_2] [i_2] [i_2]);
                        var_20 ^= ((/* implicit */_Bool) ((((arr_5 [i_0] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) ((-1LL) < (((/* implicit */long long int) 4294967285U))))) : (((/* implicit */int) (unsigned char)121))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 + 1] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) ((long long int) arr_10 [i_2] [i_2] [i_2] [i_2])))));
                            var_22 = ((/* implicit */unsigned int) arr_3 [i_2] [i_2]);
                            var_23 = ((/* implicit */int) arr_6 [i_2] [i_2]);
                            var_24 += ((/* implicit */signed char) ((unsigned short) var_9));
                        }
                        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1 - 3])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_1 - 1])) : (((/* implicit */int) var_10))));
                            var_26 = ((arr_7 [i_3 + 1] [i_3 + 1]) % (arr_7 [i_3 + 3] [i_3 + 3]));
                            var_27 = ((/* implicit */signed char) -7527343115672054353LL);
                        }
                        for (unsigned int i_6 = 2; i_6 < 9; i_6 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_6 - 2])) ? (arr_2 [i_0 - 2] [i_6 - 2]) : (arr_2 [i_0 - 1] [i_6 - 2])));
                            arr_18 [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] |= ((/* implicit */signed char) ((((/* implicit */long long int) 0U)) & (-1LL)));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((unsigned int) -1779540100))));
                            var_29 ^= ((/* implicit */unsigned int) var_5);
                            var_30 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 133169152)) ? (((/* implicit */long long int) 1379537411U)) : ((+(arr_7 [i_0] [i_0])))));
                        }
                    }
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            var_31 = (+(((((/* implicit */_Bool) arr_21 [i_1 - 1] [i_2] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_21 [i_1 + 1] [i_2] [i_2] [i_2])) : (((/* implicit */int) (signed char)25)))));
                            var_32 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        }
                        var_33 = ((/* implicit */unsigned short) (+((+(arr_7 [i_0 - 1] [i_0])))));
                    }
                    arr_29 [i_2] = (unsigned char)234;
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
}
