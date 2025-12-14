/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104196
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
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((var_9) <= (((/* implicit */long long int) var_0))));
                var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */long long int) ((int) (unsigned char)152))) >= (max((((/* implicit */long long int) var_6)), (arr_0 [i_0])))))), (((((/* implicit */_Bool) ((((-8635800005002340668LL) + (9223372036854775807LL))) >> (((/* implicit */int) (unsigned char)3))))) ? (min((1202246432), (((/* implicit */int) arr_2 [i_1] [i_1])))) : (((/* implicit */int) arr_2 [i_0] [i_1])))))))));
                arr_5 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) var_3);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 12; i_2 += 3) 
    {
        for (unsigned short i_3 = 2; i_3 < 11; i_3 += 3) 
        {
            {
                var_12 = min((((/* implicit */int) ((_Bool) arr_6 [i_2]))), (((arr_7 [i_3 - 1] [i_3 - 1]) ? (arr_10 [5] [i_3 + 2] [i_2 - 1]) : (((/* implicit */int) var_6)))));
                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) var_9))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    for (unsigned short i_5 = 2; i_5 < 12; i_5 += 3) 
                    {
                        {
                            arr_18 [(_Bool)1] [(_Bool)1] &= (+((-9223372036854775807LL - 1LL)));
                            var_14 &= ((/* implicit */short) max((((/* implicit */long long int) (-(((int) var_2))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-3187575074536442286LL)))) ? (((((/* implicit */_Bool) 0)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_9 [2LL] [(unsigned short)1] [i_4])))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_3 + 2])))))));
                            var_15 -= ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [(_Bool)1] [4]))));
                            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((long long int) 755797612U)) : (((/* implicit */long long int) ((-2065071022) / (((/* implicit */int) arr_11 [(unsigned char)5] [(unsigned short)9] [i_4])))))))) ? ((~(max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_8 [(signed char)9] [i_2]))))) : (((/* implicit */unsigned long long int) ((arr_7 [i_2 - 1] [i_2 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [i_2 - 1] [i_2 - 1] [i_3 + 2] [i_3 + 2])))))));
                            var_17 = ((/* implicit */short) ((min((((/* implicit */long long int) (unsigned char)0)), (8589934336LL))) >> (((3538039340U) - (3538039298U)))));
                        }
                    } 
                } 
                arr_19 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_6);
                arr_20 [6] [i_2] [i_3] = ((/* implicit */unsigned char) arr_11 [i_2 - 1] [i_2 + 1] [i_2 + 1]);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) max((var_10), (((/* implicit */unsigned short) (unsigned char)143)))))))) / (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((~(var_7)))))));
    var_19 = ((/* implicit */unsigned long long int) min((var_1), (var_7)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_6 = 1; i_6 < 10; i_6 += 4) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) arr_10 [i_6 + 2] [i_6 - 1] [(short)11])) * (var_0)));
        arr_23 [i_6] = var_0;
        arr_24 [i_6] [i_6] = ((/* implicit */_Bool) (((+(var_7))) % (((/* implicit */long long int) -1466648023))));
        arr_25 [(unsigned short)7] = ((/* implicit */long long int) var_0);
        arr_26 [i_6] [i_6] = ((/* implicit */int) arr_6 [6LL]);
    }
}
