/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136761
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [i_0] [0LL]), (((/* implicit */unsigned long long int) (-(1460533071U))))))) ? (((arr_0 [i_0]) ^ (((/* implicit */int) (unsigned short)15844)))) : ((-(((/* implicit */int) arr_2 [i_0]))))));
                var_20 = (-(arr_0 [i_0]));
                arr_5 [(signed char)11] [i_0] [i_1] = ((/* implicit */_Bool) (-(((long long int) max((((/* implicit */unsigned long long int) var_7)), (arr_3 [8ULL] [i_0]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1460533071U)) ? (((/* implicit */long long int) 2834434205U)) : (var_18))) > (((/* implicit */long long int) var_12))));
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (unsigned char i_3 = 4; i_3 < 12; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)0)), (arr_8 [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)0)))) : ((-(arr_11 [i_2] [i_2] [i_4])))))) ? (((((/* implicit */int) (_Bool)0)) << (((-3236493920762586019LL) + (3236493920762586030LL))))) : ((-(((/* implicit */int) (_Bool)1))))));
                    var_23 ^= ((/* implicit */long long int) var_13);
                }
            } 
        } 
    } 
}
