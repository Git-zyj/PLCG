/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170963
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))));
    var_21 = ((/* implicit */_Bool) var_6);
    var_22 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) var_0)));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-67))));
        var_24 = ((/* implicit */short) var_1);
        var_25 *= ((/* implicit */short) var_8);
        arr_5 [i_0] = ((/* implicit */unsigned long long int) var_4);
    }
    for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 2) 
    {
        arr_10 [11] = (-(((/* implicit */int) (_Bool)0)));
        arr_11 [(_Bool)1] [i_1 + 3] = ((/* implicit */int) var_13);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            arr_16 [i_3] [i_2] = ((/* implicit */int) var_7);
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_2))))));
            var_27 = ((/* implicit */unsigned int) (((_Bool)1) ? ((~(((/* implicit */int) var_19)))) : (((/* implicit */int) var_4))));
            arr_17 [i_3] [i_3] = ((/* implicit */unsigned int) (_Bool)1);
            var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 8228611812807381049LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_8))));
        }
        arr_18 [i_2] [i_2] = ((/* implicit */signed char) (-(2147483647)));
        /* LoopSeq 3 */
        for (signed char i_4 = 3; i_4 < 23; i_4 += 4) /* same iter space */
        {
            arr_23 [i_4] [i_4] = ((/* implicit */short) (+(((/* implicit */int) var_10))));
            var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_10))));
            var_30 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_15))));
        }
        for (signed char i_5 = 3; i_5 < 23; i_5 += 4) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_6 = 3; i_6 < 23; i_6 += 2) 
            {
                var_31 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_19))))))));
                var_32 &= ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */unsigned long long int) 8228611812807381049LL)) : (var_7))) >> (((var_1) - (3250247660U)))));
            }
            for (unsigned int i_7 = 2; i_7 < 22; i_7 += 4) 
            {
                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) 17141283905001188146ULL)) ? (((/* implicit */int) (unsigned short)31744)) : (((/* implicit */int) (_Bool)0))));
                var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13)))))));
            }
            for (signed char i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
            {
                arr_35 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_6)));
                var_35 = ((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))));
            }
            for (signed char i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
            {
                var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)21))));
                var_37 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_6)))));
                var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_1)));
            }
            arr_38 [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_17)) : ((~(((/* implicit */int) var_11)))));
        }
        for (signed char i_10 = 3; i_10 < 23; i_10 += 4) /* same iter space */
        {
            arr_41 [(_Bool)1] [(_Bool)1] = ((/* implicit */int) var_5);
            var_39 = ((/* implicit */unsigned char) var_17);
        }
        arr_42 [i_2] |= ((/* implicit */unsigned short) var_10);
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) 
    {
        arr_45 [i_11] [i_11] = ((/* implicit */unsigned long long int) var_13);
        arr_46 [(signed char)18] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
        arr_47 [i_11] = ((((/* implicit */_Bool) -8228611812807381049LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)125)));
    }
    var_40 = ((/* implicit */long long int) (~((~((~(((/* implicit */int) (_Bool)1))))))));
}
