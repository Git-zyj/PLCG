/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138980
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) 8792964487724788065ULL)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (short)-27886)))))) ^ ((~((~(((/* implicit */int) (short)127))))))));
        arr_4 [3U] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        var_18 += ((/* implicit */unsigned char) ((0LL) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) (short)-27900)))))) != (arr_2 [i_0])))))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((var_13) == (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_16))))))))))));
    }
    var_20 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (long long int i_1 = 4; i_1 < 23; i_1 += 3) 
    {
        for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) 
        {
            {
                arr_11 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_11);
                arr_12 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_10 [i_2] [i_2]);
            }
        } 
    } 
}
