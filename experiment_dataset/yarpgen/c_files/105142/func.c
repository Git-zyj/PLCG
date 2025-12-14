/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105142
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) & (((/* implicit */int) (signed char)101))))) ? (max((((/* implicit */int) (unsigned short)39328)), (var_4))) : (((/* implicit */int) min(((unsigned short)30343), (((/* implicit */unsigned short) var_3)))))))) : (max((((/* implicit */unsigned long long int) var_1)), (((var_2) % (((/* implicit */unsigned long long int) var_6))))))));
                /* LoopSeq 2 */
                for (short i_2 = 3; i_2 < 16; i_2 += 4) /* same iter space */
                {
                    var_10 = ((/* implicit */_Bool) var_5);
                    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) (short)-2339))));
                }
                for (short i_3 = 3; i_3 < 16; i_3 += 4) /* same iter space */
                {
                    arr_12 [i_0] [i_1] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)1536))));
                    arr_13 [i_1] [(unsigned short)9] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-1527)) + (153957691)));
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */long long int) var_4))))) >= (((((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1536))))) ^ (((/* implicit */unsigned long long int) -1563565205)))))))));
                }
                var_13 = (~(((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_8)))))));
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (((((/* implicit */_Bool) 1024LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_1))) : (min((var_1), (((/* implicit */long long int) var_4))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (min((((/* implicit */unsigned long long int) var_0)), (15128989970820496518ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)191)))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */long long int) (~(((((/* implicit */int) var_5)) & (((/* implicit */int) (unsigned char)152))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_4) : (-1306867452)))) : (((var_1) | (((/* implicit */long long int) -1306867452))))))));
        var_16 = ((/* implicit */short) (-((+(min((((/* implicit */long long int) 1714244912)), (-8408025129438134972LL)))))));
        var_17 *= ((/* implicit */signed char) (~((+(((((/* implicit */int) (_Bool)1)) ^ (var_6)))))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)27289)))) * (min((((/* implicit */int) (unsigned short)49883)), (4177920)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)65))) : (17393060291808549089ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_9))))) : ((+(16322566544327282061ULL)))))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        var_19 = var_1;
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            var_20 *= ((/* implicit */short) var_0);
            arr_23 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) + ((+(((/* implicit */int) var_8))))));
            var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)121)) ? (var_0) : (((/* implicit */int) (unsigned short)1418)))) - (((var_6) ^ (var_4)))));
        }
    }
    /* vectorizable */
    for (short i_7 = 1; i_7 < 11; i_7 += 1) /* same iter space */
    {
        arr_26 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -1525400133)) & (17393060291808549089ULL)));
        arr_27 [6U] [(unsigned char)2] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (((-(var_4))) ^ (((((/* implicit */int) var_5)) + (var_4))))))));
    }
    for (short i_8 = 1; i_8 < 11; i_8 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_4)) & (4187151548489288279ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1053683781901002526ULL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
        var_24 = ((/* implicit */signed char) (-(max((var_0), (((/* implicit */int) (unsigned char)99))))));
    }
    var_25 = ((/* implicit */unsigned short) (~(var_0)));
}
