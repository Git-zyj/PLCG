/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18529
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
    var_10 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) ^ (var_1))));
    var_11 = ((/* implicit */long long int) (((-(((6257054509785569649ULL) ^ (((/* implicit */unsigned long long int) -1)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    var_12 = ((/* implicit */int) min((((/* implicit */long long int) var_6)), ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_1)) : (var_9)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (_Bool)1;
                    arr_9 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) min((arr_5 [i_0]), (((/* implicit */unsigned short) (_Bool)1))))))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)-127)) ? (9013785879995317076ULL) : (9432958193714234529ULL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-62)) >= (((/* implicit */int) (unsigned char)18)))))) - (9013785879995317090ULL)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) max(((!(((/* implicit */_Bool) arr_5 [i_4 + 1])))), (((((/* implicit */_Bool) arr_7 [i_1] [i_4] [i_4] [i_1])) && (((/* implicit */_Bool) var_4)))))))));
                                var_14 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_11 [i_3 + 3] [i_3] [i_3] [i_3]), (arr_11 [i_3 + 2] [i_1] [i_2] [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) arr_6 [i_0] [i_0] [i_0]))) / (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3] [i_0])) ? (-6694854473074267401LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_4])))))))) : (((((/* implicit */_Bool) 9432958193714234552ULL)) ? (arr_11 [i_3 + 3] [i_3 + 3] [i_4 + 2] [i_4 + 1]) : (arr_11 [i_3 - 1] [i_3 - 1] [i_4 + 1] [i_4 + 1])))));
                                var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) 577193709)) ? (9432958193714234526ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-94)))));
                                var_16 = ((/* implicit */int) (((!(((/* implicit */_Bool) 216172782113783808LL)))) ? (8610231505815108174LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_2])) << (((((/* implicit */int) arr_5 [i_0])) - (46384))))))));
                                arr_16 [i_2] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_3 + 3] [i_4])) ? (-6029456006218933641LL) : (arr_6 [i_0] [i_1] [i_2]))) : (min((-2929134457610924157LL), (((/* implicit */long long int) 2915736737U)))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(arr_2 [i_0] [i_0])))) | (((((/* implicit */_Bool) 238712096259710855LL)) ? (((((/* implicit */_Bool) (signed char)68)) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) 4294967287U)))) : (((/* implicit */unsigned long long int) 9223372036854775803LL))))));
                }
            } 
        } 
    } 
}
