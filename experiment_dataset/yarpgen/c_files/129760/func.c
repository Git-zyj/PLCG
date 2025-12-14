/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129760
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
    var_11 = ((/* implicit */unsigned char) ((long long int) var_1));
    var_12 = ((/* implicit */short) ((int) ((unsigned long long int) 4190195352U)));
    var_13 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-4750300655032503637LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((var_9) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) && (((/* implicit */_Bool) var_5)))))))) ^ (var_4));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */short) ((max((arr_4 [i_0]), (arr_4 [i_0]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) arr_0 [i_1]))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_4 [i_0]) : (arr_4 [i_0])))) ? (arr_4 [(signed char)12]) : (((arr_4 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                            arr_10 [i_2] [i_3] = ((/* implicit */int) ((short) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_3])) * (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))));
                            arr_11 [i_0] [8] [8] [i_3] [i_3] = ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) == (((/* implicit */int) arr_6 [7ULL] [i_1] [i_1] [i_3]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_17 [i_0] [20U] [i_4] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) max((-562497152), (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) var_4)))))));
                            var_16 = ((/* implicit */_Bool) (+(((arr_7 [i_0] [i_0] [i_5 - 1] [i_0]) >> (((min((((/* implicit */unsigned int) arr_9 [i_0] [i_1] [0U] [i_5])), (var_7))) - (1210466880U)))))));
                            var_17 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3619112282U)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_4 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_5 - 1] [i_5 - 1] [i_5 - 1])))))) ? (min((((/* implicit */long long int) var_6)), (arr_8 [i_5 - 1] [i_4] [i_5]))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_5 - 1])) ? (((/* implicit */long long int) -562497152)) : ((-(arr_16 [i_0] [4LL]))))));
                            arr_18 [i_0] [i_1] [i_4] [i_0] [i_5 - 1] = ((/* implicit */signed char) ((((/* implicit */int) min((((_Bool) arr_1 [i_4])), (((arr_15 [(unsigned short)7] [i_1] [10LL] [(unsigned short)20] [i_5 - 1] [i_1]) && (((/* implicit */_Bool) var_7))))))) + (((((/* implicit */_Bool) min((arr_5 [i_0]), (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */int) ((((/* implicit */int) (short)32757)) == (((/* implicit */int) (unsigned short)47380))))) : (((/* implicit */int) ((unsigned char) (short)2740)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
