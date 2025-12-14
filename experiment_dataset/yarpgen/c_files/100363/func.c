/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100363
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_11 = ((((long long int) (-9223372036854775807LL - 1LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))));
                var_12 = max((((((/* implicit */_Bool) min((var_6), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) ((_Bool) var_10))))), (((/* implicit */int) ((unsigned char) ((unsigned char) var_6)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 += (!((!(((/* implicit */_Bool) (-2147483647 - 1))))));
                            arr_9 [i_0] [(short)3] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                            arr_10 [i_2] [i_1] [i_1] [(_Bool)1] [(short)3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14046))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (36028797018947584ULL)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) (short)-11919);
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (36028797018947584ULL)))) ? (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (signed char)-96))))) : (((/* implicit */int) (short)-23)))))))));
                                var_16 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)25866))) & (var_8))));
                                arr_20 [i_4] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)25884)) ^ (((/* implicit */int) arr_12 [i_5] [i_5] [i_4])))) + (((((/* implicit */_Bool) ((-9223372036854775790LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (unsigned short)39648)) : (((/* implicit */int) (unsigned char)1))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = 4294967282U;
}
