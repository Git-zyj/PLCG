/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166305
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_18 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)13)) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-125)))) ^ ((~(((/* implicit */int) (unsigned short)13))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65523)) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) (unsigned char)8))))) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)247)), (var_4)))))), (((/* implicit */int) min(((unsigned short)50873), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)15)) || (((/* implicit */_Bool) (signed char)-8))))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_19 ^= ((/* implicit */signed char) (((((+(((/* implicit */int) (unsigned short)65522)))) - (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)8520)))))) < (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (signed char)-25))))))));
                            var_20 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                            {
                                arr_12 [i_2] [i_1 + 1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)208))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9)))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_15))) & (((/* implicit */int) var_9))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) (unsigned char)80);
}
