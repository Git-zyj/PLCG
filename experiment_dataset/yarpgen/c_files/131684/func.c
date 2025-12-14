/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131684
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
    var_17 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((((unsigned long long int) arr_2 [i_0 - 2] [i_1])), (min(((~(var_4))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) arr_3 [i_1])) : (var_16)))))));
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(((/* implicit */int) var_12)))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    arr_6 [i_0] = ((/* implicit */unsigned char) var_6);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((signed char) var_15)), (((/* implicit */signed char) (!(((/* implicit */_Bool) 0U)))))))) ? ((~(((/* implicit */int) arr_0 [i_4 + 3])))) : (((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) arr_9 [i_0] [i_1 - 2] [i_2 - 1] [i_4 - 2] [i_4])))))));
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */int) ((((_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned long long int) 4294967295U)))))))) * (min((((/* implicit */int) min((var_0), (var_9)))), ((~(((/* implicit */int) var_11))))))));
                                var_21 += ((/* implicit */short) (((!(((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned short) var_11))))))) || ((!(var_6)))));
                                arr_13 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_16))));
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_15))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_9)))))) : (((/* implicit */int) ((unsigned char) ((_Bool) var_16))))));
                }
                for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_22 *= (unsigned char)179;
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 859035330U))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */int) ((short) var_13))) : (((((/* implicit */int) var_14)) - (((/* implicit */int) var_9)))))))));
                }
            }
        } 
    } 
}
