/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15472
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
    var_15 = (+(var_11));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_2] [i_0] [i_2] &= ((/* implicit */long long int) arr_2 [i_0]);
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-103)), (((1796608773) + (((/* implicit */int) (signed char)102))))))) && (((/* implicit */_Bool) max(((unsigned char)129), (((/* implicit */unsigned char) (_Bool)1))))))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0 - 1] [(unsigned char)9] = ((/* implicit */short) min((((/* implicit */long long int) ((var_10) ? (((arr_1 [i_0]) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) (signed char)-103)))) : (((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1]))))), (min((((/* implicit */long long int) (unsigned char)129)), (var_3)))));
                var_17 = ((/* implicit */signed char) ((unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_0]))))), (arr_2 [i_0 + 1]))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_6);
    var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
    var_20 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)210)) ? (-4437451738434596882LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)33)))))) ? (((var_5) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (_Bool)1)))));
}
