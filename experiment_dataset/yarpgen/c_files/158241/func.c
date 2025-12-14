/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158241
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
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) min((((((/* implicit */int) arr_6 [i_1])) % (((/* implicit */int) arr_6 [i_0])))), ((+(((/* implicit */int) arr_6 [i_0])))))))));
                var_11 = ((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_1]);
                arr_7 [i_1] &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_2 [i_0])), (((((arr_3 [i_0] [(unsigned char)14] [i_1]) != (5024538742314315092ULL))) ? (min((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_0])), (arr_1 [i_0]))) : (((arr_5 [i_1] [i_1]) / (5024538742314315092ULL)))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) 8191)) % (13422205331395236523ULL)))));
                                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(3192258832176322950LL)))) ? (min((arr_3 [i_1] [i_2] [i_0]), (((/* implicit */unsigned long long int) ((var_8) & (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) : (((/* implicit */unsigned long long int) (-(arr_9 [i_0]))))));
                                arr_18 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)13125))));
                                var_13 += ((/* implicit */unsigned int) min(((+(((/* implicit */int) (unsigned char)21)))), (((((/* implicit */int) (unsigned char)21)) + (((/* implicit */int) (short)13134))))));
                            }
                        } 
                    } 
                } 
                var_14 &= ((/* implicit */signed char) (~((((~(arr_1 [i_0]))) ^ (((/* implicit */unsigned long long int) (~(var_0))))))));
            }
        } 
    } 
    var_15 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (((-(((/* implicit */int) var_6)))) == ((~(var_7))))))) % (max((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))), (var_0)))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) var_0)), (13422205331395236504ULL))))) + (((int) var_6))));
}
