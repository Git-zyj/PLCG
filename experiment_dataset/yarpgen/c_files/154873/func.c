/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154873
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_6))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_14 += ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_0)))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))));
                var_15 = (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (5501032669629063620ULL)))) ? (((/* implicit */int) ((_Bool) arr_3 [i_1]))) : (((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */int) (unsigned short)65524)) : (-1))))));
                arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) max((var_0), (var_0)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)213)) >= (((/* implicit */int) arr_5 [i_1] [i_0] [i_0])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) arr_9 [i_4] [i_3 - 1] [i_3] [i_3])) : (((/* implicit */int) arr_9 [i_3] [i_3 - 1] [2U] [i_1]))))) ? (((((/* implicit */_Bool) arr_9 [(unsigned short)9] [i_3 - 2] [i_1] [i_1])) ? (2110658433336106694LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_3 - 2] [i_1] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_4] [i_3 + 1] [i_3] [i_0]), (arr_9 [2] [i_3 - 2] [i_2] [(signed char)11])))))));
                                var_17 = ((/* implicit */_Bool) arr_1 [i_0]);
                                var_18 *= ((/* implicit */unsigned char) ((short) ((-2110658433336106695LL) | (2110658433336106694LL))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_8 [i_1] [i_1] [i_0]))) : (2110658433336106696LL)))), (((((((/* implicit */_Bool) 536870400U)) ? (3334926207706618856ULL) : (var_4))) | (max((var_4), (((/* implicit */unsigned long long int) 2110658433336106694LL))))))));
            }
        } 
    } 
    var_19 -= ((/* implicit */unsigned short) var_1);
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (var_4)));
    var_21 = ((/* implicit */unsigned short) max((var_1), (((/* implicit */unsigned long long int) var_0))));
}
