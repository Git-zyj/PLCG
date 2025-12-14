/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153502
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
    var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (+(((/* implicit */int) (short)8271))))) ? ((~(((/* implicit */int) var_11)))) : (((((/* implicit */int) var_5)) / (((/* implicit */int) (unsigned char)82))))))));
    var_17 = var_14;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) ((((((/* implicit */int) (unsigned short)16721)) & (((/* implicit */int) arr_3 [i_0] [i_1 - 3])))) == (((((/* implicit */int) arr_3 [i_1 - 4] [i_1])) & ((~(((/* implicit */int) (unsigned short)34007))))))));
                var_19 = ((/* implicit */unsigned short) ((((arr_4 [i_1 - 3] [i_1 - 1]) ^ (arr_4 [i_1 + 1] [i_1 - 2]))) ^ (((/* implicit */unsigned long long int) arr_0 [i_1 - 3]))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 4]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 2])) ^ (((/* implicit */int) arr_3 [i_1 - 4] [i_1 - 1]))))) : (((((/* implicit */_Bool) 1779839512993559005ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3614))) : (3300037734820660575LL))))))));
                                var_21 = ((/* implicit */unsigned char) var_9);
                                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) max((((arr_2 [i_1 - 3] [i_4 + 1]) % (((/* implicit */int) (short)-1727)))), (((int) var_7)))))));
                                var_23 -= ((/* implicit */unsigned short) var_0);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
