/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144457
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
    var_20 += ((/* implicit */unsigned char) max((var_13), (((/* implicit */short) ((((unsigned int) 5417611834396224005LL)) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))))))));
    var_21 = ((/* implicit */unsigned char) ((((unsigned long long int) (unsigned char)46)) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_22 += ((/* implicit */unsigned short) arr_0 [i_0]);
        var_23 = ((/* implicit */unsigned long long int) max((((var_15) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((unsigned short) (unsigned char)46)))));
        var_24 = ((/* implicit */unsigned short) (unsigned char)210);
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -1141502205)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned char)25))))))) - ((-(7293435526531059285LL)))));
                    var_25 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (unsigned short)7212)))), (((/* implicit */int) ((signed char) max((((/* implicit */int) (unsigned char)220)), (497828845)))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1 + 3] [i_2] [i_1 + 3] [i_3] = ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) 2305274509U)))));
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)44441)))))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_27 = ((/* implicit */unsigned char) ((unsigned short) var_1));
        var_28 = ((/* implicit */unsigned short) ((unsigned char) arr_2 [(unsigned char)0]));
    }
}
