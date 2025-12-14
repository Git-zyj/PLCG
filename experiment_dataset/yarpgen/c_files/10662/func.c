/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10662
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
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) ((long long int) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)15547))))), (((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0]) : (((/* implicit */long long int) 851426594)))))));
                arr_6 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (2147483647) : (((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */long long int) max((-841046594), (((/* implicit */int) arr_5 [i_0] [(signed char)3] [i_0]))))) : (9223372036854775795LL))) > (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (min((-841046594), (2147483644))) : ((~(((/* implicit */int) (unsigned short)7233)))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) 1540341331)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_0])))))) >= (((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))) : (min((((/* implicit */int) (short)-10220)), (-1661163734)))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    var_12 &= ((/* implicit */unsigned char) ((_Bool) ((int) max((arr_3 [0LL]), (((/* implicit */short) (_Bool)1))))));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((((_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_1]))))) : (((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)90)))))))));
                }
                var_13 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((int) arr_2 [(signed char)10] [i_1]))))) ? (arr_11 [i_0] [i_0] [i_1 - 1]) : ((+(min((9223372036854775807LL), (((/* implicit */long long int) var_3))))))));
            }
        } 
    } 
    var_14 = (-((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (min((((/* implicit */long long int) 2147483647)), (-4769612377896456351LL))))));
}
