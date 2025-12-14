/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169968
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
    var_14 -= ((/* implicit */unsigned short) var_5);
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_12)), (max(((-(var_10))), (var_10)))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                var_16 *= ((/* implicit */signed char) 609874853);
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_17 += ((/* implicit */short) (signed char)26);
                    var_18 = ((/* implicit */_Bool) ((int) arr_6 [i_1 - 1]));
                    var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 3] [(short)4])) ? (4721870859484734505LL) : (((/* implicit */long long int) var_13))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (~(4721870859484734505LL))))));
                }
                arr_7 [i_0] = (signed char)-118;
                var_21 = ((/* implicit */long long int) min((var_21), (((long long int) (unsigned char)18))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_7);
}
