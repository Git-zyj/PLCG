/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137954
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((arr_1 [i_0]) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_4 [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [4U] [i_1] [i_1])) ? (arr_6 [i_0] [i_0] [i_2]) : (((/* implicit */int) (unsigned char)10))))) : (((((unsigned long long int) arr_2 [i_2])) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                    arr_9 [i_2] = ((/* implicit */long long int) arr_1 [i_2]);
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */short) var_4);
                        var_14 ^= ((/* implicit */int) ((((/* implicit */unsigned int) max((((((/* implicit */int) arr_8 [8LL] [i_2] [i_1] [(short)2])) ^ (((/* implicit */int) arr_0 [i_2])))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [i_2] [i_1] [i_0])) : (((/* implicit */int) var_8))))))) - (max((((((/* implicit */_Bool) var_11)) ? (arr_2 [(signed char)3]) : (var_3))), (((/* implicit */unsigned int) arr_3 [i_3] [i_2] [i_1]))))));
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (1333983983U)))) ? (((/* implicit */unsigned long long int) ((arr_1 [i_3]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_11)) ? (10400140038662624270ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) arr_12 [i_2] [i_2])) : (1333984004U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))))));
                        arr_13 [i_2] [i_3] [i_3] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)46)))) ? (((((/* implicit */_Bool) 2147483643)) ? (((/* implicit */int) var_5)) : (arr_11 [i_2]))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_3] [i_2])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)255))))))) ? (var_3) : (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) ((signed char) (unsigned short)7546))) : (((/* implicit */int) (!(var_10)))))))));
                    }
                    for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */int) (short)7144);
                        arr_18 [i_2] [i_2] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_4])) ? (arr_10 [i_4] [i_2] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) ? (((/* implicit */int) ((_Bool) arr_0 [i_4]))) : (((((/* implicit */int) (short)7151)) & (((/* implicit */int) arr_15 [i_0]))))));
                        var_17 = ((/* implicit */int) (signed char)-44);
                        var_18 = ((/* implicit */unsigned int) (((~(((unsigned long long int) var_2)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57255)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_0])))))))))));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((var_10) ? (((/* implicit */unsigned int) var_0)) : (var_3)));
}
