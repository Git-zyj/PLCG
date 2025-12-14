/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146191
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                arr_5 [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(6692126105369188869ULL)))) ? ((+(((/* implicit */int) (signed char)72)))) : (((/* implicit */int) (short)19457))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 8; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_11 ^= ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-1))))), (((((/* implicit */_Bool) 1991315705U)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)202))))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned short)4] [(unsigned short)4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (18446744073709551615ULL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_0] [i_0]))))) : (var_6))))));
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 2; i_4 < 7; i_4 += 2) 
                            {
                                var_12 -= ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 - 1] [i_2 - 2])) <= (((/* implicit */int) arr_4 [i_0 - 1] [i_2 - 1]))))), ((~(((/* implicit */int) (short)-8224))))));
                                var_13 = ((/* implicit */short) (-((+(((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])) & (1ULL)))))));
                            }
                            /* vectorizable */
                            for (short i_5 = 3; i_5 < 10; i_5 += 3) 
                            {
                                arr_19 [i_0] [i_1 - 1] [i_0] [i_3] [i_3] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)960))) / (var_1))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0])))));
                                var_14 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) -766653730)) ? (((/* implicit */int) (short)-7258)) : (((/* implicit */int) arr_1 [i_0]))))));
                                arr_20 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned long long int) 1663726064U))));
                                var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-65))));
                            }
                            arr_21 [i_3] [i_1] [9ULL] [i_2 + 1] = ((/* implicit */short) (unsigned short)9417);
                        }
                    } 
                } 
                var_16 -= ((/* implicit */short) (_Bool)1);
            }
        } 
    } 
    var_17 = var_5;
    var_18 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) 35993612646875136LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_6)))) ? (((/* implicit */int) ((short) var_7))) : (((/* implicit */int) ((((/* implicit */long long int) var_1)) <= (0LL))))))));
    var_19 = min(((~(var_7))), (((/* implicit */unsigned long long int) var_6)));
}
