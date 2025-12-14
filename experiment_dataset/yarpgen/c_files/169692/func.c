/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169692
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
    var_13 *= ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)97)) ? (((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) % (arr_3 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)121))) % (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)110))) : (3458764513820540928LL))))))));
                var_15 = ((/* implicit */unsigned char) arr_0 [i_0 + 1]);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1])) / (((arr_3 [(signed char)1] [i_0 - 2]) / (((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)228))) : (arr_3 [i_2] [i_0]))))))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((max((arr_2 [i_0 - 2] [i_0 - 2] [i_0 + 1]), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)236)) % (((/* implicit */int) (short)15))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_2] [i_3] [i_0 - 2] [i_4])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned char)5] [i_1])) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) arr_9 [(signed char)0] [(signed char)10] [i_2] [i_2] [i_4]))))))))));
                                var_18 = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) (unsigned char)98)) ? (131980331) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2])))), (((/* implicit */int) arr_0 [i_0 + 1])))) - (-1564155604)));
                                var_19 ^= ((/* implicit */unsigned short) min(((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(unsigned short)18] [i_1] [i_2] [i_1] [i_0]))) + (arr_6 [i_2] [i_3]))))), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) 131980332)) : (arr_3 [i_1] [i_4])))))));
                            }
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_7 [i_3] [i_2] [i_2] [i_1] [i_0] [17]))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_2 [(_Bool)1] [i_0 - 1] [9]) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (_Bool)1)))))))) << ((((((-(((((/* implicit */_Bool) (unsigned short)26)) ? (arr_1 [i_0 - 2] [i_1]) : (arr_2 [18ULL] [i_0] [i_2]))))) + (8198747706995542776LL))) - (28LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)80)), (var_10)))) <= (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)195)) < (131980331)))), (15991118242420930289ULL)))));
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((min((((((/* implicit */int) var_4)) == (((/* implicit */int) var_0)))), (var_12))) ? (((/* implicit */int) max(((unsigned char)171), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)10)) >= (131980321))))))) : ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-125)))))))))));
}
