/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188056
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) min((((/* implicit */long long int) ((short) max((((/* implicit */int) (unsigned short)0)), (arr_7 [i_2] [i_2] [i_2] [i_2]))))), (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 1073741824U)))) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-3006))) : (9223372002495037440LL)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_15 = ((((((/* implicit */_Bool) 173534728)) ? (9223372002495037440LL) : (9223372002495037440LL))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                                arr_16 [i_2] [i_1] [i_2] [i_3 - 1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) var_2)), (var_9))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_2])))))))) ? (-1498084438) : (((/* implicit */int) arr_0 [i_3 - 2]))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */long long int) -527420735)) >= (-708325796590307539LL))))))), (((var_8) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_8))))) : (((9223372002495037440LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 2; i_5 < 20; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        {
                            var_16 &= ((/* implicit */unsigned int) (unsigned short)33119);
                            var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned short)65535))));
                            arr_28 [i_5 - 2] [i_6] [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(arr_25 [i_7] [i_5])))) ? (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_11)))) : (((/* implicit */int) ((short) arr_14 [(unsigned short)3] [19LL] [i_7] [i_8] [i_8]))))) > (((/* implicit */int) var_6))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) min((max((((/* implicit */int) ((_Bool) arr_27 [i_10] [(unsigned char)10] [(unsigned char)10] [i_5 - 1]))), (((((/* implicit */int) var_1)) * (((/* implicit */int) (unsigned short)13)))))), (max((0), (((/* implicit */int) max((((/* implicit */unsigned short) var_12)), ((unsigned short)8190))))))));
                            arr_34 [(unsigned short)6] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)70)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((long long int) var_6)))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) 17)) ? (1047552) : (((/* implicit */int) (short)31)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_21 [i_5 + 1] [i_6] [i_9])), ((unsigned short)1)))))))));
                            arr_35 [i_10] [i_5 - 2] [i_6] [i_9] [i_10] [i_10] = ((/* implicit */_Bool) (unsigned short)1);
                            arr_36 [i_5 - 2] [1U] [i_10] [i_10] = 134184960U;
                            arr_37 [i_10] [18U] = ((/* implicit */signed char) max((((((var_10) ^ (var_9))) << (((((arr_33 [i_5 - 2] [i_6]) + (1221399338))) - (35))))), (((/* implicit */long long int) (short)6))));
                        }
                    } 
                } 
            }
        } 
    } 
}
