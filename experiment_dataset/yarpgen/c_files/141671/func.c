/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141671
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [11]))) + ((+(arr_2 [i_1])))));
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((min((arr_3 [i_0 - 2] [(_Bool)1] [i_0]), (arr_3 [i_0 + 1] [i_0 + 1] [i_0]))) != (((/* implicit */unsigned int) (~(((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (_Bool)1)))))))));
                var_14 = var_12;
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_6 [i_2]), (((/* implicit */unsigned char) (_Bool)1))))) * (((((/* implicit */int) arr_6 [i_2])) / (((/* implicit */int) arr_4 [i_3] [i_3]))))));
                var_16 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_2] [11LL] [i_3]) >= (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (unsigned char)246))))))))) & ((~(((arr_7 [i_2]) >> (((arr_10 [i_3]) - (3149535067308920093LL))))))));
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_8 [i_3] [i_2] [i_2])), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (short)17879))) : (arr_2 [i_2])))), (((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) max((((((unsigned long long int) 1532229548597830446LL)) - (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) >= (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_7))))))));
    var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) max((var_4), (var_5)))) ? (-4701634672125121794LL) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0)))))))));
    var_20 = ((/* implicit */unsigned char) var_6);
}
