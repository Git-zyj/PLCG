/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15970
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_7) > (var_4))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((short) ((unsigned long long int) var_5))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */short) min((var_15), (var_1)));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) ((long long int) min((var_2), (var_13))));
                        var_17 = ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_5)))))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_11)))))) : (var_9))) : (var_9));
                        arr_14 [i_1] [i_3] [i_1] [i_1] [i_0] = (!(((/* implicit */_Bool) (-(var_9)))));
                        arr_15 [i_1] [i_1] [i_2] [i_3] [i_1] = ((((unsigned int) var_7)) >> (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_9)) : (var_0))) - (10830336946780677099ULL))));
                        arr_16 [i_1] [i_1] [0U] [i_1] = max((min((((/* implicit */unsigned long long int) var_3)), (var_0))), (max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))))))));
                        arr_25 [i_0 + 1] [i_4] [9U] [i_6] = (~(((unsigned long long int) var_1)));
                        var_19 = ((/* implicit */_Bool) ((unsigned long long int) var_5));
                        arr_26 [i_0] [i_0] [i_5] [i_5] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) var_1))) > ((+(var_0)))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((int) var_11))) >= (var_13)));
            arr_27 [i_0 + 1] [i_4] = ((/* implicit */unsigned long long int) ((short) var_12));
        }
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (-(((unsigned int) var_7)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                for (int i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    {
                        arr_35 [i_0 - 1] [i_0 - 1] [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_6)) : (var_7))) : ((~(var_2)))));
                        var_22 &= ((/* implicit */unsigned char) ((var_0) * (((/* implicit */unsigned long long int) var_13))));
                        arr_36 [i_0] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_7) & (((/* implicit */long long int) var_6))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_5)) >> (((var_10) - (2880403506929719243ULL)))))));
                    }
                } 
            } 
        }
        arr_37 [i_0] [i_0 - 1] = ((/* implicit */long long int) ((signed char) ((var_5) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_8))))));
    }
    for (unsigned short i_10 = 0; i_10 < 14; i_10 += 3) 
    {
        arr_41 [i_10] = ((/* implicit */unsigned char) var_2);
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((short) (signed char)-67)))));
        /* LoopNest 3 */
        for (unsigned int i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            for (short i_12 = 0; i_12 < 14; i_12 += 4) 
            {
                for (unsigned long long int i_13 = 1; i_13 < 10; i_13 += 3) 
                {
                    {
                        arr_51 [i_10] [2ULL] [i_10] [i_10] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_9)))) ? (((/* implicit */int) ((short) var_7))) : (((/* implicit */int) ((var_13) >= (var_4)))))), (((/* implicit */int) (((~(var_4))) < (var_7))))));
                        var_24 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_4))))), (((signed char) var_11))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) ((unsigned short) min((var_10), (((/* implicit */unsigned long long int) var_9))))))));
                        var_25 = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_6)) : (var_0)))))));
                        var_26 *= ((((long long int) (~(((/* implicit */int) var_5))))) | (((/* implicit */long long int) ((/* implicit */int) ((var_0) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                        var_27 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) & (((/* implicit */int) ((signed char) var_9)))))) ? (max((((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3231828747143553850LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))) : (3512281119U)))))) : (((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_7)))) : (((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                    }
                } 
            } 
        } 
        arr_52 [i_10] = ((var_7) - ((~(((long long int) 18446744073709551602ULL)))));
    }
    for (unsigned short i_14 = 0; i_14 < 19; i_14 += 2) 
    {
        arr_55 [i_14] [(unsigned short)0] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) -8796404271996809417LL)) ? (262128U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23))))));
        var_28 = ((/* implicit */short) ((_Bool) ((unsigned short) ((long long int) var_3))));
        arr_56 [i_14] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_4)))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (var_2) : (max((-1LL), (-4812940412133016109LL))))))));
    }
    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((unsigned int) var_2)), (((/* implicit */unsigned int) (-(((/* implicit */int) var_11)))))))) ? (((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_13)) : (var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)-295))))));
    var_30 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_9)) : (((unsigned long long int) var_1))))));
    var_31 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_8)) ? (var_4) : (var_7))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) >> (((((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((long long int) var_5)))) - (7024693457329608961LL)))));
}
