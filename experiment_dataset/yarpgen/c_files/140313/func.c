/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140313
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
    var_20 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned int i_3 = 3; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_1] [(signed char)4] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) (signed char)-90)))) : (((/* implicit */int) (signed char)90)))) & (((((/* implicit */int) min((arr_5 [i_3]), (((/* implicit */unsigned short) (_Bool)1))))) - (((var_12) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-87))))))));
                                arr_15 [i_1] [i_0 - 1] = (signed char)40;
                                arr_16 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4 - 2])) ? (((/* implicit */int) ((unsigned short) arr_12 [i_0] [i_0]))) : (max((((/* implicit */int) (short)-1927)), (-1388086180))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_5 = 3; i_5 < 23; i_5 += 2) 
                {
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_6 [i_1] [i_1 + 1] [1U] [i_5 - 3]))) ? (((/* implicit */int) arr_6 [i_5] [i_1 - 1] [i_5] [i_5 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1] [i_5] [i_5 - 2])) || (((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1] [i_0] [i_5 - 3]))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 24; i_6 += 2) 
                    {
                        for (int i_7 = 3; i_7 < 23; i_7 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) arr_24 [i_0 - 1] [i_1] [i_5] [i_1] [i_7]);
                                arr_25 [i_1 - 1] [i_1] [i_1 - 1] = (!(((/* implicit */_Bool) (-(var_14)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) max((arr_3 [i_1] [i_1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-87)))))));
                }
                arr_26 [i_0] [i_1] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) && (var_5)))), (max((0U), (((/* implicit */unsigned int) (_Bool)1)))))) & (min((((/* implicit */unsigned int) (signed char)-90)), (min((arr_24 [i_1] [i_1] [i_1] [i_1] [i_1 - 1]), (((/* implicit */unsigned int) var_15))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) (((+(((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */long long int) 2147483647)) : (-6455966647106736684LL))))) * (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_16)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 6455966647106736677LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))))))));
}
