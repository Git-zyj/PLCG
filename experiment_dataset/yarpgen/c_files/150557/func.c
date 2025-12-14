/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150557
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_15 -= (-(((((/* implicit */_Bool) (-(-4586035275130772192LL)))) ? (((/* implicit */int) min((((/* implicit */short) arr_4 [i_0])), (arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [0U] [0U])) : (((/* implicit */int) arr_4 [i_1])))))));
                arr_6 [i_0] = ((/* implicit */short) (-((-(((/* implicit */int) arr_1 [i_0] [i_0]))))));
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) max((arr_0 [(unsigned char)7]), (((/* implicit */short) arr_1 [i_0] [i_1]))));
                arr_8 [i_0] [i_0] = 4586035275130772191LL;
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_4 = 2; i_4 < 20; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((short) arr_10 [i_5]))) && (((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (arr_9 [i_2] [i_3]))))))))));
                                var_17 = ((/* implicit */unsigned long long int) -4586035275130772192LL);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
                {
                    var_18 += ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [19] [i_3] [i_7])) + (((/* implicit */int) (signed char)14))))) ? (((/* implicit */long long int) arr_13 [i_3 + 1] [i_3])) : (((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_18 [i_2] [3U] [i_3 + 1] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [0LL] [i_2]))))))));
                    var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_20 [i_3 + 1]))) || (((/* implicit */_Bool) min((arr_20 [i_3 + 1]), (arr_20 [i_3 + 1]))))));
                }
                /* vectorizable */
                for (long long int i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
                {
                    var_20 |= ((/* implicit */unsigned char) (-(arr_19 [16LL] [i_3 + 1] [8U] [i_8] [i_8])));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(-5468497669197969214LL)))) ? (((/* implicit */int) arr_25 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1])) : (((/* implicit */int) arr_22 [i_2] [i_3 + 1]))));
                    var_22 -= ((/* implicit */signed char) ((long long int) (_Bool)0));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -421555072)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? ((~(var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_13)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (var_14)))) ? (((/* implicit */int) ((var_13) == (var_1)))) : (((/* implicit */int) ((signed char) -4586035275130772191LL))))))));
    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -6917544499119698972LL))));
    var_25 = ((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) min((((/* implicit */signed char) var_3)), (var_5)))))))));
}
