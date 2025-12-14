/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149745
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
    var_14 = ((/* implicit */signed char) var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_5 [i_1] [i_1])) + (21727)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (4012257476U) : (arr_0 [i_0] [i_0])))));
                var_16 -= (~((~(arr_2 [i_1]))));
                arr_6 [i_1] = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) ((signed char) arr_4 [16]))), (4012257476U)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_3 + 1] [i_3 + 2] [i_3 - 1] [i_3 + 2]))))) / (((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 + 2] [i_3 - 1] [i_3 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3 + 1] [i_3 + 2] [i_3 - 1] [i_3 + 2]))) : (var_8)))));
                            arr_11 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((17347642964930273253ULL), (((/* implicit */unsigned long long int) (unsigned char)19)))))))) << (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) arr_8 [i_0])) : (arr_0 [i_3 - 2] [i_3 - 1]))) - (3040139128U)))));
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) / (arr_3 [i_2] [i_2] [i_2]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        for (unsigned int i_5 = 4; i_5 < 24; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                {
                    var_20 &= ((/* implicit */signed char) ((unsigned char) (+(17347642964930273268ULL))));
                    arr_19 [i_4] [0U] [2] = max(((~(var_1))), (((var_7) + (((/* implicit */int) max((arr_18 [i_4] [i_5 - 3] [i_5 - 3] [i_5 - 3]), (arr_14 [(unsigned char)11])))))));
                    arr_20 [i_4] [i_5] [22U] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)118))) : (arr_16 [i_5 - 2] [2])))) ? (((unsigned int) arr_13 [i_5 + 1] [i_5 - 1])) : ((~(arr_16 [i_5 - 1] [2U])))));
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_6])) >= (((/* implicit */int) arr_15 [i_6])))))) : (((((/* implicit */_Bool) (unsigned char)1)) ? (arr_12 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (var_0)))))))) : ((~((~(arr_16 [i_4] [i_4]))))))))));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_8)))))) ? (max((((/* implicit */int) ((unsigned char) (unsigned short)9712))), ((-(((/* implicit */int) arr_15 [(_Bool)1])))))) : (((((/* implicit */_Bool) ((var_8) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35611)))))) ? (((/* implicit */int) arr_14 [i_5 + 1])) : (((/* implicit */int) ((arr_12 [i_6]) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-57))))))))));
                }
            } 
        } 
    } 
}
