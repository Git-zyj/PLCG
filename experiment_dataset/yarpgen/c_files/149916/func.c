/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149916
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
    var_18 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_19 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((int) 2455385044916457149LL))), ((+(6910478156077749575LL)))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_12))))) : (var_13)))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_14)))))))));
        arr_2 [(signed char)0] [i_0] = ((arr_0 [i_0] [i_0]) >= (((arr_0 [i_0] [i_0]) / (arr_0 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        arr_12 [(short)21] [i_0] [i_3] [i_3] = ((/* implicit */int) (+(((((/* implicit */_Bool) (~(-2455385044916457160LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (((var_6) & (((/* implicit */long long int) ((/* implicit */int) (signed char)18)))))))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3] [i_3])))))) | (((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-29)) - (((/* implicit */int) arr_9 [i_3] [i_1] [i_1]))))) * (arr_7 [i_0] [i_0] [i_0] [i_0])))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned char) var_17);
                            var_23 *= min((((/* implicit */unsigned int) (unsigned short)10706)), (25649623U));
                            var_24 = ((/* implicit */short) min((var_24), (((short) (+(((/* implicit */int) (short)502)))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-4067))))) != (var_6)));
                            arr_27 [i_0] = ((/* implicit */unsigned char) (short)31217);
                        }
                        for (int i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            arr_31 [i_5] [i_5] [i_0] [i_9] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) var_4)), ((unsigned char)201)));
                            var_25 *= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_3)))) == ((~(14LL)))));
                            var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-490))));
                            arr_32 [i_0] [14] [0U] [0U] [0U] [i_0] [i_0] = (!(((/* implicit */_Bool) -2455385044916457169LL)));
                        }
                        var_27 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) -2147483638))))), (min(((short)6794), (((/* implicit */short) (unsigned char)185))))))) >> (((((int) max((-2455385044916457164LL), (((/* implicit */long long int) arr_9 [i_6] [i_5] [i_6]))))) - (168)))));
                    }
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_11 = 3; i_11 < 21; i_11 += 3) /* same iter space */
                        {
                            arr_39 [i_0] [i_0] [i_0] [13] [i_0] = ((/* implicit */short) (~(((unsigned int) arr_37 [i_0] [i_0] [i_6] [i_11 - 1] [i_11 + 1] [i_0] [i_6]))));
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((int) -3865386083587899560LL))) ? (min((var_0), (((/* implicit */long long int) 1390789203U)))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)505))))))))))));
                        }
                        /* vectorizable */
                        for (short i_12 = 3; i_12 < 21; i_12 += 3) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned char) (short)31380);
                            var_30 = ((/* implicit */int) ((short) (+(((/* implicit */int) var_3)))));
                            arr_43 [i_0] [i_0] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1466885599)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)45))))) ? (var_11) : (((/* implicit */int) (short)-16003))));
                        }
                        arr_44 [i_0] [i_6] [i_6] [i_5] [i_5] [i_0] = ((/* implicit */short) arr_22 [i_0] [i_0] [i_0] [i_0]);
                        var_31 = ((/* implicit */unsigned char) var_6);
                    }
                    for (signed char i_13 = 1; i_13 < 18; i_13 += 2) 
                    {
                        arr_47 [(signed char)18] [i_6] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) min((((unsigned short) var_14)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1842583550)))))))), ((+(((((/* implicit */long long int) 2147483624)) % (var_10)))))));
                        var_32 |= ((/* implicit */unsigned short) (~(((int) (!(var_16))))));
                    }
                }
            } 
        } 
    }
}
