/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183965
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
    var_20 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                var_21 *= ((/* implicit */_Bool) -6898042735484318925LL);
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    arr_8 [i_0] = ((/* implicit */unsigned short) 2001803151276642600ULL);
                    var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */long long int) 4294967293U)) : (-1331560123081690460LL))) / (max((((/* implicit */long long int) (unsigned short)58085)), (2853691437269309755LL)))));
                }
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58085))) == (((4294967295U) >> (((16687675461792727970ULL) - (16687675461792727950ULL)))))));
                arr_9 [i_0] = ((/* implicit */signed char) ((((((-944024622) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) == (((/* implicit */int) min((((/* implicit */unsigned short) min(((short)-20741), (((/* implicit */short) (_Bool)1))))), ((unsigned short)32335))))));
            }
        } 
    } 
}
