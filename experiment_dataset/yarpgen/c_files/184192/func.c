/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184192
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
    var_14 = var_2;
    var_15 = ((/* implicit */signed char) (-(((/* implicit */int) min(((unsigned char)173), (((/* implicit */unsigned char) (_Bool)1)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            arr_17 [i_4] [i_3] [(signed char)0] [(signed char)0] [i_0] &= ((/* implicit */long long int) var_8);
                            arr_18 [(unsigned char)14] [i_1] [(_Bool)1] [i_1] [i_1] [(unsigned char)14] = ((/* implicit */_Bool) (~(max((((/* implicit */long long int) var_4)), (min((((/* implicit */long long int) var_10)), (var_6)))))));
                            arr_19 [i_0] [(unsigned char)10] [i_0] [i_0] [i_4] = ((_Bool) (unsigned char)76);
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)61))))) ? (((/* implicit */int) max((var_7), ((signed char)35)))) : (max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) min((var_8), (((/* implicit */unsigned char) var_7)))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1)))))));
                            var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_9))));
                            var_19 = (~(var_3));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((long long int) (((-(((/* implicit */int) var_13)))) >= (((var_12) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))))))));
                            arr_27 [i_6] [i_1] [i_6] = var_12;
                            arr_28 [i_6] = ((/* implicit */unsigned short) ((short) min((var_8), (((/* implicit */unsigned char) var_4)))));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((1178257565) ^ (max((min((((/* implicit */int) (_Bool)1)), (-586690225))), (-12))))))));
                        }
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((min((min((var_6), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) (-(((/* implicit */int) (short)5642))))))) | (((/* implicit */long long int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_8)))))))))));
                        arr_29 [i_0] [i_1] [i_1] [i_2] [i_1] = (_Bool)0;
                        arr_30 [i_0] = max((((((/* implicit */_Bool) -12)) ? (((/* implicit */int) (signed char)-37)) : (11))), (((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) (unsigned char)150)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
                    }
                } 
            } 
        } 
        var_23 *= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned char)233))))));
        var_24 = ((/* implicit */signed char) (+((-(((/* implicit */int) max(((_Bool)1), (var_11))))))));
    }
    for (short i_7 = 0; i_7 < 17; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_8 = 1; i_8 < 16; i_8 += 4) 
        {
            var_25 = ((/* implicit */unsigned int) ((short) var_8));
            var_26 = ((/* implicit */long long int) (+((~(((/* implicit */int) var_5))))));
            var_27 = ((/* implicit */long long int) var_7);
            var_28 = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) min((var_9), (((/* implicit */short) var_13))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6))))), (((/* implicit */long long int) (-(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)117))))))))));
            arr_36 [i_8] [i_8 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) max((((/* implicit */int) var_10)), (((((/* implicit */int) var_12)) - (1178257563))))))));
        }
        var_29 = ((/* implicit */unsigned char) ((int) ((short) var_11)));
        arr_37 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)40281)) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (short)7155))))) : (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))), (((/* implicit */int) min((var_1), (((/* implicit */unsigned char) var_12)))))))));
        arr_38 [i_7] = ((((/* implicit */_Bool) min((var_7), (((/* implicit */signed char) var_11))))) ? (((/* implicit */int) (_Bool)1)) : (((596770413) >> (((/* implicit */int) ((unsigned short) 7))))));
    }
    var_30 = ((/* implicit */int) ((unsigned short) min(((signed char)22), (((/* implicit */signed char) (_Bool)0)))));
}
