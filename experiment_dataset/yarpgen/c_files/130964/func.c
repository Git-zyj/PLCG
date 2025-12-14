/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130964
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
    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))) : (var_6))))));
    var_19 = ((/* implicit */short) var_8);
    var_20 &= ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                            {
                                var_21 = ((/* implicit */unsigned long long int) var_8);
                                arr_12 [(_Bool)1] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) arr_7 [i_4] [i_3 + 1] [i_2] [i_1])), ((short)-32)))) >> (((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((var_0), (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_2 - 1] [i_3] [i_4])))) <= (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)0), ((unsigned short)23))))))))) : (((((((/* implicit */_Bool) var_1)) ? (1363527151133560175ULL) : (((/* implicit */unsigned long long int) var_8)))) - (((/* implicit */unsigned long long int) var_2))))));
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_22 = ((/* implicit */unsigned long long int) (signed char)-64);
                                var_23 ^= ((/* implicit */unsigned short) (unsigned char)0);
                            }
                            /* LoopSeq 2 */
                            for (unsigned short i_6 = 2; i_6 < 15; i_6 += 1) 
                            {
                                var_24 = ((/* implicit */_Bool) 17083216922575991472ULL);
                                var_25 = ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) min((arr_10 [i_6] [i_0] [i_0] [i_0] [i_0]), (arr_6 [15ULL] [15ULL] [15ULL]))))) % ((+(var_6)))))));
                                var_26 |= ((/* implicit */long long int) min((((((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_9) : (2698523062815905593ULL))) % (((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned int) (signed char)-16))))))), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0]))));
                                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (signed char)-105))));
                            }
                            for (unsigned long long int i_7 = 3; i_7 < 16; i_7 += 1) 
                            {
                                var_28 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -4010535225920539103LL)))) - (var_9))), (((/* implicit */unsigned long long int) var_11))));
                                var_29 = ((/* implicit */unsigned long long int) (+((+(((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2 - 1])))))))));
                            }
                            var_30 = (_Bool)1;
                            var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9506813336024429150ULL)) ? (9003459980748335234LL) : (7LL)))) ? (((/* implicit */int) arr_0 [i_1])) : (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_15)))))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */signed char) arr_0 [i_0]);
            }
        } 
    } 
}
