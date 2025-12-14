/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158741
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
    var_11 = ((/* implicit */int) ((((((/* implicit */_Bool) (~(-610662462)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) & (var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) | (((/* implicit */long long int) var_7))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */long long int) max((var_12), (max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_1 [i_1] [i_2]) : (var_1)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))) : (arr_1 [i_1] [i_2]))), (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0] [i_0])))))))));
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) min((max((913637224), (var_8))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)38359)) || (((/* implicit */_Bool) 3144308059U)))))))) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)24572)) ? (((/* implicit */int) (unsigned short)25906)) : (((/* implicit */int) (unsigned short)39630))))))) : (((((/* implicit */_Bool) var_2)) ? ((+(2772565571U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [(_Bool)0])) || (((/* implicit */_Bool) 0ULL))))))))));
                    arr_8 [12U] [i_1] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) var_8)) : (var_2))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))))), (1901426381558511371LL)));
                    var_14 = ((/* implicit */short) (((!(((/* implicit */_Bool) min((-478056516), (((/* implicit */int) var_0))))))) ? (-8096037932757616624LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25894)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) var_0);
                                var_16 *= (!(((((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (var_8)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3])) ? (var_7) : (((/* implicit */int) (_Bool)1))))))));
                                var_17 = ((/* implicit */long long int) ((min((max((((/* implicit */unsigned long long int) (unsigned short)39630)), (var_10))), (((/* implicit */unsigned long long int) ((_Bool) (short)-227))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) -3003294964773823695LL))))) ? (var_8) : ((~(478056516))))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max(((+(((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_3] [i_3] [3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_2]))) : (arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2]))))), (((/* implicit */unsigned int) (-(-1699542302))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) ((unsigned int) ((((var_8) == (((/* implicit */int) var_3)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3116133836U)) && ((_Bool)0)))) : (((1017334279) >> (((-1814232692) + (1814232707))))))));
}
