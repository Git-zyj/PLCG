/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100038
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)255))))) | ((~(((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) > (((/* implicit */int) (short)32746)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_14)), (var_1)))))) ? (1368081647927019019LL) : (((/* implicit */long long int) (-(min((((/* implicit */unsigned int) var_17)), (var_1))))))));
                var_19 ^= (+(((/* implicit */int) var_9)));
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)9431)) ? (-8336268206172842719LL) : (var_10))) != (((/* implicit */long long int) ((/* implicit */int) max(((short)-1), ((short)32767))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (((~(((562949953421311LL) * (0LL))))) <= (((/* implicit */long long int) max((((/* implicit */unsigned int) var_0)), (min((4294967278U), (var_11))))))));
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)31)), (((var_3) + (((/* implicit */int) var_12))))))) ? (((((/* implicit */_Bool) min((1344888587), (((/* implicit */int) (signed char)-83))))) ? (max((25U), (18U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-32755)) && (((/* implicit */_Bool) var_12)))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) << (((max((4294967278U), (((/* implicit */unsigned int) (unsigned short)60381)))) - (4294967256U)))))))))));
}
