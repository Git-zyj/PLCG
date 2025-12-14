/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138442
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
    var_12 = ((/* implicit */signed char) -1);
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */int) (unsigned short)45569);
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_5 [i_0] [i_3 + 1]))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(arr_0 [i_0] [i_1]))))))));
                        var_14 -= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_0 + 3]) : (arr_6 [i_0 - 3])))));
                        var_15 = ((/* implicit */short) ((unsigned short) arr_4 [i_0]));
                        arr_11 [i_0] [22U] [i_1] [i_0] = ((/* implicit */unsigned short) min((((unsigned long long int) arr_4 [i_0])), (((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_3 + 1]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65533))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) arr_2 [i_0] [i_4]))))) ? (((/* implicit */int) arr_8 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                        var_18 = ((/* implicit */short) var_5);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(16115191034391129121ULL)))))) ? (((/* implicit */unsigned long long int) (~(var_3)))) : (min((((/* implicit */unsigned long long int) ((long long int) (unsigned char)255))), (((unsigned long long int) arr_15 [i_6] [i_6])))))))));
                                arr_18 [i_6] [i_1] [(unsigned short)0] [(unsigned short)10] [i_6] &= ((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)46754)) - (((/* implicit */int) min((((/* implicit */short) (signed char)3)), ((short)-18179)))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (4294967295U) : (((/* implicit */unsigned int) -17))))))));
                                var_20 += ((/* implicit */short) ((long long int) max((((/* implicit */unsigned int) ((unsigned short) arr_16 [i_0] [i_1] [i_2] [i_5] [i_6] [(unsigned short)0]))), (max((var_0), (((/* implicit */unsigned int) var_5)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_8);
    var_22 &= ((/* implicit */short) ((((/* implicit */_Bool) ((int) -567145372098538058LL))) ? (((/* implicit */long long int) ((int) ((12932295278583221327ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((var_5) ? (var_3) : (var_3)))) : (-3381796341322659728LL)))));
}
