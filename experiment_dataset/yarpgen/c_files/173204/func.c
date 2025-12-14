/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173204
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */int) var_1)) | (((/* implicit */int) var_5)))), ((-(((/* implicit */int) max(((_Bool)1), (var_4))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_15 [i_1] [i_1] [i_4] = ((/* implicit */long long int) var_6);
                                arr_16 [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)5299))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1)))));
                                var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) ((unsigned char) var_2))) : (((/* implicit */int) ((signed char) var_8)))))))));
                                var_11 -= ((/* implicit */signed char) (+(min((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_2) : (var_6))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_12 -= ((/* implicit */unsigned char) (short)-10190);
                        var_13 ^= ((((/* implicit */_Bool) ((unsigned short) (short)30605))) ? (((/* implicit */int) (short)10196)) : (((/* implicit */int) ((var_6) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5)))))));
                        var_14 = ((/* implicit */unsigned int) (short)-33);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 10; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 12; i_7 += 3) 
                        {
                            {
                                arr_26 [i_7] [i_1] [i_2 + 3] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((391948278U), (((/* implicit */unsigned int) (signed char)-1))))) > (1489271134656838029ULL)));
                                var_15 = ((/* implicit */_Bool) ((int) var_6));
                                arr_27 [i_0] [i_1] [i_2 - 1] [i_2 - 1] [i_2 - 1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (signed char)-5)), ((+(var_9)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_28 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) min((var_5), (((/* implicit */unsigned char) (signed char)18)))))));
        arr_29 [i_0] [i_0] &= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), (var_1)))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) ((_Bool) 8991221442757805794LL)))))), (8991221442757805810LL)));
        /* LoopSeq 2 */
        for (short i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            var_16 ^= ((/* implicit */long long int) min((min((((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)-15)), ((unsigned char)31)))))), (((/* implicit */unsigned int) (signed char)14))));
            arr_32 [i_0] [i_0] [i_8] &= ((/* implicit */short) (~(((/* implicit */int) (signed char)14))));
        }
        for (short i_9 = 0; i_9 < 14; i_9 += 4) 
        {
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112))) * (((((/* implicit */_Bool) 2076510139U)) ? (3716608285U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28828))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))))))));
            arr_36 [(signed char)5] [i_0] [(signed char)13] = ((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) var_4)))));
        }
    }
    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 2) /* same iter space */
    {
        var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (short)-9209))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 7663222307906936432ULL)) ? (3514633469U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-44))))))));
        var_19 = ((/* implicit */unsigned char) ((unsigned int) max((min((((/* implicit */unsigned long long int) var_5)), (var_9))), (((/* implicit */unsigned long long int) (short)7954)))));
        var_20 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6)))) : (max((var_6), (2429812932U))))));
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            for (unsigned short i_12 = 3; i_12 < 11; i_12 += 1) 
            {
                {
                    arr_43 [9] [i_11] [i_12] [i_11] = ((/* implicit */unsigned int) (~((~(var_9)))));
                    arr_44 [2U] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)9200))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 2) 
    {
        for (unsigned int i_14 = 0; i_14 < 25; i_14 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_15 = 0; i_15 < 25; i_15 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 0; i_16 < 25; i_16 += 3) 
                    {
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (-(((long long int) (signed char)-6)))))));
                        var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */int) (signed char)-19)) : (1966615338)));
                        var_23 ^= ((/* implicit */unsigned short) var_0);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 4) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 25; i_18 += 1) 
                        {
                            {
                                arr_62 [i_14] = ((unsigned int) ((((/* implicit */_Bool) ((unsigned int) (short)-19889))) ? (((((/* implicit */_Bool) (short)32763)) ? (((/* implicit */int) (short)32759)) : (((/* implicit */int) (signed char)-22)))) : (min((510075735), (((/* implicit */int) var_7))))));
                                var_24 = ((/* implicit */unsigned int) max((((/* implicit */signed char) ((((/* implicit */_Bool) 2731061575U)) || (((/* implicit */_Bool) var_6))))), (min(((signed char)111), ((signed char)5)))));
                            }
                        } 
                    } 
                }
                for (long long int i_19 = 0; i_19 < 25; i_19 += 1) 
                {
                    var_25 = ((/* implicit */signed char) 391948278U);
                    /* LoopNest 2 */
                    for (unsigned char i_20 = 0; i_20 < 25; i_20 += 2) 
                    {
                        for (int i_21 = 0; i_21 < 25; i_21 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-4807)) ? ((-(max((((/* implicit */unsigned int) (short)9108)), (var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                                arr_70 [i_14] [4LL] [i_19] [i_13] [i_13] [i_13] [i_14] = ((/* implicit */short) ((unsigned char) ((long long int) ((var_4) ? (((/* implicit */int) var_7)) : (0)))));
                                arr_71 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] [i_14] = ((int) max((((/* implicit */unsigned short) (short)14085)), ((unsigned short)43623)));
                            }
                        } 
                    } 
                }
                var_27 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)141)), (1954031543U)));
                /* LoopNest 3 */
                for (unsigned char i_22 = 0; i_22 < 25; i_22 += 2) 
                {
                    for (long long int i_23 = 0; i_23 < 25; i_23 += 3) 
                    {
                        for (unsigned short i_24 = 4; i_24 < 23; i_24 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned long long int) ((short) max((((/* implicit */unsigned int) max((((/* implicit */short) (signed char)(-127 - 1))), ((short)9108)))), (var_3))));
                                var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((unsigned short) ((unsigned long long int) var_8))))));
                                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) min(((~((-(var_6))))), (((/* implicit */unsigned int) ((unsigned char) var_6))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
