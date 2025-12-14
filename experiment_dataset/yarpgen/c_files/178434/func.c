/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178434
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_0 [i_0]) >> (((((/* implicit */int) (unsigned short)65535)) - (65523))))))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) 2147483647))));
        arr_2 [i_0] = var_1;
    }
    var_15 = ((/* implicit */long long int) max((var_1), (((/* implicit */unsigned int) var_10))));
    /* LoopSeq 3 */
    for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) 2147483647))));
        var_17 *= arr_4 [i_1 + 1];
    }
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        arr_7 [i_2] = ((/* implicit */unsigned short) ((unsigned char) ((long long int) arr_5 [i_2])));
        arr_8 [i_2] = ((unsigned short) ((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) arr_5 [i_2]))));
    }
    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                {
                    var_18 = ((((/* implicit */_Bool) (short)-31974)) ? (var_8) : (((/* implicit */unsigned long long int) var_10)));
                    var_19 = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))))), (min((((/* implicit */long long int) (unsigned short)8451)), (arr_15 [i_4] [i_4] [i_5])))));
                }
            } 
        } 
        var_20 = ((/* implicit */short) (unsigned short)65525);
        var_21 = ((/* implicit */int) (!(max(((!(((/* implicit */_Bool) arr_6 [i_3])))), ((!(((/* implicit */_Bool) (unsigned short)15056))))))));
    }
    var_22 += ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        arr_20 [i_6] = ((/* implicit */unsigned long long int) ((_Bool) (~(-4174523274917912808LL))));
        arr_21 [i_6] = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) var_0)))), ((!(arr_3 [i_6] [i_6])))));
        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((int) (_Bool)1)), (((/* implicit */int) ((unsigned char) 4032691036046149803LL))))))));
    }
    for (short i_7 = 0; i_7 < 25; i_7 += 3) 
    {
        var_24 = ((/* implicit */short) 3009341907839274984ULL);
        var_25 = ((/* implicit */unsigned short) max((max(((-(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_11)) ? (-1358126299) : (((/* implicit */int) (signed char)126)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) 3152189777599885863LL)) <= (15437402165870276623ULL))))));
    }
}
