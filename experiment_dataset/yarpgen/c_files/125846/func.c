/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125846
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */short) (((+(-1LL))) <= (((/* implicit */long long int) arr_0 [i_0]))));
                var_12 += ((/* implicit */unsigned char) arr_0 [i_0]);
                var_13 = ((/* implicit */unsigned short) 0LL);
                arr_5 [i_0] [i_1] = ((/* implicit */short) var_0);
                /* LoopNest 2 */
                for (unsigned int i_2 = 4; i_2 < 13; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */short) -1LL);
                            var_15 &= ((/* implicit */_Bool) var_4);
                            arr_13 [i_2] [i_2] [i_2] [i_1] [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */long long int) 2147483647)) <= (-1565823176867617459LL)));
                            var_16 -= max((((/* implicit */long long int) var_9)), (-25LL));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_1);
    var_18 = ((/* implicit */unsigned short) var_2);
}
