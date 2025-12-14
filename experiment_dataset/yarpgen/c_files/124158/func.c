/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124158
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
    var_18 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [11LL] = ((/* implicit */_Bool) arr_3 [i_1]);
                arr_6 [i_1] = ((/* implicit */long long int) ((arr_4 [i_1 + 1] [i_1 + 2]) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)15])))));
                var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) 31U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65530))) : (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)246)))))) + (max((9107027971050922396LL), (((/* implicit */long long int) var_11))))))));
                arr_7 [(signed char)15] = ((/* implicit */short) arr_4 [i_0] [i_1 - 1]);
                /* LoopSeq 4 */
                for (signed char i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    var_20 = ((/* implicit */int) arr_3 [(short)21]);
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_2 - 1] [i_3] = ((/* implicit */short) arr_4 [(unsigned short)9] [i_3]);
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) ((arr_1 [(signed char)15]) ? (arr_4 [i_2 - 2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0]))))))) ^ (((/* implicit */int) (unsigned short)28))));
                        var_22 = ((/* implicit */int) ((short) ((((/* implicit */int) arr_11 [19ULL] [i_2 + 1] [19ULL] [19ULL] [i_2 - 1])) - (((arr_1 [i_0]) ? (1670384531) : (((/* implicit */int) (unsigned char)238)))))));
                        arr_14 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_1)))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)17980)) : (((/* implicit */int) (unsigned short)3))))))) : (max((7851905908324214614ULL), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1 + 2]))))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        arr_17 [i_0] [i_0] [i_1] [i_4] [i_2 - 2] [i_4 - 1] = ((/* implicit */unsigned short) (unsigned char)216);
                        arr_18 [i_0] [i_1 + 3] [i_4] [i_4 - 1] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_16 [(unsigned char)11] [i_1] [i_1] [(unsigned short)11])) || (((/* implicit */_Bool) arr_8 [i_0] [i_0])))))));
                    }
                    for (unsigned char i_5 = 2; i_5 < 20; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */int) ((((((/* implicit */int) (unsigned short)0)) < (((/* implicit */int) (_Bool)1)))) || (((/* implicit */_Bool) ((short) ((signed char) arr_2 [i_2 + 1]))))));
                        arr_21 [i_0] [i_5] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_3 [i_2 + 1])))) ? (((/* implicit */int) ((_Bool) -3155626002925795834LL))) : (((/* implicit */int) var_11))));
                        arr_22 [i_0] [i_0] [i_5] [i_5] = ((/* implicit */long long int) var_7);
                    }
                }
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    var_24 = ((/* implicit */_Bool) (~(var_12)));
                    arr_27 [i_6] [(unsigned char)6] [11LL] = ((/* implicit */unsigned long long int) arr_23 [i_6] [i_1 + 3] [i_6]);
                    arr_28 [i_0] [i_1] [i_6] [i_6] = ((/* implicit */unsigned long long int) (signed char)-7);
                }
                for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    arr_31 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_5)) : (((((/* implicit */_Bool) min((100663296U), (((/* implicit */unsigned int) arr_3 [i_7]))))) ? (((((/* implicit */_Bool) arr_15 [i_7] [i_7] [i_7] [i_0] [i_7] [(short)6])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_4 [i_7] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0])))))));
                    var_25 ^= ((/* implicit */_Bool) var_12);
                }
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_26 = ((/* implicit */short) (_Bool)1);
                    arr_34 [i_0] = ((/* implicit */short) ((arr_29 [(unsigned char)0] [i_1 + 1] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_1] [i_1 + 1] [i_0]))) : (var_9)));
                    var_27 = ((/* implicit */unsigned char) var_14);
                    var_28 = ((/* implicit */signed char) (_Bool)1);
                }
            }
        } 
    } 
}
