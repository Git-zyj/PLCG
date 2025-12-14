/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175575
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min(((~(var_8))), (((((/* implicit */_Bool) -1997753831)) ? (((/* implicit */int) (short)-3)) : (((/* implicit */int) (short)27675))))))), (arr_4 [i_0])));
                var_12 += ((/* implicit */unsigned short) ((((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (4294967295U)))) < (((/* implicit */unsigned long long int) ((unsigned int) (short)-23937)))));
            }
        } 
    } 
    var_13 -= ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        {
                            arr_17 [i_3] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_5])))))));
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */unsigned int) -1968601832)) * (4294967295U))))));
                        }
                    } 
                } 
                var_15 += ((/* implicit */unsigned long long int) arr_14 [i_3] [i_2]);
            }
        } 
    } 
}
