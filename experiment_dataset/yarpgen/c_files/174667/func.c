/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174667
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
    var_19 = ((/* implicit */unsigned short) min(((-((~(var_3))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_0] = (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [(unsigned short)0] [i_1 + 1] [i_2])))))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_0] [i_1 - 1] [i_2] [i_0])), (arr_3 [i_0] [i_0] [2]))))))));
                        var_21 = ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0] [i_3 + 1] [i_2 + 1]))));
                        var_22 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(signed char)12] [i_1] [i_3])))))));
                        var_23 = ((/* implicit */_Bool) min(((+((~(arr_8 [i_3] [i_0] [(short)7] [i_0]))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_0] [i_0] [i_0 + 2] [i_0 + 4] [i_0] [(short)0])))))));
                        arr_10 [i_2] [(_Bool)1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0]))));
                    }
                    for (long long int i_4 = 1; i_4 < 22; i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_1 [i_1 - 1] [i_0 + 3])))))))));
                        var_24 = ((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_4 - 1]))))), (arr_9 [i_0] [i_0] [i_0] [(signed char)3] [i_0] [(_Bool)0]))))));
                        var_25 = ((/* implicit */signed char) arr_1 [2LL] [i_0]);
                        var_26 = ((/* implicit */short) max((((/* implicit */long long int) max(((+(((/* implicit */int) arr_13 [i_0])))), ((+(((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_2 + 1] [i_4]))))))), (min(((-(arr_4 [4LL] [i_1] [(signed char)2] [4LL]))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 1; i_5 < 22; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_27 = ((/* implicit */short) (+((-(arr_8 [(short)6] [i_2 + 2] [i_5] [i_6])))));
                            var_28 = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_9 [i_0 + 4] [i_1] [i_1] [i_1] [i_5] [(short)16]))))));
                            arr_19 [i_6] [i_6 - 1] [(short)20] [i_2] [i_6 - 1] = ((/* implicit */signed char) (~((-(arr_18 [i_0 + 4] [i_6] [i_5 + 1])))));
                        }
                        for (unsigned short i_7 = 1; i_7 < 22; i_7 += 2) 
                        {
                            arr_23 [i_2] [5LL] [i_0 - 2] [(short)3] [(short)3] = ((/* implicit */signed char) (~((+(arr_21 [i_0 + 3] [i_0 + 3] [i_0 + 4] [i_0] [i_0])))));
                            var_29 = ((/* implicit */long long int) arr_0 [i_0 - 2]);
                        }
                        arr_24 [i_0] [i_0 + 1] [0ULL] [22ULL] = ((/* implicit */unsigned short) (-((+(arr_18 [i_0 + 3] [i_2] [i_2 - 2])))));
                        var_30 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 2] [i_2 + 1])))))));
                        arr_25 [i_0 - 1] [16U] [14LL] [i_0 + 2] [i_0] [i_0] = ((/* implicit */short) arr_4 [i_5] [i_2 - 1] [i_1] [i_0]);
                        arr_26 [i_0 - 1] [i_1] [(short)7] [i_5] = ((/* implicit */unsigned char) arr_1 [(unsigned short)22] [(unsigned short)6]);
                    }
                    var_31 = ((/* implicit */int) max((min((arr_21 [i_0] [i_1] [(_Bool)1] [(_Bool)1] [i_0]), (((/* implicit */long long int) arr_16 [i_0] [i_1] [i_2] [(unsigned short)4] [i_0])))), (((/* implicit */long long int) (+((+(((/* implicit */int) arr_20 [i_2 + 1] [(_Bool)1] [i_2] [i_2] [i_2] [i_0])))))))));
                    var_32 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) arr_11 [i_0] [i_0] [9ULL] [i_2 - 2] [i_2])), (arr_8 [i_0] [16LL] [i_1] [i_2])))));
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */short) (~((~((~(var_9)))))));
    var_34 = ((/* implicit */_Bool) min(((~((~(((/* implicit */int) var_15)))))), ((~((~(((/* implicit */int) var_16))))))));
}
