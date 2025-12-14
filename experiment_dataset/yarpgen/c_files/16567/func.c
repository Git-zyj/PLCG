/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16567
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
    var_20 = (+(max((var_8), (((/* implicit */long long int) var_1)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) arr_2 [i_2 + 2])) / (((/* implicit */int) arr_2 [i_0])))));
                            arr_11 [i_1] [i_1] [i_0] [1] [i_2] = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_2] [i_1] [i_1]);
                            var_22 = ((/* implicit */unsigned char) min(((~(max((((/* implicit */long long int) arr_8 [i_0] [i_1] [9LL] [i_3])), (arr_1 [i_1]))))), (((/* implicit */long long int) ((((/* implicit */int) var_13)) >> (((max((((/* implicit */int) var_10)), (-226273522))) - (233))))))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_10 [i_1] [i_2 + 3] [i_3 + 1]), (arr_7 [i_2 + 2] [i_2 + 1] [i_3 + 1] [i_3])))) ? (-226273545) : (min((((/* implicit */int) (unsigned char)229)), (arr_7 [i_2 + 2] [i_2] [i_3 - 1] [i_3])))));
                            var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -226273522)) - (min((((/* implicit */unsigned long long int) var_1)), (0ULL)))));
                        }
                    } 
                } 
                arr_12 [i_1] [i_1] = min((min((16ULL), (((/* implicit */unsigned long long int) -1LL)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))));
                var_25 |= ((/* implicit */unsigned char) max((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_15)))) || (((/* implicit */_Bool) arr_0 [i_0] [i_1]))))), (((((((/* implicit */_Bool) arr_4 [6LL] [i_1] [6LL])) || (((/* implicit */_Bool) arr_0 [i_1] [i_0])))) ? (max((((/* implicit */long long int) (unsigned char)0)), (var_8))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_0])))))))));
            }
        } 
    } 
    var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((-226273514) <= (((/* implicit */int) (unsigned char)0)))))) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((-2041329590401147871LL), (((/* implicit */long long int) var_2))))) ? (((/* implicit */int) ((unsigned char) var_5))) : ((+(((/* implicit */int) var_4)))))))));
}
