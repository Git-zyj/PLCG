/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169722
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
    var_12 |= ((/* implicit */unsigned short) ((_Bool) min((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_1)) : (var_0)))))));
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (+(((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) (+(((((var_10) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) ? (((/* implicit */int) ((arr_1 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) : ((~(((/* implicit */int) (_Bool)1))))))));
                var_14 = ((/* implicit */unsigned short) arr_1 [i_1]);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_15 |= ((/* implicit */_Bool) (-(arr_0 [4LL])));
                            var_16 = ((/* implicit */unsigned char) (((-(arr_1 [i_0 + 1]))) / (min((arr_1 [i_3]), (((/* implicit */long long int) var_9))))));
                            arr_13 [(signed char)4] [(signed char)4] [i_2] |= ((/* implicit */short) var_5);
                            var_17 = ((/* implicit */short) (-((~(var_0)))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) 3221225472U);
            }
        } 
    } 
    var_19 *= ((/* implicit */signed char) (((~(((/* implicit */int) ((72057044282114048ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))) / (((((/* implicit */_Bool) min((var_11), (((/* implicit */short) (signed char)-86))))) ? (((((/* implicit */int) var_2)) << (((/* implicit */int) var_4)))) : (((/* implicit */int) var_2))))));
}
