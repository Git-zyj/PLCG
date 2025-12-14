/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16340
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
    var_13 = ((/* implicit */unsigned short) var_12);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_1 [5LL])) == (5379763276858402736LL)));
        var_14 = ((/* implicit */int) ((((((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) var_12)))) ? ((-(-5379763276858402754LL))) : (((/* implicit */long long int) (~(arr_1 [i_0])))))) == (min((((/* implicit */long long int) (_Bool)1)), (5379763276858402736LL)))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned char) var_3);
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (~(((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_4)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 5379763276858402750LL)) == (15935034295974545851ULL)))) : (min((arr_1 [i_0 - 1]), (arr_1 [i_0]))))))))));
                        arr_11 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 2] = ((/* implicit */unsigned short) var_3);
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2 + 1] [i_3] [i_2 + 1])))) + (((arr_8 [i_0 - 1] [i_1] [i_2] [i_2 + 1] [i_2] [i_2]) ? (((/* implicit */int) arr_8 [i_0 - 2] [i_0 - 2] [(short)10] [i_2 + 1] [i_2 + 1] [i_0])) : (((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [(_Bool)1] [i_2 + 1] [i_1] [6])))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 2; i_4 < 15; i_4 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 4; i_5 < 15; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        var_18 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (short)(-32767 - 1))), (3U)));
                        var_19 = ((/* implicit */signed char) var_4);
                        var_20 &= ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (5379763276858402742LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (max((arr_9 [i_4] [i_5] [i_5] [(short)6]), (((/* implicit */unsigned long long int) (unsigned short)56157))))))));
                        arr_22 [i_4 - 2] [i_5] = ((/* implicit */unsigned short) var_0);
                        var_21 = ((/* implicit */unsigned short) var_9);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_26 [i_5] [i_5] = ((/* implicit */short) (+(1004363469)));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) -5379763276858402744LL))))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_0 [i_4]), (((/* implicit */short) var_0)))))))))))));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (((~(((/* implicit */int) arr_2 [i_4 - 2] [i_5 + 1])))) | (((/* implicit */int) arr_13 [i_6 + 1])))))));
                        arr_27 [i_4] [i_4] [i_4] [i_5] [i_4] [i_5] = ((/* implicit */signed char) (!(((((/* implicit */int) ((5379763276858402736LL) == (((/* implicit */long long int) var_6))))) == ((+(((/* implicit */int) arr_13 [(_Bool)1]))))))));
                    }
                    var_24 = ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)-47)) ? (5379763276858402736LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) == (((((/* implicit */unsigned long long int) var_9)) - (arr_19 [i_4 - 2] [i_5] [i_6 + 1] [i_6 + 1] [i_5]))));
                }
            } 
        } 
        arr_28 [i_4] [i_4 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_10)))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) ((arr_4 [i_4 + 1] [i_4 + 1]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4] [i_4 - 1] [6]))))))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 4) 
    {
        arr_31 [i_9] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-123))) == (4611686018427387903LL))))) == ((-(arr_30 [i_9])))));
        var_25 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)218)) * (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) arr_29 [i_9]))))))) / ((-(arr_30 [i_9])))));
        var_26 = ((/* implicit */unsigned short) var_6);
    }
    var_27 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned char)232)), (max((((((/* implicit */_Bool) -5379763276858402736LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (5379763276858402727LL))), (((((/* implicit */_Bool) -494133227)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_11)))))));
}
