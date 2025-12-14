/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13763
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_2 = 3; i_2 < 15; i_2 += 1) 
                {
                    arr_7 [i_2 - 3] [i_1] [i_1] [11LL] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_17))))) ? (arr_2 [i_1 + 1]) : (((/* implicit */long long int) arr_3 [i_0 + 1] [i_0 - 1] [i_1]))));
                    var_20 = ((/* implicit */int) ((long long int) var_19));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_12 [i_1] [6LL] [i_1] [i_1] [i_3] [(unsigned char)15] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_2] [i_2] [12U] [i_1]))));
                                arr_13 [i_1] [i_3] [i_2] [i_1 - 3] [i_1] = ((/* implicit */unsigned int) ((_Bool) 2147483647ULL));
                                var_21 = ((/* implicit */_Bool) -118554637);
                                var_22 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_2 - 3]))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_5 = 2; i_5 < 15; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_6] [i_7]))));
                                arr_21 [i_0] [i_1] [i_0] [i_1] [i_7] [(_Bool)1] = ((((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */long long int) var_18)))) % (((arr_6 [(signed char)11] [1] [i_6]) | (((/* implicit */long long int) ((/* implicit */int) var_1))))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_1] [i_5] [i_1] = ((/* implicit */long long int) (((((-2147483647 - 1)) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    arr_23 [i_0] [(_Bool)1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (arr_15 [i_5 - 1] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) (-2147483647 - 1)))));
                }
                for (unsigned char i_8 = 2; i_8 < 15; i_8 += 2) 
                {
                    var_24 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 10904922995048195583ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32767)))), (((/* implicit */int) ((arr_19 [i_1] [i_8 - 2] [i_1]) <= (((/* implicit */int) (_Bool)1)))))));
                    var_25 |= ((/* implicit */int) (~(((long long int) arr_3 [i_1 - 1] [i_8 + 1] [i_8]))));
                    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 83894815)), (arr_15 [i_1] [i_0] [i_1] [i_1])))) && (((/* implicit */_Bool) ((int) (unsigned char)7)))));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    arr_29 [i_1] [i_1] [8] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_1] [15] [i_0 - 1] [i_1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))))));
                    var_27 -= ((/* implicit */signed char) var_7);
                }
                arr_30 [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)248)), (min((var_8), (var_7)))));
                var_28 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_15)), (var_19))) + (((/* implicit */unsigned long long int) ((var_1) ? (((((/* implicit */_Bool) arr_15 [5] [i_1] [i_0] [i_1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_29 = ((int) ((((/* implicit */_Bool) ((signed char) var_2))) ? (var_4) : ((-2147483647 - 1))));
    var_30 = var_13;
    var_31 = ((/* implicit */unsigned char) -83894816);
    var_32 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 1048575U)) : (var_19)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) var_2)))));
}
