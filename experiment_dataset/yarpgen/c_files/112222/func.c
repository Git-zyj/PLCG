/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112222
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_0 [i_0 - 2])))) ? (((/* implicit */int) ((arr_0 [i_0 + 1]) <= (((/* implicit */int) arr_1 [i_0 - 3] [i_0]))))) : ((+(((/* implicit */int) arr_1 [i_0 - 3] [(unsigned short)7]))))));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) (signed char)19)))) | (((/* implicit */int) ((-2565911959638610885LL) <= (((/* implicit */long long int) arr_0 [i_0]))))))))));
        arr_4 [i_0 - 2] |= ((/* implicit */int) var_12);
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) -7390989338450022447LL))));
        arr_8 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-16738)) : (((/* implicit */int) (signed char)19)))) <= (((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) arr_6 [i_1]))))))), (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) ((((/* implicit */int) var_16)) <= (((/* implicit */int) arr_7 [i_1]))))) : (((/* implicit */int) arr_6 [i_1]))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) arr_2 [i_2] [i_2])) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2])))))))), (((((/* implicit */_Bool) ((arr_0 [i_2]) | (((/* implicit */int) arr_2 [i_2] [i_2]))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_2])))))))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_3 [i_2]))))), (arr_7 [i_2])))) ? (((int) var_2)) : (min((arr_0 [i_2]), (((/* implicit */int) arr_3 [i_2])))))))));
        arr_11 [(unsigned short)2] [i_2] |= ((/* implicit */int) var_11);
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            for (unsigned short i_4 = 3; i_4 < 12; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_6 = 2; i_6 < 12; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */short) ((arr_22 [i_2] [i_2] [(signed char)2] [(signed char)2] [i_2] [i_2]) <= (arr_22 [i_2] [i_3] [i_4 + 1] [i_4] [i_2] [i_6])));
                            arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-40)) | (((/* implicit */int) arr_5 [i_2] [i_2]))));
                        }
                        arr_26 [i_2] [i_2] = ((/* implicit */unsigned int) arr_15 [i_2] [i_2] [i_2]);
                        var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_20 [i_3] [i_4 + 1] [i_5] [i_4 + 1] [i_5])) ? (arr_20 [i_2] [i_4 - 1] [i_5] [i_2] [i_2]) : (((/* implicit */long long int) arr_18 [(_Bool)1] [i_4 - 2] [i_3])))) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)20)))));
                        arr_27 [i_4 - 2] [i_4 - 3] [i_4] [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_5 [i_2] [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4 - 1] [i_2]))) : (var_11))), (((/* implicit */long long int) (~(arr_24 [i_4 - 3] [i_4 - 1] [i_4 - 2] [i_4] [i_4 - 2]))))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */_Bool) var_8);
    var_25 |= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-20)) | (((/* implicit */int) (signed char)-20))));
}
