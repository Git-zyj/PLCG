/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156896
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) (unsigned short)11)))));
            var_17 = ((/* implicit */signed char) max((var_17), (var_12)));
            var_18 = ((/* implicit */_Bool) ((unsigned char) var_3));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
        {
            arr_9 [i_2] = ((/* implicit */int) (+(20LL)));
            arr_10 [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) * (1448042016U)));
            arr_11 [(short)1] [i_2] [0LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)243)) ? (1592415506) : (((/* implicit */int) (unsigned char)17))));
        }
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            arr_14 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) max((1592415506), (var_15)))) && ((!(((/* implicit */_Bool) (unsigned char)151))))));
            var_19 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_1))))))) == (((/* implicit */int) ((var_1) == (((/* implicit */long long int) max((var_15), (((/* implicit */int) var_13))))))))));
            var_20 ^= ((int) ((_Bool) ((((((/* implicit */int) var_12)) + (2147483647))) << (((var_6) - (16252820528604916836ULL))))));
            var_21 = ((/* implicit */int) ((((/* implicit */int) ((short) (unsigned char)245))) <= (((/* implicit */int) ((((((/* implicit */unsigned long long int) var_1)) <= (var_6))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_12))))))))));
            var_22 = ((/* implicit */unsigned short) (((+(((/* implicit */int) ((unsigned char) var_15))))) - (((/* implicit */int) var_0))));
        }
        var_23 += (+((-(((/* implicit */int) var_11)))));
        var_24 = ((/* implicit */unsigned int) ((short) ((((/* implicit */long long int) ((int) var_8))) != (var_1))));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-1592415506)))) ? (min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */unsigned long long int) var_5)) / (var_6))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), ((-(-614828800133051089LL))))))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        var_26 = ((/* implicit */unsigned int) ((unsigned char) var_11));
        var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
        var_28 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (var_7));
        var_29 = ((/* implicit */unsigned char) var_10);
        var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))));
    }
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        var_31 *= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_11))))) <= (var_15))))));
        arr_21 [i_5] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) << ((((~(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) + (24))));
        var_32 &= ((unsigned char) max((var_7), (((/* implicit */int) (!(((/* implicit */_Bool) -13932656)))))));
    }
    var_33 ^= ((/* implicit */_Bool) var_13);
    var_34 = ((/* implicit */unsigned char) min((var_7), ((-(var_7)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        arr_24 [i_6] = ((((/* implicit */int) var_11)) ^ (var_5));
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 17; i_7 += 4) 
        {
            for (int i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 4) 
                {
                    {
                        var_35 = ((int) var_8);
                        var_36 = ((/* implicit */short) ((var_8) + (((/* implicit */unsigned int) var_5))));
                        var_37 += ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */int) var_0)))));
                    }
                } 
            } 
        } 
        var_38 = ((/* implicit */unsigned long long int) (-(1448042014U)));
    }
    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 2) 
        {
            for (unsigned char i_12 = 0; i_12 < 17; i_12 += 1) 
            {
                {
                    var_39 ^= ((/* implicit */int) ((signed char) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (var_15)))));
                    var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((((/* implicit */_Bool) (+(var_8)))) || (((var_6) > (var_6))))))));
                }
            } 
        } 
        var_41 &= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2))))));
        var_42 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) var_4))))))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 17; i_13 += 3) 
        {
            for (unsigned char i_14 = 0; i_14 < 17; i_14 += 1) 
            {
                {
                    var_43 = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned int) (+(var_5))))), (((((/* implicit */long long int) ((/* implicit */int) var_0))) / (((long long int) var_7))))));
                    var_44 = ((/* implicit */unsigned char) var_7);
                    var_45 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (var_6))), (((/* implicit */unsigned long long int) (-(1609336869))))));
                    arr_46 [i_10] [i_13] [i_13] [i_13] = ((/* implicit */short) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_8)))))) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))))));
                    arr_47 [i_10] [i_10] [i_10] = (((+(((/* implicit */int) var_3)))) & (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_4))))));
                }
            } 
        } 
    }
    for (unsigned char i_15 = 0; i_15 < 17; i_15 += 1) /* same iter space */
    {
        var_46 = ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? ((+(var_9))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) : (((/* implicit */int) var_4)));
        arr_52 [i_15] [i_15] = ((/* implicit */int) (-(((var_8) * (((/* implicit */unsigned int) var_15))))));
        var_47 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) 18446744073709551601ULL))) == (((/* implicit */int) (unsigned char)6))));
        var_48 ^= ((/* implicit */unsigned long long int) ((short) ((short) (-(((/* implicit */int) var_11))))));
    }
}
