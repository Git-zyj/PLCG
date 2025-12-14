/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109179
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) var_11)), (18446744073709551612ULL))));
        var_14 = ((/* implicit */long long int) var_12);
        var_15 = var_11;
        arr_4 [i_0] = max((((/* implicit */long long int) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)203)) - (200)))))), (min((((long long int) 845441501714365197LL)), (((/* implicit */long long int) ((4294967295U) >= (var_11)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (var_7)))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)30878)))))))), (((((/* implicit */_Bool) 1567235258U)) ? (11048169556426897463ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32)))))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max((((-7438176180440172866LL) | (((/* implicit */long long int) 2097151U)))), (((/* implicit */long long int) (~(var_11)))))))));
        arr_8 [9U] = ((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */unsigned long long int) var_12)) <= (2971480059497698094ULL)))), (min(((short)32761), (((/* implicit */short) (signed char)11))))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (unsigned short i_4 = 2; i_4 < 19; i_4 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) var_0);
                    /* LoopNest 2 */
                    for (long long int i_5 = 3; i_5 < 19; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 17; i_6 += 4) 
                        {
                            {
                                var_18 |= ((/* implicit */unsigned long long int) var_0);
                                var_19 = ((/* implicit */int) ((unsigned long long int) min((((/* implicit */long long int) 0)), ((+(9223372036854775807LL))))));
                                arr_21 [i_6 - 1] [i_5] [i_5 + 1] [i_4 - 1] [i_5] [(unsigned char)4] = ((/* implicit */int) max((max(((~(-9223372036854775807LL))), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) var_12))));
                                arr_22 [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 0U)))) % (1111298521U)))) ? (((((/* implicit */int) (short)32767)) + (min((var_5), (var_2))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)112)), ((unsigned short)5149)))) && (((/* implicit */_Bool) 4122823958885999391LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
