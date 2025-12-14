/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110428
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                arr_8 [i_0] [i_1] = ((/* implicit */long long int) (unsigned char)0);
                arr_9 [i_1] = ((/* implicit */unsigned char) arr_2 [i_1 - 1]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((long long int) (unsigned char)11)) / (arr_10 [i_4]))))));
                    var_12 *= ((/* implicit */unsigned char) min((((((((-5238787431331686069LL) + (9223372036854775807LL))) << (((arr_15 [i_2]) - (8079216799523772853LL))))) / (((long long int) arr_10 [i_3])))), (max((arr_13 [i_3] [i_2]), (arr_13 [i_2] [i_3])))));
                }
            } 
        } 
        arr_16 [4LL] |= ((/* implicit */unsigned char) arr_13 [i_2] [i_2]);
        arr_17 [i_2] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
    }
}
