/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170711
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    arr_9 [i_1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) (+(min((((((/* implicit */int) var_0)) / (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((arr_8 [i_0] [i_0] [i_0]), (arr_6 [(unsigned char)7]))))))));
                    arr_10 [i_1] [i_1] [12LL] = ((/* implicit */long long int) arr_6 [13LL]);
                    var_10 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) 4338348326211661352LL))));
                    arr_11 [i_0] [i_0] [(signed char)4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_0 [i_0])) > (max((((/* implicit */long long int) ((unsigned char) var_3))), ((-(arr_5 [i_0] [i_0] [i_0])))))));
                }
                for (unsigned int i_3 = 2; i_3 < 19; i_3 += 3) 
                {
                    var_11 -= ((/* implicit */signed char) -1);
                    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) arr_4 [i_3]))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        var_13 = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_3 - 1])) | (((/* implicit */int) arr_7 [i_3 - 1]))));
                        arr_18 [i_0] [(_Bool)1] [i_0] [i_4] [i_0] = ((/* implicit */_Bool) var_9);
                        var_14 ^= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)87))));
                        arr_19 [i_4] [i_4] [12LL] [i_4] [i_4] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((+(arr_5 [(short)15] [i_3] [i_3]))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)19))))))))));
                        var_15 = ((/* implicit */long long int) ((_Bool) ((signed char) var_7)));
                    }
                    for (long long int i_5 = 1; i_5 < 17; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */signed char) (+(((/* implicit */int) arr_20 [i_0] [i_0] [i_1] [i_1] [i_5] [12U]))));
                        arr_23 [9LL] [i_1] [i_5] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [(signed char)15] [(signed char)15])) : (((/* implicit */int) (short)-24738))))) ^ (((((/* implicit */_Bool) arr_3 [i_0] [17])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))) : (470295363694783329LL))))) ^ ((~(7037611402996562815LL)))));
                        arr_24 [(unsigned char)10] [i_1] [i_3 + 2] [i_5] = ((/* implicit */signed char) (-((-(arr_15 [i_5 + 4] [i_5] [i_5] [i_5 + 2])))));
                        var_17 *= ((/* implicit */_Bool) (~(1992263736U)));
                    }
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_18 = ((/* implicit */signed char) ((arr_22 [(_Bool)1] [(unsigned char)0] [18U]) / (((/* implicit */unsigned int) var_3))));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 1; i_7 < 19; i_7 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_19 = ((/* implicit */short) min(((~(((/* implicit */int) (short)25735)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_22 [i_0] [3LL] [i_7])))))));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (~(arr_5 [i_0] [i_6] [i_8]))))));
                            var_21 = ((/* implicit */long long int) ((short) ((541966501) > (33538048))));
                            var_22 = ((/* implicit */unsigned char) arr_7 [(short)5]);
                        }
                        arr_34 [i_0] [i_1] [i_7] [(unsigned char)2] = ((/* implicit */long long int) (-(max((((/* implicit */unsigned int) var_4)), (var_1)))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 292855715219575380LL)) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_2 [3U])) | (((/* implicit */int) (unsigned char)255)))) ^ ((~(((/* implicit */int) (signed char)-105))))))) : (((1LL) ^ (6633178339995605546LL)))));
                        var_24 = ((/* implicit */long long int) var_8);
                        var_25 = (!(((/* implicit */_Bool) arr_8 [(_Bool)1] [i_1] [i_6])));
                    }
                }
                arr_35 [i_0] [16U] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_25 [i_0] [5LL] [(_Bool)1])) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((unsigned char) var_4))) : ((-(((/* implicit */int) var_8))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */int) var_5);
}
