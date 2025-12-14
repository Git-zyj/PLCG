/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126993
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
    var_12 = ((/* implicit */unsigned short) ((max((max((((/* implicit */unsigned long long int) (unsigned char)158)), (1346836849590764414ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)179)) <= (((/* implicit */int) (unsigned char)28))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)99)) < (((/* implicit */int) var_5))))), ((unsigned char)228)))))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))) > (var_11))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) max((13065229761041590463ULL), (((/* implicit */unsigned long long int) 3453281119U))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_3 [i_0]);
                var_14 = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)142)) >> (((((/* implicit */int) arr_0 [i_0])) + (22029)))))) ? (((/* implicit */int) ((max((1619205398833733682ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0]), (arr_4 [i_0 + 1] [i_0])))))))) : (max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)160)) || (((/* implicit */_Bool) arr_2 [i_0]))))), (((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) (short)6199))))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)142)) >> (((((((/* implicit */int) arr_0 [i_0])) + (22029))) - (32758)))))) ? (((/* implicit */int) ((max((1619205398833733682ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0]), (arr_4 [i_0 + 1] [i_0])))))))) : (max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)160)) || (((/* implicit */_Bool) arr_2 [i_0]))))), (((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) (short)6199)))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] [i_2] [i_2] &= ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)220))) : (arr_6 [i_0] [i_2]))))) >> (((((/* implicit */int) (unsigned char)153)) - (136)))));
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_2 [i_0]), (arr_2 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0]) < (arr_2 [i_0]))))) : (min((841686176U), (arr_2 [i_0])))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (((-(841686176U))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248)))))), (((((((/* implicit */_Bool) arr_3 [i_0])) ? (-7018531208316080666LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42110))))) ^ (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1]))) * (arr_3 [i_0]))))))));
            }
        } 
    } 
}
