/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134743
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
    var_12 = ((/* implicit */signed char) ((((var_8) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)59)) << (((/* implicit */int) (unsigned char)22))))))) << (((((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) var_0)))) : (max((((/* implicit */int) var_4)), (1815643141))))) + (279)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                            {
                                arr_14 [i_1] [0U] [i_1] = ((/* implicit */unsigned int) arr_3 [i_1]);
                                arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) max(((-(((((/* implicit */int) arr_7 [i_1] [i_1] [i_1])) * (((/* implicit */int) var_11)))))), (((int) ((_Bool) arr_9 [i_1] [i_1] [i_3] [i_2] [i_1] [i_1])))));
                            }
                            var_13 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_11)) ? (arr_0 [i_0] [i_2]) : (arr_0 [8ULL] [i_2])))))), (((((/* implicit */_Bool) (signed char)127)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) : (253952ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_1))))))))));
                        }
                    } 
                } 
                var_14 -= ((/* implicit */unsigned char) (~((+(1896737981)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) ((int) (+(((/* implicit */int) arr_16 [(unsigned char)9] [i_6])))));
                var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_18 [i_5] [i_5] [i_6]))));
            }
        } 
    } 
}
