/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158829
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
    var_12 = ((/* implicit */unsigned short) -7760876123740585584LL);
    var_13 = ((/* implicit */unsigned char) (~(max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 32767U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned long long int) arr_0 [i_0 - 1]);
        var_15 = ((/* implicit */_Bool) var_7);
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */_Bool) arr_1 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -7760876123740585584LL))));
                    /* LoopSeq 4 */
                    for (short i_3 = 4; i_3 < 17; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) max(((short)0), ((short)14)))), (max((((/* implicit */unsigned short) var_4)), (arr_0 [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) -1422923218)))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (arr_8 [i_0] [i_3] [i_3 - 2] [i_0]) : (arr_8 [i_0 + 1] [i_0] [(_Bool)1] [i_0])))));
                        var_18 = ((/* implicit */int) max((arr_5 [i_0] [i_2 - 1] [i_3 - 3] [i_3]), (max((arr_5 [i_0] [i_2 + 1] [i_3 - 4] [i_3 - 4]), (((/* implicit */unsigned long long int) (short)14))))));
                        arr_12 [i_0] [i_1] [i_2] [15] = ((/* implicit */int) 8695574051955635476LL);
                    }
                    for (unsigned short i_4 = 2; i_4 < 16; i_4 += 4) 
                    {
                        arr_17 [i_4] [2LL] [i_1] [i_4] &= (+(((/* implicit */int) (!(((/* implicit */_Bool) 1422923217))))));
                        var_19 = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (~(-7760876123740585588LL)))))));
                    }
                    for (unsigned char i_5 = 3; i_5 < 16; i_5 += 3) 
                    {
                        var_20 = (+((+(((arr_6 [i_0] [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))))))));
                        var_21 ^= ((/* implicit */signed char) ((long long int) arr_15 [i_5] [(unsigned char)14] [(unsigned char)14] [i_0]));
                    }
                    for (long long int i_6 = 2; i_6 < 16; i_6 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_2 + 1] [i_6 - 1]))))) ? (((-1495538293) & (-1422923205))) : (((((/* implicit */int) arr_3 [i_2 + 1] [i_6 - 1])) << (((((/* implicit */int) arr_3 [i_2 + 1] [i_6 + 2])) - (82)))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 4; i_7 < 15; i_7 += 2) /* same iter space */
                    {
                        arr_26 [0U] [i_2] [i_2] [0U] [i_0] [i_1] = ((/* implicit */unsigned int) var_9);
                        var_24 = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) <= (((((arr_24 [i_7 + 1] [i_7 + 3] [i_7 - 3] [i_7 - 1]) + (2147483647))) >> (((((/* implicit */int) arr_15 [i_7 + 2] [i_7 - 4] [i_0] [i_7 - 4])) + (2127)))))))) : (((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) <= (((((arr_24 [i_7 + 1] [i_7 + 3] [i_7 - 3] [i_7 - 1]) + (2147483647))) >> (((((((/* implicit */int) arr_15 [i_7 + 2] [i_7 - 4] [i_0] [i_7 - 4])) + (2127))) + (12643))))))));
                    }
                    for (unsigned long long int i_8 = 4; i_8 < 15; i_8 += 2) /* same iter space */
                    {
                        var_25 = (-((-((-(((/* implicit */int) var_2)))))));
                        arr_30 [i_0 - 1] [i_0 + 2] [i_0] [i_0] [i_2] [i_8] = ((/* implicit */unsigned int) arr_1 [i_8 - 4]);
                        arr_31 [i_0 + 1] [i_0] = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (_Bool)1))))) ? ((+(var_5))) : (((((/* implicit */_Bool) 1696455704891160675LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))))));
                    }
                    var_26 = ((/* implicit */unsigned long long int) arr_3 [16LL] [i_1]);
                }
            } 
        } 
        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_11)))))))) ? (((((unsigned int) (short)14)) >> (((min((-8695574051955635476LL), (var_9))) + (8695574051955635484LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8695574051955635478LL))))))));
    }
    for (unsigned short i_9 = 4; i_9 < 15; i_9 += 2) 
    {
        var_28 = ((/* implicit */_Bool) var_2);
        /* LoopSeq 1 */
        for (short i_10 = 3; i_10 < 15; i_10 += 3) 
        {
            arr_37 [i_9 - 2] [(_Bool)1] = ((/* implicit */long long int) (+(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)46003))))));
            var_29 = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58022))) & (max((((/* implicit */long long int) var_2)), (var_9))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_9))) <= ((-(arr_6 [i_9] [i_9]))))))));
        }
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_9 + 1] [i_9] [i_9]))) : (arr_33 [i_9 - 3])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_24 [i_9] [i_9] [i_9] [i_9]), (((/* implicit */int) var_11))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_15 [i_9 - 3] [i_9] [i_9] [i_9 - 3])))))));
    }
    for (short i_11 = 1; i_11 < 20; i_11 += 2) 
    {
        arr_41 [i_11] = ((/* implicit */unsigned int) var_10);
        var_31 = ((/* implicit */long long int) (short)-9890);
        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) ^ (((((/* implicit */_Bool) ((unsigned long long int) arr_40 [i_11]))) ? (((/* implicit */unsigned long long int) (~(arr_39 [(unsigned short)10])))) : (arr_40 [i_11 - 1]))))))));
        var_33 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_38 [i_11 - 1] [i_11 + 1])))) || (((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) (+(arr_38 [i_11 - 1] [i_11 - 1])))) ? (((/* implicit */unsigned long long int) var_7)) : (max((((/* implicit */unsigned long long int) var_9)), (arr_40 [i_11]))))));
    }
    var_34 = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) ((/* implicit */int) var_3))) + (min((-1LL), (((/* implicit */long long int) (signed char)-109))))))));
}
