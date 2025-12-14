/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127664
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
    var_17 += ((/* implicit */unsigned int) var_2);
    var_18 = ((/* implicit */unsigned char) -4272865466647125576LL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
                {
                    var_19 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)25991))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) (unsigned short)6316))))) : (arr_0 [i_2]))))));
                    var_20 = ((/* implicit */unsigned int) (signed char)-33);
                    var_21 = ((/* implicit */short) (~(((/* implicit */int) (signed char)-25))));
                }
                for (short i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
                {
                    arr_10 [i_0] [(unsigned short)4] [i_1] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)204))));
                    arr_11 [i_0] [i_1] [i_3] = ((/* implicit */long long int) (short)-1024);
                }
                /* vectorizable */
                for (short i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
                {
                    arr_16 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */int) ((unsigned int) var_5));
                    var_22 = ((/* implicit */short) -7903969463364982392LL);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) 5232710992835117152ULL))));
                                var_24 = arr_6 [(signed char)3] [i_4] [i_4];
                            }
                        } 
                    } 
                }
                for (unsigned char i_7 = 3; i_7 < 9; i_7 += 2) 
                {
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)7)) ? (((long long int) ((_Bool) var_8))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (short)1011))) ? (((/* implicit */int) ((short) arr_9 [i_1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                    arr_24 [i_7] = ((/* implicit */unsigned long long int) arr_12 [i_0] [(short)6] [i_7 + 1] [i_7]);
                }
                var_26 = ((/* implicit */short) -7903969463364982392LL);
            }
        } 
    } 
}
