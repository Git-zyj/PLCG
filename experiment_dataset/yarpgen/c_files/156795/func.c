/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156795
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) -9223372036854775782LL);
                                var_13 &= (+(((/* implicit */int) ((unsigned char) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_6 [(unsigned short)1] [i_1] [i_1 + 3])))))))))))));
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)181)), (var_8))))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) arr_7 [i_2] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((+(-150815464)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_11)));
    var_18 *= ((/* implicit */unsigned char) ((int) var_1));
    var_19 = ((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)1)))), (min((((((/* implicit */_Bool) (signed char)42)) ? (-150815464) : (((/* implicit */int) (signed char)-43)))), (((/* implicit */int) (signed char)42))))));
}
