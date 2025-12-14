/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117614
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                var_11 = ((/* implicit */unsigned char) var_9);
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_0) : (7U)));
                var_13 = ((/* implicit */unsigned long long int) ((long long int) (unsigned short)57821));
            }
            for (unsigned long long int i_3 = 4; i_3 < 9; i_3 += 1) 
            {
                var_14 ^= ((/* implicit */unsigned char) var_3);
                var_15 *= ((/* implicit */unsigned short) min((((/* implicit */int) ((short) var_5))), (((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)57818))) ? (((/* implicit */int) (unsigned char)136)) : (min((((/* implicit */int) (unsigned char)2)), (-1872231015)))))));
            }
            var_16 ^= ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16330191699994167548ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) : (var_0)))), (18446744073709551615ULL))), (2999095625013280899ULL)));
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) 2116552373715384087ULL))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (-1588603603) : (((/* implicit */int) (unsigned char)17))))) : (min((var_0), (((/* implicit */unsigned int) 2147483647))))));
        }
        arr_9 [i_0] = ((/* implicit */_Bool) var_8);
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3788272650U)) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((2116552373715384074ULL), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) (unsigned char)244)) : (2147483647))))));
    }
    for (unsigned short i_4 = 1; i_4 < 10; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_5 = 1; i_5 < 7; i_5 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */long long int) var_1);
            arr_14 [i_4] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_10)));
            var_20 = ((/* implicit */unsigned short) ((signed char) 11635708328467840731ULL));
            arr_15 [i_4] = (unsigned char)19;
            /* LoopNest 2 */
            for (unsigned int i_6 = 2; i_6 < 8; i_6 += 3) 
            {
                for (signed char i_7 = 2; i_7 < 10; i_7 += 1) 
                {
                    {
                        arr_21 [i_4] [i_5] [i_4] [i_4] [i_7] = ((/* implicit */unsigned char) 4294967275U);
                        var_21 = var_6;
                    }
                } 
            } 
        }
        for (unsigned long long int i_8 = 1; i_8 < 7; i_8 += 1) /* same iter space */
        {
            arr_25 [i_4] [i_4] = ((/* implicit */unsigned int) var_9);
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) 1365413081))));
        }
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) 4294967292U);
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_9)), (min((7760279287144090143ULL), (((/* implicit */unsigned long long int) (unsigned char)141)))))))));
                    var_25 = ((/* implicit */int) ((long long int) 4294967275U));
                }
            } 
        } 
        var_26 &= ((/* implicit */unsigned short) 18446744073709551615ULL);
    }
    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (max((var_10), (((/* implicit */unsigned long long int) 26U)))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (var_2))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)46707)))))));
    /* LoopNest 2 */
    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
    {
        for (long long int i_12 = 0; i_12 < 22; i_12 += 3) 
        {
            {
                arr_35 [i_11] [i_12] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) -691554675)) : (var_7))));
                var_28 = ((/* implicit */long long int) min((var_28), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) min((var_5), (var_1)))))) : (var_4)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_13 = 1; i_13 < 12; i_13 += 3) 
    {
        for (unsigned short i_14 = 3; i_14 < 11; i_14 += 1) 
        {
            for (unsigned int i_15 = 0; i_15 < 13; i_15 += 1) 
            {
                {
                    arr_46 [i_13] [i_15] [i_15] = ((/* implicit */_Bool) 18446744073709551611ULL);
                    var_29 = ((/* implicit */long long int) ((unsigned int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)19))))));
                }
            } 
        } 
    } 
}
