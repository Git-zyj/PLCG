/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132066
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
    var_17 &= ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((_Bool) ((((int) var_0)) == (max((arr_1 [i_1] [i_1]), (arr_5 [i_0]))))));
                    arr_6 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_2]);
                    arr_7 [i_0] [i_1] [i_0] [i_0] = max((((/* implicit */int) ((_Bool) arr_5 [i_0]))), (min((min((arr_5 [i_0]), (arr_1 [i_0] [i_1]))), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-1)), ((unsigned char)54)))))));
                    arr_8 [i_0] = ((/* implicit */_Bool) (~(max((arr_1 [i_0] [i_2]), (((/* implicit */int) max((arr_3 [i_1] [i_1] [i_2]), (((/* implicit */unsigned short) var_14)))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */signed char) var_9)), (min(((signed char)-107), ((signed char)-59))))))));
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 2) 
        {
            {
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_15 [i_4 + 1] [i_4 - 2])), ((signed char)0)))) ? (((/* implicit */int) var_5)) : (max((((int) arr_15 [i_3] [i_3])), (((/* implicit */int) arr_13 [i_3]))))));
                var_21 = ((/* implicit */_Bool) ((long long int) var_9));
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_15 [i_3] [i_3])), (((((/* implicit */_Bool) arr_10 [i_4 + 3] [i_4 - 1])) ? (max((arr_10 [i_3] [i_4]), (((/* implicit */unsigned int) var_7)))) : (min((var_1), (((/* implicit */unsigned int) var_7)))))))))));
            }
        } 
    } 
}
