/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188506
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_8 [i_3 + 1])) ? (arr_8 [i_3 + 1]) : (((/* implicit */unsigned long long int) arr_11 [i_2 + 1] [i_2 + 2] [i_3 - 2] [16U])))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((arr_5 [i_3 - 2] [i_2] [i_1]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])) : (arr_11 [i_0] [i_1] [i_0] [i_2]))))))));
                        var_13 = ((/* implicit */short) (+((+(arr_7 [i_0])))));
                        var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) -2968282065506078803LL)) ^ (arr_0 [i_0] [(unsigned char)4]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)44)) ? (-2968282065506078803LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_0))) : ((~((-(6025035250448116103ULL)))))));
                        var_15 = ((/* implicit */int) (-((-(arr_4 [i_2 + 2] [0ULL] [i_3 - 2])))));
                    }
                    for (unsigned long long int i_4 = 4; i_4 < 23; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 2578148637U)) <= (17284141596909115596ULL)))), (var_10)));
                        arr_14 [i_0] [20U] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((arr_13 [i_0] [i_1] [i_1] [i_1]) % (((/* implicit */unsigned long long int) arr_1 [i_1])))) * (max((7763835971224298069ULL), (((/* implicit */unsigned long long int) (short)-21466))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(1162602476800436020ULL)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_11)) & (((/* implicit */int) arr_12 [i_0] [i_1]))))) : (148795096883270166LL)))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (4562308836825939204ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                        var_17 = ((/* implicit */signed char) 13884435236883612412ULL);
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_8 [i_2 + 2]), (arr_8 [i_2 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-45))) : (8689145777478034710LL)))) >= (arr_3 [i_0] [14U]))))) : (((((/* implicit */unsigned long long int) (~(2968282065506078802LL)))) ^ (arr_13 [i_0] [i_1] [i_0] [13LL])))));
                    }
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        arr_17 [i_0] [i_0] [i_5] [i_5] = ((/* implicit */int) max(((!(((/* implicit */_Bool) min(((unsigned short)27874), ((unsigned short)29550)))))), ((!(((/* implicit */_Bool) (signed char)8))))));
                        var_19 -= ((/* implicit */short) (!(((min((((/* implicit */unsigned long long int) var_9)), (arr_6 [i_5]))) != (arr_13 [i_5] [i_2 + 3] [i_1] [i_0])))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 24; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 24; i_7 += 3) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_2 + 2] [i_6] [i_6 + 1] [i_6] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */int) arr_22 [i_0] [i_2 - 1] [i_6] [i_7] [i_2 - 1] [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) arr_22 [i_0] [i_2 - 1] [i_6 - 1] [i_6 - 1] [i_7] [i_7 - 2] [i_7 - 2]))))) ? ((-(((/* implicit */int) arr_22 [i_0] [i_2 + 2] [i_7] [i_7] [i_7] [i_7 - 2] [i_7 - 2])))) : (((/* implicit */int) ((((/* implicit */int) arr_22 [i_0] [i_2 + 2] [i_6] [i_7] [i_7] [i_7 - 1] [i_7 + 1])) > (((/* implicit */int) arr_22 [i_0] [i_2 + 2] [9ULL] [i_2 - 1] [i_6 + 1] [i_7 - 2] [i_7]))))));
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~(((arr_1 [i_2 + 3]) / (arr_1 [i_2 + 3]))))))));
                                var_22 = ((/* implicit */unsigned short) (~(148795096883270166LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) ((((/* implicit */int) (!((_Bool)0)))) <= (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_4))))))));
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6156473975492529940LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (2968282065506078802LL)));
    var_25 = ((/* implicit */unsigned int) ((var_1) & (((/* implicit */unsigned long long int) var_10))));
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) ((_Bool) (short)-1))))))) : (var_10)));
}
