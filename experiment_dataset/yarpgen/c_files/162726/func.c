/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162726
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
    var_12 &= ((/* implicit */unsigned char) var_7);
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_5)) - (71))))) * (((/* implicit */int) max(((short)32256), ((short)32256))))))) >= (max((((/* implicit */long long int) ((short) (signed char)104))), ((+(var_6)))))));
    var_14 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) var_11))))) || (((/* implicit */_Bool) max((var_2), (((/* implicit */signed char) var_9))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                            {
                                var_15 |= ((/* implicit */unsigned short) var_7);
                                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) 4139793216512288657LL)), (((4ULL) * (((/* implicit */unsigned long long int) arr_6 [(_Bool)1] [i_1] [i_3] [i_1])))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_11)) : (var_6)))) || (((/* implicit */_Bool) arr_10 [i_1 + 1] [i_2 - 1] [i_1 + 1] [i_4])))))))))));
                            }
                            for (int i_5 = 0; i_5 < 14; i_5 += 2) 
                            {
                                var_17 = ((/* implicit */short) min((((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : ((+(arr_16 [i_0] [i_0] [i_2] [i_0] [i_3] [i_0]))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_5)) ? (var_10) : (var_7))))))));
                                arr_18 [i_2] [(_Bool)1] [i_3] [i_2 - 2] [i_1] [i_2] |= max((min((((/* implicit */long long int) max(((short)32256), (((/* implicit */short) var_3))))), (((((/* implicit */long long int) arr_9 [i_0 - 1] [i_1] [i_2] [i_3] [(_Bool)1])) / (arr_10 [i_5] [i_2 + 2] [i_1 - 1] [i_0]))))), (((/* implicit */long long int) var_11)));
                                arr_19 [i_5] [i_5] [i_3] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_10 [i_0] [i_0 - 1] [i_0] [i_1 - 1])) ? (arr_10 [i_0] [i_0 - 1] [(signed char)6] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) ((unsigned short) (unsigned char)58)))));
                            }
                            var_18 -= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_2])) ? (((/* implicit */int) arr_7 [(_Bool)1] [i_3] [i_2 - 2] [i_2 + 1])) : (((/* implicit */int) arr_7 [i_0 - 1] [i_2] [i_0 - 1] [i_2 + 2])))));
                            var_19 -= ((/* implicit */unsigned short) ((_Bool) ((long long int) (unsigned short)61808)));
                        }
                    } 
                } 
                arr_20 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) (short)46)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_17 [i_0 - 1] [i_0 - 1] [i_0] [i_1] [(unsigned char)10]))))));
            }
        } 
    } 
}
