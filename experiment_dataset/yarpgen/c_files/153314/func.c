/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153314
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
    var_16 = ((/* implicit */short) var_6);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 4; i_2 < 14; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) var_14);
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)39))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */int) min((((arr_2 [i_0] [i_0]) / (arr_2 [i_0] [i_0]))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)111)), ((unsigned char)19))))));
        var_18 = ((/* implicit */unsigned int) (signed char)-115);
        arr_9 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)8256)) - (((/* implicit */int) arr_6 [i_0] [i_0]))))) > ((~(arr_2 [i_0] [i_0])))));
    }
    var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */int) ((4294967290U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        for (signed char i_4 = 1; i_4 < 10; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 10; i_5 += 4) 
                {
                    for (signed char i_6 = 4; i_6 < 10; i_6 += 4) 
                    {
                        {
                            arr_18 [i_4 - 1] [i_4] [i_4] [i_4 + 1] [i_4] [i_4] = ((/* implicit */long long int) (short)-8257);
                            var_20 = ((/* implicit */int) 2942179806367639015LL);
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                            {
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (signed char)95))));
                                arr_22 [i_3] [i_5] [i_7] [i_7] = ((/* implicit */short) ((((((/* implicit */int) (signed char)127)) + (((/* implicit */int) (signed char)-127)))) + (((/* implicit */int) arr_1 [i_3]))));
                            }
                            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
                            {
                                arr_25 [i_3] [i_4 - 1] [i_5] [i_6 - 2] [i_8] = (~((~(((/* implicit */int) (unsigned char)56)))));
                                var_22 += ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (17083127432740156846ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-113))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_3] [10] [i_3] [i_3])) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (signed char)-96))))) ? (max((-1529681168), (((/* implicit */int) (signed char)34)))) : (((/* implicit */int) arr_17 [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])))))));
                                arr_26 [i_3] [(_Bool)1] [i_3] [i_6 - 3] [(_Bool)1] = ((/* implicit */signed char) (((((-(((/* implicit */int) (signed char)-64)))) > (((((/* implicit */_Bool) arr_3 [(signed char)4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3] [(short)9])) | (((/* implicit */int) arr_3 [7U]))))) : (min((min((((/* implicit */long long int) arr_12 [i_3])), (var_15))), (min((((/* implicit */long long int) (_Bool)1)), (9097984407368129478LL)))))));
                            }
                        }
                    } 
                } 
                arr_27 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [(signed char)3] [i_3]))) : (arr_24 [(signed char)10] [(signed char)10] [i_3] [i_4 - 1] [i_4 - 1] [i_4 - 1])))) ? ((((+(((/* implicit */int) (short)8256)))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-64))) < (arr_13 [i_4 - 1])))))) : (((/* implicit */int) ((max((var_1), (((/* implicit */long long int) 67108864)))) > (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
            }
        } 
    } 
}
