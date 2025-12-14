/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137063
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
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_12 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (_Bool)0))));
                            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) var_1))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_9 [i_4] [i_4])))) ? (((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) (_Bool)1))))))));
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned long long int) var_10);
        var_15 = ((/* implicit */unsigned char) 2147483647);
    }
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1390375249)) ? ((-(var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (min((min((var_3), (((/* implicit */unsigned int) (_Bool)1)))), (var_3))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 3) 
    {
        for (unsigned char i_6 = 1; i_6 < 11; i_6 += 1) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) arr_23 [i_6] [i_6] [i_6 + 4] [i_6 - 1]);
                    arr_25 [i_5] [i_7] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_20 [i_7] [i_5 - 1]))))));
                    var_18 = ((/* implicit */unsigned char) arr_19 [i_6]);
                }
            } 
        } 
    } 
}
