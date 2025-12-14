/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100277
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_6))))))) ? ((-(((/* implicit */int) arr_0 [i_1 - 1] [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3343708226U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)12367))))) ? (((((/* implicit */_Bool) 3384700983043170807ULL)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (unsigned char)128)))) : (max((((/* implicit */int) arr_0 [i_1 - 1] [i_0])), (arr_1 [i_1]))))))))));
                var_11 = ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_5 [i_0] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_0 [i_0] [i_1 - 1]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 22; i_2 += 3) 
    {
        for (short i_3 = 2; i_3 < 23; i_3 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (signed char)7))));
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) min((((/* implicit */int) var_3)), (max((((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (unsigned char)175)))), ((-(((/* implicit */int) arr_7 [i_2] [i_3])))))))))));
                arr_14 [i_2] [14ULL] = ((/* implicit */unsigned short) arr_11 [i_2] [i_2] [i_3]);
                var_14 = ((/* implicit */long long int) var_6);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        for (signed char i_5 = 1; i_5 < 13; i_5 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) (((((~(((/* implicit */int) (unsigned short)27312)))) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_4])) - (107)))));
                /* LoopNest 3 */
                for (unsigned char i_6 = 1; i_6 < 14; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((3052360557125795166ULL) >> ((-(((/* implicit */int) (signed char)-11))))));
                                arr_31 [i_4] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-127)), (0ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4])) || (((/* implicit */_Bool) arr_21 [i_4] [i_6])))))) : (max((((/* implicit */long long int) (signed char)10)), (-2440132153279432058LL)))))));
                                var_17 = ((/* implicit */int) (signed char)-13);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_18 = ((/* implicit */signed char) arr_3 [i_4] [i_4] [i_9]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 1) 
                    {
                        for (short i_11 = 4; i_11 < 12; i_11 += 4) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)510)) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) (signed char)10))))) ? (((/* implicit */int) (unsigned short)21663)) : (((/* implicit */int) ((7734792314707888109ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31615))))))));
                                var_20 = ((((/* implicit */_Bool) ((unsigned int) 417846914U))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
                            }
                        } 
                    } 
                    arr_41 [i_4] [i_4] [i_5 + 2] [i_9] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_6 [i_9]))))));
                }
                var_21 = ((/* implicit */signed char) var_5);
            }
        } 
    } 
}
