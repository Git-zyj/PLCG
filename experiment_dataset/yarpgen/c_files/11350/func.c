/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11350
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
    var_13 = ((/* implicit */unsigned short) max((((/* implicit */int) var_3)), (2147483647)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    var_14 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)-28097)) && (((/* implicit */_Bool) arr_0 [i_2])))), (((_Bool) arr_0 [i_1]))))), (1538340021U)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (~(((/* implicit */int) (short)-28101)))))));
                                var_16 = ((/* implicit */_Bool) var_10);
                                var_17 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_4 [i_4]), (((/* implicit */long long int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) min((var_0), (((/* implicit */unsigned int) ((arr_5 [i_0] [i_1] [i_0] [i_2]) | (((/* implicit */int) (short)-17557))))))))));
                }
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    var_19 = ((/* implicit */int) var_2);
                    var_20 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (-1) : (((/* implicit */int) var_2)))), (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1] [i_5]))));
                    arr_17 [i_0] [i_1] [(unsigned char)9] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(max((((/* implicit */long long int) 891815305U)), (-4525139553260349745LL))))))));
                    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1] [i_0])), (var_6))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_21 [i_0] [i_0] [i_0] = max(((+(((/* implicit */int) min(((short)-12524), (((/* implicit */short) (_Bool)1))))))), ((-(((/* implicit */int) max(((unsigned short)34986), (((/* implicit */unsigned short) (unsigned char)0))))))));
                    var_22 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((13ULL), (((/* implicit */unsigned long long int) 4294967292U))))) ? ((+(arr_7 [i_0] [(unsigned short)22]))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_0] [i_0]))))))), (((/* implicit */long long int) (((-(arr_19 [i_0]))) <= (((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_1] [i_0])), ((unsigned short)22616)))))))));
                }
                var_23 = ((/* implicit */long long int) (+((+(max((var_6), (((/* implicit */unsigned long long int) -7653482478037673331LL))))))));
                var_24 -= ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-1925676873889098451LL));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) max((((((((/* implicit */unsigned long long int) 1356994296U)) <= (5721856674234138812ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -420399665)))))) : (((var_12) ^ (4076376364764261792ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)21)) && (((/* implicit */_Bool) var_2))))) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (_Bool)1)))))))));
}
