/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138600
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1000759017936648682LL)) ? (((/* implicit */int) (short)-27259)) : (((/* implicit */int) (unsigned short)27190))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_7 [(unsigned char)10] &= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) 458095808U)) || ((_Bool)1)))), (((arr_3 [i_0] [8ULL]) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned short)10]))) : (11LL)))));
                    var_13 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) var_0);
    var_15 = ((((/* implicit */_Bool) (unsigned short)39822)) ? (((/* implicit */unsigned long long int) var_4)) : (((unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)168)), (3836871471U)))));
}
