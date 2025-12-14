/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125531
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((var_16) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17517)))))))) ? (((/* implicit */int) (unsigned char)9)) : ((~(((((/* implicit */_Bool) (unsigned short)248)) ? (((/* implicit */int) (unsigned short)254)) : (((/* implicit */int) var_17))))))));
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_1))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] = ((/* implicit */int) max((min((((/* implicit */unsigned int) (unsigned char)127)), (((unsigned int) var_4)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((-1108788174), (((/* implicit */int) (unsigned short)65288))))))))));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (-((~(6731757028875778196LL)))));
                    arr_9 [i_1] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1] [i_1]))))) || (((/* implicit */_Bool) min(((+(((/* implicit */int) (signed char)-29)))), (((/* implicit */int) (unsigned short)248))))));
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (2112396770) : (((/* implicit */int) (signed char)28))))));
                    arr_11 [i_1] [i_1] [(unsigned short)0] = ((/* implicit */signed char) min((min((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_2 [i_0] [i_1])))), (((/* implicit */unsigned int) min(((~(((/* implicit */int) (short)-26969)))), ((~(((/* implicit */int) var_17)))))))));
                }
            } 
        } 
    } 
}
