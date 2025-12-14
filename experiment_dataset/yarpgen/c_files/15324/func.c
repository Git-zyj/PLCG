/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15324
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
    var_10 = ((/* implicit */unsigned short) var_5);
    var_11 = ((/* implicit */int) (!(((_Bool) var_2))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32759))))) : (((((/* implicit */_Bool) 4294967295U)) ? (-1460537621) : (((/* implicit */int) (signed char)-1)))))), (((/* implicit */int) ((((/* implicit */int) (short)32751)) == (max((arr_5 [i_0] [i_1] [i_1]), (arr_4 [i_2]))))))));
                    arr_10 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 527609502U)) ? (((/* implicit */long long int) 761997225U)) : (arr_3 [i_2] [i_0] [i_0])))) ? (((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned short)34245)) ^ (110598917))), (((/* implicit */int) (unsigned char)141))))) : (((316201330U) - (((/* implicit */unsigned int) (-(((/* implicit */int) (short)20215)))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            var_13 = ((/* implicit */unsigned int) (-(arr_13 [i_3])));
            var_14 = ((/* implicit */int) ((unsigned long long int) (unsigned char)47));
        }
        for (int i_5 = 2; i_5 < 23; i_5 += 4) 
        {
            arr_18 [i_3] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_5] [i_5 - 2] [i_5 - 1]))));
            var_15 = ((/* implicit */short) (~(((/* implicit */int) arr_16 [i_3]))));
        }
        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            var_16 *= ((/* implicit */signed char) arr_12 [i_6]);
            arr_23 [i_3] [i_3] = ((/* implicit */unsigned char) (+(796842182)));
        }
        arr_24 [i_3] = ((/* implicit */int) arr_12 [i_3]);
        var_17 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)101))) / (13517568619315129830ULL));
    }
}
