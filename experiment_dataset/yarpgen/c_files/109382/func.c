/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109382
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
    var_11 ^= ((/* implicit */int) var_9);
    var_12 |= ((/* implicit */_Bool) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) : (((unsigned long long int) var_9))));
        var_14 &= ((/* implicit */unsigned int) ((((long long int) var_10)) >> (((((long long int) var_10)) - (2143575642607572928LL)))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_15 = ((long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_3))));
                        arr_10 [i_0] [i_0 - 3] [i_0 - 3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */int) var_4)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) (+(((int) var_8))));
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((var_10) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
    {
        arr_19 [i_6] [i_6] = ((/* implicit */signed char) ((unsigned int) (+(var_5))));
        arr_20 [i_6] = ((/* implicit */unsigned short) ((var_0) & (((/* implicit */int) var_3))));
        var_18 = ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (var_6)));
    }
    for (unsigned int i_7 = 1; i_7 < 22; i_7 += 2) 
    {
        var_19 ^= ((/* implicit */unsigned int) ((max((((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) var_1)))) & (((/* implicit */unsigned long long int) ((((var_8) + (2147483647))) >> ((((-(((/* implicit */int) var_2)))) + (207))))))));
        var_20 = ((/* implicit */short) min((((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_9))))), (min((((/* implicit */int) var_2)), (var_8)))))), (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) var_1))))) ? (min((var_7), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_2), (var_2)))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_8 = 1; i_8 < 21; i_8 += 2) 
        {
            var_21 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) var_10)))));
            var_22 &= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_9)))));
        }
        for (short i_9 = 0; i_9 < 23; i_9 += 2) /* same iter space */
        {
            arr_30 [i_7 - 1] [i_9] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) min(((unsigned short)4), (((/* implicit */unsigned short) (signed char)-17))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) 22))))))))));
            var_23 = ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */short) (signed char)-64)), ((short)4095)))), (((max((((/* implicit */long long int) var_3)), (var_5))) >> (((((/* implicit */int) ((unsigned short) var_4))) - (8214)))))));
            arr_31 [i_7] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (-(((/* implicit */int) var_3))))))));
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) var_0)) : (min((var_6), (var_10)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_4)))) << (((max((((/* implicit */int) var_2)), (var_0))) - (605598619)))))) : (((((((/* implicit */int) var_9)) != (((/* implicit */int) var_1)))) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (var_10)))))))));
        }
        for (short i_10 = 0; i_10 < 23; i_10 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (var_10))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (var_10))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_2)))) && ((!(((/* implicit */_Bool) -5481323953005168792LL)))))))))))));
            var_26 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */int) var_9)), (var_0)))), (min((var_7), (((/* implicit */unsigned int) var_0))))))), (min((((/* implicit */unsigned long long int) ((int) var_1))), (var_6)))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                var_27 = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) var_2))))) != (((var_5) + (((/* implicit */long long int) var_0))))));
                var_28 *= ((/* implicit */unsigned char) var_3);
            }
            /* vectorizable */
            for (signed char i_12 = 2; i_12 < 20; i_12 += 2) 
            {
                arr_39 [i_12] [i_7 + 1] [i_10] [i_7] = ((/* implicit */signed char) ((((_Bool) var_7)) ? ((~(var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */int) var_4)))))));
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_29 = ((short) (!(((/* implicit */_Bool) var_6))));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_1)) - (107))))) : ((+(((/* implicit */int) var_3))))));
                            arr_46 [i_12] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1)))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_5)))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 3) 
            {
                var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                arr_51 [i_7 + 1] [i_10] [i_15] = ((/* implicit */int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                var_32 = ((/* implicit */unsigned long long int) ((short) var_10));
                arr_52 [i_7 - 1] [i_7 - 1] [i_7] [i_7 + 1] = var_4;
            }
        }
        var_33 ^= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (var_10))) >= (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(var_8)))) % (var_7))))));
    }
}
