/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121484
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
    for (short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-1))));
        arr_5 [i_0] = ((/* implicit */short) -1639491380);
        arr_6 [i_0] = ((/* implicit */short) min((((/* implicit */int) (short)-20)), ((-2147483647 - 1))));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            arr_10 [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)8)) / (1639491363)));
            arr_11 [i_0] [i_1] [i_0] = ((/* implicit */short) arr_7 [i_0]);
            var_17 += ((/* implicit */signed char) ((((/* implicit */int) (short)13767)) < (((/* implicit */int) (short)-203))));
        }
    }
    var_18 += ((/* implicit */signed char) (+(((/* implicit */int) (short)12288))));
    var_19 += ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((-1639491361) ^ (((/* implicit */int) var_4))))), (min((9259664587752055908ULL), (((/* implicit */unsigned long long int) (short)-12603))))))) && (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)8))) + (var_11))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)2209)) == (((/* implicit */int) (short)-12603))))))))));
}
