/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120331
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
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) arr_2 [i_0 - 1])), (8669279939688046605LL)))));
        var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)3129)))))));
        var_13 &= ((/* implicit */signed char) var_5);
    }
    /* LoopSeq 4 */
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_14 = ((/* implicit */long long int) (-(var_5)));
        var_15 = ((/* implicit */signed char) var_9);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4294967288U)));
        /* LoopSeq 4 */
        for (short i_3 = 3; i_3 < 18; i_3 += 1) 
        {
            var_17 *= ((/* implicit */unsigned long long int) ((long long int) 1870920235));
            /* LoopNest 2 */
            for (long long int i_4 = 1; i_4 < 18; i_4 += 3) 
            {
                for (long long int i_5 = 4; i_5 < 19; i_5 += 4) 
                {
                    {
                        arr_17 [(signed char)3] [i_4] [i_4] [i_5] [i_4] [i_2] = ((/* implicit */long long int) var_10);
                        var_18 = ((/* implicit */unsigned int) ((unsigned char) arr_12 [i_2] [i_3]));
                    }
                } 
            } 
            arr_18 [i_2] [i_2] = ((/* implicit */unsigned char) (+(-8500001735635957962LL)));
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (~(((/* implicit */int) ((1048575U) < (arr_15 [i_3])))))))));
            var_20 = ((/* implicit */long long int) min((var_20), (((7053338993741571371LL) / (((/* implicit */long long int) 3429870775U))))));
        }
        for (short i_6 = 1; i_6 < 17; i_6 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) 8669279939688046605LL);
            arr_22 [i_2] [i_2] |= ((/* implicit */short) var_1);
        }
        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            arr_25 [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -8500001735635957962LL))));
            var_22 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-1))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                for (short i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    {
                        var_23 = ((/* implicit */long long int) (~(var_10)));
                        arr_32 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) var_1);
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned int) (-(arr_10 [i_2])));
        }
        for (long long int i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            arr_35 [i_2] = ((/* implicit */long long int) 0U);
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((long long int) (unsigned char)5)))));
            /* LoopNest 3 */
            for (signed char i_11 = 1; i_11 < 16; i_11 += 2) 
            {
                for (short i_12 = 1; i_12 < 19; i_12 += 4) 
                {
                    for (long long int i_13 = 1; i_13 < 19; i_13 += 3) 
                    {
                        {
                            var_26 ^= ((((/* implicit */long long int) ((/* implicit */int) var_8))) - (-6226516783066544666LL));
                            arr_45 [i_12] [i_10] [i_10] [i_10] [i_10] [i_10] = (+((+(1671509108U))));
                            arr_46 [i_2] [i_10] [i_2] [i_2] [i_13 + 1] |= ((/* implicit */short) (!(((/* implicit */_Bool) (short)-24))));
                        }
                    } 
                } 
            } 
            var_27 = ((((-6226516783066544666LL) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)-839)) + (847))) - (7))));
            /* LoopSeq 1 */
            for (short i_14 = 0; i_14 < 20; i_14 += 1) 
            {
                var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_40 [i_14] [i_14] [i_10] [i_10] [i_2] [i_2]))));
                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (+(var_5))))));
                var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 197053309U))))))))));
            }
        }
        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (-(var_1))))));
        arr_49 [14ULL] [12LL] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (var_1)));
    }
    /* vectorizable */
    for (signed char i_15 = 3; i_15 < 20; i_15 += 3) 
    {
        arr_54 [8] &= ((/* implicit */short) arr_53 [i_15 + 1]);
        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((signed char) (signed char)124)))));
    }
    /* vectorizable */
    for (signed char i_16 = 0; i_16 < 20; i_16 += 3) 
    {
        arr_59 [i_16] = ((/* implicit */long long int) var_9);
        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (+(arr_12 [i_16] [i_16]))))));
    }
    var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) var_7))));
}
