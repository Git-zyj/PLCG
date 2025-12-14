/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153088
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) 1889473513U);
        var_10 = ((/* implicit */_Bool) (signed char)13);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_11 = ((/* implicit */_Bool) 5659815628674117478LL);
            var_12 += ((/* implicit */short) (_Bool)1);
        }
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_13 = (((-(9U))) >> (((((-5659815628674117470LL) % (((/* implicit */long long int) ((2753848791U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) + (2586724163LL))));
                        arr_15 [i_0] [i_0] [6ULL] [i_3] [i_0] [i_4] = ((/* implicit */short) (~(-5659815628674117503LL)));
                        arr_16 [i_0] [i_2] [i_3] [i_0] [i_4] [i_4] = ((/* implicit */_Bool) 2015080695U);
                        arr_17 [i_0] [i_2] [i_0] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 5659815628674117458LL)) && ((!((_Bool)0))))) && (((((((/* implicit */_Bool) (signed char)-44)) || (((/* implicit */_Bool) (short)16382)))) || (((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) (signed char)49))))))));
                        arr_18 [i_0] [i_0] [i_3] [i_3] [i_0] [i_3] = ((/* implicit */_Bool) (~(12ULL)));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned int) (short)-11255);
    }
    for (unsigned int i_5 = 2; i_5 < 12; i_5 += 2) /* same iter space */
    {
        arr_21 [i_5 + 1] = ((/* implicit */_Bool) (signed char)49);
        var_15 = ((/* implicit */unsigned int) (~(-6236873010776955923LL)));
        /* LoopSeq 2 */
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            arr_24 [(short)5] = ((/* implicit */short) 33554431ULL);
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (~(18446744073675997196ULL))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                arr_28 [i_5 + 1] [i_6] [i_7] [i_7] = (!(((((/* implicit */_Bool) 10U)) || (((/* implicit */_Bool) (short)13867)))));
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (short)-11255))));
            }
            for (int i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                var_18 = ((/* implicit */unsigned char) 33554431ULL);
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    var_19 = ((/* implicit */_Bool) 2487447850U);
                    arr_33 [i_5 - 1] [i_5] [i_5 - 2] [i_5 - 2] [i_5 + 1] [i_5] = ((/* implicit */unsigned char) (_Bool)1);
                }
            }
            /* vectorizable */
            for (int i_10 = 3; i_10 < 9; i_10 += 4) 
            {
                arr_37 [12] [i_6] [i_5] = ((((/* implicit */unsigned int) (~(-54769181)))) == (3580828827U));
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2487447850U)))))));
                var_21 += ((/* implicit */short) -2103433513729898663LL);
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)246)) - (222)))))) || ((_Bool)1)));
            }
            for (short i_11 = 0; i_11 < 13; i_11 += 2) 
            {
                var_23 += ((/* implicit */short) ((((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned short)10847)))) * (((/* implicit */int) (_Bool)1))))) / (2487447853U)));
                var_24 -= ((/* implicit */short) ((4294967294U) == (((/* implicit */unsigned int) (-((+(((/* implicit */int) (signed char)-62)))))))));
                var_25 += ((/* implicit */long long int) (_Bool)1);
                arr_41 [i_11] [i_6] [i_5] = ((/* implicit */int) (_Bool)1);
                var_26 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (signed char)115))))) == (18446744073709551598ULL));
            }
            arr_42 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (((((0ULL) << (((4294967294U) - (4294967293U))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (short)26908)))))))));
        }
        for (signed char i_12 = 1; i_12 < 11; i_12 += 4) 
        {
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~((-(6223540932547305511LL)))))))))));
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255)))))));
            arr_45 [i_5] = ((/* implicit */_Bool) (signed char)34);
            arr_46 [i_5 - 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) (signed char)-2)))))))));
            var_29 = (((!(((/* implicit */_Bool) ((18446744073709551612ULL) >> (((/* implicit */int) (signed char)62))))))) || (((/* implicit */_Bool) (+((-(((/* implicit */int) (signed char)48))))))));
        }
    }
    for (unsigned int i_13 = 2; i_13 < 12; i_13 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */long long int) (_Bool)1);
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_14 = 1; i_14 < 11; i_14 += 1) 
        {
            arr_52 [i_13] = ((/* implicit */unsigned long long int) (-(((0U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
            arr_53 [i_13] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
            arr_54 [i_13] [i_14] = 4294967295U;
            arr_55 [i_13] [0LL] = ((/* implicit */unsigned int) (unsigned char)179);
        }
    }
    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)96)))))));
    var_32 = ((((((((/* implicit */long long int) 4294967285U)) ^ (9223372036854775807LL))) + (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))) << (((((/* implicit */int) (short)11244)) - (11244))));
}
