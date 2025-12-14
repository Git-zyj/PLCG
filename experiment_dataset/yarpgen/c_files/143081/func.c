/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143081
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
    var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) ((signed char) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_15))))))) : (((((((/* implicit */int) var_9)) | (((/* implicit */int) var_14)))) & (((/* implicit */int) ((_Bool) var_2)))))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_3)))) ? (((((/* implicit */int) (unsigned short)4)) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) var_6)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [(signed char)5] = ((/* implicit */long long int) (~(min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (unsigned short)46503)) ^ (((/* implicit */int) (_Bool)1))))))));
                    arr_9 [9LL] [i_1] [9LL] = ((/* implicit */long long int) (-(((var_8) ? (((/* implicit */int) arr_7 [i_1] [i_2])) : (((/* implicit */int) var_0))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        for (signed char i_4 = 1; i_4 < 21; i_4 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))));
                var_21 *= ((/* implicit */_Bool) arr_13 [i_4]);
                var_22 = ((min((var_15), (((((/* implicit */_Bool) arr_12 [i_3] [i_4])) ? (arr_13 [i_3]) : (((/* implicit */long long int) arr_10 [i_4])))))) != (((((_Bool) arr_12 [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (arr_13 [i_3]))));
                var_23 = ((/* implicit */unsigned int) ((((long long int) arr_12 [i_4 + 2] [i_4 + 2])) > (((/* implicit */long long int) ((((/* implicit */int) var_4)) % (((/* implicit */int) ((unsigned char) arr_12 [i_3] [i_3]))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_5);
}
