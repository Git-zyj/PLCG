/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126990
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
    var_20 += 7759684732806037302ULL;
    var_21 = ((/* implicit */unsigned int) (~(min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))), (((/* implicit */unsigned long long int) (signed char)83))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) (~(max(((~(-8686556523816602886LL))), (-9223372036854775798LL)))));
                        var_23 ^= ((/* implicit */unsigned char) 4294967295U);
                        var_24 = ((/* implicit */unsigned long long int) min(((-((-(4294967295U))))), (((/* implicit */unsigned int) (unsigned short)6037))));
                    }
                } 
            } 
        } 
        var_25 = (+(-9223372036854775797LL));
        var_26 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)46608))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned long long int) 9223372036854775798LL);
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            arr_19 [i_4] = ((/* implicit */unsigned long long int) 9223372036854775774LL);
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    {
                        var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -9223372036854775797LL))));
                        var_28 = ((/* implicit */unsigned long long int) (unsigned short)2);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                for (signed char i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        {
                            arr_34 [i_4] [i_5] [i_8] [i_8] [i_8] [i_9] [i_10] = ((/* implicit */unsigned long long int) (~((~(-51641493430364289LL)))));
                            arr_35 [i_4] [i_4] [i_4] |= ((/* implicit */unsigned int) 1023ULL);
                            var_29 = ((/* implicit */long long int) 18446744073709551613ULL);
                            arr_36 [i_4] [i_9] = ((/* implicit */signed char) 8686556523816602885LL);
                            arr_37 [i_4] [i_5] [i_4] [i_5] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)101))));
                        }
                    } 
                } 
            } 
        }
        for (short i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            arr_40 [i_11] [i_11] [i_4] = ((/* implicit */signed char) (-(4294967295U)));
            arr_41 [i_4] = 8686556523816602886LL;
        }
    }
    for (long long int i_12 = 0; i_12 < 16; i_12 += 4) 
    {
        arr_45 [i_12] = ((/* implicit */unsigned char) min((4294967292U), (4294967295U)));
        arr_46 [i_12] [i_12] = ((/* implicit */long long int) (~((+(11ULL)))));
    }
}
