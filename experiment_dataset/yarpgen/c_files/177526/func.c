/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177526
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
    var_13 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned char) ((((((((int) var_5)) + (2147483647))) >> (((/* implicit */int) (signed char)15)))) % (((/* implicit */int) min((((unsigned char) (unsigned char)123)), (((/* implicit */unsigned char) var_1)))))));
                    var_14 = min((((int) (signed char)-25)), ((((-(((/* implicit */int) var_11)))) % (arr_1 [i_0 + 3]))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_5 [(signed char)15] [i_0] [i_0] [i_3])) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-20)))))))));
                        arr_12 [i_0] [i_1] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) (signed char)-60);
                    }
                    arr_13 [i_0] [i_1] [i_1] [(signed char)3] = ((/* implicit */unsigned char) (~(min((((/* implicit */int) (signed char)-16)), (((arr_5 [i_0] [i_0] [i_2] [i_0]) - (((/* implicit */int) arr_0 [i_0] [i_1]))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_2);
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min(((-(((/* implicit */int) ((signed char) (unsigned char)1))))), ((~(var_2))))))));
}
