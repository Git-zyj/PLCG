/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11758
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [8U] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)0))));
                arr_6 [i_1] = ((/* implicit */unsigned int) min((((unsigned long long int) (unsigned char)251)), (((/* implicit */unsigned long long int) (unsigned char)251))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_10 |= ((arr_7 [i_0]) ^ ((-(arr_0 [i_2]))));
                    var_11 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_1 [i_1] [i_2]), (arr_4 [i_0] [i_0]))))));
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */long long int) max((((((/* implicit */int) arr_3 [(unsigned short)9] [i_1] [i_2])) >> (((var_2) + (3791861678694309363LL))))), ((+(((/* implicit */int) (unsigned char)0))))))) ^ ((~(((arr_0 [i_0]) % (arr_0 [i_0])))))));
                }
                var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)21)), ((-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            {
                var_14 -= ((/* implicit */unsigned short) ((unsigned char) ((signed char) ((((/* implicit */int) var_9)) << (0ULL)))));
                var_15 += ((/* implicit */unsigned char) (((+(((/* implicit */int) ((unsigned short) (short)-31152))))) + ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) arr_12 [i_4]))))))));
            }
        } 
    } 
}
