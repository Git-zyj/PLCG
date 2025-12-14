/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158754
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) ((unsigned char) (-2147483647 - 1)));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_18 |= ((/* implicit */unsigned long long int) arr_7 [i_0] [i_3] [i_3]);
                            var_19 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)-103)) ? (3642562725U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [22U]))))))) >= (((/* implicit */int) (short)60))));
                            var_20 -= max((min((((8448127758341863196LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-103))))), (((-8448127758341863196LL) + (((/* implicit */long long int) arr_2 [i_0])))))), (((/* implicit */long long int) min((arr_8 [i_3] [8LL]), (((/* implicit */unsigned short) ((_Bool) 4035149911U)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 += ((/* implicit */long long int) max((((4286578688U) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_14))))))), (((/* implicit */unsigned int) (-2147483647 - 1)))));
    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((3522769226U) + (((/* implicit */unsigned int) var_0))))) ? (min((var_4), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44462))))))));
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_15))));
}
