/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16527
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
    var_20 = ((/* implicit */_Bool) var_9);
    var_21 *= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) && (((/* implicit */_Bool) min((var_2), (((/* implicit */short) var_3))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] [i_0 - 1] |= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)108)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    var_22 += ((/* implicit */short) (~(((/* implicit */int) ((arr_2 [i_0 - 1] [i_0 - 2]) != (((((/* implicit */int) arr_4 [i_1] [i_1] [i_0])) % (((/* implicit */int) arr_6 [i_2] [i_1] [i_0] [i_0])))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2 - 2] [i_3] [i_3] [i_1]))));
                                var_24 |= var_8;
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-122))));
                }
            } 
        } 
        var_26 &= (signed char)-71;
    }
    var_27 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_12)))), (((/* implicit */int) ((4154140596134324456ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))))) ? (((max((var_11), (((/* implicit */unsigned long long int) var_19)))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))));
}
