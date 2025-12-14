/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158421
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+((~(var_12)))))), (arr_0 [i_0])));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_20 |= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_8))))))));
            arr_5 [i_0] = ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) || (((/* implicit */_Bool) var_8))))), (arr_4 [i_0] [i_1 - 1]))));
            var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_17)) != (max((((/* implicit */int) var_15)), (1677841944))))))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_17))))))) ? (min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (18446744073709551615ULL))) : (max((arr_4 [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned long long int) var_4))))));
        }
        arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-4))))) <= (((arr_0 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93)))))));
        arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) ((arr_3 [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
    }
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 21; i_2 += 3) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                var_23 |= ((/* implicit */unsigned short) (signed char)127);
                var_24 = ((/* implicit */signed char) (!(max(((!(((/* implicit */_Bool) var_18)))), (((((/* implicit */_Bool) (signed char)-112)) && (((/* implicit */_Bool) 4034418350U))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_24 [i_4 + 1] = ((/* implicit */_Bool) max((((unsigned long long int) ((_Bool) 1125279443U))), (((/* implicit */unsigned long long int) arr_21 [i_6] [i_5] [i_4 + 1]))));
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3169687849U)))))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            {
                                arr_33 [(unsigned short)13] [i_5] [i_5] [i_5] [i_5] [i_5] = max((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) >= (1542167870U)))), (max((((/* implicit */short) var_15)), (arr_32 [i_4] [i_4] [i_4 - 1] [i_7] [i_7] [i_7] [i_4]))));
                                arr_34 [i_4 + 2] [i_5] [i_6] [i_6] [i_8] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(unsigned short)13]))) >= (var_3)))), ((+(var_1))))), (((/* implicit */unsigned long long int) ((signed char) (-(arr_18 [i_4 - 1] [i_4 + 2])))))));
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((((/* implicit */_Bool) 10321049405044030286ULL)) && (((/* implicit */_Bool) var_18)))) ? (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 2305807824841605120LL))))) : (((/* implicit */int) arr_25 [i_4 - 1] [i_4]))))) | (var_12)));
                            }
                        } 
                    } 
                    var_27 *= ((/* implicit */short) ((((/* implicit */_Bool) max((((arr_17 [i_4] [i_5]) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [17]))) <= (var_1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)124), (((/* implicit */signed char) arr_10 [i_5])))))) : (((unsigned long long int) var_10))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */int) min((var_28), (min((min((-746829451), (((int) var_18)))), (((/* implicit */int) var_17))))));
}
