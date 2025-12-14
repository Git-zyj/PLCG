/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17285
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
    var_18 -= ((/* implicit */unsigned long long int) ((long long int) ((((((/* implicit */_Bool) (unsigned short)24896)) ? (((/* implicit */int) (unsigned short)40635)) : (((/* implicit */int) var_6)))) != (((/* implicit */int) var_6)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_19 = (+(arr_3 [i_0]));
                var_20 = ((/* implicit */int) (!(((((/* implicit */int) arr_0 [i_0] [i_1 + 3])) != (((((/* implicit */_Bool) (unsigned short)51812)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)40650))))))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) 12394004118488563833ULL))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_22 += ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_7))));
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (_Bool)1))));
                    var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_25 = ((/* implicit */long long int) (_Bool)1);
                    var_26 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)47381)) || (((/* implicit */_Bool) (unsigned short)7093))));
                }
                var_27 = ((/* implicit */int) ((_Bool) min((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)216)))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned short) ((var_6) ? (((/* implicit */int) var_7)) : (min(((+(var_12))), (((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) 33554416LL)))))))));
    /* LoopSeq 1 */
    for (long long int i_4 = 4; i_4 < 20; i_4 += 2) 
    {
        var_29 = ((/* implicit */unsigned short) (signed char)0);
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 23; i_7 += 3) 
                    {
                        for (int i_8 = 1; i_8 < 21; i_8 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((unsigned short) (-(((/* implicit */int) (_Bool)1))))))));
                                var_31 = ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                    var_32 &= (unsigned short)65535;
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (unsigned char)0)), (3397985045U))), (((/* implicit */unsigned int) arr_16 [i_6] [17ULL] [(_Bool)1]))))) ? (((/* implicit */int) (_Bool)1)) : (arr_19 [i_4 + 4] [i_5] [i_6] [i_4 - 1])));
                    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_19 [i_6] [i_5] [i_4] [i_4]) : (var_12)));
                }
            } 
        } 
        var_35 = ((/* implicit */_Bool) var_4);
        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)31))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                var_37 = (!((!((_Bool)1))));
                var_38 = ((/* implicit */unsigned short) (_Bool)1);
            }
        } 
    } 
}
