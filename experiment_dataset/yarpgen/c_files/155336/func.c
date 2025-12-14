/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155336
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? ((~(2133388831))) : ((-(var_14))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_3 [(signed char)8] = ((/* implicit */long long int) var_1);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */int) (unsigned char)90);
                        arr_12 [i_0] [i_0] [(unsigned char)12] [i_1] [i_1] [i_3] = ((/* implicit */signed char) var_12);
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_1]) == (((/* implicit */int) var_1))));
            arr_13 [i_0] [i_1] = ((/* implicit */unsigned char) (~(var_8)));
        }
        arr_14 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)12])) ? (((/* implicit */int) (short)8302)) : (((/* implicit */int) (short)-8277))))) ? (((/* implicit */int) (unsigned short)6740)) : (((/* implicit */int) arr_2 [i_0]))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                {
                    var_20 *= ((/* implicit */short) var_7);
                    var_21 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 12470220590010968481ULL)))) ? (((/* implicit */int) (unsigned char)180)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0])))))));
                }
            } 
        } 
    }
    var_22 &= ((/* implicit */long long int) var_9);
}
