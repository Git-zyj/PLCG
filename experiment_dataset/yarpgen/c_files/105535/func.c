/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105535
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
    var_17 = (unsigned char)92;
    var_18 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    arr_8 [i_0] [i_0] [2ULL] [i_2] = (unsigned short)52997;
                    arr_9 [i_0] [i_1] [i_2] = ((unsigned long long int) -256267821);
                    var_19 = var_6;
                }
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    arr_14 [i_0] [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((long long int) 6007532729138138759ULL))) ? (arr_3 [i_0] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))))) <= (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)63550)) > (((/* implicit */int) (unsigned short)19177))))) + (((int) arr_13 [i_0] [14ULL] [i_1] [i_3])))))));
                    arr_15 [i_3] = min((((/* implicit */unsigned long long int) arr_2 [(unsigned short)7] [i_1])), (arr_10 [i_0]));
                }
                arr_16 [i_0] [i_1] [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((var_4), (-1891612317)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)55771))))) ? (((((/* implicit */_Bool) var_7)) ? (1537479152) : (-1380716557))) : (((/* implicit */int) (unsigned short)8996)))) : (((((/* implicit */int) (unsigned char)241)) << ((((+(9223372036854775807ULL))) - (9223372036854775800ULL)))))));
            }
        } 
    } 
}
