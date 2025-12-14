/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181818
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) 1904133101U)))))) ^ (((((/* implicit */_Bool) var_12)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_10))))));
        arr_2 [i_0] [i_0] |= ((((/* implicit */int) (unsigned char)55)) % (1014272666));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 17; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    {
                        arr_13 [i_3] [i_2] [4] [i_3] = ((((/* implicit */_Bool) -743003851)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3])))))) : (min((max((arr_4 [i_1]), (1550983024U))), ((~(2390834184U))))));
                        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((unsigned int) min((1609882503), (((/* implicit */int) var_5))))))));
                    }
                } 
            } 
        } 
        var_17 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (~(arr_12 [i_1] [i_1] [0U] [i_1])))))));
        var_18 *= ((/* implicit */unsigned long long int) ((_Bool) ((int) var_11)));
    }
    /* LoopSeq 2 */
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        arr_18 [i_5] |= ((/* implicit */unsigned char) 21U);
        var_19 *= ((/* implicit */unsigned int) (((+(((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (_Bool)1))))))) << (((((((((/* implicit */_Bool) (unsigned char)59)) ? (var_12) : (((/* implicit */long long int) var_6)))) % (((/* implicit */long long int) ((/* implicit */int) var_9))))) - (63LL)))));
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_14))));
    }
    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        arr_23 [i_6] = ((unsigned int) 2390834187U);
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            for (unsigned int i_8 = 4; i_8 < 16; i_8 += 2) 
            {
                for (int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_28 [i_8 - 3] [i_8 - 3] [i_8 - 4]))));
                        arr_33 [i_6] [i_6] [(_Bool)1] [i_7] [(_Bool)1] [i_6] = max((1904133087U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)92)) && ((_Bool)1)))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned short) (+(arr_16 [i_6])));
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) ((arr_19 [i_6]) % (2390834194U)))) || (arr_22 [i_6]))))))));
    }
}
