/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157355
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
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_14 [(unsigned char)12] [i_1] [(unsigned short)3] [(short)1] [i_1] [(unsigned char)0] = ((/* implicit */unsigned short) ((((min((0ULL), (((/* implicit */unsigned long long int) var_0)))) >> (((703330700) - (703330674))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 17592186044415LL)) ? (arr_1 [(unsigned char)5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [15])))))) ? (var_7) : (((/* implicit */unsigned long long int) arr_1 [i_2])))) - (7594941813019973792ULL)))));
                                arr_15 [i_1] [(signed char)13] [(short)1] [(signed char)3] [20U] = ((/* implicit */unsigned long long int) max((((703330698) >> (((((/* implicit */int) (unsigned short)175)) - (150))))), (703330716)));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)43)), (arr_1 [i_2])))) ? ((+(arr_1 [i_3]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) (_Bool)1)) : (var_9))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) var_0);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            {
                arr_22 [(unsigned char)8] [(unsigned char)7] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_12 [i_5 - 1])) ? (arr_12 [i_5 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (short i_7 = 3; i_7 < 8; i_7 += 4) 
                {
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        {
                            arr_29 [(unsigned char)4] [i_7] [4] [(unsigned char)10] = ((/* implicit */signed char) max(((((-(var_11))) / (var_3))), (max((-17592186044394LL), (((/* implicit */long long int) var_5))))));
                            var_22 = ((/* implicit */_Bool) arr_11 [(_Bool)1] [(_Bool)1] [(_Bool)0]);
                        }
                    } 
                } 
                var_23 = ((/* implicit */long long int) min((((((((/* implicit */int) arr_8 [(unsigned short)16] [(unsigned short)21] [(_Bool)1] [i_5 - 1] [(signed char)5] [i_5 + 1])) + (2147483647))) >> (((/* implicit */int) var_14)))), (((/* implicit */int) arr_13 [(unsigned short)9] [(signed char)14] [(unsigned short)15] [i_5 - 1] [(signed char)7]))));
                var_24 = ((/* implicit */short) min((((min((((/* implicit */long long int) -233806167)), (var_8))) ^ (max((((/* implicit */long long int) (unsigned char)37)), (var_3))))), (((/* implicit */long long int) max((909976639), (((/* implicit */int) (unsigned char)250)))))));
                arr_30 [(_Bool)0] [(short)1] [0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_5 - 1] [i_5 + 1] [i_5 + 1])) && (((/* implicit */_Bool) arr_2 [18ULL] [i_5 - 1]))))) / (((/* implicit */int) max((var_12), (((/* implicit */short) arr_6 [i_5 + 1] [i_5 + 1] [i_5 + 1])))))));
            }
        } 
    } 
}
