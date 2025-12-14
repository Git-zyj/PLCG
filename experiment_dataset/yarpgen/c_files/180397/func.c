/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180397
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
    var_16 = ((/* implicit */unsigned long long int) var_1);
    var_17 = ((/* implicit */long long int) var_7);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) var_10);
        var_18 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))));
        var_19 += ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) -363022503)) == (0U)))) % ((-(-1)))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        arr_6 [14LL] &= ((/* implicit */unsigned int) (~(33554431ULL)));
        var_20 = ((/* implicit */_Bool) ((int) (-(((int) arr_3 [(_Bool)1] [i_1])))));
        var_21 = ((/* implicit */unsigned int) var_5);
        var_22 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_5 [i_1]))))));
    }
    for (short i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) (short)-14303);
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            var_25 = ((/* implicit */unsigned char) (((+(arr_10 [i_2]))) == (((/* implicit */unsigned long long int) ((long long int) arr_10 [i_3])))));
            var_26 -= ((/* implicit */short) (+(min((((/* implicit */int) (short)26229)), ((-2147483647 - 1))))));
        }
        var_27 |= ((/* implicit */short) (-(4294967295U)));
    }
    var_28 ^= ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) var_7)), (var_15)))));
}
