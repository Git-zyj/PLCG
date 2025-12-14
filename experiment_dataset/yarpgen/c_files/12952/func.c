/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12952
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */signed char) ((((((var_1) && (((/* implicit */_Bool) arr_1 [i_0])))) && (((/* implicit */_Bool) 18367531012042911546ULL)))) ? (((/* implicit */int) ((signed char) max((((/* implicit */int) arr_4 [(signed char)2] [i_1])), (var_7))))) : (((/* implicit */int) min((arr_3 [i_0 - 1] [(unsigned short)7]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
                arr_5 [14U] [(signed char)6] [14U] = ((/* implicit */unsigned short) ((min((79213061666640069ULL), (79213061666640057ULL))) + ((+(((((/* implicit */unsigned long long int) -1216514977)) + (2609861477704592414ULL)))))));
                var_16 = ((/* implicit */short) var_11);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_17 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551613ULL)));
                                var_18 = var_7;
                                arr_14 [(_Bool)1] [i_4] [i_2] [i_4] [i_0] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [6ULL] [6ULL] [i_2] [6ULL])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14))))) ? ((~(4136097133U))) : (arr_13 [i_0 + 1] [i_4] [i_3 - 1] [i_3 + 1] [i_4 - 1]))), (((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_9 [(_Bool)1] [i_1] [10ULL] [i_1] [i_1]), (arr_8 [i_3 + 1] [i_2] [i_1] [i_0]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) min((18446744073709551596ULL), (((/* implicit */unsigned long long int) min(((unsigned short)17), (((/* implicit */unsigned short) (signed char)-19)))))));
    var_20 = ((/* implicit */unsigned int) (((((~(9506973974718047911ULL))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)191))))))) ^ (var_11)));
    var_21 = ((/* implicit */int) var_3);
}
