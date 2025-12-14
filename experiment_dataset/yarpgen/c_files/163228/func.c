/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163228
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) var_1);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) (signed char)70)))) : ((+(((/* implicit */int) var_4))))));
                    var_13 &= ((/* implicit */unsigned char) (~(70368744177663LL)));
                }
            } 
        } 
    }
    for (long long int i_3 = 2; i_3 < 16; i_3 += 3) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (~(((/* implicit */int) (signed char)-63)))))));
        var_15 = max((((/* implicit */long long int) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))))), (((max((1527049512547026505LL), (6919667615044671030LL))) ^ (((/* implicit */long long int) max((((/* implicit */unsigned int) var_1)), (var_6)))))));
    }
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            for (int i_6 = 3; i_6 < 19; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (var_6)))) ? (((((/* implicit */int) var_0)) / (((/* implicit */int) var_5)))) : (var_9))) * (((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) var_4)))))));
                        var_17 = ((/* implicit */long long int) (-(max((max((17528054571113480458ULL), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) var_0))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) (signed char)63)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))))));
    }
    for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
    {
        arr_21 [i_8] [i_8] = ((/* implicit */unsigned char) var_2);
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min(((signed char)57), ((signed char)-63))))));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 19; i_9 += 2) 
        {
            for (int i_10 = 3; i_10 < 20; i_10 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */long long int) max(((~(((/* implicit */int) var_1)))), ((~(((/* implicit */int) (signed char)-64))))))) : ((~(((((/* implicit */long long int) ((/* implicit */int) (signed char)-52))) ^ (4092LL)))))));
                    var_21 = var_10;
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)813)) : (((/* implicit */int) (signed char)57))))), ((-(6506213366939089378LL)))))) || ((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (var_6))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (~(((/* implicit */int) var_10)))))));
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (short)-16875)))), (((/* implicit */int) min(((signed char)64), ((signed char)-61))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_0), (var_4))))) : (max((var_6), (((/* implicit */unsigned int) var_2)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
    }
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_6))))))) < ((~(((((/* implicit */int) var_4)) / (((/* implicit */int) var_4))))))));
    var_26 = ((/* implicit */short) (+((~(((((/* implicit */_Bool) var_3)) ? (var_6) : (var_6)))))));
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))));
}
