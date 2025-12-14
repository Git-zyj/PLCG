/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1163
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
    var_13 &= (~(((((((var_4) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (9223372036854775807LL))) << (((var_11) - (8956916922364806052ULL))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? ((~(arr_6 [i_1] [i_1 - 2] [i_2 - 1]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1] [i_2 - 1]))))))))));
                    var_15 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967286U)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))))) / (arr_5 [i_1 + 2] [i_0])))) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])) : ((~(arr_0 [i_0]))));
                    var_16 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)10525)) - (((/* implicit */int) var_8))))), (arr_6 [i_0] [i_0] [i_0])));
    }
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_7))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_3] [4ULL])) == (12265388622598541764ULL))))) & ((+(arr_5 [i_3] [12LL]))))))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        arr_12 [i_4] = ((/* implicit */long long int) ((arr_10 [i_4]) >> (((/* implicit */int) var_5))));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            for (unsigned int i_6 = 2; i_6 < 22; i_6 += 3) 
            {
                for (signed char i_7 = 3; i_7 < 23; i_7 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            var_20 += ((/* implicit */short) arr_19 [i_4] [i_4] [i_4] [i_4]);
                            var_21 = ((/* implicit */unsigned long long int) ((long long int) arr_18 [i_6 + 2] [i_6 + 2] [i_6 + 2]));
                        }
                        for (short i_9 = 1; i_9 < 22; i_9 += 2) 
                        {
                            arr_27 [i_7] = (~(((/* implicit */int) var_8)));
                            arr_28 [i_4] [i_7] [i_4] [i_4] = ((/* implicit */unsigned char) arr_14 [i_7 - 3] [i_7 + 1]);
                        }
                        var_22 = ((/* implicit */unsigned short) (signed char)60);
                    }
                } 
            } 
        } 
    }
    var_23 = max((((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((var_4) / (((/* implicit */long long int) ((/* implicit */int) (signed char)99)))))) : ((+(var_11))))), (((/* implicit */unsigned long long int) var_3)));
    var_24 ^= ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (((long long int) (+(var_0)))));
}
