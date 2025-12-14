/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156072
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
    for (short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 12; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_8 [i_3] [(unsigned char)10] [(unsigned short)1] [i_3] = ((unsigned char) arr_5 [i_2]);
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((_Bool) arr_7 [(unsigned char)10] [i_0 + 1] [i_2 + 1] [(unsigned short)6])))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_2 [i_0 + 3]) : (arr_2 [i_0 + 2])))) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) max((arr_2 [i_0 + 3]), (((/* implicit */long long int) (+(1808526961U)))))))));
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned short) 2062963161);
}
