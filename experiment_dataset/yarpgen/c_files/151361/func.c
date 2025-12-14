/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151361
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_2] [i_0] [i_0]))) < (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (13U))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [(_Bool)0] [i_1] [i_2]))) : (min((((/* implicit */long long int) ((short) (unsigned short)7))), (-1457780706092038492LL)))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)15)))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65528))))) : (((((/* implicit */unsigned long long int) 9223372036854775807LL)) | ((~(var_15)))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            var_20 = (-(((arr_10 [i_4] [i_3] [9LL] [(unsigned char)8] [(unsigned char)8] [i_0]) / (2408458157899758895LL))));
                            var_21 = ((/* implicit */unsigned int) var_3);
                            var_22 = (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) | (arr_0 [i_2]))));
                            var_23 = ((/* implicit */_Bool) min((var_23), (((_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [(unsigned char)19]))));
                        }
                        arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_7) - (((/* implicit */long long int) arr_13 [i_3] [i_1] [i_2] [i_2] [i_1] [i_1] [(unsigned short)1]))))) ? ((-(arr_9 [i_3]))) : ((-(arr_9 [i_0])))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_2] [i_1] [i_0]))) | (2452109169819168933ULL)));
                        var_25 = ((/* implicit */long long int) (signed char)31);
                        var_26 = ((long long int) ((unsigned short) arr_4 [i_2] [i_1] [i_1]));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned short) (+(arr_11 [i_0] [i_1] [i_2] [i_1] [i_7])));
                            arr_23 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_0]))))))), (9105640523849348953ULL)));
                            arr_24 [i_1] [i_7] [i_7] [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) ((long long int) 6407974527502286845LL))))));
                            arr_25 [i_6] [i_1] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [(unsigned short)19] [i_6] [(unsigned short)19])) || (((/* implicit */_Bool) arr_8 [i_1] [i_6] [i_2] [i_1]))))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1]))) < (arr_15 [i_0]))))));
                        }
                        /* vectorizable */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            arr_29 [(unsigned char)19] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) var_13);
                            arr_30 [i_0] [i_1] [4LL] [i_1] [i_8 - 1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_11)) : (-9057469574073867358LL))) < ((-(9223372036854775807LL)))));
                            var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 67108863))));
                            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) 15994634903890382689ULL))));
                        }
                        var_30 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) arr_28 [(_Bool)1] [17U] [i_6] [i_2] [i_1] [i_0])))));
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((_Bool) ((long long int) ((((/* implicit */_Bool) 134217712)) ? (-9112690807098038166LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65505))))))))));
}
