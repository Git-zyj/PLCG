/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142778
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
    var_10 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))))) ? (((var_9) ? (max((((/* implicit */unsigned long long int) var_9)), (6956996504568258620ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -1591134822)))))) : (((/* implicit */unsigned long long int) ((int) (!(var_9)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [3U] [i_1])) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (short)-9418))))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (var_3)))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) var_7))));
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)250)) : (160664601)))))) ? (((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))) : (max((((((/* implicit */int) (unsigned short)35604)) << (((9446197488137478689ULL) - (9446197488137478677ULL))))), (((/* implicit */int) var_2))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_12 = ((/* implicit */unsigned long long int) (+(2896541234U)));
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)105)), (1320027934)))) ? (min((((/* implicit */unsigned int) arr_2 [i_1])), (((((/* implicit */_Bool) var_3)) ? (1929546826U) : (((/* implicit */unsigned int) -1320027940)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((min((var_5), (((/* implicit */unsigned int) (_Bool)1)))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_1])))))))))))));
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((5424301851683551189ULL), (((/* implicit */unsigned long long int) arr_3 [i_1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9421)) ? (((/* implicit */int) (short)-29067)) : (((/* implicit */int) arr_0 [i_3]))))) ? (max((var_6), (((/* implicit */long long int) arr_11 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [(unsigned short)4] [i_1]))))) : (((/* implicit */long long int) max(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)68))))))))));
                }
                for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    var_15 = ((/* implicit */signed char) 679131119876847089ULL);
                    arr_17 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_8 [i_4] [i_0])), (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_4])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_4])) : (((/* implicit */int) arr_5 [(_Bool)1] [i_1] [i_4]))))));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)30254)))))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_6);
    var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)187))) : (var_6)))) ? (((/* implicit */unsigned int) var_0)) : (((((/* implicit */_Bool) var_4)) ? (3886980715U) : (((/* implicit */unsigned int) var_0)))))) > (var_5)));
}
