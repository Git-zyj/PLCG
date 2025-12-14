/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153633
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
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_19 = ((((int) var_18)) >= (((/* implicit */int) ((((/* implicit */int) var_15)) <= (((/* implicit */int) var_4))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_0] [i_2] [(short)9] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (3619738667443501922ULL)))) & (((/* implicit */int) ((_Bool) var_5)))))) - (((6664467640590836282ULL) << (((/* implicit */int) (signed char)15))))));
                    var_20 = ((/* implicit */unsigned short) max((((/* implicit */int) ((_Bool) (+(var_10))))), (max((((/* implicit */int) var_17)), ((+(((/* implicit */int) var_1))))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 7; i_3 += 2) 
                    {
                        var_21 = (((!(((/* implicit */_Bool) var_7)))) ? (((((var_14) / (var_13))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_0)))))))) : (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_7)))) * (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_6)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) ((((var_5) ^ (((/* implicit */int) var_17)))) | (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_11)))))));
                            var_23 = ((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) var_17)))));
                            arr_15 [i_4] [i_1] [7LL] [i_1] [i_4] = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) var_18)) + (var_10)))));
                            arr_16 [i_1] [0] [(signed char)9] = ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_18)))));
                            var_24 = ((((/* implicit */_Bool) ((((/* implicit */long long int) var_16)) & (var_18)))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_0))))));
                        }
                        for (int i_5 = 1; i_5 < 7; i_5 += 2) 
                        {
                            arr_19 [i_5 + 1] [i_3] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (((((-(var_5))) + (2147483647))) >> ((((-(var_14))) - (8285217996675173878ULL)))));
                            var_25 -= ((((-1939138241) > (((/* implicit */int) (unsigned short)13)))) ? ((-(((/* implicit */int) ((unsigned short) var_5))))) : (((/* implicit */int) ((_Bool) min((var_6), (((/* implicit */unsigned long long int) var_4)))))));
                            var_26 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)254)))))) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_18)))))) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_12))))))) : (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_18)) : (var_10))), (((/* implicit */unsigned long long int) ((long long int) var_7))))));
                            var_27 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_17)), (var_15)))) ? (max((((/* implicit */unsigned long long int) var_3)), (var_14))) : (((var_14) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) var_5)))))) : (((unsigned long long int) ((((/* implicit */int) var_4)) >> (((/* implicit */int) var_7)))))));
                        }
                        var_28 = ((/* implicit */short) max((min((((/* implicit */long long int) 1939138250)), ((+(-6575356236811368217LL))))), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) var_18))))))))));
                        arr_20 [i_1] [(_Bool)1] [i_2] [i_3] = ((/* implicit */signed char) min((min((((var_5) >> (((var_13) - (12923303946801153637ULL))))), ((-(((/* implicit */int) var_4)))))), ((-(((((/* implicit */int) var_8)) * (((/* implicit */int) var_9))))))));
                        var_29 = ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && ((!(((/* implicit */_Bool) var_7))))))) > (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))))));
                    }
                }
            } 
        } 
        var_30 = ((/* implicit */signed char) (+((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) >= (var_10))))))));
    }
    for (signed char i_6 = 1; i_6 < 21; i_6 += 2) 
    {
        arr_25 [i_6] = ((((/* implicit */_Bool) ((unsigned long long int) var_14))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-47))) > (169614768867083409LL))))) ^ (var_18)))));
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) - (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_17)))))))) > (min((max((((/* implicit */unsigned long long int) var_5)), (var_14))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (var_6)))))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            for (signed char i_8 = 1; i_8 < 22; i_8 += 1) 
            {
                {
                    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (((-(var_11))) | (((/* implicit */long long int) (-(((/* implicit */int) var_7))))))))));
                    arr_32 [i_8] [i_6] [i_6] [(signed char)18] = ((/* implicit */signed char) ((((((/* implicit */int) var_12)) ^ (((/* implicit */int) ((signed char) var_7))))) + ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
                    arr_33 [i_6] [i_7] [i_6] = ((/* implicit */signed char) max((14LL), (((/* implicit */long long int) (signed char)47))));
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        arr_36 [i_9] [(unsigned char)0] [i_6] [i_6] [(unsigned char)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) (signed char)-47)) ^ (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) -6241998919853515745LL)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned char)8))))))) ? (max((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_14))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (var_5)))))) : (min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_17)))))))));
                        arr_37 [i_6] [i_7] [i_6] [i_9] [i_9] = ((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))) >= (((long long int) max((((/* implicit */signed char) var_4)), (var_1)))));
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) || ((!(var_4))))))) : (((((/* implicit */unsigned long long int) min((-1939138258), (-1939138241)))) | (((((/* implicit */_Bool) (signed char)122)) ? (324781901174509362ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-47)))))))))));
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) ^ (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_13)))))) ? (((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_3)), (var_2)))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (var_13))))) : (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_3)))) >> (((((/* implicit */int) var_15)) - (6003))))))));
                    }
                }
            } 
        } 
        arr_38 [i_6] [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) min((var_8), (((/* implicit */unsigned short) ((_Bool) var_6))))))));
    }
    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 1) 
    {
        var_35 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (var_13)))) || (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_16))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_15))))))))));
        arr_43 [i_10] [(signed char)3] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_14) : (var_14)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) 4236335104U))))) >> (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_15))))))));
        var_36 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((-407409420) + (2147483647))) >> (((/* implicit */int) (_Bool)0)))) ^ (((-1939138241) | (-1672854287))))))));
        var_37 = ((/* implicit */signed char) max(((~(var_5))), (((/* implicit */int) ((short) var_15)))));
    }
    var_38 -= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */signed char) var_3))))))))));
}
