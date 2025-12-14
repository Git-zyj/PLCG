/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145237
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
    var_13 = ((/* implicit */_Bool) var_11);
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_4))))), (var_4)))) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 7; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 7; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) min((var_15), (((((/* implicit */int) arr_2 [i_1 - 1])) < ((-(((((/* implicit */_Bool) 8347289429865439141LL)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) arr_4 [i_2]))))))))));
                            var_16 *= ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2 + 3] [i_2] [i_2 + 3])) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) var_0)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 1; i_4 < 9; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 1; i_6 < 8; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) < (15200122565623220566ULL)));
                                arr_17 [i_4] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_11))) / (-1558851130913906469LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)31)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 9; i_8 += 2) 
                    {
                        for (long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */short) var_10);
                                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0)))))));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? ((+(((((/* implicit */int) (signed char)30)) - (((/* implicit */int) (unsigned short)65520)))))) : (((/* implicit */int) (_Bool)1))));
                                var_21 = ((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_8 + 1]))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) (short)1)), (var_8)))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_2)))) : (((/* implicit */int) var_11))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            {
                                var_22 = ((((((/* implicit */_Bool) 3671073073U)) ? ((-(arr_5 [i_0] [i_1] [i_10] [i_11]))) : (((/* implicit */unsigned long long int) arr_15 [i_1 + 1] [i_1] [i_1] [i_1] [i_1])))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) var_9)))))));
                                arr_31 [i_7] [i_10] [i_7] [i_1 + 1] [i_7] = ((/* implicit */int) var_8);
                                var_23 = ((/* implicit */long long int) (+(-1279601646)));
                                var_24 = ((/* implicit */short) var_10);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 4; i_12 < 9; i_12 += 3) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65524))) : (var_8)))) ? (((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_12 - 4] [i_0] [i_1 - 2])) ? (((/* implicit */int) (unsigned short)58443)) : (((/* implicit */int) (short)-12486))))))), (var_7)));
                                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)47569))))) ? (536870911) : (((((/* implicit */_Bool) 1770526078)) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) (_Bool)0)))))))))));
                                var_27 = ((/* implicit */unsigned int) ((unsigned short) 8781869788801039372ULL));
                            }
                        } 
                    } 
                }
                arr_38 [i_1 - 3] [i_1 - 4] [i_0] = ((/* implicit */long long int) var_3);
            }
        } 
    } 
}
