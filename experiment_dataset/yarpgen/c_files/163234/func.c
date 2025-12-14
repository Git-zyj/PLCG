/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163234
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) (-(((((/* implicit */long long int) ((/* implicit */int) var_2))) / (5434883304801871671LL)))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 4; i_3 < 17; i_3 += 1) 
                    {
                        arr_10 [i_3] [i_3] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) max((((/* implicit */short) (signed char)31)), ((short)-20853)))) + (((/* implicit */int) (short)-1)))));
                        arr_11 [i_3] [i_3] [i_2] [i_3 - 4] [i_3] [i_3] = ((((/* implicit */_Bool) ((((_Bool) var_1)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))) : (((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) var_4))))))) ? (((unsigned long long int) var_0)) : (((((/* implicit */unsigned long long int) (+(var_3)))) % (min((((/* implicit */unsigned long long int) var_0)), (var_8))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))))));
                        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) (short)(-32767 - 1)))))) : (((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                    }
                    for (unsigned short i_5 = 4; i_5 < 16; i_5 += 1) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [(_Bool)0] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (var_3))))));
                        /* LoopSeq 1 */
                        for (short i_6 = 2; i_6 < 16; i_6 += 4) 
                        {
                            var_14 = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))) ^ (max((var_8), (((/* implicit */unsigned long long int) var_9))))))));
                            arr_22 [(unsigned char)17] [(unsigned char)17] [i_2] [i_1] [i_0] = (unsigned char)244;
                            arr_23 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_6)), (18446744073709551615ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6 + 1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 9446036332744900047ULL)) ? (((/* implicit */long long int) 1945492701)) : (4339595003838004929LL))) <= (((/* implicit */long long int) (~(((/* implicit */int) var_7))))))))) : (min((((((/* implicit */_Bool) var_10)) ? (2525984175U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1)))))))));
                        }
                        arr_24 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-74)) * ((~(((/* implicit */int) (unsigned char)75)))))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        var_15 = ((max((9000707740964651588ULL), (((/* implicit */unsigned long long int) (signed char)-37)))) << ((((~(arr_1 [i_0]))) - (3808827894U))));
                        arr_27 [i_0] [i_1] [i_2] [i_7] = ((/* implicit */signed char) (~(((int) max((4132173600U), (((/* implicit */unsigned int) arr_19 [i_0] [11ULL] [i_2] [i_2] [i_7])))))));
                        var_16 *= ((/* implicit */_Bool) (signed char)-74);
                    }
                    var_17 = ((/* implicit */signed char) max((((/* implicit */long long int) ((_Bool) 1945492701))), (min((5434883304801871645LL), (((/* implicit */long long int) (unsigned char)239))))));
                    arr_28 [i_1] = ((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) var_4)))));
                }
                for (unsigned char i_8 = 2; i_8 < 16; i_8 += 2) 
                {
                    arr_32 [i_0] [i_0] [i_1] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) << (((((/* implicit */int) var_4)) - (16409)))))), ((~(var_1))))))));
                    arr_33 [i_0] [i_0] [i_0] [i_0] = min((((/* implicit */unsigned long long int) (+(min((3383838840U), (((/* implicit */unsigned int) 1242454581))))))), (((((_Bool) arr_1 [i_1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_3)))))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_7))))) - (((/* implicit */int) var_2))))), ((-(((((/* implicit */_Bool) (signed char)-1)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
}
