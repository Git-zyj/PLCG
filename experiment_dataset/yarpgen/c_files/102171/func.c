/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102171
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
    var_20 |= ((/* implicit */unsigned int) (_Bool)1);
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) max((max(((unsigned short)23973), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11)))))))) % (((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned int) (((+(max((((/* implicit */int) (unsigned short)22186)), (arr_1 [21U] [i_1]))))) ^ (((/* implicit */int) (!(((var_10) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)220))))))))));
                var_22 *= ((/* implicit */unsigned long long int) (unsigned short)41532);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_16 [i_0] [13U] [i_2] [13U] [i_2] [i_3] = ((/* implicit */int) ((unsigned int) (-(((/* implicit */int) var_19)))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) < (min((11482323155652943175ULL), (((/* implicit */unsigned long long int) arr_13 [i_0]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                {
                    for (unsigned char i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        {
                            var_24 = (unsigned short)43350;
                            var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)32761))));
                            var_26 = ((/* implicit */long long int) (((+(arr_0 [i_4 + 2]))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_4 + 1]))))))));
                            var_27 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) (unsigned short)43328)))), (((int) 6964420918056608445ULL))));
                            var_28 = ((/* implicit */unsigned short) arr_1 [i_0] [(unsigned char)16]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    for (int i_7 = 1; i_7 < 21; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 4; i_8 < 21; i_8 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)-32756)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)23970))))) : (var_10)))));
                                var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((signed char) (unsigned short)22186)))));
                                var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((signed char) -826712609))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) ((arr_27 [i_6] [(short)2] [(_Bool)1]) >= (((/* implicit */int) (short)-32739))))))))))));
                                var_32 |= ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_31 [i_7 + 1] [i_7 - 1] [i_8 + 1] [i_8 - 3] [i_6])))) < (((/* implicit */int) ((min((var_9), (((/* implicit */unsigned int) var_6)))) > (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                                var_33 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)43352)) : (((/* implicit */int) arr_11 [i_6] [i_8]))))))), ((-(max((11482323155652943168ULL), (((/* implicit */unsigned long long int) var_15))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
