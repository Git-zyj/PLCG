/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112529
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
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        arr_2 [1LL] = (unsigned short)22204;
        arr_3 [i_0 - 1] = ((/* implicit */int) var_5);
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 8; i_1 += 1) 
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((_Bool) arr_5 [i_1 + 1])))));
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 10; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 2) 
            {
                {
                    arr_13 [i_3] = ((/* implicit */unsigned long long int) (unsigned char)130);
                    arr_14 [(short)0] [6ULL] [i_3] [i_3] = ((/* implicit */unsigned short) arr_12 [i_1 + 1] [i_1] [i_1] [i_1]);
                }
            } 
        } 
        /* LoopSeq 4 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_19 [i_4] = (~(((/* implicit */int) (unsigned short)63488)));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    {
                        var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_18 [i_1 + 3]))));
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)114)) ? (((arr_17 [i_1] [i_4]) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) var_3)))) : (((((/* implicit */int) (unsigned char)133)) * (((/* implicit */int) (unsigned char)138))))));
                        arr_28 [i_1] [i_4] [i_5] [i_6] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)138))) / (var_12))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1 + 3] [1U] [i_5 + 1] [1U])))));
                        var_17 -= ((/* implicit */long long int) var_11);
                    }
                } 
            } 
        }
        for (short i_7 = 1; i_7 < 7; i_7 += 3) 
        {
            arr_32 [i_1] [i_7 + 1] [i_7] = ((/* implicit */unsigned short) (unsigned char)121);
            arr_33 [i_7] = ((/* implicit */unsigned short) ((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) > (873552607)))))));
            /* LoopSeq 1 */
            for (short i_8 = 4; i_8 < 8; i_8 += 3) 
            {
                arr_36 [i_7] [i_7] [i_8] = ((/* implicit */_Bool) arr_6 [i_1 + 3]);
                arr_37 [i_1] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) var_13)) ^ ((~(((/* implicit */int) (unsigned char)118))))));
            }
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_40 [i_9] = ((/* implicit */unsigned short) ((arr_15 [i_1 + 3]) << (((((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117))))) - (17522687602379840473ULL)))));
            var_18 -= ((/* implicit */unsigned long long int) ((arr_17 [(unsigned short)10] [(_Bool)1]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_4 [i_1 + 3]))));
        }
        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_11 = 2; i_11 < 8; i_11 += 4) 
            {
                arr_46 [i_1] [i_1] [i_11 + 1] [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)3182))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [0U])) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_20 [i_11] [i_10] [i_1] [i_10]))))));
                arr_47 [4ULL] [i_10] [i_11] = ((/* implicit */int) (unsigned char)156);
            }
            arr_48 [i_1] = ((/* implicit */short) ((arr_29 [(unsigned short)4] [i_10]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [10U] [10U]))) : (var_1)));
        }
    }
    for (short i_12 = 0; i_12 < 17; i_12 += 4) 
    {
        arr_53 [i_12] = ((/* implicit */unsigned short) ((arr_49 [i_12]) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_13)))))));
        var_20 = ((/* implicit */int) 11827916073437227114ULL);
    }
    var_21 = ((/* implicit */unsigned short) var_4);
}
