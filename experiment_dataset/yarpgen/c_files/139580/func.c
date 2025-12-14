/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139580
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
    var_17 = ((/* implicit */long long int) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))));
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_1])))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_14 [i_2] = ((/* implicit */unsigned long long int) var_10);
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_0] [i_4] &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((arr_13 [i_3] [i_3]), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_2])) || (((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4])))))) != (((long long int) arr_9 [i_2] [i_2] [i_3])))))) : (var_9)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (-(max((0LL), (-1417872076218568314LL))))))));
                    arr_19 [i_5] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) var_6)), (13088296997726695243ULL))), ((~(min((arr_1 [i_5]), (((/* implicit */unsigned long long int) arr_17 [i_5] [i_1] [i_5]))))))));
                    var_20 |= ((/* implicit */unsigned short) ((arr_17 [i_1] [i_1] [i_5]) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43809))) == (13088296997726695259ULL))))));
                    arr_20 [i_0] [i_5] = (+((-(((((/* implicit */_Bool) var_16)) ? (arr_13 [i_0] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_1]))))))));
                }
                for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
                {
                    var_21 *= ((/* implicit */signed char) arr_22 [i_0] [i_1] [i_6]);
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            {
                                arr_27 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) arr_25 [i_8] [i_6] [i_6] [i_1] [i_0]);
                                arr_28 [i_8] [i_1] [i_1] [i_7] [i_8] = max((((/* implicit */long long int) 4162962166U)), (arr_24 [i_1]));
                                arr_29 [i_8] [i_1] [i_6] [i_7] [i_8] = (~(max(((+(((/* implicit */int) arr_22 [i_0] [i_1] [i_0])))), (arr_17 [i_8] [i_1] [i_8]))));
                                arr_30 [i_8] = ((/* implicit */long long int) min((((13088296997726695232ULL) << (((1285168089521881237LL) - (1285168089521881183LL))))), (((/* implicit */unsigned long long int) arr_8 [i_8]))));
                            }
                        } 
                    } 
                }
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) 7157531767944597644LL)), (5358447075982856373ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_1])) ? (((/* implicit */long long int) var_9)) : ((-(var_13)))))))))));
            }
        } 
    } 
}
