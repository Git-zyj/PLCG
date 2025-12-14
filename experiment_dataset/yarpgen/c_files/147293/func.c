/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147293
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
    var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((int) var_10))))) >= (((unsigned long long int) (unsigned char)33))));
        var_14 *= ((/* implicit */unsigned int) (unsigned char)33);
        var_15 = ((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1]);
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 19; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 19; i_2 += 3) 
        {
            for (unsigned short i_3 = 2; i_3 < 20; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)231)))))))));
                    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_1 + 3]))));
                    var_18 |= arr_5 [i_2 - 1];
                    var_19 = ((/* implicit */int) ((arr_10 [i_2] [i_2 + 3] [i_1 - 1]) >= (var_2)));
                    arr_11 [i_1] [21ULL] [i_2] [i_3] = ((/* implicit */int) (unsigned char)33);
                }
            } 
        } 
        var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_1] [i_1 + 1] [i_1])) ? (((/* implicit */unsigned long long int) arr_6 [i_1 - 1] [i_1 - 1] [i_1])) : (arr_4 [i_1 + 3] [i_1 + 3])));
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            var_21 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_8 [i_4] [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)13))))));
            arr_15 [i_4] = ((/* implicit */short) (!(var_5)));
        }
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            var_22 |= ((/* implicit */long long int) -2026728244);
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (unsigned char)22))) >= (((((/* implicit */_Bool) -1653898706)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (_Bool)1))))));
        }
        var_24 = ((/* implicit */int) (unsigned short)8191);
        var_25 = (+(var_7));
    }
    for (long long int i_6 = 1; i_6 < 19; i_6 += 4) /* same iter space */
    {
        arr_20 [i_6 + 3] [i_6 + 3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) -1LL)), (((((/* implicit */_Bool) arr_16 [i_6] [i_6 + 3] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2026728244)))))) : (arr_10 [i_6] [i_6] [i_6])))));
        arr_21 [i_6] = ((((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_6] [i_6] [i_6]))))), (arr_14 [i_6 + 1])))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5946))) >= (arr_2 [i_6 + 1])))));
    }
    /* vectorizable */
    for (unsigned short i_7 = 3; i_7 < 21; i_7 += 2) 
    {
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) arr_23 [i_7]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            arr_26 [i_7] [i_7] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_2 [i_7 - 2])) ? (((/* implicit */int) (unsigned short)35038)) : (((/* implicit */int) arr_24 [i_7] [i_8]))))));
            arr_27 [i_7] = ((/* implicit */unsigned long long int) (~(1653898701)));
            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (~(((unsigned long long int) 773249342)))))));
            var_28 |= ((/* implicit */int) 16139801365333239541ULL);
        }
    }
    var_29 = ((/* implicit */unsigned short) var_10);
    var_30 |= var_10;
    var_31 = ((/* implicit */unsigned long long int) (+(((unsigned int) (!(((/* implicit */_Bool) var_3)))))));
}
