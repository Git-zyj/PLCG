/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112240
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) (-(((/* implicit */int) var_10))))), ((~(var_5)))))));
                            arr_10 [i_3] [i_2] [i_3] = ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_0 + 3] [i_1] [i_1]))))), (max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)12288)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (unsigned int i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) ((4696187274326992875ULL) + (((unsigned long long int) ((5261711818704735008ULL) - (((/* implicit */unsigned long long int) 3145728U)))))));
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (((-(arr_3 [i_5 - 1] [i_0]))) != (max((arr_3 [i_0] [i_0 + 3]), (((/* implicit */int) var_15)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_6 = 1; i_6 < 18; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 4; i_8 < 18; i_8 += 4) 
                        {
                            {
                                arr_26 [i_6] [(unsigned short)10] [i_6] [i_6] = ((/* implicit */unsigned short) (+((+(var_9)))));
                                var_19 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)249))))), (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-65))) % (4559331953927272179LL)))) % (((unsigned long long int) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 19; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        {
                            var_20 += ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)249))));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((max((((long long int) var_2)), (-6436771484280969225LL))), (((/* implicit */long long int) ((int) 27ULL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_11 = 0; i_11 < 13; i_11 += 4) 
    {
        for (unsigned int i_12 = 2; i_12 < 12; i_12 += 4) 
        {
            for (short i_13 = 0; i_13 < 13; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 13; i_15 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_9))));
                                var_23 = ((/* implicit */long long int) max((var_23), (max((((/* implicit */long long int) (+(((/* implicit */int) (short)32320))))), (max((((/* implicit */long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) (signed char)127))))), (max((((/* implicit */long long int) (_Bool)1)), (var_5)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 13; i_16 += 1) 
                    {
                        for (long long int i_17 = 2; i_17 < 11; i_17 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) arr_13 [(_Bool)1] [i_12 - 1] [(_Bool)1]);
                                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((9223372036854775807LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))) % (((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32750))) : (var_3)))))))));
                                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) >= (arr_35 [i_17 + 1])))))))));
                                var_27 = ((/* implicit */unsigned short) arr_28 [i_11] [i_13] [i_13] [i_13]);
                                arr_49 [i_11] [i_12] &= ((/* implicit */unsigned int) max(((+(((/* implicit */int) var_15)))), ((+(((/* implicit */int) (signed char)-11))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 2; i_18 < 12; i_18 += 1) 
                    {
                        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */_Bool) var_12);
                                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) var_12))));
                                var_30 = ((/* implicit */unsigned short) max((var_4), ((short)-1666)));
                                var_31 -= ((/* implicit */int) ((((/* implicit */_Bool) 506826473)) || (((/* implicit */_Bool) (unsigned char)0))));
                                var_32 = ((/* implicit */_Bool) max((max((max((9046969833774148713LL), (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) max(((-2147483647 - 1)), (((/* implicit */int) arr_20 [i_11]))))))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)8)) + (((/* implicit */int) arr_2 [i_11] [i_11] [i_19 - 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
