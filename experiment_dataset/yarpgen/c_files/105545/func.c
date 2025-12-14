/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105545
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */_Bool) (+((-(-8634665933598392521LL)))));
                                var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_17)), (var_0)));
                                arr_11 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) var_2);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(unsigned char)5] [i_0]))) - (var_14)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1116892707587883008LL)) ? (((/* implicit */long long int) arr_0 [i_1])) : (arr_5 [(unsigned char)5] [(unsigned char)5] [i_2]))))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */signed char) ((min((arr_0 [i_0]), (((/* implicit */unsigned int) var_11)))) >= (arr_0 [i_0])));
        arr_13 [i_0] = ((/* implicit */int) var_9);
    }
    var_23 |= ((/* implicit */short) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) ((int) 3185958347582076576LL))) ? (((/* implicit */int) min((((/* implicit */signed char) var_8)), (var_3)))) : (((/* implicit */int) var_19))))));
    var_24 += ((/* implicit */unsigned char) max((27LL), (((/* implicit */long long int) (+(var_17))))));
    var_25 -= ((/* implicit */unsigned int) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
    var_26 -= ((/* implicit */long long int) var_19);
}
