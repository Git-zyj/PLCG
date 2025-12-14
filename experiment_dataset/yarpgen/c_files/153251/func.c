/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153251
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
    var_12 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_1 [15]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))))));
                arr_6 [i_0] = ((/* implicit */short) var_2);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */int) ((unsigned long long int) var_8));
        arr_10 [i_2] |= ((/* implicit */short) (((-(min((((/* implicit */int) var_11)), (1482009800))))) / (((arr_3 [i_2] [i_2]) / (arr_3 [i_2] [i_2])))));
        arr_11 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_10) % (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)32767))))) : (arr_4 [i_2])));
        arr_12 [i_2] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) (short)-32767))));
    }
}
