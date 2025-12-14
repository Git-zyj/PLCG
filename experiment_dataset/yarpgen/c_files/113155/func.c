/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113155
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((int) var_1));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) arr_4 [i_0])))));
                    arr_10 [i_0] [i_1] [i_2] &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min(((unsigned short)42705), (((/* implicit */unsigned short) (signed char)90))))), (((arr_8 [i_2] [i_1] [i_0]) << ((((+(var_7))) - (1917010078U)))))));
                }
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (-((~(((((/* implicit */int) (unsigned short)22830)) ^ (((/* implicit */int) (short)-6437)))))))))));
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        {
                            arr_17 [10ULL] [i_3] [i_3] [i_3] [i_3] [i_3] &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((long long int) (short)6436))), (((arr_8 [i_0] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)108)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42705))))))))));
                            var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned short)22848)), (arr_12 [i_1])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)186)) || (((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned char)255)))) >> (((((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)96))) : (4890021203800940357LL))) - (67LL))))))));
}
