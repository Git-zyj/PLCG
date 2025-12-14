/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140372
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
    var_14 = ((/* implicit */unsigned char) max(((-((-(-8853564321788383736LL))))), (((/* implicit */long long int) var_6))));
    var_15 = ((/* implicit */unsigned int) var_3);
    var_16 = ((/* implicit */long long int) var_6);
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((long long int) (short)9492))))) ? (((/* implicit */int) (signed char)12)) : (var_8)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((arr_0 [i_0 - 1]), (((/* implicit */unsigned short) var_2))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7924495569131953199LL)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) arr_2 [i_1]))))), (var_9)))));
                                var_18 = ((/* implicit */signed char) (-(((long long int) ((var_7) != (((/* implicit */long long int) -1399354786)))))));
                            }
                        } 
                    } 
                    var_19 = (signed char)-3;
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) -8234497427291728977LL)) ? (((/* implicit */int) var_5)) : (-1765324668))), (((/* implicit */int) var_13))));
}
