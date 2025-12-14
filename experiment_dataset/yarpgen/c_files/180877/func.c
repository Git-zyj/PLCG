/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180877
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
    var_15 &= ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)35701))))), ((+(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_9) : (5ULL)))))));
    var_16 = ((/* implicit */short) (~(var_5)));
    var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-16952)) ? (min((var_14), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (short)-16952);
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        arr_13 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) 18446744073709551611ULL));
                        arr_14 [i_3] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)168)))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 3; i_4 < 22; i_4 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned int) (unsigned char)57);
                            var_19 |= ((/* implicit */long long int) var_2);
                            var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_9 [i_0 - 4] [i_1 + 3] [i_4 - 3]))));
                        }
                    }
                } 
            } 
        } 
        arr_18 [i_0] = ((/* implicit */long long int) 1073741824U);
        var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)61916), (((/* implicit */unsigned short) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)168), ((unsigned char)193))))) : (var_3)));
    }
    var_22 = ((/* implicit */unsigned short) (short)27657);
}
