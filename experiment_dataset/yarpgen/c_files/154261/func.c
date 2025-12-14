/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154261
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
    var_13 &= ((/* implicit */unsigned long long int) max((894684267U), (((/* implicit */unsigned int) var_3))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1 - 2] [i_2] = ((/* implicit */unsigned char) ((((min((var_11), (((/* implicit */unsigned long long int) arr_2 [(signed char)2])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)54))))) >> ((((-(((/* implicit */int) arr_5 [i_1 + 4] [i_1 - 1] [i_1 + 4] [i_1 + 2])))) + (147)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
                    {
                        arr_12 [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 2]))));
                        arr_13 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1 + 3] [i_2] [0ULL])) : (((/* implicit */int) arr_4 [i_1] [i_1] [(short)12]))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
                    {
                        arr_16 [i_4] [4U] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_1 + 4] [(unsigned char)17] [(unsigned char)17] [i_4] [i_0] [i_1 + 4]))))), ((~(3400283033U)))));
                        arr_17 [i_0] [i_1 - 1] [(unsigned short)2] [i_4] = ((/* implicit */_Bool) ((signed char) ((min((var_11), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_1])))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_0]))))))));
                        arr_18 [i_0] [(unsigned char)9] [i_2] [i_2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (+(789678972))))) ? (max((((/* implicit */unsigned int) arr_2 [i_0])), (((894684267U) >> (((((/* implicit */int) arr_14 [i_0] [i_1] [(unsigned short)0] [i_4] [i_1])) - (30))))))) : (max((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), ((+(3400283029U)))))));
                    }
                    arr_19 [i_1] [i_0] = ((/* implicit */int) max((min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (410173470U) : (894684267U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_1 + 2])))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) var_9);
}
