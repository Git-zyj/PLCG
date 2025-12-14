/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108327
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
    for (signed char i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */unsigned long long int) -1367629129)) | (arr_0 [i_0]));
        var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((unsigned short)65535), ((unsigned short)20))))));
    }
    for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_4 [i_1]), (((/* implicit */unsigned char) var_9))))) ? (((/* implicit */int) arr_3 [i_1 - 1])) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)20)))))))));
        arr_5 [i_1] = ((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(signed char)10]))));
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)65511))));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((unsigned long long int) arr_4 [i_1 + 2])) <= (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 8394182030524790025LL)) ? (((/* implicit */int) (short)950)) : (((/* implicit */int) var_6))))))));
        var_20 = ((/* implicit */short) arr_3 [i_1]);
    }
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) arr_15 [i_4] [9ULL] [(short)19]);
                    arr_16 [i_2] [i_3] [i_4] [i_3] = ((/* implicit */unsigned long long int) arr_7 [i_2] [i_4]);
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_22 *= ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (max((2669884294U), (((/* implicit */unsigned int) var_0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27063))) : (var_11));
                                var_23 = ((/* implicit */signed char) var_4);
                                arr_23 [i_4] [(unsigned short)2] [i_4] [i_4] [i_2] &= ((/* implicit */unsigned short) arr_22 [2U] [(signed char)1]);
                                var_24 += max(((-(13U))), (((/* implicit */unsigned int) 1367629129)));
                                var_25 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (signed char)21)) / (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-34)), ((unsigned short)606))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((unsigned int) -9223372036854775784LL)))));
}
