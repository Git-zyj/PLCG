/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1285
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_1)))) > (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) arr_0 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned int) ((unsigned short) 341838144U)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) var_4);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */short) (_Bool)1))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_0)) * (((/* implicit */int) arr_7 [i_1]))))));
        arr_9 [(signed char)9] = ((/* implicit */unsigned long long int) arr_6 [i_1]);
        var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((int) (unsigned short)127)) << ((((-(var_15))) + (577153664)))))) ? (((/* implicit */int) ((unsigned short) var_2))) : (((/* implicit */int) min((((/* implicit */signed char) arr_1 [i_1])), (((signed char) 137438953471LL)))))));
    }
    var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_2)), ((~(((unsigned long long int) (unsigned short)41028))))));
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (signed char i_3 = 4; i_3 < 10; i_3 += 4) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) var_10);
                    var_21 ^= ((/* implicit */unsigned char) max((((2999642304868945219LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))))), (((max((((/* implicit */long long int) var_0)), (7829358834529882151LL))) | (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)8)) / (((/* implicit */int) var_4)))))))));
                }
            } 
        } 
    } 
}
