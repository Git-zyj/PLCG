/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141284
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
    var_10 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */unsigned long long int) var_1)) * (15109311543551717604ULL)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (3337432530157834016ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((_Bool) var_3)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    for (short i_3 = 4; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_10 [14LL] [i_0] [6U] [i_3 + 1] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_9 [(_Bool)1] [i_3 - 4] [i_3] [i_2 + 1] [i_2 + 1] [i_1])))), (((/* implicit */int) arr_9 [i_3 - 2] [i_3 - 4] [i_2 + 2] [(_Bool)1] [i_2 + 2] [i_0]))));
                            arr_11 [i_0] [i_1] [i_0] [i_2 + 1] [i_2 + 1] [i_3] = arr_4 [i_2 - 1];
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (_Bool)0);
                                arr_22 [i_0] [(unsigned char)17] [i_4] = ((/* implicit */short) max((((/* implicit */long long int) (+(arr_8 [i_0])))), (min((2059210482450547397LL), (((/* implicit */long long int) (!(arr_9 [i_4 - 1] [11ULL] [i_4] [1ULL] [i_4] [10U]))))))));
                            }
                        } 
                    } 
                } 
                arr_23 [i_0] = max((min((15109311543551717604ULL), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_1])))), (((/* implicit */unsigned long long int) ((unsigned char) arr_9 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0]))));
                arr_24 [i_0] = arr_7 [i_0] [i_0] [i_1];
            }
        } 
    } 
    var_11 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_0), (var_0))))))), ((-(15109311543551717584ULL)))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)12371)) : (((/* implicit */int) (_Bool)1))))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
}
