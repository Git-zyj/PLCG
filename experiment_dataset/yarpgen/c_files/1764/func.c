/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1764
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) 1188575174612648275LL)), ((~(10101652689429179388ULL))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3] = (~(7773668645758556773LL));
                        arr_11 [i_0] [i_1] [i_0] [i_0] [i_2] = (_Bool)1;
                        arr_12 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (max((max((-4096963565247742990LL), (((/* implicit */long long int) (unsigned short)38915)))), (((/* implicit */long long int) 3636905473U))))));
                        var_20 = ((/* implicit */unsigned int) ((-705001657763182638LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3883)))));
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((int) ((unsigned char) arr_3 [i_2] [i_3]))))));
                    }
                    for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) (-(3636905458U)));
                        arr_16 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-52))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0]))) : ((-(arr_5 [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_18), (arr_8 [i_0 + 2] [i_0 + 1] [i_0] [i_0 + 2] [i_0 + 2]))))) : (3636905446U)));
                    }
                    var_23 = ((/* implicit */long long int) arr_6 [i_0] [i_0 + 1] [i_2] [i_0]);
                }
            } 
        } 
    } 
}
