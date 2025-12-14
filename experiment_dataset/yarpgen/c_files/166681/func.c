/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166681
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
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((int) (short)-30394)))));
    var_13 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 1]))));
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (arr_1 [11] [i_0 - 1]) : (arr_1 [i_0 + 1] [i_0 + 1]))))));
        var_15 = ((/* implicit */unsigned long long int) var_0);
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) (+(var_5)))) % (arr_5 [i_1] [i_1]))) & (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (10776569688847441870ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1])))))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (~((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_2))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4294967286U)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned short)0]))) & (arr_8 [i_3] [i_3])))))) ? ((+(arr_11 [i_1] [i_2 - 2] [i_3]))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_9 [i_1])) && ((_Bool)1)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            arr_16 [i_1] [i_1] [i_5] [i_4] [i_5] = ((/* implicit */_Bool) (+(arr_12 [i_2 + 1] [i_2 - 2] [i_2 - 1] [i_2 + 1])));
                            arr_17 [i_1] = ((/* implicit */unsigned int) (~(arr_12 [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 - 2])));
                            var_18 = ((/* implicit */unsigned long long int) var_10);
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            arr_20 [(short)13] [i_3] [i_4] [13U] = ((/* implicit */int) arr_7 [i_2 - 2] [i_2]);
                            var_19 = ((/* implicit */short) ((signed char) var_4));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 2; i_7 < 16; i_7 += 3) 
                        {
                            arr_24 [i_1] [i_2] [i_3] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */long long int) 4294967285U)) : ((-9223372036854775807LL - 1LL))));
                            var_20 |= ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) % (((/* implicit */int) ((_Bool) var_0)))));
                            arr_25 [i_1] [i_2] [i_3] [i_4] [(unsigned char)13] [i_7] = ((/* implicit */unsigned short) var_4);
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 576460752269869056LL)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (short)-1))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            var_22 = ((/* implicit */long long int) (_Bool)1);
            arr_32 [i_8] [i_9] [i_8] = ((/* implicit */short) (signed char)122);
            arr_33 [i_8] = ((/* implicit */long long int) ((unsigned long long int) arr_14 [i_9] [i_9] [i_9] [i_8] [i_8]));
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_15 [i_8])) : (((/* implicit */int) arr_15 [i_8]))));
        }
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (-(((/* implicit */int) ((signed char) ((int) arr_15 [i_8])))))))));
    }
    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
    {
        var_25 &= ((/* implicit */long long int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_10] [i_10] [i_10] [i_10] [i_10])) % (((/* implicit */int) arr_4 [(short)18]))))) || (((/* implicit */_Bool) (~(var_11))))))), (var_7)));
        var_26 = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (unsigned short)298))))) % (((/* implicit */int) max((((/* implicit */short) arr_4 [i_10])), ((short)(-32767 - 1))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) -907828587)))))));
    }
    var_27 += ((/* implicit */signed char) var_2);
}
