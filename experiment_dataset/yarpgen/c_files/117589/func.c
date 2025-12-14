/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117589
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
    var_16 |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)27162)))))) : (var_12)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) max((3145868259327503611ULL), (3145868259327503611ULL)))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */unsigned int) arr_8 [i_0])) : (1145121233U))), (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_3]))))) : (((((((/* implicit */_Bool) (unsigned char)98)) ? (15300875814382048005ULL) : (((/* implicit */unsigned long long int) 3149846067U)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5168918065332404835ULL)))))))))))));
                                var_18 = ((/* implicit */short) ((((/* implicit */int) var_2)) > ((~(((/* implicit */int) (signed char)91))))));
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4432310206975206405LL)) ? (((/* implicit */int) ((unsigned char) var_2))) : (((/* implicit */int) ((signed char) (signed char)19)))))) ? ((+(((((/* implicit */int) var_9)) / (arr_1 [i_0]))))) : (((/* implicit */int) var_10))));
                                var_20 = (signed char)-126;
                                var_21 = ((/* implicit */unsigned int) var_0);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    for (unsigned char i_6 = 3; i_6 < 12; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 14; i_7 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) var_11))))))) ? (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) == (arr_7 [i_0] [i_1] [i_5] [i_7 - 1]))) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_6])), (var_0))))))) : (((((/* implicit */_Bool) (signed char)-84)) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) var_2))))));
                                var_23 -= ((/* implicit */signed char) 1209071323U);
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_3 [i_0] [i_0]))) ? (((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_1])))) : (((/* implicit */int) min((arr_2 [i_0]), (var_2))))));
            }
        } 
    } 
}
