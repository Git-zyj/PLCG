/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141837
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (unsigned short)55495)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)(-32767 - 1))))))) : (((/* implicit */int) (signed char)0))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) arr_0 [i_1]);
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))) > (((min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_1 [i_0] [i_0]))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)126)))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
                            {
                                var_21 *= ((/* implicit */short) (signed char)96);
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_4 [i_1] [i_2 - 1] [(_Bool)1]))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
                            {
                                var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2 - 2] [i_3] [i_2]))));
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_12 [(_Bool)1] [2ULL] [i_2] [i_2 + 1] [i_2 - 3] [i_2 - 3] [i_0])), (arr_6 [i_2] [i_2 - 3] [i_2])))) ? (((/* implicit */int) ((((3733237608U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)109))))) || ((_Bool)1)))) : (((/* implicit */int) arr_4 [i_5] [i_2] [(_Bool)1]))));
                                arr_16 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((max((arr_1 [i_5] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)65515)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_2 - 2])))))) == (((/* implicit */int) ((561729687U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_5]))))))));
                                var_25 = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) min(((short)32763), ((short)-25957)))), (3733237604U))), (((/* implicit */unsigned int) min((min((((/* implicit */unsigned short) arr_0 [i_5])), ((unsigned short)127))), (((/* implicit */unsigned short) (short)16757)))))));
                                var_26 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_10 [i_2 - 3] [i_2 + 2] [i_2 + 1] [i_2 + 2])) / (((/* implicit */int) arr_10 [i_2 - 2] [i_2 - 1] [i_2 + 2] [i_2 - 3])))), (((/* implicit */int) (short)24656))));
                            }
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) max(((unsigned short)65529), (((/* implicit */unsigned short) arr_3 [i_1] [i_2] [i_3]))))) && (((/* implicit */_Bool) min(((unsigned short)24332), (arr_4 [i_0] [i_2 + 2] [i_2 - 3]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        arr_19 [i_6] [i_6] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (unsigned short)65529)), (min((255U), (((/* implicit */unsigned int) (unsigned short)63610)))))) / (((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_6] [i_6])))))));
        var_28 = ((/* implicit */_Bool) 11009074685621080758ULL);
    }
    for (unsigned int i_7 = 3; i_7 < 14; i_7 += 2) 
    {
        var_29 = ((/* implicit */short) min(((+(((/* implicit */int) arr_0 [i_7 - 3])))), (min((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)-64)))), (((/* implicit */int) arr_13 [i_7 - 3] [i_7]))))));
        arr_22 [i_7] = ((/* implicit */signed char) min((((arr_7 [i_7 - 1] [i_7 - 3] [i_7] [i_7 - 3]) ^ (arr_7 [i_7] [i_7] [i_7 - 1] [i_7 - 2]))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_7 [i_7 - 2] [i_7] [i_7 - 2] [i_7 - 1])))));
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) min((min((4294967040U), (1765706510U))), (((/* implicit */unsigned int) max((max(((unsigned short)43284), (((/* implicit */unsigned short) (short)18590)))), (arr_13 [i_8] [i_8])))))))));
            var_31 = ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_7 - 1] [i_7 - 1] [i_7 - 1]))));
        }
        var_32 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_15 [i_7 - 3] [i_7] [i_7] [i_7 - 1] [i_7] [i_7] [i_7])) > (((/* implicit */int) ((((/* implicit */int) (unsigned short)7332)) > (((/* implicit */int) arr_2 [i_7 - 2] [i_7 - 2]))))))) ? (min((((((/* implicit */_Bool) arr_3 [i_7] [i_7] [i_7])) ? (((/* implicit */int) (unsigned short)25077)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_26 [i_7] [i_7 - 1] [i_7 + 1])))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_7] [i_7]))))) ? (((/* implicit */int) min((arr_21 [(short)0]), ((unsigned short)6)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_7 + 1])), ((unsigned short)25077))))))));
        var_33 |= ((/* implicit */_Bool) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_15 [i_7 + 1] [(short)4] [(short)4] [i_7 + 1] [i_7 + 1] [i_7 - 2] [i_7]))));
    }
}
