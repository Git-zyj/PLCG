/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166006
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
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) -8685406329077953894LL))));
                var_13 = ((/* implicit */long long int) arr_1 [i_1 + 1]);
                var_14 = ((/* implicit */long long int) var_2);
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) var_10);
                                var_16 -= ((/* implicit */short) 419263460U);
                                arr_15 [i_0] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 8685406329077953884LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8685406329077953919LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)5203))) : (-8685406329077953920LL)))) : (((10647484927053743532ULL) / (((/* implicit */unsigned long long int) 2040950841U)))))));
                                arr_16 [i_3] [i_1] = ((/* implicit */int) arr_11 [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 -= ((/* implicit */int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)-44)))) : (((((/* implicit */_Bool) 10647484927053743530ULL)) ? (6325866276080175231LL) : (((/* implicit */long long int) ((/* implicit */int) (short)27946))))))), (((/* implicit */long long int) var_10))));
    var_18 = ((/* implicit */int) ((long long int) 7799259146655808086ULL));
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        for (unsigned int i_6 = 1; i_6 < 15; i_6 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((7799259146655808083ULL), (((/* implicit */unsigned long long int) (unsigned short)25890))))) ? (((arr_3 [i_6] [i_6 + 1]) % (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_6 - 1] [i_6 - 1])) || (((/* implicit */_Bool) arr_3 [i_6] [i_6 - 1]))))))));
                var_20 ^= ((((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_9 [(unsigned short)15] [i_5])), (var_9))), (min((var_6), (((/* implicit */long long int) var_10))))))) ? (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) 8685406329077953928LL)))))) : (((((/* implicit */_Bool) -628245836595679273LL)) ? (((/* implicit */int) arr_0 [i_6 - 1] [i_6])) : (((/* implicit */int) arr_0 [i_6 - 1] [i_6 + 1])))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (min((arr_5 [i_5] [i_5]), (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_0 [i_6 - 1] [i_5])))))));
            }
        } 
    } 
}
