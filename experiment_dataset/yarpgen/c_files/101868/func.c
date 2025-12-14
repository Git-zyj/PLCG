/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101868
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
    var_10 = var_7;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned long long int) (unsigned char)255);
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 10; i_1 += 4) /* same iter space */
        {
            arr_6 [i_0] [i_0] = ((((/* implicit */_Bool) 169400005U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)1)));
            arr_7 [i_0] = ((/* implicit */signed char) (((-(4294967285U))) < (((/* implicit */unsigned int) max((((/* implicit */int) var_2)), (((((/* implicit */int) (signed char)-110)) ^ (0))))))));
            arr_8 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)127))));
            var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) var_0))));
        }
        for (int i_2 = 2; i_2 < 10; i_2 += 4) /* same iter space */
        {
            arr_13 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) min((18446744073709551607ULL), (11483411065419173855ULL))))) / (((((((/* implicit */unsigned int) arr_0 [i_0] [i_0])) <= (4294967295U))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) != (60129542144ULL)))) : (((/* implicit */int) var_6))))));
            arr_14 [i_0] [i_0] = (-(((((/* implicit */_Bool) ((18446744073709551607ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14)))))) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (signed char)-4)))));
        }
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) var_1))));
                                var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) | (4294967295U)))) ? (arr_23 [i_3] [i_3]) : (((/* implicit */unsigned long long int) 0))));
                                arr_27 [i_3] [i_3] [i_6] [i_3] [i_6] [i_3] [i_3] = ((/* implicit */signed char) (+(min((((/* implicit */int) arr_17 [i_6])), ((+(((/* implicit */int) (unsigned char)239))))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)239))));
            }
        } 
    } 
}
