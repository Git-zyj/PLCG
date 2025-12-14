/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187789
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
    var_11 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -588546401)) ? (((/* implicit */int) (unsigned short)40154)) : (((/* implicit */int) (signed char)(-127 - 1))))) % (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (var_0) : ((-(var_6)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-21070)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100))))))));
        var_13 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (signed char)4)) || (((/* implicit */_Bool) var_5))))));
        var_14 = ((/* implicit */unsigned char) 925893045);
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 9; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                {
                    arr_10 [i_2] = ((((/* implicit */_Bool) (unsigned char)9)) ? (1046862669) : (-281188410));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 2; i_5 < 10; i_5 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) 1975943796U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_6)))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) -281188422)) : (arr_5 [i_2]))))), (arr_5 [i_1])));
                                arr_16 [i_1] [6] [i_3] [i_5] [i_5 + 3] |= ((/* implicit */unsigned short) var_2);
                                arr_17 [3U] [i_4] [i_2] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_5 + 2])) ? (((arr_5 [i_5 + 1]) ^ (((/* implicit */unsigned long long int) -281188429)))) : (((((/* implicit */_Bool) arr_5 [i_5 - 1])) ? (arr_5 [i_5 + 2]) : (arr_5 [i_5 + 3])))));
                            }
                        } 
                    } 
                    var_16 -= ((/* implicit */short) min((((/* implicit */int) ((short) 2881199234U))), (((((/* implicit */_Bool) var_10)) ? (arr_15 [i_2 + 1] [i_1] [i_3]) : (((/* implicit */int) var_3))))));
                    var_17 = ((/* implicit */int) ((unsigned short) var_9));
                }
            } 
        } 
        var_18 = arr_13 [i_1] [i_1] [i_1] [i_1];
    }
    var_19 = ((/* implicit */short) ((int) (signed char)-7));
}
