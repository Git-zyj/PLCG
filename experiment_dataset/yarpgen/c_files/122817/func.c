/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122817
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
    var_16 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        {
                            var_17 &= ((/* implicit */unsigned char) ((((/* implicit */int) max(((signed char)125), (var_10)))) > (((/* implicit */int) (_Bool)1))));
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) (!((_Bool)1)))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_0 - 1] [i_2] [i_1]))))))))));
                            var_19 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) arr_6 [i_1])))), (((/* implicit */int) max((arr_6 [i_4]), (arr_6 [i_1]))))));
                        }
                    } 
                } 
            } 
            var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(0)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) 756313751)) : (2040048897U)))))) ? ((-((-(((/* implicit */int) (unsigned char)147)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) var_10))))));
        }
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    {
                        var_21 = ((/* implicit */signed char) var_9);
                        var_22 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)12))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    {
                        var_23 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_13)))))));
                        var_24 = ((/* implicit */long long int) (-(arr_8 [i_8] [i_8] [i_0 + 1] [i_0])));
                    }
                } 
            } 
            var_25 &= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) -16)) || (((/* implicit */_Bool) (signed char)126))))));
            var_26 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_0)))));
            var_27 |= ((/* implicit */signed char) 1785092286U);
        }
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((~(arr_25 [i_0] [i_0 - 2] [i_0] [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)32094)))))))) ? (((/* implicit */int) (unsigned char)147)) : ((+(((-12) * (((/* implicit */int) (signed char)-127))))))));
        var_29 *= ((/* implicit */_Bool) -29);
        var_30 = ((/* implicit */_Bool) (+(max((-1LL), (min((-1LL), (((/* implicit */long long int) var_4))))))));
    }
    for (unsigned short i_10 = 2; i_10 < 23; i_10 += 1) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)65523)), (min((arr_1 [(unsigned short)12] [i_10 - 2]), (arr_1 [(_Bool)1] [i_10 - 2])))));
        var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)0))));
    }
}
