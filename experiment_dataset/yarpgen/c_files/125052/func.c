/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125052
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] [10ULL] = ((/* implicit */unsigned long long int) (unsigned short)11361);
        arr_3 [i_0] = ((/* implicit */signed char) var_7);
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 24; i_2 += 2) 
        {
            for (unsigned char i_3 = 2; i_3 < 24; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_14 [i_3] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) (-(min((var_6), (((/* implicit */long long int) arr_13 [i_3 - 1] [i_3] [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3]))))));
                        arr_15 [13ULL] [i_3] [0ULL] [i_1] = ((/* implicit */unsigned char) ((arr_12 [i_1] [i_1] [i_2 - 3] [i_3] [i_3 + 1] [i_4]) - (((/* implicit */int) (signed char)-49))));
                        arr_16 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != ((~(min((4157240983302676755ULL), (((/* implicit */unsigned long long int) (signed char)-48))))))));
                    }
                } 
            } 
        } 
        arr_17 [i_1] = ((/* implicit */int) var_2);
    }
    var_10 = ((/* implicit */signed char) (+(var_7)));
}
