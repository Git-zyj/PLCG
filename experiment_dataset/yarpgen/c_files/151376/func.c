/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151376
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
    var_20 = ((/* implicit */signed char) (-(((((/* implicit */int) ((((/* implicit */int) var_3)) > (var_9)))) - (((/* implicit */int) var_0))))));
    var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_6)), (max((((/* implicit */unsigned long long int) var_12)), (((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_4 [i_0] |= ((/* implicit */_Bool) (signed char)-105);
            var_22 ^= ((((/* implicit */_Bool) (~(var_13)))) && (((/* implicit */_Bool) var_19)));
        }
        for (int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            var_23 *= ((/* implicit */unsigned char) var_5);
            arr_8 [i_0] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!((_Bool)0)))))))));
        }
        arr_9 [i_0] [i_0] = arr_7 [i_0];
        arr_10 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)110)), ((unsigned char)84)))) <= ((-(((/* implicit */int) arr_2 [i_0] [i_0])))))))));
    }
    var_24 = ((/* implicit */unsigned long long int) (unsigned char)171);
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */int) max((((/* implicit */long long int) (unsigned char)174)), (1039127247408017516LL)));
                                arr_23 [i_7] [i_7] [i_6] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) max((((/* implicit */long long int) (-((+(((/* implicit */int) var_12))))))), (max((((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_17))), (-7806970431894617245LL)))));
                                arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (~(((int) (signed char)127))));
                                var_26 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) (unsigned char)128)))), ((+(((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) var_11)) : (arr_17 [i_4] [i_4] [i_6])))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (+(((((/* implicit */_Bool) 12208780192876023665ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)210))) : (10178298704620515949ULL))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)66)) - (((/* implicit */int) var_19))))) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) var_5))));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_29 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-48))));
                            arr_30 [(_Bool)1] [i_4] [i_5] [i_8] [i_4] = arr_25 [i_3] [(unsigned char)13];
                            arr_31 [i_9] [i_4] = ((/* implicit */_Bool) ((67092480) - (((/* implicit */int) arr_15 [i_5 + 1] [i_5] [i_5 + 1]))));
                            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */_Bool) (~(var_7)))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_3] [i_5 + 1] [i_3] [(signed char)9] [(_Bool)1] [i_4]))))))))));
                        }
                        arr_32 [i_3] [i_4] [i_4] [i_3] = ((/* implicit */unsigned long long int) arr_11 [(unsigned char)4]);
                    }
                }
            } 
        } 
    } 
}
