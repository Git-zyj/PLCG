/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106677
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_1 - 2] [i_0] [i_0] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((0) % (((/* implicit */int) arr_2 [i_1])))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_1 + 2] [i_0] [i_2 + 1] [i_3] [i_3] = ((/* implicit */short) 5);
                            arr_12 [i_3] [i_1] [i_2] [i_2] [i_1] [i_0] = (+(((/* implicit */int) (short)(-32767 - 1))));
                            arr_13 [i_0] [i_0] = ((/* implicit */short) (signed char)0);
                        }
                    } 
                } 
                arr_14 [i_0] = (~(var_12));
                arr_15 [i_0] = (~(((/* implicit */int) (!(((/* implicit */_Bool) 8))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (((+(8))) == (((/* implicit */int) (signed char)10))))), ((~((~(var_3)))))));
    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (((((((/* implicit */unsigned int) 2147483647)) > (var_1))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65520)) | (((/* implicit */int) (unsigned short)65535))))) : (15LL)))));
}
