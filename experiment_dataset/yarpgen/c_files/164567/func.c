/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164567
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) var_0))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 |= ((/* implicit */_Bool) (-(min(((+(((/* implicit */int) var_8)))), (((/* implicit */int) arr_0 [5U] [3LL]))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)31)))))));
            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_6 [i_0] [3U])) ^ (((((/* implicit */int) var_8)) | (((/* implicit */int) var_0)))))))))));
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
            arr_8 [i_1] [i_0] [5U] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)51780)) ? (((/* implicit */int) arr_1 [i_1 - 1] [3U])) : (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1])))) & (((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1])) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) var_4))))));
        }
    }
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_3 = 1; i_3 < 14; i_3 += 1) 
        {
            arr_14 [i_3 - 1] = ((/* implicit */_Bool) (~((+((((_Bool)0) ? (arr_10 [(short)6] [(short)6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
            arr_15 [i_2] [(unsigned short)0] [i_2] = ((/* implicit */unsigned int) var_4);
        }
        for (short i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            var_16 ^= ((/* implicit */short) min((((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) & (4125565010U))) << (((((var_2) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13893))))) + (393406639678574LL))))), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)13776)) : (((/* implicit */int) (unsigned short)51780)))))))));
            var_17 = ((/* implicit */short) ((_Bool) var_8));
        }
        /* LoopNest 3 */
        for (long long int i_5 = 3; i_5 < 16; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    {
                        var_18 -= ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */int) var_9)), ((-(((/* implicit */int) (unsigned char)69)))))));
                        var_19 = ((/* implicit */_Bool) (unsigned char)222);
                    }
                } 
            } 
        } 
    }
}
