/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133771
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_15))) ? (((/* implicit */unsigned long long int) var_11)) : (var_16)));
                            var_19 = ((/* implicit */unsigned short) var_3);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    for (int i_5 = 2; i_5 < 13; i_5 += 1) 
                    {
                        {
                            var_20 -= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)2048))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))));
                                var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_6] [i_6])) ? (var_11) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_6])))))));
                            }
                            arr_20 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [i_1] [i_0]) % (arr_7 [i_1] [i_1] [i_0] [i_0])))) ? (((min((var_9), (var_9))) ? (((arr_16 [i_0] [i_0] [2ULL] [i_0] [i_1]) >> (((((/* implicit */int) var_4)) - (10219))))) : ((-(var_11))))) : (((/* implicit */int) (unsigned char)180))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((_Bool) var_12)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (7U))) : (min((4294967281U), (((/* implicit */unsigned int) var_4))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))));
}
