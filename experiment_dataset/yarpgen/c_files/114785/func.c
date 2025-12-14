/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114785
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
    var_14 = ((/* implicit */unsigned int) (short)2047);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) var_5);
        var_16 = ((/* implicit */_Bool) min(((short)-2063), ((short)-1)));
    }
    for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 4) 
        {
            for (signed char i_3 = 2; i_3 < 18; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        for (int i_5 = 2; i_5 < 18; i_5 += 1) 
                        {
                            {
                                arr_18 [i_1] [(unsigned short)15] [i_3 - 1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((unsigned char) var_8)))));
                                var_17 = ((/* implicit */unsigned char) max((var_17), (max((((/* implicit */unsigned char) ((((/* implicit */int) (short)-2058)) > (((/* implicit */int) (signed char)121))))), (((unsigned char) max((807072019U), (((/* implicit */unsigned int) (signed char)19)))))))));
                            }
                        } 
                    } 
                    var_18 -= (-(max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) arr_2 [10ULL] [10ULL])) : (var_7))), (((/* implicit */long long int) ((int) var_1))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 17; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) arr_7 [i_6] [i_6 + 1] [i_6 + 1])) << (((((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) (unsigned short)26)))) - (16))))));
                    var_20 = ((/* implicit */unsigned char) (unsigned short)9277);
                    arr_23 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) (unsigned short)9277)))))), (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-45))))) : (max((var_7), (((/* implicit */long long int) var_12))))))));
                }
            } 
        } 
        arr_24 [i_1] = ((/* implicit */short) ((signed char) ((_Bool) max((var_4), (((/* implicit */unsigned char) arr_20 [i_1]))))));
        arr_25 [i_1] = ((/* implicit */int) 3487895277U);
    }
    for (signed char i_8 = 1; i_8 < 16; i_8 += 3) 
    {
        var_21 ^= ((/* implicit */signed char) (+(max((((/* implicit */long long int) var_8)), (arr_21 [i_8] [i_8 - 1] [i_8 + 2] [i_8])))));
        arr_28 [i_8] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((((/* implicit */int) (signed char)-29)) + (((/* implicit */int) (unsigned char)219)))) > ((~(var_2)))))), (arr_10 [i_8] [i_8])));
    }
}
