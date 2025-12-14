/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179680
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] |= ((/* implicit */unsigned char) var_4);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((-((~(18446744073709551615ULL))))) >> (((((/* implicit */int) arr_0 [i_1])) & (((/* implicit */int) var_4))))));
            arr_7 [i_0] = ((/* implicit */unsigned int) (short)2603);
        }
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((int) ((0ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) (short)-32766))))))));
        arr_9 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0])))))));
    }
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 17; i_2 += 3) 
    {
        for (short i_3 = 1; i_3 < 16; i_3 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_4 = 4; i_4 < 16; i_4 += 2) 
                {
                    var_13 = ((/* implicit */long long int) 4024187891U);
                    arr_17 [i_4] [i_2] [i_4] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2])) ? ((-(((unsigned int) arr_4 [(short)16] [i_4])))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32765)))));
                    var_14 ^= ((/* implicit */unsigned int) arr_14 [16LL] [16LL]);
                }
                arr_18 [i_2] = ((/* implicit */short) min(((-(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) ((_Bool) -1772475597)))))));
                arr_19 [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) max((arr_11 [i_2]), (arr_11 [i_2]))))));
                var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((1772475596) >> (((/* implicit */int) arr_0 [i_2])))) / (((/* implicit */int) (short)22214))))) - (max((((/* implicit */unsigned long long int) (signed char)-72)), (18446744073709551615ULL)))));
            }
        } 
    } 
}
