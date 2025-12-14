/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144071
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
    var_14 *= (((~((+(((/* implicit */int) (_Bool)1)))))) / (((/* implicit */int) ((((26U) * (1590814338U))) >= ((~(2336070239U)))))));
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) > (((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_9)) - (147)))))))))))));
    var_16 *= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) == ((~(var_1))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_17 = ((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0 - 1])) == (((/* implicit */int) var_13)))))))) * (((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) / (4251567636U))) - (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)3))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)8153))))) <= (((((/* implicit */unsigned long long int) 43399655U)) | (var_4))))))));
                    var_18 *= ((/* implicit */signed char) (((~(((/* implicit */int) ((((/* implicit */int) (signed char)99)) == (((/* implicit */int) arr_1 [i_2] [i_1]))))))) * (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
                    arr_9 [i_1] [i_1] [i_1] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1304))) == (3575369761173085282LL)))) - (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned short)64227))))))))));
                }
                for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 2) 
                {
                    var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((var_7) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))))))))) == ((-(4144775617U)))))));
                    var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-27))));
                    arr_12 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) (+(((((/* implicit */int) var_3)) << (((810585821) - (810585807)))))))) < ((~((~(6438679608804478448LL)))))));
                    arr_13 [i_0] [i_1] [i_3 - 1] = (-((-(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_3] [i_1] [10ULL])) && (((/* implicit */_Bool) arr_6 [(signed char)8] [i_1]))))))));
                }
            }
        } 
    } 
}
