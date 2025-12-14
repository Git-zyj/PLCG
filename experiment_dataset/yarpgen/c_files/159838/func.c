/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159838
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
    var_19 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 -= ((/* implicit */long long int) (_Bool)1);
                var_21 = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) arr_2 [i_0])))));
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_11 [i_2] [i_2] [i_0] [i_2] [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned char) ((((int) (signed char)27)) < (arr_8 [i_4 - 1] [i_1] [(_Bool)0] [i_1] [(_Bool)0])));
                                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_10 [i_0 - 1] [(unsigned short)7] [i_0] [i_0] [(unsigned short)7] [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_1 [i_2] [i_4 + 1])))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */signed char) -877932438);
            }
        } 
    } 
}
