/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163134
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
    var_16 = ((/* implicit */short) ((max((((/* implicit */unsigned int) var_3)), (((3961186799U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-85))))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_14)))) ? (((/* implicit */int) ((unsigned char) var_11))) : (((/* implicit */int) var_6)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) arr_1 [i_1]);
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_1 [(_Bool)1])), (var_1))) >= (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [(unsigned short)2] [i_1])))))))), (((unsigned long long int) min((9830919670565550554ULL), (9830919670565550543ULL)))))))));
                    var_18 = ((/* implicit */unsigned char) ((int) max((9830919670565550554ULL), (((/* implicit */unsigned long long int) (+(var_9)))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 1; i_4 < 23; i_4 += 4) /* same iter space */
                        {
                            arr_15 [i_1] [i_1] [i_4 + 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_1 - 3] [i_4 - 1] [i_4 + 1] [(signed char)7] [i_4 - 1])))) | (((/* implicit */int) max((arr_13 [i_0] [i_1 - 1] [i_4 + 1] [i_0] [i_1]), (arr_13 [i_0] [i_1 - 2] [i_4 + 1] [i_4] [i_1]))))));
                            var_19 = ((/* implicit */short) min((var_19), ((short)672)));
                        }
                        for (long long int i_5 = 1; i_5 < 23; i_5 += 4) /* same iter space */
                        {
                            arr_18 [i_0] [i_1] [i_1 - 3] [i_1 - 3] [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) > (9830919670565550554ULL)));
                            var_20 = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_1]);
                            var_21 = ((/* implicit */long long int) var_15);
                        }
                        var_22 = ((/* implicit */_Bool) max((var_22), ((!(((/* implicit */_Bool) max((arr_8 [i_0] [i_2] [i_2]), (arr_8 [i_1 - 1] [i_1 - 1] [i_3]))))))));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((arr_11 [i_0] [(unsigned char)22] [(unsigned char)22]) + (var_9))))));
                        var_24 = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) arr_1 [i_6]))));
                        var_25 = ((/* implicit */unsigned char) 13720370151210305466ULL);
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((int) arr_8 [i_1 + 2] [i_0] [i_0])))));
                    }
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                    {
                        var_27 ^= ((/* implicit */unsigned char) 8615824403144001045ULL);
                        var_28 = ((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)127)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                    }
                }
            } 
        } 
    } 
}
