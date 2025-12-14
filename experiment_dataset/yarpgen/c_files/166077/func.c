/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166077
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
    var_14 = ((/* implicit */unsigned int) (short)-7420);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)70))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17839))) : (16869240283479105228ULL))) : (((/* implicit */unsigned long long int) 155597197U))));
        arr_3 [i_0] = ((((/* implicit */_Bool) 2663601986U)) ? (((((/* implicit */_Bool) var_10)) ? ((+(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)24630))))) : (2663602007U));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        arr_7 [13LL] = ((unsigned short) ((((/* implicit */_Bool) (short)24612)) ? (((/* implicit */long long int) ((/* implicit */int) (short)24630))) : (-8230525154912980797LL)));
        var_16 = ((/* implicit */unsigned char) arr_6 [i_1] [i_1]);
    }
    var_17 = ((/* implicit */_Bool) max((2507405593322237390ULL), (((/* implicit */unsigned long long int) var_13))));
    var_18 |= ((/* implicit */unsigned int) 15939338480387314226ULL);
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 1; i_5 < 8; i_5 += 3) 
                    {
                        var_19 *= var_11;
                        var_20 ^= ((/* implicit */unsigned int) var_13);
                        var_21 |= ((/* implicit */unsigned int) ((unsigned short) (unsigned short)51435));
                        arr_19 [8ULL] |= ((/* implicit */unsigned int) 6859777074726965915LL);
                        var_22 = ((/* implicit */_Bool) var_5);
                    }
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        arr_22 [i_2] [i_4] = (unsigned char)44;
                        arr_23 [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) var_8);
                    }
                    var_23 += ((/* implicit */long long int) 1492352140U);
                }
            } 
        } 
    } 
}
