/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173209
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
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) 2742727048917293652ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_0)))) ^ (max((((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */int) var_2)))), (var_6))))))));
    var_13 = ((/* implicit */short) -2065305273);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((signed char) min((((/* implicit */unsigned short) (_Bool)0)), (arr_4 [i_0 - 3])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */int) var_3);
                                var_16 = ((/* implicit */long long int) ((signed char) min((((/* implicit */unsigned long long int) -2032044029)), (5906629374141056819ULL))));
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_3)), (12540114699568494782ULL))), (((unsigned long long int) arr_5 [i_1] [i_1 - 3]))))) ? (max((((unsigned long long int) arr_0 [i_3] [i_4])), ((-(5906629374141056819ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_3)), (min((((/* implicit */short) var_3)), (var_8))))))))))));
                                arr_13 [i_0] [i_4] = ((/* implicit */short) (!((!(((((/* implicit */_Bool) arr_5 [i_0] [i_3])) && (((/* implicit */_Bool) 12540114699568494761ULL))))))));
                                var_18 ^= ((/* implicit */_Bool) var_1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 8; i_5 += 2) 
                    {
                        for (short i_6 = 4; i_6 < 10; i_6 += 3) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_2] [i_5 + 2] [i_6] = ((/* implicit */int) (-(13625898576369822604ULL)));
                                var_19 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 7498132398209850129LL)) ? (12540114699568494779ULL) : (((/* implicit */unsigned long long int) -1930298524344089959LL)))), (var_4)));
                            }
                        } 
                    } 
                    var_20 *= ((/* implicit */signed char) ((((int) (~(((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_2]))))) * (((((/* implicit */_Bool) 12540114699568494768ULL)) ? (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_11))))) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 - 4]))))));
                }
            } 
        } 
    } 
}
