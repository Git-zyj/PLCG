/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164170
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
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    arr_8 [i_1] = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_0 [i_2] [7]))))));
                    var_18 = arr_2 [i_1];
                    arr_9 [i_1] [(unsigned char)4] [(unsigned char)4] = ((/* implicit */unsigned short) var_2);
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    arr_12 [i_0] [i_0] [i_1] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
                    arr_13 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
                    /* LoopSeq 1 */
                    for (short i_4 = 4; i_4 < 7; i_4 += 1) 
                    {
                        arr_16 [i_1] [i_1 - 1] = ((/* implicit */unsigned long long int) -2122179734);
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_1] [i_3] [i_3])) + (arr_11 [i_4] [i_3] [9] [i_0])))) ? (((/* implicit */int) arr_7 [i_4 + 2] [i_4] [i_4] [(signed char)3])) : (((/* implicit */int) ((((/* implicit */_Bool) 3362030382108401353ULL)) && (((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_3] [i_0] [i_4])))))));
                    }
                    var_20 &= ((/* implicit */unsigned int) 15084713691601150262ULL);
                }
                arr_17 [i_1] = ((/* implicit */int) ((short) arr_4 [i_1]));
                var_21 = ((/* implicit */unsigned char) max((3362030382108401353ULL), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 15084713691601150268ULL)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_17);
    var_23 = ((/* implicit */short) max((((((((/* implicit */int) var_5)) + (2147483647))) >> (((min((var_11), (((/* implicit */long long int) var_0)))) + (6459220150305902606LL))))), (((/* implicit */int) var_5))));
}
