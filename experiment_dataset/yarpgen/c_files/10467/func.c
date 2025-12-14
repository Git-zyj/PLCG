/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10467
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
    var_18 = ((/* implicit */unsigned long long int) -306696657725761129LL);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) arr_8 [i_0] [i_1] [1ULL] [i_3] [(short)7]);
                                var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) -2153275179302361724LL)), (((max((((/* implicit */unsigned long long int) (signed char)73)), (18446744073709551615ULL))) * (((/* implicit */unsigned long long int) 2153275179302361722LL))))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_7))));
                                arr_11 [(signed char)10] [i_1] [(signed char)6] [i_3 - 3] [10LL] [i_1] = ((((/* implicit */_Bool) 13712303230784658ULL)) ? (511ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)98))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */long long int) 2199023253504ULL);
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (unsigned char i_5 = 4; i_5 < 14; i_5 += 3) 
    {
        for (long long int i_6 = 1; i_6 < 13; i_6 += 2) 
        {
            {
                var_24 |= -6306110986344865074LL;
                var_25 = ((/* implicit */_Bool) max((var_25), (((var_17) || (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-94))))) || (((/* implicit */_Bool) max((var_12), (arr_12 [i_5 - 3]))))))))));
            }
        } 
    } 
}
