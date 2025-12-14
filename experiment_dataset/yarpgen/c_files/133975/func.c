/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133975
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
    var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (+(var_1)))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_13))) < ((-(((/* implicit */int) (_Bool)1)))))))));
    var_21 = ((/* implicit */signed char) var_8);
    var_22 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) (!(((/* implicit */_Bool) -5502001587170451765LL))))), (((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))), (var_12)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_23 *= ((/* implicit */unsigned int) max(((-((~(((/* implicit */int) var_11)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((-8942038232622679821LL) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_9 [i_2] [i_3] [i_0])) + (129))) - (9)))))))))));
                            /* LoopSeq 3 */
                            for (long long int i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_3] [(_Bool)1] = ((/* implicit */long long int) max((((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_18))) < (max((((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_0])), (var_13)))))), (var_6)));
                                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1]))))), ((~(arr_2 [i_0] [i_4]))))))));
                                var_25 = ((/* implicit */unsigned int) arr_8 [i_3] [i_4]);
                                var_26 *= ((/* implicit */signed char) (~(-1262159561725544688LL)));
                            }
                            /* vectorizable */
                            for (long long int i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                            {
                                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (-4298058517855348157LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5] [i_2] [i_1] [i_5])))))) ? ((+(11757256300958319924ULL))) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_5])))))));
                                var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_2] [i_3] [2U])) == (((/* implicit */int) arr_1 [i_2]))))))));
                                arr_18 [i_3] [i_0] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13180))) < (11757256300958319924ULL))))));
                            }
                            for (long long int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                            {
                                arr_21 [i_0] [(signed char)2] [(signed char)2] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-106)))))))) == (((((/* implicit */_Bool) ((signed char) var_18))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
                                var_29 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0]))))), (max(((~(arr_16 [i_0] [i_1] [i_2] [i_0] [i_1] [i_6]))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)132)))))))));
                            }
                        }
                    } 
                } 
                arr_22 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) var_5));
            }
        } 
    } 
}
