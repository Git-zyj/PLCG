/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166690
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)-14028)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)31184))))));
                var_20 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_5 [(short)19])) - (((/* implicit */int) var_2)))) - (((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_1 - 1])), (((unsigned short) (unsigned short)34698)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((signed char) (short)-14028)))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) ^ (min((17017604217882469949ULL), (((/* implicit */unsigned long long int) var_18))))))) ? (((long long int) ((((/* implicit */_Bool) (short)-14019)) ? (((/* implicit */int) (unsigned short)31184)) : (((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (arr_8 [i_2]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_2] [i_2])))))));
        var_24 = ((/* implicit */unsigned short) arr_1 [i_2] [i_2]);
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */int) arr_1 [(unsigned short)16] [i_2])) : (((/* implicit */int) arr_1 [i_2] [i_2]))));
    }
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            for (unsigned char i_5 = 4; i_5 < 13; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 13; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) var_3);
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_8 [i_5 - 3]) == (arr_8 [i_5 + 2])))) - (((((/* implicit */_Bool) (unsigned short)60114)) ? (((/* implicit */int) (unsigned short)30837)) : (((/* implicit */int) var_17))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */int) var_3);
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) arr_1 [(_Bool)1] [i_3]))));
                }
            } 
        } 
    } 
}
