/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169083
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
    var_19 = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)27172));
    var_20 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) var_7)))))), ((+(var_16))));
    var_21 &= ((/* implicit */unsigned long long int) var_17);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (unsigned char)146)) ? (((((/* implicit */_Bool) (unsigned short)7229)) ? (2505240161U) : (4294967288U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13837))))));
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) min((min((3340480824U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) arr_1 [i_0]))))))), (1099687354U))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_17))));
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65535)))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        arr_12 [i_1] [i_4] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47541)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned short)1311))))) ? (3654057134U) : (2387601205U));
                        /* LoopSeq 2 */
                        for (short i_5 = 3; i_5 < 6; i_5 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (-(2620676492U))))));
                            arr_17 [i_1] [i_4] [i_4] [i_4] [2ULL] [i_4] = ((/* implicit */int) arr_16 [i_1] [i_2] [(unsigned short)2] [i_3] [i_2] [i_5 + 4] [i_5 + 3]);
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5512883235165470338ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_2]))) : (3197452007U)))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))));
                        }
                        for (int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            arr_22 [(unsigned short)7] [(unsigned short)7] [(_Bool)1] [i_4] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)146)))) != (((/* implicit */int) arr_10 [i_1] [i_2] [(unsigned short)1] [i_2] [i_2] [(unsigned short)4]))));
                            arr_23 [i_1] [i_2] [i_4] [i_2] [i_4] [i_6] [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) (~(2387601205U))));
                            arr_24 [i_1] [i_1] [i_4] [i_6] = ((/* implicit */unsigned long long int) (~((+(4294967283U)))));
                            var_28 = ((arr_21 [i_6] [i_6] [6U] [(unsigned short)3] [i_6] [i_6] [(unsigned short)6]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [7U] [i_6]))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 3) 
                        {
                            var_29 *= ((/* implicit */unsigned short) (_Bool)0);
                            var_30 = arr_16 [i_1] [i_2] [i_3] [i_3] [i_7 + 1] [i_4] [3U];
                        }
                        for (short i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (unsigned short)11578))));
                            var_32 ^= ((/* implicit */unsigned short) (+(arr_11 [i_2] [i_2] [i_2] [i_1])));
                            var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(var_13))))));
                        }
                        for (short i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)47541)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4]))) + (7U)))) : (((((/* implicit */_Bool) arr_15 [i_9] [i_4] [i_1])) ? (((/* implicit */unsigned long long int) arr_20 [i_9] [i_4] [i_4] [i_3] [i_2] [6U])) : (18388911806120894361ULL)))));
                            arr_34 [i_4] [9] [i_2] [i_3] [i_4] [9] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_1] [i_2] [i_3] [i_2])) < (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                        }
                        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) var_12))));
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)34030)) ? (2216938U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_1] [i_1] [i_1] [8U] [i_1])))));
        var_37 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) 6169653345907103053ULL)) && (((/* implicit */_Bool) (short)-15244)))))));
    }
}
