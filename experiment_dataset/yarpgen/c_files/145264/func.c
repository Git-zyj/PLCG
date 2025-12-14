/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145264
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2] [i_0]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_0]))) : (arr_6 [i_0] [i_2] [i_0]))));
                        var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_1] [i_0]))) <= ((-(arr_6 [i_2] [i_1] [i_2])))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 1; i_4 < 12; i_4 += 4) 
    {
        for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            {
                arr_14 [i_4] [i_4] = ((/* implicit */_Bool) arr_11 [i_5]);
                /* LoopNest 2 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (long long int i_7 = 1; i_7 < 12; i_7 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_4] [i_7]))));
                            arr_20 [i_7] [i_4] [(unsigned char)10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((signed char) arr_9 [i_4] [(short)3] [i_6]))), (arr_11 [i_4 + 1])))) ? (((/* implicit */int) ((_Bool) ((arr_6 [i_4] [i_5] [i_6]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [4U] [(signed char)11] [i_6]))))))) : ((+(((((/* implicit */_Bool) arr_2 [i_5] [i_6] [i_7])) ? (((/* implicit */int) arr_18 [i_4] [i_6 - 1] [i_5] [i_4])) : (((/* implicit */int) arr_8 [i_4] [1U] [i_4]))))))));
                        }
                    } 
                } 
                arr_21 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((arr_16 [i_4] [i_4] [i_5]) != (((/* implicit */unsigned long long int) ((((long long int) arr_2 [(unsigned char)5] [i_5] [i_4])) | (((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_4] [i_4] [i_4] [i_5]))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)248)) - (222)))));
    var_15 = ((/* implicit */_Bool) max((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) var_9))));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-8196621428331490169LL), (((/* implicit */long long int) (_Bool)1))))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) ((unsigned short) var_3)))))) : (((((/* implicit */_Bool) ((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_0)))) ? (((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))))))));
}
