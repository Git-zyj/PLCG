/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100905
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
    var_17 = ((/* implicit */unsigned long long int) (!(var_13)));
    var_18 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 += arr_2 [i_0];
                arr_4 [i_0] [i_0] [(signed char)23] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) arr_1 [(unsigned char)23] [i_1])))))))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) (~(4009662653398982591LL)));
                arr_6 [20ULL] = ((/* implicit */unsigned char) arr_3 [i_1 + 4] [i_1] [i_1]);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 4; i_2 < 10; i_2 += 3) 
    {
        var_20 -= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_0 [i_2] [i_2]))))));
        arr_11 [i_2 - 2] = ((/* implicit */signed char) (unsigned char)91);
    }
    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 3) 
    {
        var_21 ^= ((/* implicit */short) (-(((/* implicit */int) arr_2 [i_3 + 1]))));
        /* LoopSeq 2 */
        for (unsigned short i_4 = 4; i_4 < 16; i_4 += 1) /* same iter space */
        {
            var_22 ^= ((/* implicit */unsigned char) arr_13 [i_3 + 1]);
            arr_16 [i_4] [i_4 - 4] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(4294967291U))))));
            arr_17 [i_4] [i_3] [i_4] = ((/* implicit */unsigned char) 5059200148083132116ULL);
            var_23 |= ((/* implicit */signed char) (-((+(((/* implicit */int) arr_2 [i_3 - 1]))))));
        }
        for (unsigned short i_5 = 4; i_5 < 16; i_5 += 1) /* same iter space */
        {
            var_24 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_5] [i_5 - 4])))))));
            arr_22 [1ULL] [13ULL] = ((/* implicit */signed char) (~(((/* implicit */int) arr_19 [i_3 + 2]))));
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    {
                        arr_30 [(_Bool)1] [i_3 - 1] [i_5] [(_Bool)1] [i_6] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_5 - 2] [i_5 + 2] [i_7 + 1])))))));
                        var_25 = ((/* implicit */int) (signed char)-92);
                    }
                } 
            } 
            arr_31 [0LL] [i_5] = ((/* implicit */int) arr_21 [(_Bool)1] [i_5 + 1]);
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 4; i_9 < 14; i_9 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 1) 
                    {
                        var_26 -= ((/* implicit */unsigned short) 7186253332309911353ULL);
                        arr_40 [i_10] [i_3] [i_8] [i_8] [i_3] [(short)13] = ((/* implicit */signed char) -1807752853);
                        arr_41 [4LL] = ((/* implicit */unsigned short) (~(4439502633324596585ULL)));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        var_27 |= ((/* implicit */int) (unsigned char)157);
                        var_28 = ((/* implicit */int) (~(6725127490867806131ULL)));
                        arr_44 [i_3] [i_8] [(unsigned char)15] [i_11] [i_3] = ((/* implicit */unsigned short) (~(4294967278U)));
                        var_29 = ((/* implicit */signed char) 4009662653398982591LL);
                    }
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (+((-(4294967291U))))))));
                    arr_45 [1LL] [5ULL] [i_8] [i_9] = ((/* implicit */signed char) (+(arr_15 [i_9 - 4] [i_3 + 2] [i_9 - 4])));
                }
            } 
        } 
        arr_46 [i_3 + 1] = ((/* implicit */unsigned int) arr_24 [i_3 - 1] [i_3] [i_3]);
        arr_47 [i_3] = arr_29 [i_3] [i_3 + 2] [i_3];
    }
    for (long long int i_12 = 0; i_12 < 23; i_12 += 1) 
    {
        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (short)-26791))));
        /* LoopNest 2 */
        for (signed char i_13 = 2; i_13 < 22; i_13 += 4) 
        {
            for (short i_14 = 0; i_14 < 23; i_14 += 3) 
            {
                {
                    arr_57 [i_13] [i_14] [i_13 + 1] = ((/* implicit */short) arr_52 [i_12] [i_13 - 1]);
                    var_32 -= (signed char)35;
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_15 = 0; i_15 < 23; i_15 += 2) 
        {
            arr_61 [i_12] = ((/* implicit */short) arr_50 [i_12]);
            arr_62 [i_15] [i_12] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)121))));
            arr_63 [18U] = ((/* implicit */unsigned short) 14007241440384955031ULL);
        }
        for (signed char i_16 = 2; i_16 < 22; i_16 += 4) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned short) arr_50 [(signed char)1]);
            arr_66 [i_12] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)99))));
        }
        for (signed char i_17 = 2; i_17 < 22; i_17 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_18 = 3; i_18 < 21; i_18 += 4) 
            {
                for (signed char i_19 = 2; i_19 < 20; i_19 += 3) 
                {
                    for (signed char i_20 = 3; i_20 < 22; i_20 += 4) 
                    {
                        {
                            arr_76 [i_12] [i_17] [i_20] [i_12] [i_20] = ((/* implicit */signed char) arr_49 [i_17 + 1]);
                            arr_77 [i_18 - 3] [i_18] [i_20] [i_18] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_17 - 2] [i_17 - 2])))))));
                        }
                    } 
                } 
            } 
            arr_78 [i_17] [i_12] = ((/* implicit */long long int) (-(((/* implicit */int) (!(arr_72 [i_17 + 1] [i_17 - 1] [i_17] [i_17 - 1] [i_17 - 1]))))));
        }
    }
}
