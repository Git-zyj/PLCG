/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161349
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 554510372707180584LL)))) ? (((((/* implicit */_Bool) arr_5 [i_4] [i_1] [i_2 + 1] [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2 + 1] [i_3 + 1]))) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_5 [i_4] [i_4] [i_2 + 1] [i_3 - 1]), (arr_5 [i_0] [i_1] [i_2 + 1] [i_3 + 2])))))));
                                var_16 = ((/* implicit */unsigned int) (short)-31295);
                                var_17 = ((/* implicit */unsigned short) max((((((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) arr_3 [i_2 + 1])))) ? (max((67108863), (((/* implicit */int) (unsigned short)57846)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)54))) <= (arr_10 [i_3 + 1] [i_4] [i_3 - 1] [i_3])))))), (((/* implicit */int) max((arr_4 [i_1 + 2] [i_3 + 2] [i_1 + 2]), ((unsigned short)57848))))));
                            }
                        } 
                    } 
                    var_18 = max((((/* implicit */short) (_Bool)1)), ((short)31295));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)186)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)173))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_14)))))))) ? (((var_6) / (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)73)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_11))))));
    var_20 = ((/* implicit */unsigned long long int) var_13);
}
