/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119887
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1 - 2] [i_2 + 2] [i_2] [i_3 + 1] [i_4]))))) >> ((((((_Bool)1) ? (arr_7 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) - (14162296643043563020ULL))))), (((/* implicit */int) (unsigned short)13435))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_2 [i_0]), (arr_2 [i_0])))) ? (12298172660725518377ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_4])))));
                                arr_13 [i_0] [i_2] [i_2 + 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)184)), (((unsigned long long int) arr_3 [i_1 - 2] [i_2 + 1] [i_3 + 1]))))) ? (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (18446744073709551615ULL) : (arr_9 [i_0] [i_1 - 2] [i_2 + 2] [i_3 - 1] [i_4]))))))))));
                                var_15 = ((/* implicit */unsigned long long int) (unsigned char)96);
                                arr_14 [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109))) : (18187219691876552474ULL)));
                            }
                        } 
                    } 
                    var_16 -= ((/* implicit */_Bool) max(((~(((((/* implicit */_Bool) var_3)) ? (arr_2 [6ULL]) : (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) var_6))));
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_1)) ? (4232797272395929805ULL) : (((((/* implicit */_Bool) arr_2 [(unsigned short)10])) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) 787677854)))))), (arr_7 [i_1 + 1] [i_2 + 3]))))));
                    var_18 = ((arr_5 [i_0] [i_1 - 3] [i_2] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5633))) : (arr_9 [i_0] [i_1 - 4] [i_1 - 1] [i_0] [i_0]));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((unsigned char) var_13));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_4) : ((+(((/* implicit */int) var_10))))));
    var_21 &= ((/* implicit */short) ((_Bool) var_4));
}
