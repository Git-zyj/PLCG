/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109642
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
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_11 = ((/* implicit */signed char) var_0);
        var_12 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) == (((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) var_4))))) ^ (((/* implicit */int) var_5))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            {
                var_13 = ((/* implicit */int) ((((((/* implicit */int) ((134217728) != (134217710)))) << (((-1) + (11))))) > (((((/* implicit */int) (_Bool)1)) / (-134217729)))));
                var_14 -= ((/* implicit */unsigned short) ((arr_3 [i_1]) << (((((/* implicit */int) var_1)) - (21)))));
                arr_8 [i_1] [i_2] = ((/* implicit */unsigned int) arr_2 [i_1]);
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    for (signed char i_4 = 2; i_4 < 17; i_4 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)32767))))) ? (((19ULL) & (10514585651973384196ULL))) : (((((/* implicit */unsigned long long int) 134217728)) ^ (18090279401336095658ULL))))) << (((/* implicit */int) ((((/* implicit */int) (short)6672)) == (-134217729)))))))));
                            arr_14 [i_2] [i_2] [i_3] [i_4 + 1] [i_2] = ((/* implicit */short) arr_6 [i_2] [i_2]);
                        }
                    } 
                } 
                arr_15 [i_1] [i_2] = ((/* implicit */unsigned long long int) var_1);
            }
        } 
    } 
    var_16 *= ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))) | (((/* implicit */int) var_2))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */unsigned int) var_6)) - (var_3))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1607913283U)) ? (((/* implicit */int) (short)-32753)) : (134217728)))))));
}
